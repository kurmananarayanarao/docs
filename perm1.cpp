#include <bits/stdc++.h>
using namespace std;

// Function to fill the vector curr
// while maintaining the indices visited
// in the array num
void backtrack(vector<int>& nums,
			vector<int>& curr,
			vector<vector<int> >& ans,
			vector<bool>& visited)
{

	// If current permutation is complete
	if ((int)curr.size() == (int)nums.size()) {
		ans.push_back(curr);
	}

	// Traverse the input vector
	for (int i = 0; i < (int)nums.size();
		i++) {

		// If index is already visited
		if (visited[i])
			continue;

		// If the numebr is dupicate
		if (i > 0 and nums[i] == nums[i - 1]
			and !visited[i - 1])
			continue;

		// Set visited[i] flag as true
		visited[i] = true;

		// Push nums[i] to current vector
		curr.push_back(nums[i]);

		// Recursive function call
		backtrack(nums, curr,
				ans, visited);

		// Backtrack to the previous
		// state by unsetting visited[i]
		visited[i] = false;

		// Pop nums[i] and place at
		// the back of the vector
		curr.pop_back();
	}
}

// Function to pre-process the vector num
vector<vector<int> > permuteDuplicates(
	vector<int>& nums)
{
	// Sort the array
	sort(nums.begin(), nums.end());

	// Stores distinct permutations
	vector<vector<int> > ans;

	vector<bool> visited(
		(int)nums.size(), false);

	// Store the current permutation
	vector<int> curr;

	// Find the distinct permutations of num
	backtrack(nums, curr, ans, visited);

	return ans;
}

// Function call to print all distinct
// permutations of the vector nums
void getDistinctPermutations(vector<int> nums)
{
	// Find the distinct permutations
	vector<vector<int> > ans
		= permuteDuplicates(nums);

	// Traverse every row
	for (int i = 0; i < (int)ans.size();
		i++) {

		// Traverse every column
		for (int j = 0; j < (int)ans[i].size();
			j++) {

			cout << ans[i][j] << " ";
		}

		cout << '\n';
	}
}

// Driver Code
int main()
{
	// Input
	vector<int> nums = { 1, 2,3,4,5 };

	// Function call to print
	// all distinct permutations
	getDistinctPermutations(nums);

	return 0;
}
