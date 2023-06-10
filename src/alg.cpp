// Copyright 2021 NNTU-CS
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include "include/alg.cpp"


int countPairs1(int* arr, int len, int value)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] + arr[j] == value)
                count++;
        }
    }
    return count;
}

int countPairs2(int* arr, int len, int value) {
    std::unordered_map<int, int> countMap;
    int pairCount = 0;

    for (int i = 0; i < len; i++) {
        int complement = value - arr[i];

        if (countMap.find(complement) != countMap.end()) {
            pairCount += countMap[complement];
        }

        countMap[arr[i]]++;
    }

    return pairCount;
}


int countPairs3(int* arr, int len, int value) {
    std::sort(arr, arr + len); // Sort the array in ascending order
    int count = 0;

    for (int i = 0; i < len - 1; i++) {
        int complement = value - arr[i];
        int low = i + 1;
        int high = len - 1;
        int index = binarySearch(arr, low, high, complement);

        if (index != -1) {
            // Count the number of occurrences of complement
            int complementCount = 1;
            int left = index - 1;
            int right = index + 1;

            // Count occurrences to the left of index
            while (left >= i && arr[left] == complement) {
                complementCount++;
                left--;
            }

            // Count occurrences to the right of index
            while (right < len && arr[right] == complement) {
                complementCount++;
                right++;
            }

            count += complementCount;
        }
    }

    return count;
}



int main()
{
    int arr[] = { 20, 30, 30, 40, 40 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int value = 50;

    std::cout << "countPairs1: " << countPairs1(arr, len, value) << std::endl;
    std::cout << "countPairs2: " << countPairs2(arr, len, value) << std::endl;
    std::cout << "countPairs3: " << countPairs3(arr, len, value) << std::endl;

    return 0;
}
