class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        string temp=s;
        reverse(temp.begin(),temp.end());
        if(temp==s) return true;
        else return false;
    }
};