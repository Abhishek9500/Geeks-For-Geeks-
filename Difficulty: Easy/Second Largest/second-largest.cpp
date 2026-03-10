class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int largest=INT_MIN;
        int s_largest=INT_MIN;
        for(int x:arr){
            if(x>largest){
                s_largest=largest;
                largest=x;
            }
            else if(largest>x && x>s_largest){
                s_largest=x;
            }
        }
        if (s_largest==INT_MIN ) return -1;
        else return s_largest;
        
    }
};