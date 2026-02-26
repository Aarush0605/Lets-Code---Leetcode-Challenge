class Solution {
public:
    int maxDepth(string s) {
        int count = 0,largest = 0;
        vector<int> depth;
        for(char ch : s){
            if(ch == '('){
                count++;
                depth.push_back(count);
            }
            else if(ch == ')'){
                count--;
                depth.push_back(count);
            }
            else{
                continue;
            }
        }
        for(int i : depth){
            if(i > largest){
                largest = i;
            }
        }
    return largest;
    }
        
};
