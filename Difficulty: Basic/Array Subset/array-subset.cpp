class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        map<int,int>mp;
        
        for(int i=0;i<a.size();i++){
            mp[a[i]]++;
        }
        
        for(int i=0;i<b.size();i++){
            if(mp[b[i]]==0){
                return false;
                break;
            }
            mp[b[i]]--;
        }
        return true;
    }
};