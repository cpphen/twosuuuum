#include "stdafx.h"
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map <int, int> myMap;
		vector <int> indices;
		for (auto x : nums)
		{
			myMap[x] = x;
		}

		for (auto x : nums)
		{
			int diff = target - myMap[x];
			if (myMap.find(diff) != myMap.end())
			{
				indices.push_back(x);
				indices.push_back(diff);
				return indices;
			}
		}
	}
};

int main()
{
	Solution s;
	vector<int> nums{ 2, 0, 1, 6, 7, 3 };
	vector<int> indices;
	int target = 6;
	indices = s.twoSum(nums, target);

	for (int x : indices)
	{
		cout << x << " " << endl;
	}
}

