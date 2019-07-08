#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"

// https://leetcode.com/problems/longest-continuous-increasing-subsequence/

// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int findLengthOfLCIS(vector<int> &nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return 1;
        int start = 0;
        int longest = 1;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                longest = max(longest, i - start + 1);
            } else {
                start = i;
            }
        }
        return longest;
    }
};

void test1() {
    vector<int> v1{1, 3, 5, 4, 7};

    cout << "3 ? " << Solution().findLengthOfLCIS(v1) << endl;

    vector<int> v2{2, 2, 2, 2};

    cout << "1 ? " << Solution().findLengthOfLCIS(v2) << endl;

    vector<int> v3{1, 3, 5, 5, 6, 6};

    cout << "3 ? " << Solution().findLengthOfLCIS(v3) << endl;

    vector<int> v4{6, 5, 7, 1, 3, 5};

    cout << "3 ? " << Solution().findLengthOfLCIS(v4) << endl;

}

void test2() {

}

void test3() {

}