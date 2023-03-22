class Solution {
public:
    int minMaxDifference(int num) {

std::string num_str = std::to_string(num);
    int max_val = num;
    int min_val = num;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::string new_num_str = num_str;
            std::replace(new_num_str.begin(), new_num_str.end(), '0' + i, '0' + j);
            int new_num = std::stoi(new_num_str);
            if (new_num > max_val) {
                max_val = new_num;
            }
            if (new_num < min_val && (j > 0 || i > 0)) {
                min_val = new_num;
            }
        }
    }
    return max_val - min_val;
    }
};//a