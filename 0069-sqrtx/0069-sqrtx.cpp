class Solution {
public:
    int mySqrt(int x) {

        if (x == 0) return 0;
        if (x <= 3) return 1;

        int low = 1 ,high = x;
        while(low <= high){
            int mid = low + (high - low)/2;
            long square = (long)mid * (long)mid;
            if (square == x){
                return mid;
            }
            else if(square > x){
                high = mid - 1;

            }
            else{
                low = mid + 1;
            }
        }
        return high;
    }
};