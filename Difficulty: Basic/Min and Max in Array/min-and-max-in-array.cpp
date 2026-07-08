class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        return {arr[0],arr[n-1]};
    }
};