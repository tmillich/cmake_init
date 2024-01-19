#pragma once

#include <bit>
#include <vector>

namespace {

using namespace std;
class Solution {
   public:
    vector<int> countBits(int n) {
        vector<int> cbits(n);

        for (u_int64_t i = 1; i <= n; ++i) {
            cbits.push_back(popcount(i));
        }

        return cbits;
    }
};
}  // namespace