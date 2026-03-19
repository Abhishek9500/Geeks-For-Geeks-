// User function template for C++

class Solution {
  public:
    string removeSpecialCharacter(string s) {
        // code here
        // Special characters → mostly 32–47, 58–64, 91–96, 123–126
        string ans="";
        for(int i=0;i<s.size();i++){
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) ) ans+=s[i];
        }
        if(ans.size()==0) return "-1";
        
        else return ans;
    }
};