// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.



// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target) {
                    return { i, j };
                }
            }
        }
        return {};
    }
};


// Test case function
void runTest(vector<int> nums, int target, vector<int> expected) {
    Solution sol;
    vector<int> result = sol.twoSum(nums, target);

    cout << "Input nums: [";
    for (size_t i = 0; i < nums.size(); ++i) {
        cout << nums[i] << (i < nums.size() - 1 ? ", " : "");
    }
    cout << "], target: " << target << endl;

    cout << "Expected output: [";
    for (size_t i = 0; i < expected.size(); ++i) {
        cout << expected[i] << (i < expected.size() - 1 ? ", " : "");
    }
    cout << "]" << endl;

    cout << "Actual output: [";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i] << (i < result.size() - 1 ? ", " : "");
    }
    cout << "]" << endl;

    if (result == expected) {
        cout << "Test passed!" << endl;
    }
    else {
        cout << "Test failed!" << endl;
    }
    cout << "----------------------------" << endl;
}

int main() {
    // Test cases
    runTest({ 2, 7, 11, 15 }, 9, { 0, 1 });       // Example 1
    runTest({ 3, 2, 4 }, 6, { 1, 2 });           // Example 2
    runTest({ 3, 3 }, 6, { 0, 1 });              // Example 3
    runTest({ 10, 20, 30, 40 }, 50, { 0, 3 });   // Custom test case

    return 0;
}