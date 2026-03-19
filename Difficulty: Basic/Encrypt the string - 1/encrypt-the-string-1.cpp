

class Solution {
  public:
    string encryptString(string s) {
        // code here
        string ans="";
        int count=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]) count++;
            else{
                ans+=s[i-1];
                ans+=to_string(count);
                count=1;
            }
        }
        ans+=s[s.size()-1];
        ans+=to_string(count);
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};