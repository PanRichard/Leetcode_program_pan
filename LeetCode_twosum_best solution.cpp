#include<vector>;
#include<iostream>;
#include<tr1/unordered_map>;
using namespace std::tr1;
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int,int> hash;
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            int numtofind=target-nums[i];

            if(hash.find(numtofind)!=hash.end())
            {
                result.push_back(hash[numtofind]);
                result.push_back(i);
                return result;
            }

            hash[nums[i]]=i;
        }
        return result;
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

    cout<<"["<<num[0]<<","<<num[1]<<"]"<<endl;

    return 1;
}
