#include <algorithm>
#include <iostream>
#include <vector>
#include <string>


/*
class Solution {
public:
    std::string LongestCommonPrefix(std::vector<std::string>& strs) {   //function overloading
        if (!strs.size()) {     //utilize the empty vector equals to zero
            return "";
        }
        std::string prefix = strs[0];
        int count = strs.size();
        for(int i=1;i<count;i++) {
            prefix =  LongestCommonPrefix(prefix, strs[i]);
            if (!prefix.size()) {
                break;
            }
        }
        return prefix;
    }

    static std::string LongestCommonPrefix(const std::string& str1, const std::string& str2) {
        int length = std::min(str1.size(), str2.size());
        int index = 0;
        while(index < length && str1[index]==str2[index]) {
            index++;
        }
        return str1.substr(0,index);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::vector<std::string> strings = {"leets","leetcode","leen"};
    Solution solution;
    std::cout << solution.LongestCommonPrefix(strings);
    return 0;
}
*/

/*class Soltion {
public:
    std::string LongestCommonPrefix(std::vector<std::string>& strs) {   //The usage of &
        if(!strs.size()) {
            return "";
        }
        std::string prefix = strs[0];
        int count = strs.size();
        for (int i=0;i<count;++i) {
            prefix = LongestCommonPrefix(prefix,strs[i]);
            if (!prefix.size) {
                break;  //detect if the prefix has already become a empty string before the loops are done
            }
        }
        return prefix;
    }

    std::string LongestCommonPrefix(std::string str1,std::string str2) {
        int length = std::min(str1.size(),str2.size());
        int index = 0;
        while (index<length && str1[index] == str2[index]) {
            ++index;
        }
        return str1.substr(0,index);
    }
};*/

class Solution {
public:
    std::string LongestCommonSubstring(const std::vector<std::string> &str) {
        if (str.empty()) {
            return "";
        }
        std::string prefix = str[0];
        int count = str.size();
        for (int i = 0;i<count;i++) {
            prefix=LongestCommonSubstring(prefix,str[i]);
            if (prefix.empty()) {
                return"";
            }
        }
        return prefix;
    }
    static std::string LongestCommonSubstring(const std::string &str1, const std::string &str2) {
        int index = 0;
        while (str1[index] == str2[index] && index < std::min(str1.size() , str2.size())) {
            //min:to prevent reviewing the shorter string again
            ++index;
        }
        return str1.substr(0,index);
    }
};

int main() {
    Solution solution;
    std::vector<std::string> input= {"leeeting" , "leeaf" , "leetcode"};
    std::string output = solution.LongestCommonSubstring(input);
    std::cout << output;
}
