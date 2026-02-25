class Solution {
public:
    int smallestEvenMultiple(int n) {
        int i , smallest_even_mul;
        for(i=1;i<=150;i++){
            if((i * n) % 2 == 0){
                smallest_even_mul = i*n ;
                break;
            }
        }
        return smallest_even_mul ; 
    }
};
