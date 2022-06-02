class Solution {
public:
    int maxPower(string s) {
        
        int maxi = 1 ;
        int count = 1 ;
        for(int i = 1 ; i<s.size() ; i++){
            if(s[i-1]==s[i]){
                count++;
                maxi = max(maxi , count);
                
                
            }
            else{
                
                count = 1 ;
                 
            }
            
        }
        return maxi;
        
    }
};