class Solution {
  public:
    void rotate(vector<int>& nums,int sIdx,int eIdx){
        eIdx--;
        while(sIdx<eIdx){
            swap(nums[sIdx],nums[eIdx]);
            sIdx++;
            eIdx--;
        }
        return;
    }
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        if(d>n) d%=n;
        
        if(n==1) return ;
        rotate(arr,0,d);
        rotate(arr,d,n);
        rotate(arr,0,n);
    }
};