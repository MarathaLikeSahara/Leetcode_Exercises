#include <iostream>
#include <vector>

//#01
//right pointer points to the element need to be processed
//left pointer points to the place need to be assigned a value

/*class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
       int n = nums.size();
        int left =0;
        for(int right = 0; right < n; right ++) {
            if (nums[right]!=val) {
                nums[left] = nums[right];
                left++;
            }
        }
        return left;
    }
};*/

//#02

class Solution {
public:
    int removeElemrny(std::vector<int>& nums, int val) {
        int n;
        n = nums.size();
        int left = 0;
        int right = nums.size();
        while (left < right) {
            if(nums[left]==val) {
                nums[left] = nums[right-1];
                right --;
            } else {
                left ++;
            }
        }
        return left;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;

    return 0;
}
