#include <iostream>
#include <vector>

using namespace std;

int kadane(vector<int>& nums) {
    int maxEndingHere = nums[0];
    int maxSoFar = nums[0];

    for (size_t i = 1; i < nums.size(); ++i) {
        maxEndingHere = max(nums[i], maxEndingHere + nums[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}

int main() {
    int n; cin >> n;
    vector<int> nums(n);
    for (size_t i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int maxSum = kadane(nums);
    cout<< maxSum << endl;
    return 0;
}
