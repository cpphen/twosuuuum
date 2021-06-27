#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> indices;
		if (nums.size() == 2)
		{
			indices.push_back(nums[0]);
			indices.push_back(nums[1]);
			return indices;
		}

		for (int x = 0; x < nums.size(); x++)
		{
			for (int y = x + 1; y < nums.size(); y++)
			{
				if (nums[x] + nums[y] == target)
				{
					indices.push_back(nums[x]);
					indices.push_back(nums[y]);
					break;
				}
			}
		}
		return indices;
	}
};

int main()
{
	Solution s;
	vector<int> nums{ 2, 0, 1, 6, 7, 3 };
	vector<int> indices;
	int target = 5;
	indices = s.twoSum(nums, target);

	for (int x : indices)
	{
		cout << x << " " << endl;
	}
}

