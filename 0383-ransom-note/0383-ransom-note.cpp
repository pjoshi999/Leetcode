class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        multiset<char> mag(magazine.begin(), magazine.end());
        multiset<char> ransom(ransomNote.begin(), ransomNote.end());        
        return includes(mag.begin(), mag.end(), ransom.begin(), ransom.end());
    }
};