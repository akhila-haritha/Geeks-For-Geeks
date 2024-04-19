class Solution
{
    public:
    int count(struct node* head, int search_for){
        int c=0;
        node *temp = head;
        while(temp!=nullptr){
            if(temp->data == search_for)c++;
            temp = temp->next;}
        return c;
    //add your code here
    }
};
