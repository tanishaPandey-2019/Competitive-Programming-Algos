class Solution {
public:
    int minLength(vector<string> str, int n)
    {
        int minLen = str[0].size();
        
        for(int i=1;i<n;i++)
        {
            if(str[i].size() < minLen)
                minLen = str[i].size();
        }
        
        return minLen;
    }
    string longestCommonPrefix(vector<string>& strs) {
        
        int n = strs.size();
        int minLen = minLength(strs,n);
        
        string result;
        char current;
        
        for(int i=0;i<minLen;i++)
        {
            current = strs[0][i];
            for(int j=1;j<n;j++)
            {
                if(strs[j][i] != current)
                    return result;
                
                
            }
            result.push_back(current);
        }
        
        return result;
        
        
    }
};
