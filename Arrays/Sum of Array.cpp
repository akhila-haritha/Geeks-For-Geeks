class Solution {
  public:
    // Function to return sum of elements
    int sum(vector<int>& arr) {
        int ans=0;
        for(int i=0;i<arr.size();i++)ans+=arr[i];
        return ans;
        // code here
    }
};
