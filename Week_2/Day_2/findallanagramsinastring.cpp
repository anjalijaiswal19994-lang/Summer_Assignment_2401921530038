class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> ans;
        vector<int> freqP(26, 0);
        vector<int> freqWindow(26, 0);
        if (s.size() < p.size())
            return ans;
        for (int i = 0; i < p.size(); i++)
        {
            freqP[p[i] - 'a']++;
            freqWindow[s[i] - 'a']++;
        }
        if (freqP == freqWindow)
        {
            ans.push_back(0);
        }
        for (int i = p.size(); i < s.size(); i++)
        {
            freqWindow[s[i] - 'a']++;
            freqWindow[s[i - p.size()] - 'a']--;
            if (freqP == freqWindow)
            {
                ans.push_back(i - p.size() + 1);
            }
        }
        return ans;
    }
};