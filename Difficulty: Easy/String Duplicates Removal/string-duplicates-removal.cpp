// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        vector<int>visited(256,0);
        string result="";
        for(char ch:s){
            if(visited[ch]==0){
                visited[ch]=1;
                result+=ch;
            }
        }
        return result;
    }
};