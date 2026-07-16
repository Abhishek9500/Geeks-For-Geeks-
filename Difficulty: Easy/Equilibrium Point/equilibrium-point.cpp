class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int sum=0;
        for(int x:arr)
            sum+=x;
            
        int left_sum=0;
        for(int i=0;i<arr.size();i++){
            int right_sum=sum-left_sum-arr[i];
            if(left_sum==right_sum) return i;
            left_sum+=arr[i];
        }
        return -1;
    }
};