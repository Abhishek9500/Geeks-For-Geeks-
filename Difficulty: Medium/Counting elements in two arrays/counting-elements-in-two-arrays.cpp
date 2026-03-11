class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // code here
        //  Use Sorting And Upper_bound Concept.
        
        sort(b.begin(),b.end());
        vector<int>ans;
        
        for(int i=0;i<a.size();i++){
            int index = upper_bound(b.begin(), b.end(), a[i])-b.begin();
            ans.push_back(index);
        }
        return ans;
    }
};