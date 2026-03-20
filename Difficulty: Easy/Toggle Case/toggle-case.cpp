class Solution {
  public:
    string toggleCase(string &s) {
        // code here
        string ans="";
        for(int i=0;i<s.size();i++){
            if((s[i]>=65 && s[i]<=90)){ // if character is uppercase
                ans+=tolower(s[i]);
            }
            if((s[i]>=97 && s[i]<=122)){ // if characteris lowercase
                ans+=toupper(s[i]);
            }
        }
        return ans;
    }
};