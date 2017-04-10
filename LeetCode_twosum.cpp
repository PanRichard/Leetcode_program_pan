#include<stdio.h>;
#include<vector>;
#include<iostream>;
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int index_i,index_j;
        for(index_i=0;index_i<nums.size();index_i++)
        {
            for(index_j=index_i+1;index_j<nums.size();index_j++)
            {
                if((nums[index_i]+nums[index_j])==target)
                {
                    cout<<"["<<index_i<<","<<index_j<<"]"<<endl;
                    return nums;
                }
            }
        }

        cout<<"No indices match!"<<endl;
        return nums;
    }
};


int main()
{
    Solution method;
    vector<int> nums;
    for(int i=0;i<8;i++)
    {
        nums.push_back(i);
        cout<<nums[i]<<endl;
    }
    vector<int> num;

    num=method.twoSum(nums,7);

    return 1;
}
