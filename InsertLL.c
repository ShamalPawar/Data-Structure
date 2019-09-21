#include <stdio.h>
#include <stdlib.h>
//Node structure
struct Node
{
    int val;
    struct Node *Next;
};

// Insert Node at the begging of Linked List
void Insert_Begging(int nodeval, struct Node **head)
{
    //Dynamic memory allocation for new Node
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode->val = nodeval;

    if((*head) != NULL)
        newNode->Next = (*head);
    else
        newNode->Next = NULL; 
    
    (*head) = newNode;
    
}
void Insert_atend(int val, struct Node **head)
{
     //Dynamic memory allocation for new Node
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode->val = val;
    struct Node *temp = (*head);

    //Last node will have Next as NULL
    newNode->Next = NULL;
    if((*head) == NULL)
    {
        (*head) = newNode;
    }
    else
    {   
        while(temp->Next != NULL)
        {
            temp = temp->Next;
        }

        temp->Next = newNode;
        
        
    }
    

}
void printLL(struct Node *head)
{
    struct Node *temp;
    if(head == NULL)
    {
        printf("Linked List is empty\n");
        return;
    }
    temp= head;
    while(temp != NULL)
    {
        printf("%d==>",temp->val);
        temp = temp->Next;
    }
    printf("\n");

}

int main()
{
    
    int case_val, nodeVal;
    struct Node *head = NULL;
   
    while(1){
        printf("Please choose below option \n 1. Insert at the beginning \n 2. Insert at the end\n 3. For Print LL \n 4. For exit\n");
        scanf("%d",&case_val);
   
        switch (case_val)
        {
        case 1:
            printf("Enter Node value\n");
            scanf("%d",&nodeVal);

            Insert_Begging(nodeVal, &head);
            /* code */
            break;
        
        case 2:
            printf("Enter Node value\n");
            scanf("%d",&nodeVal);

            Insert_atend(nodeVal,&head);
            break;
        
        case 3:
            printLL(head);
            break;
        case 4:
            exit(0);
            break;

        default:
            break;
        }
    }

    return 0;
}  