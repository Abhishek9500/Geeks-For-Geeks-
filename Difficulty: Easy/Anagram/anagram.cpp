class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        int n=s1.size();
        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s1[i]]++;
        }
        
        for(int i=0;i<s2.size();i++){
            if(mp.find(s2[i])!=mp.end()){
                mp[s2[i]]--;
                if(mp[s2[i]]==0) mp.erase(s2[i]);
            }
            else return false;
        }
        if(mp.size()==0) return true;
        else return false;
    }
};