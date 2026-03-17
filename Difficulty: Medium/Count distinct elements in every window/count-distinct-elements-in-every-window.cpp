class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        vector<int>ans;
        map<int,int>mp;
        
        for(int i=0;i<k;i++){
            mp[arr[i]]++;
        }
        
        ans.push_back(mp.size());
        
        for(int i=k;i<arr.size();i++){
            // Removing first element from window
            mp[arr[i-k]]--;
            // if frequency of left last is Zero remove from freq map;
            if(mp[arr[i-k]]==0) mp.erase(arr[i-k]);
            // add next element in freq map
            mp[arr[i]]++;
            // Store unique elemnt in current window
            ans.push_back(mp.size());
            
        }
        return ans;
    }
};