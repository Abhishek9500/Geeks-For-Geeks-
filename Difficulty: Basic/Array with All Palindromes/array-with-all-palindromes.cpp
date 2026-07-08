class Solution {
  public:
    
    bool Palindrome_Number(int n){
        int initial_number=n;
        int reverse=0;
        while(n>0){
            int remi=n%10;
            reverse=(reverse*10)+remi;
            n/=10;
        }
        if(initial_number==reverse) return true;
        else return false;
    }
    
    bool isPalinArray(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size();i++){
            if(!Palindrome_Number(arr[i])) return false;
        }
        return true;
    }
};