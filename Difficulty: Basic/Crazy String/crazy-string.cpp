string getCrazy(string s) {
    // your code here
    int n=s.size();
    string ans="";
    
    if(s[0]>=97 && s[0]<=122){ // if first charecter is lowerCase.
        ans+=s[0];
        for(int i=1;i<n;i++){
            if(i%2!=0) ans+=toupper(s[i]);
            else ans+=tolower(s[i]);
        }
    }
    
    else if(s[0]>=65 && s[0]<=90){ // if first charecter is upperCase.
        ans+=s[0];
        for(int i=1;i<n;i++){
            if(i%2!=0) ans+=tolower(s[i]);
            else ans+=toupper(s[i]);
        }
    }
    return ans;
}