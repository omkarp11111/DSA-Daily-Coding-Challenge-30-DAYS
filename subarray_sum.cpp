// Given an array arr[] of non-negative integers and an integer sum, find a subarray that adds to a given sum. 
// There may be more than one subarray with sum as the given sum, print first such subarray.
#include <bits/stdc++.h>
using namespace std;

vector<int> subarrayWithGivenSum(vector<int>& arr,int targetSum)
{
	int sum = 0;
	unordered_set<int> s;
	for (int i = 0; i < arr.size(); i++) {
		sum += arr[i];
		if (sum == targetSum) {
			return vector<int>(arr.begin(),
							arr.begin() + i + 1);
		}
		if (s.find(sum - targetSum) != s.end()) {
			auto start = find(arr.begin(), arr.end(),
							sum - targetSum)
						+ 1;
			return vector<int>(start, arr.begin() + i + 1);
		}
		s.insert(sum);
	}
	return {};
}
int main()
{
	std::vector<int> arr = { 5,10 ,20,30,40 };
	std::vector<int> subarray = subarrayWithGivenSum(arr, 100);
	if (subarray.empty()) {
		std::cout << "No subarray with given sum found"
				<< std::endl;
	}
	else {
		std::cout << "[ ";
		for (int i : subarray) {
			std::cout << i << " ";
		}
		std::cout << "]" << std::endl;
	}
	return 0;
}
