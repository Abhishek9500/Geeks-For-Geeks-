// User function Template for C++

class Solution {
  public:
    int sortedCount(int N, int M, vector<vector<int>> Mat) {
        // code here
        int count=0;
        for(int i=0;i<N;i++){
            bool isAsc=true;
            bool isDsc=true;
            for(int j=0;j<M-1;j++){
                if(Mat[i][j]>=Mat[i][j+1]) isAsc=false;
                if(Mat[i][j]<=Mat[i][j+1]) isDsc=false;
                if(!isAsc && !isDsc) break;
            }
            if(isAsc || isDsc) count++;
        }
        return count;
    }
};