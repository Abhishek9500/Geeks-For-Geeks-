
class Solution {
  public:

    string modify(string& s) {
        // your code here
        int n=s.size();
        string ans="";
        
        if(s[0]>=65 && s[0]<=95){ // if first charecter is upper case
            ans+=s[0];
            for(int i=1;i<n;i++){
                ans+=toupper(s[i]);
            }
        }
        else if(s[0]>=97 && s[0]<=122){// if first charecter is lower case
            ans+=s[0];
            for(int i=1;i<n;i++){
                ans+=tolower(s[i]);
            }
        }
        return ans;
    }
};