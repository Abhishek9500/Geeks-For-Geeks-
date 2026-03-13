// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int row=arr.size();
        int col=arr[0].size();
        int max1=0;
        int idx=-1;
        for(int i=0;i<row;i++){
            int count=0;
            for(int j=0;j<col;j++){
                if(arr[i][j]==1) count++;
            }
            if(count>max1){
                idx=i;
                max1=max(max1,count);
            }
        }
        return idx;
    }
};