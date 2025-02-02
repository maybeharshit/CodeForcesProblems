class Solution {
public:
    void printvec(vector<int> a){
        for(int i = 0; i < a.size(); i++){
            cout<<a[i]<<" ";
        }
    }
    bool cmp(vector<int> a, vector<int> b){
        int q = a.size();
        for(int i = 0 ; i < q ; i++){
            if(a[i] != b[i]) return false;
        }
        return true;
    }
    bool check(vector<int>& nums) {
        int p = nums.size();
        vector<int> arr(p);
        for(int i = 0;i<p;i++){
            arr[i] = nums[i];
        }
        sort(arr.begin(),arr.end());
        int temp = p;
        while(temp >= 0){
            
            if(cmp(nums,arr) == true){
                return true;
            }
            int q = nums[0];
            for(int i = 1;i<p;i++){
                nums[i-1] = nums[i];
            }
            nums[p-1] = q;
            
            temp--;
        }
        return false;
    }
    
};
