class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char , int> mp;
        int count = 0;
        vector<int> v;
        for(int i = 0 ; i<s.size() ; i++)
            mp[s[i]]++;
        
        for(auto it : mp){
            v.push_back(it.second);
        }
        
        sort(v.begin() , v.end(),greater<int>());
        for(int i = 0; i<v.size()-1 ; i++)
                  {
        
            
            if(v[i]<=v[i+1])
            {
                if(v[i]==0)
                {  
                    count+=v[i+1];
                    v[i+1]=0;
                }
                else
                {
                count+=(v[i+1]-v[i]+1);
                v[i+1]=v[i+1]-(v[i+1]-v[i]+1);
            }}
        }
            
        return count;
        
    }
};