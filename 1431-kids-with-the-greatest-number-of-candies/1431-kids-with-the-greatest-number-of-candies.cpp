class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxcandy = 0;
        for(int x : candies){
            if(x > maxcandy)
                maxcandy = x;
        }
        int n = candies.size();

        vector<int> kidcandy(n);
        vector<bool> ans(n);
        for(int i=0;i<n;i++){
           kidcandy[i] = candies[i]+extraCandies;
           if(kidcandy[i] >= maxcandy){
                ans[i] = true;
           }
           else{
                ans[i] = false;
           }   
        }
        return ans;
    }
};