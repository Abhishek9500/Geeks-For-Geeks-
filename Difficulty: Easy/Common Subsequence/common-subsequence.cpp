// User function template for C++
class Solution {
  public:
    bool commonSubseq(string a, string b) {
        // your code here
        vector<int>freq(256,0);
        for(char ch:a){
            freq[ch]++;
        }
        
        for(char ch:b){
            if(freq[ch]>0){
                return true;
            }
        }
        return false;
    }
};