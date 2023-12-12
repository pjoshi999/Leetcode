class Solution {
public:
    int findLeftIndex(int cand, int start, int end, vector<int> arr) {
        int res = -1;
        
        while(start <= end) {
            int mid = start + (end - start)/2;
            if(arr[mid] == cand) {
                res = mid;
                end = mid - 1;
            }
            else if(arr[mid] < cand) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return res;
    }

    int findRightIndex(int cand, int start, int end, vector<int> arr) {
        int res = -1;
        
        while(start <= end) {
            int mid = start + (end - start)/2;
            if(arr[mid] == cand) {
                res = mid;
                start = mid + 1;
            }
            else if(arr[mid] < cand) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return res;
    }

    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int freq = n/4;

        vector<int> candidates{arr[n/4], arr[n/2], arr[3 * n/4]};
        for(int& cand: candidates) {
            int left_idx = findLeftIndex(cand, 0, n-1, arr);
            int right_idx = findRightIndex(cand, 0, n-1, arr);

            if(right_idx - left_idx + 1 > freq) {
                return cand;
            }
        }
        return -1;
    }
};