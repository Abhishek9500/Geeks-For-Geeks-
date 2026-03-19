// User function template for c++
class Solution {
  public:
    string removeChars(string str1, string str2) {
        // code here
        string ans="";
        
        set<int>st;
        
        for(char ch : str2){
            st.insert(ch);
        }
        
        for(char ch:str1){
            if(st.find(ch)==st.end()) // Not Persent in set
            ans+=ch;
        }
        return ans;
    }
};
