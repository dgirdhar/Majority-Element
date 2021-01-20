class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max = 0;
        unordered_map<int, int> tempMap;
        int size = nums.size() / 2;
        
        for (int i = 0; i < nums.size(); ++i) {
            tempMap[nums[i]]++;
        }
        
        unordered_map<int, int>::iterator iter = tempMap.begin();
        unordered_map<int, int>::iterator endIter = tempMap.end();
        
        for (; iter != endIter; ++iter) {
            if (iter->second > size) {
                max = iter->first;
            }
        }
        
        return max;
    }
};
