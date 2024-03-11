#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool found = false;

void dfs(int idx, vector<int>& nums, int sum, vector<int>& cur, int t) {
    if(sum == t) {
        found = true;
        for(size_t i = 0; i < cur.size(); ++i) {
            cout << cur[i];
            if(i == cur.size() - 1) cout << endl;
            else cout << "+";
        }
        return;
    }
    if(idx >= nums.size() || sum > t) return;

    for(size_t i = idx; i < nums.size(); ++i) {
        if(i > idx && nums[i] == nums[i - 1]) continue;
        cur.push_back(nums[i]);
        dfs(i + 1, nums, sum + nums[i], cur, t);
        cur.pop_back();
    }
}

int main() {
    int t, n, v;
    while(cin >> t >> n, t || n) {
        vector<int> nums(n);
        for(int i = 0; i < n; ++i) {
            cin >> nums[i];
        }
        found = false;
        cout << "Sums of " << t << ":" << endl;
        vector<int> cur;
        dfs(0, nums, 0, cur, t);
        if(!found) cout << "NONE" << endl;
    }
    return 0;
}

