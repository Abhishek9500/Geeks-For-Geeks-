class Solution {
  public:
    string encryptString(string S) {
        // code here
        
        int n=S.size();
        
        string ans="";
        
        char ch=S[0];
        
        int count=1;
        
        for(int i=1;i<n;i++){
            
            if(S[i]==S[i-1]) count++;
            
            else {
                
                ans+=ch;
                
                string hex="";
                
                while(count!=0){
                    int remi=count%16;
                    
                    if(remi<10) hex+=('0'+remi);
                    
                    else hex+=('a'+(remi-10));
                    
                    count/=16;
                }
                
                ans+=hex;
                ch=S[i];
                count=1;
            }
        }
        
        ans+=ch;
        
        int temp=count;
        
        string hex="";
        
        while(temp!=0){
            int remi=temp%16;
            
            if(remi<10) ans+=('0'+remi);
            
            else ans+=('a'+(remi-10));
            
            temp/=16;
            
        }
        
        ans+=hex;
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};