class Solution {
public:

    bool isSameAfterReversals(int num) {
        if(num <= 9){
            return true;
        }
        
        if(num %10 == 0)
        {
            return false;
        }
        return true;
    }
};