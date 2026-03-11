// User function template for C++
class Solution {
  public:
    string equilibrium(vector<int> &arr) {
        // code here
        int total=0;
        for(int i=0;i<arr.size();i++){
            total+=arr[i];
        }
        
        int sum=0;
        for(int i=0;i<arr.size();i++){
            total-=arr[i];
            if(sum==total) return "true";
            else sum+=arr[i];
        }
        return "false";
    }
};