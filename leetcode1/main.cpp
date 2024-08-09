#include <iostream>
#include <vector>
//Always use std::
std::vector<int> findPair(std::vector<int> &arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            //We're using the less-than notation rather than less-than-euqal notation.
            //Hence, there's no need to subtract another
            if (arr[i] + arr[j] == target) {
                return {i, j};
            }
        }
    }
    //Note that where the return statement should be placed
    return {};
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::vector<int> arr = {2, 3, 5, 7, 11};
    int tar = 18;

    std::vector<int> result = findPair(arr, tar);
    if (!result.empty()) {
        std::cout << result[0] << "," << result[1];
    } else {
        std::cout << "nothing";
    }
}

//a array cannot be passed in to a function
