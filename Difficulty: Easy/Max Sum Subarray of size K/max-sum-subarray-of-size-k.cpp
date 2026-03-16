class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        
        int sum=0;
        
        for(int i=0;i<k;i++){ // find first window sum
            sum+=arr[i];
        }
        
        int maxSum=sum;
        
        for(int i=k;i<n;i++){
            sum+=arr[i]; // add next number in sum 
            sum-=arr[i-k]; // remove first number from sum
            
            maxSum=max(maxSum,sum);
        }
        
        maxSum=max(maxSum,sum);
        
        return maxSum;
    }
};