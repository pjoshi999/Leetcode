class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int res = 0;
        sort(people.begin(), people.end());
        int start = 0;
        int end = people.size()-1;
        while(start <= end) {
            int sum = people[start] + people[end];
            if(sum <= limit) {
                res++;
                start++;
                end--;
            }
            else {
                res++;
                end--;
            }
        }
        return res;
    }
};