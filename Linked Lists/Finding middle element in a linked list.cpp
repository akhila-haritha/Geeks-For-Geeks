class Solution{
    public:
    int count_nodes(Node *head){
        if(head==nullptr)return 0;
        return 1+count_nodes(head->next);
    }
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        int count = count_nodes(head);
        int position = 1;
        if(count %2==0)position = (count/2)+1;
        else position = (count+1)/2;
        int index=1;
        Node *temp = head;
        while(index<position){
            temp=temp->next;
            index++;}
        return temp->data;
        // Your code here
    }
};
