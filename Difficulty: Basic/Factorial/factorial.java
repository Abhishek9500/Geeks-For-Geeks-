class Solution {
    public static int fact(int n,int[] dp){
        if(n==0||n==1) return 1;
        if(dp[n]!=0) return dp[n];
        dp[n]=n*fact(n-1,dp);
        return dp[n];
    }
    int factorial(int n) {
        // code here
        int[] dp=new int[n+1];
        
        return fact(n,dp);
        
    }
}
