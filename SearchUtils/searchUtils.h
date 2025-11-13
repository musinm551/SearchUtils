#pragma once
#include <vector>

int linearSearch(std::vector<int>& arr, int key, int& comparisons) {
    comparisons = 0;
    for (std::size_t i = 0; i < arr.size(); ++i) {
        ++comparisons;                 
        if (arr[i] == key) {
            return static_cast<int>(i);
        }
    }
    return -1;                          
}

int binarySearch(const std::vector<int>& arr, int key, int& comparisons) {
    comparisons = 0;
    int low = 0;
    int high = static_cast<int>(arr.size()) - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        ++comparisons;                  

        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;                          
}

std::vector<int> generateSortedVector(int n) {
    std::vector<int> v;
    v.reserve(n);
    for (int i = 1; i <= n; ++i) {
        v.push_back(i);
    }
    return v;
}

