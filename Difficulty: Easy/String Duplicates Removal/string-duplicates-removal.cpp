// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        map<char,int>mp;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end()){
                ans+=s[i];
                mp[s[i]]++;
            }
            else continue;
        }
        return ans;
    }
};