/**
 * @author : Shamal Pawar
 * @date : 20022020
 * @details : Stack implementation
*/
#include<iostream>

using namespace std;

#define SIZE 1000 // stack size

//stack class for stack feature implementation
class stack
{
    int top;

    public:
    int Array[SIZE];
    //constructor
    stack()
    {
        top = -1;
    }
    //push value in stack
    bool push(int val);
    int pop();
    int top_element();
    bool is_empty();

};

//Push data in stack
bool stack::push(int val)
{
    bool result;
    if(top >= (SIZE-1))
    {
        cout<<"Stack is full"<<endl;
        result = false;
    }
    else
    {
        Array[++top] = val;
        result = true; 
    }
    return result;
    
}
//Pop data from stack
int stack::pop()
{
    
    if(top == -1)
    {
        cout<<"Stack underflow"<<endl;
        return 0;
    }
    else
    {
        int topval = Array[top--];
        return topval;
    }
}
// return top element from stack
int stack::top_element()
{
    if(top == -1)
    {
        cout<<"Stack is empty"<<endl;
        return 0;
    }
    else
    {
        int topval = Array[top];
        return topval;
    }
    
}
// check stack is empty or not
bool stack::is_empty()
{
    if(top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    class stack s;
    s.push(1);
    s.push(20);
    cout<<s.pop()<<" poped from stack\n";
    cout<<s.top_element()<<" is top element\n";
    return 0;
}