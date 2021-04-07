class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        int lis[n];

        for (int i = 0; i < n; i++)
        {
            lis[i] = 1;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[j] > nums[i] && lis[j] < lis[i] + 1)
                {
                    lis[j] = lis[i] + 1;
                }
            }
        }

        int res = 1;
        for (int i = 0; i < n; i++)
        {
            if (lis[i] > res)
            {
                res = lis[i];
            }
        }

        return res;
    }
};