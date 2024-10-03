class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        int i=0;
        while(i<=arr.size()-1){
            if(arr[i] != arr[arr.size()-1-i])return false;
            i++;
        // code here
    }
    return true;}
};
