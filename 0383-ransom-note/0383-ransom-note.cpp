class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(magazine.begin(), magazine.end());
        sort(ransomNote.begin(), ransomNote.end());        
        return includes(magazine.begin(), magazine.end(), ransomNote.begin(), ransomNote.end());
    }
};