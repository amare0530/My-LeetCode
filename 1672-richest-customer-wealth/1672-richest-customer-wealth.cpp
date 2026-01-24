class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int max =0;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            for(int j = 0;j<accounts[i].size();j++){
                arr[i] += accounts[i][j];
                if(arr[i]>max){
                    max = arr[i];
                }
            }
        }
        return max;
    }
};