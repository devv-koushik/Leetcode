class Solution {
public:
    int firstposition(vector<int>& nums, int target){
        int n = nums.size();
        int lo = 0;
        int hi = n-1;
        while(lo <= hi){
            int mid = (lo+hi)/2;
            if(nums[mid] == target){
                if(mid == 0 || nums[mid-1] != target) return mid;
                else hi = mid - 1;
            }
            else if(nums[mid]>target) hi = mid-1;
            else lo = mid+1;
        }
        return -1;
    }

    int lastposition(vector<int>& nums, int target){
        int n = nums.size();
        int lo = 0;
        int hi = n-1;

        while(lo <= hi){
            int mid = (lo+hi)/2;
            if(nums[mid] == target){
            if(mid == n-1 || nums[mid+1] != target) return mid;
            else lo = mid + 1;
        }
            else if(nums[mid]>target) hi = mid-1;
            else lo = mid+1;
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int f = firstposition(nums, target);
        int l = lastposition(nums, target);
        return {f, l};
        
    }
};