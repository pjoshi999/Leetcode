### Hashing
​
**This idea uses a hash table to record the times of appearances of each letter in the two strings s and t. For each letter in s, it increases the counter by 1 while for each letter in t, it decreases the counter by 1. Finally, all the counters will be 0 if they two are anagrams of each other.**
​
```
class Solution {
public:
bool isAnagram(string s, string t) {
if (s.length() != t.length()) return false;
int n = s.length();
unordered_map<char, int> counts;
for (int i = 0; i < n; i++) {
counts[s[i]]++;
counts[t[i]]--;
}
for (auto count : counts)
if (count.second) return false;
return true;
}
};
```
​
**Since the problem statement says that "the string contains only lowercase alphabets", we can simply use an array to simulate the unordered_map and speed up the code.
**
​
```
class Solution {
public:
bool isAnagram(string s, string t) {
if(s.size() != t.size()) return false;
int count[26] = {0};
for(int i=0; i<s.size(); i++) {
count[s[i]-'a']++;
count[t[i]-'a']--;
}
for(int i=0; i<26; i++) {
if(count[i] > 0) {
return false;