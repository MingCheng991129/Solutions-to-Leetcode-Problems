class Solution {
public:
    int maxNumberOfBalloons(string text) {
        if (text.size() < 7)
            return 0;
        unordered_map<char, int> hashmap;
        for (int i = 0; i < text.size(); i ++) {
            if (hashmap.count(text[i]) == 0) {
                hashmap.insert(pair<char, int> (text[i], 1));
            }
            else {
                hashmap[text[i]] ++;
            }
        }
        int result = INT_MAX;
        for (auto it = hashmap.begin(); it != hashmap.end(); it ++) {
            if (it -> first == 'b' || it -> first == 'a' || it -> first == 'n') {
                result = min(result, it -> second);
            }
            if (it -> first == 'l' || it -> first == 'o') {
                result = min(result, (it -> second) / 2);
            }
        }
        if (result == INT_MAX)
            result = 0;
        return result;
    }
};
