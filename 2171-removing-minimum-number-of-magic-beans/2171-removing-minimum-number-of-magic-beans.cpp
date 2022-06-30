class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(), beans.end());
        
        vector<unsigned long long> prefixSum;
        unsigned long long sum = 0;
        
        for(int bean : beans) {
            sum += bean;
            prefixSum.push_back(sum);
        }
        
        unsigned long long ans = ULLONG_MAX;
        
        int n = beans.size();
        
        for(int i=0;i<n;i++) {
            unsigned long long temp = 0;
            if(i == 0) {
                unsigned long long x = (unsigned long long)beans[i]*(n-1);
                temp = prefixSum[n-1] - prefixSum[0] - x;
            }
            
            else {
                unsigned long long x  = (unsigned long long)beans[i]*(n-1-i);
                temp = prefixSum[i-1];
                temp += (prefixSum[n-1] - prefixSum[i] - x);
            }
            
            if(temp<ans) ans = temp;
        }
        
        
        return ans;
    }

};