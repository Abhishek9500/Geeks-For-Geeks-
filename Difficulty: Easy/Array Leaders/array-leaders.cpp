class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>ans;
        int right_max=arr[n-1];
        ans.push_back(right_max);
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=right_max){
                ans.push_back(arr[i]);
                right_max=arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};