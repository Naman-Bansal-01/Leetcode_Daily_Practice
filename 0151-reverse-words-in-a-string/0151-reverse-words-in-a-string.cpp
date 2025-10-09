class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string result;

        ss >> result;

        while (ss >> word) {
            result = word + " " + result;
        }

        return result;
    }
};
    