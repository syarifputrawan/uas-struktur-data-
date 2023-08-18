#include <iostream>
#include <vector>
#include <algorithm>

// Function to perform binary search and return the indices of the target
std::vector<int> binarySearch(const std::vector<int>& arr, int target) {
    std::vector<int> indices;

    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            indices.push_back(mid);

            // Search left for more occurrences
            int temp = mid - 1;
            while (temp >= 0 && arr[temp] == target) {
                indices.push_back(temp);
                temp--;
            }

            // Search right for more occurrences
            temp = mid + 1;
            while (temp < arr.size() && arr[temp] == target) {
                indices.push_back(temp);
                temp++;
            }

            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return indices;
}

int main() {
    std::vector<int> array = {19, 40, 10, 90, 2, 50, 60, 50, 1};

    // Sort the array for binary search to work
    std::sort(array.begin(), array.end());

    int input;
    std::cout << "Input: ";
    std::cin >> input;

    std::vector<int> result = binarySearch(array, input);

    if (result.empty()) {
        std::cout << "Output: Angka " << input << " tidak ada dalam array" << std::endl;
    } else {
        std::cout << "Output: Angka " << input << " ada di indeks ke ";
        for (int i = 0; i < result.size(); ++i) {
            std::cout << result[i];
            if (i < result.size() - 1) {
                std::cout << " dan ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
