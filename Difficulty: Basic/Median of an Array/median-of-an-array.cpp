class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        sort(arr.begin(),arr.end());
        float median=0;
        int n=arr.size();
        if(n%2!=0){
            median=arr[n/2];
        }
        else{
            double sum=arr[n/2]+arr[n/2-1];
            median=sum/2;
        }
        return median;
    }
};