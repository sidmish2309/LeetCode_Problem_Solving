class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int ub=upper_bound(letters.begin(),letters.end(),target)-letters.begin();
        if(ub==letters.size()) return letters[0];
        return letters[ub];
    }
};