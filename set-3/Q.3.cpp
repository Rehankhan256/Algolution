#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> maxSlidingWindow(const vector<int>& nums, int k) {
    vector<int> result;
    
    for (int i = 0; i <= nums.size() - k; i++) {
        int max_val = nums[i];  
        for (int j = i + 1; j < i + k; j++) {
            max_val = max(max_val, nums[j]);
        }
        result.push_back(max_val);
    }
    
    return result;
}

int main() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    
    vector<int> result = maxSlidingWindow(nums, k);
    
    for (int num : result) {
        cout << num << " ";
    }
    
    return 0;
}
