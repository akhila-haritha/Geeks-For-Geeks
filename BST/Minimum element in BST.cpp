class Solution {
  public:
    int mini = INT_MAX;
    int minValue(Node* root) {
        if(root==nullptr)return mini;
        if(root->data < mini)mini = root->data;
        int leftmin = minValue(root->left);
        int rightmin = minValue(root->right);
        return min(leftmin,rightmin);
        // Code here
    }
};
