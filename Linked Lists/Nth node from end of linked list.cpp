class Solution{
public:
    long long int count_nodes(Node *head){
        long long c=0;
        Node *temp = head;
        while(temp!=nullptr){
            c++;
            temp=temp->next;
        }
        return c;
    }
    int getNthFromLast(Node *head, int n)
    {
        Node *p = head;
        long long int count = count_nodes(head);
        long long int i=0;
        if(n>count)return -1;
        while(i<count-n){
            p=p->next;
            i++;}
        return p->data;
           // Your code here
    }
};
