class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> arr;
        int n = nums.size();
        int count = 0;
        for(int i=0;i<nums.size();i++){
           int x = nums[i];
           count += arr[x];
            arr[x]++;
        }


        return count;
    }
};