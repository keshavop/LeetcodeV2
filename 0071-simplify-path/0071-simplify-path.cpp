class Solution {
public:
    string simplifyPath(string path) {
        vector<string> dir_stack;
        stringstream ss(path);
        string dir;
        while (getline(ss, dir, '/')) {
            if (!dir_stack.empty() && dir == "..") {
                dir_stack.pop_back();
            } else if (dir != "." && dir != "" && dir != "..") {
                dir_stack.push_back(dir);
            }
        }
        string simplified_path = "";
        for (string dir : dir_stack) {
            simplified_path += "/" + dir;
        }
        return simplified_path.empty() ? "/" : simplified_path;
    }
};