
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1) return s[i];
        }
        return '$';
    }
};