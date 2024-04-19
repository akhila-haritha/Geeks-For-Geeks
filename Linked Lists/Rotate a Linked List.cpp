class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        if(head==nullptr)return nullptr;
        Node *p = head, *temp = head,*ptr=head;
        while(ptr->next!=nullptr){
            ptr=ptr->next;}
        int i=0;
        while(p!=nullptr && i<k-1){
            p = p->next;
            i++;
        }
        ptr->next = head;
        head = p->next;

        
        p->next = nullptr;
        return head;
        // Your code here
    }
};
