class Solution {
  public:
    bool isIsogram(string& s) {
        //  code here
        vector<int>Freq(26,0);
        for(char ch:s){
            Freq[ch-'a']++;
        }
        
        for(int i=0;i<26;i++){
            if(Freq[i]>1) return false;
        }
        return true;
    }
};