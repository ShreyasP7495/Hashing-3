//Time Complexity-O(n)
//Space Complexity-O(n)
//Did the code execute on Leetcode? Yes

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.length()==0 || s.length()<10)
        {
            return {};
        }
        unordered_set<string>m;
        unordered_set<string>res;
        for(int i=0;i<=s.length()-10;i++)
        {
            string temp=s.substr(i,10);
            if(m.find(temp)!=m.end())
            {
                res.insert(temp);
            }
            m.insert(temp);
        }
        vector<string>res1;
        for(auto i=res.begin();i!=res.end();i++)
        {
            res1.push_back(*i);
        }
        return res1;
    }
};