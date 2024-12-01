#include <iostream>
#include <vector>
using namespace std;

int subarray_or(const vector<int>& arr, int start, int end) {
    int result = 0;
    for (int i = start; i <= end; ++i) {
        result |= arr[i]; 
    }
    return result;
}
int or_of_subarrays(const vector<int>& arr) {
    int final_result = 0;
    for (int start = 0; start < arr.size(); ++start) {
        for (int end = start; end < arr.size(); ++end) {
            int subarray_result = subarray_or(arr, start, end);
            final_result |= subarray_result; 
        }
    }
    
    return final_result;
}

int main() {
    vector<int> arr = {1, 4, 6};
    
    int result = or_of_subarrays(arr);
    
    cout << "The final OR result is: " << result << endl;
    
    return 0;
}