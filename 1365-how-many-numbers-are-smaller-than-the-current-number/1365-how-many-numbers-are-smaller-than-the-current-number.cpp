class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> arr(n);
        for(int i = 0 ;i<n;i++){            
            arr[i] = nums[i];            
        }
        sort(arr.begin(),arr.end());

        map<int,int> ans;      
        for(int i=0;i<n;i++){
            if(ans.find(arr[i]) == ans.end()){
                ans[arr[i]] = i;
            }
            
        }

        vector<int> result(n);
        for(int i=0;i<n;i++){
            result[i] = ans[nums[i]];
        }

        return result;
    }
};