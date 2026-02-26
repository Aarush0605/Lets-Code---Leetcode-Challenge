class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count = 0,sum = 0,avg = 0;
        for(int n  :  nums){
            if(n % 2 == 0 && n % 3 == 0){
                sum += n;
                count++;
            }    
        
        }
        if(count != 0){
            avg = sum / count ;
            return avg;
        }
        else{
            return 0;
        }
    }
};
