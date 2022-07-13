#ifndef _BUBBLE_SORT_HPP_
#define _BUBBLE_SORT_HPP_

#include <iostream>
#include <vector>

#include "../public.h"

/*
冒泡排序算法
*/
template <class T>
void bubble_sort(std::vector<T>& nums, bool reverse = false) {
    for (size_t i = 0; i < nums.size() - 1; i++) {
        for (size_t j = 0; j < nums.size() - 1 - i; j++) {
            if ((nums[j] > nums[j + 1]) != reverse) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}


int bubble_sort_test() {
    std::vector<int> arr{ 2, 4, 5, 7, 0, 1, -1 };

    bubble_sort(arr);
    for (auto num : arr) {
        std::cout << num << std::endl;
    }
}

#endif
