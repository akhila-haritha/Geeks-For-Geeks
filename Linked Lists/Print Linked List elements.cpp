class Solution {
  public:
    // Function to display the elements of a linked list
    void display(Node *head) {
        if(head==nullptr)return;
        cout<<head->data<<" ";
        display(head->next);
        // your code goes here
    }
};
