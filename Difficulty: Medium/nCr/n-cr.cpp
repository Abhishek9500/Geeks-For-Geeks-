class Solution {
  public:
    int dp[101][101];
    
    int solve(int n,int r){
        /* let A,B,C,D,E be a five letter and you want to choose 2 elemnt from 5 
            
            case 1 :-  you choose A then 1 is selected and  1 more elemnt
            to choose from 4 remaing elemnt 
            
            case 2:-  you do not choose A then 2 elemnt choose from remaing 4 element
            
            
        */
        
        
        if(r>n) 
            return 0; // selecting more then given number so 0 ways
        
        if(r==0 || r==n) // either selecting 1 or selecting all number 1 ways
            return 1;
        
        if(dp[n][r]!=-1) return dp[n][r];
            
        return dp[n][r]= solve(n-1,r-1)+solve(n-1,r);
    }
    
    int nCr(int n, int r) {
        // code here
        
        memset(dp,-1,sizeof(dp));
        
        
        
        
        return solve(n,r);
        
        
        
    }
};