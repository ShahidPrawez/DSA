#include <iostream>

int* twoSum(int nums[], int size, int target) {
    static int result[2];
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    return nullptr; // Return nullptr if no solution is found
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 18;
    int size = sizeof(nums) / sizeof(nums[0]);

    int* result = twoSum(nums, size, target);
    if (result != nullptr) {
        std::cout << "Indices: " << result[0] << ", " << result[1] << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }

    return 0;
}
