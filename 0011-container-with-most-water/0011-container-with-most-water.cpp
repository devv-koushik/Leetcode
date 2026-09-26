class Solution {
public:
    int maxArea (vector<int> & hight){
        int left = 0;
        int right = hight.size() - 1;
        int max_water = 0;

        while (left < right) {
            int current_height = min(hight[left], hight[right]);
            int current_width = right - left;
            max_water = max(max_water, current_width * current_height);

            hight[left] < hight[right] ? left++ : right --;
        }

        return max_water;
    }
    
};