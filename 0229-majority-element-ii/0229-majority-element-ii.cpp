class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // Boyer-Moore Algorithm
        // As we have to find elements greater than n/3, so only n-1 i.e., 2 elements can be in majority.
        vector<int> res;

        int count1 = 0;
        int majority_ele1 = 0;
        int count2 = 0;
        int majority_ele2 = 0;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == majority_ele1) {
                count1++;
            }
            else if(nums[i] == majority_ele2) {
                count2++;
            }
            else if(count1 == 0) {
                majority_ele1 = nums[i];
                count1 = 1;
            }
            else if(count2 == 0) {
                majority_ele2 = nums[i];
                count2 = 1;
            }
            else {
                count1--;
                count2--;
            }
        }

        // verification
        int freq1 = 0;
        int freq2 = 0;
        for(int &num: nums) {
            if(num == majority_ele1) freq1++;
            else if(num == majority_ele2) freq2++;
        }

        if(freq1 > floor(nums.size()/3)) {
            res.push_back(majority_ele1);
        }        
        if(freq2 > floor(nums.size()/3)) {
            res.push_back(majority_ele2);
        }
        return  res;
    }
};

// https://youtu.be/Q6L5SoS-fTo?si=CwO7JtvoETjYPapj