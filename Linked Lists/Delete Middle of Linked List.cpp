class Solution{
    public:
    
    int count_nodes(Node *head){
        int c=0;
        Node *temp = head;
        while(temp!=nullptr){
            c++;
            temp=temp->next;}
        return c;
    }
    Node* deleteMid(Node* head)
    {
        if(head->next==nullptr)return nullptr;
        int count = count_nodes(head);
        Node *p = head; int i=0;
        Node *ptr = head->next;
        int pos;
        if(count%2==0)pos = count/2 + 1;
        else pos = (count+1)/2;
        while(i<pos-2){
            p = p->next;
            ptr=ptr->next;
            i++;}
        p->next = ptr->next;
        return head;
        // Your Code Here
    }
};
