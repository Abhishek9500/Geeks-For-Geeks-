class Solution {
  public:
    
    bool twoSum(vector<int>&nums,int target,int i,int j){
        
        while(i<j){
            
            // if target is greater then sum j--;
            if(nums[i]+nums[j]>target) j--;
            
            // if target is smaller then sum i++;
            
            else if(nums[i]+nums[j]<target) i++;
            
            // if both above condition are not true then triplate will found
            
            else {
                
                return true;
                
                //  remove dublicate from start
                
                // while(i<j && nums[i]==nums[i+1]) i++;
                
                // // remove dublicate from last
                
                // while(i<j && nums[j]==nums[j-1] ) j--;
                
                // if there is not dublicate then 
                
            }
        
        }
        return false;
    }
    
    bool findTriplets(vector<int> &nums) {
        // code here
        
        int n=nums.size();
        
        // sort the array
        sort(nums.begin(),nums.end());
        
        // fix first index
        
        for(int i=0;i<n;i++){
            
            // if you are already fix the element then skip it
            
            if(i<0 && nums[i]==nums[i-1]) continue;
            
            int n1= nums[i];
            
            int target=-n1;
            
            if(twoSum(nums,target,i+1,n-1)) return true;
        
            
        }
        
        return false;
        
    }
};