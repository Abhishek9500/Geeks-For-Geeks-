class Solution {
  public:
    vector<string> smallerAndLarge(string &s) {
        // code here
        int n=s.size();
        string maxWord="",minWord="",temp="",word="";
        int maxlen=INT_MIN,minlen=INT_MAX;
        
        stringstream ss(s);
        while(ss>>word){
            int len=word.size();
            if(len<minlen){
                minlen=len;
                minWord=word;
            }
            if(len>=maxlen){
                maxlen=len;
                maxWord=word;
            }
            
        }
        return {minWord,maxWord};
    }
};
