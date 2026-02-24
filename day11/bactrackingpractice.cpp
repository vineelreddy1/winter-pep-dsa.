// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> nums = {1, 2, 3};

//     sort(nums.begin(), nums.end());   // Important

//     do {
//         for (int x : nums)
//             cout << x << " ";
//         cout << endl;
//     } while (next_permutation(nums.begin(), nums.end()));

//     return 0;
// }


// Leetcode Q.NO 46,47;


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        do {
            ans.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));

        return ans;
    }
};

int main() {

    vector<int> nums = {1, 23, 45, 67, 8, 4};

    Solution obj;   // Create object

    vector<vector<int>> result = obj.permuteUnique(nums);

    // Print result
    for (auto &vec : result) {
        for (int x : vec)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}