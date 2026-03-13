class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>result(n);
        result[0]=arr[0];
        for(int i=1;i<n;i++){
            result[i]=result[i-1]+arr[i];
        }
        return result;
    }
};