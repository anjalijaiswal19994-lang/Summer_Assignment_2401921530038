class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> mpp;
        int x = nums.size();
        for (int i = 0; i < n; i++)
        {
            int nums = num[i];
            int mppneeded = target - num;
            if (mpp.find(mppneeded) != mpp.end())
            {
                return (mpp[mppneeded], i);
            }
            mpp[num] = i;
        }
        return (-1, -1);
    }
};