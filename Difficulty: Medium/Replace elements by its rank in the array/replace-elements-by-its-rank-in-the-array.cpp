// User function Template for C++

class Solution {
  public:
   
    vector<int> replaceWithRank(vector<int> &arr, int N) {
        map<int,int>mp;
        vector<int>copy=arr;
        
        sort(copy.begin(),copy.end());
        int rank=1;
        for(int i=0;i<copy.size();i++){
            
            if(mp.find(copy[i])==mp.end()){
                mp[copy[i]]=rank;
                rank++;
            }
        }
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};
