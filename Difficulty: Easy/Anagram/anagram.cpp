class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        map<int,int>mp;
        for(int i=0;i<s1.size();i++){
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