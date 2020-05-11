class Solution {
public:
    string simplifyPath(string path) {
        if (path.empty())
            return "";
        int i = 0;
        vector<string> res;
        while (i < path.size()) {
            while (path[i] == '/' && i < path.size())
                i ++;
            if (i == path.size())
                break;
            cout << i;
            int start = i; // start position of the substring
            while (i < path.size() && path[i] != '/')
                i ++;
            int end = i - 1;
            cout << end;
            string substr_ = path.substr(start, end - start + 1);
            cout << substr_;
            if (substr_ == "..") {
                if (!res.empty())
                    res.pop_back();
            }
            else if (substr_ != ".")
                res.push_back(substr_);
        }
        string ret = "";
        for (int i = 0; i < res.size(); i ++) {
            cout << res[i] << ' ';
            string temp = res[i];
            temp += '/';
            ret += temp;
        }
        ret = '/' + ret;
        return (ret == "/") ? "/" : ret.substr(0, ret.size() - 1);
    }
};
