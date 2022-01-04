// ANAGRAM_STRINGS

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        vector<vector<string>>v;
        unordered_map<string,vector<string>>m;
        for(auto s:string_list)
        {
            string ans=s;
            sort(ans.begin(),ans.end());
            m[ans].push_back(s);
            
        }
        for(auto it :m)
        {
            v.push_back(it.second);
        }
        return v;
        //code here
    }
};

// TIME COMPLEXITY : O(N*|S|*log[S])
// SPACE COMPLEXITY :O(N*|S|)