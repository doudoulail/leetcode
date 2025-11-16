#include<iostream>
#include<stdio.h>
#include<vector>
#include<unordered_map>
using namespace std;
class solution
{
public:
	vector<int> twoSum(vector<int>& nums, int target);
private:

};

vector<int> solution::twoSum(vector<int>& nums, int target)
{
	unordered_map<int, int> find_maps;
	int i = 0;
	for ( i = 0; i < nums.size(); i++)
	{
		int sum = target - nums[i];
		if (find_maps.find(sum) != find_maps.end())
		{
			return{ find_maps[sum], i};
		}
		find_maps[nums[i]] = i;
	}
	return {};
}

int main()
{
	solution solu;
	std::vector<int> nums = { 2,7,8,9 };
	vector<int> test = solu.twoSum(nums, 9);
	printf("\n");

	printf(" {%d, %d}", test[0],test[1]);

	printf("\n");
}
