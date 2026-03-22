class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        vector<int>Freq(256,0);
        for(char ch:s){
            Freq[ch-'a']++;
        }
        
        int maxFreq=0;
        char result='a';
        
        
        for(int i=0;i<26;i++){
            if(Freq[i]>maxFreq){
                maxFreq=Freq[i];
                result=char(i+'a');
            }
        }
        return result;
        
    }
};