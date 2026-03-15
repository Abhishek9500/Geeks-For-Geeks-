class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int n=arr.size();
        int prefix=1, suffix=1, maxProduct=INT_MIN;
        
        for(int i=0;i<n;i++){
            if(prefix==0) prefix=1;
            if(suffix==0) suffix=1;
            prefix*=arr[i];
            suffix*=arr[n-i-1];
            maxProduct=max(maxProduct,max(prefix,suffix));
        }
        return maxProduct;
    }
};