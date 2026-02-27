class Solution {
public:
    bool isThree(int n) {
        int count=2,i;                     //count = 2 beause 1 and n are always a divisor of n
        for(i=2;i<=(n/2);i++){
            if(n % i == 0){
                count++;
            }
        }
        if(count == 3){
            return true;
        }
        else{
            return false;
        }
    }
};
