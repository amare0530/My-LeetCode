class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int max = 0;
    for(string s : sentences){
        int count = 1;
        for(char sent : s){
            if(sent == ' '){
                count++;
            }
            if(max < count){
                max = count; 
            }

        }
       
    }
        return max;
    }
};