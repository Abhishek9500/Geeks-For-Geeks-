// User function Template for C++

class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        int maxNumber=*max_element(arr.begin(),arr.end());
        vector<int>ans(maxNumber+1,0);
        for(int i=0;i<arr.size();i++){
            ans[arr[i]]++;
        }
        vector<int>result;
        for(int i=0;i<arr.size();i++){
            if(ans[arr[i]]!=0){
                result.push_back(arr[i]);
                ans[arr[i]]=0;
            }
        }
        return result;
    }
};