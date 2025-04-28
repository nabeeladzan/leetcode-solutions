#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 10 8 7 5 9 13 2 1 5 17 8 3 target = 23
        unordered_map<int, int> store;

        for (int x = 0; x < nums.size(); x++) {
            if (nums[x] < target) {
                int needed = target - nums[x];
                if (store.count(needed) > 0) {
                    return {x, store[needed]};
                } else {
                    store.insert({nums[x], x});
                }
            }
        }

        return {};
    }
};
