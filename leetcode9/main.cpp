#include <iostream>
#include <bits/locale_facets_nonio.h>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        } else {
            int reverted = 0;
            while(x > reverted) {
                reverted = reverted*10 + x % 10;
                x = x/10;
            }
            return x== reverted||x == reverted / 10;
        }
    }
};

int main() {
    Solution solution;
    std::cout << "Hello, World!" << std::endl;
    if(solution.isPalindrome(1221)) {
        std::cout << "yes it is";
    }
}


