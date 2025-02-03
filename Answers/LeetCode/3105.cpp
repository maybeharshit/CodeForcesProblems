class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.size() == 1){
            return 1;
        }
        int start = nums[0];
        int inc = 1;
        int dec = 1;
        int maxinc = 0;
        int maxdec = 0;
        for(int i = 1;i<nums.size();i++){
            if(nums[i-1] < nums[i]){
                inc++;
            }
            else{
                inc = 1;
            }
            maxinc = max(maxinc,inc);
        }
        for(int i = 1;i<nums.size();i++){
            if(nums[i-1] > nums[i]){
                dec++;
            }
            else{
                dec = 1;
            }
            maxdec= max(maxdec,dec);
        }
        return max(maxinc,maxdec);
    }
};
