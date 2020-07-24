/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    if(head==NULL or head->next==NULL)return NULL;
    
    Node* pre;
    Node* slow=head;
    Node* fast=head;
    
    while(fast and fast->next)
    {
        fast=fast->next->next;
        pre=slow;
        slow=slow->next;
    }
    pre->next=slow->next;
    
    return head;
}