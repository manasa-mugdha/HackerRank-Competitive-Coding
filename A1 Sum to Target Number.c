#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> complements;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        if (complements.count(complement)) {
            return {complements[complement], i};
        }
        
        complements[nums[i]] = i;
    }
    
    return {};
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int target;
    cin >> target;
    
    vector<int> result = twoSum(nums, target);
    
    cout << result[0] << " " << result[1] << endl;
    
    return 0;
}
