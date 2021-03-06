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
		for (int x = 0; x < nums.size(); x++)
		{
			//Was previously only returning 0,0 because if statement was == to map.end and not != to map.end
			//Also checking for nums[x] in map since 'x' will be the diff key set below
			if (myMap.find(nums[x]) != myMap.end())
			{
				//pushing back map[nums[x]] here because the key if present will be nums[x] (the diff calculated below)
				indices.push_back(myMap[nums[x]]);
				indices.push_back(x);
				return indices;
			}
			myMap[target - nums[x]] = x;
		}
		return indices;
	}
};

int main()
{
	Solution s;
	vector<int> nums{ 5, 4, 7, 1, 7, 3, 0 };
	vector<int> indices;
	int target = 8;
	indices = s.twoSum(nums, target);

	for (int x : indices)
	{
		cout << x << " " << endl;
	}
}

