class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int x = 0;
        for(char a : jewels){
            for(char b : stones){
                if(a == b){
                    x += 1;
                }

            }
        }

        return x;
    }
};