class Solution {
  public:
    
    bool twoSum(vector<int>&nums,int n1,int target,int i,int j){
        
        while(i<j){
            
            if((nums[i]+nums[j]+n1) > target) j--;
            
            else if((nums[i]+nums[j]+n1) < target)  i++;
            
            else return true;
        }
        
        return false;
        
    }
     
    bool hasTripletSum(vector<int> & nums, int target) {
        // Code Here
        
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        
        //  fixing number
        
        for(int i=0;i<n;i++){
            
            // if current number is already fix then skip it
            
            if( i>0 && nums[i]==nums[i-1]) continue;
            
            int n1=nums[i];
        
            if(twoSum(nums,n1,target,i+1,n-1)) return true;
            
        }
        
        return false;
        
    }
};