#ifndef _SORTED_HPP_
#define _SORTED_HPP_

#include <iostream>
#include <vector>
#include <string>
#include "assert.h"

/*
�ж�һ�������Ƿ��������
sort_type: asc �ж��Ƿ�����desc�ж��Ƿ���
*/
template<class T>
bool sorted(const std::vector<T> arr, std::string sort_type = "asc") {
	for (size_t i{ 0 }; i < arr.size() - 1; i++) {
		if (arr[i] < arr[i + 1] && sort_type != "asc") {
			return false;
		}
		else if(arr[i] > arr[i + 1] && sort_type != "desc") {
			return false;
		}
	}
	return true;
}


void sorted_test() {
	using namespace std;
	std::vector<int> arr1{ 1, 2, 3, 3, 4, 5, 6 };
	std::vector<int> arr2{ 6, 5, 4, 3, 2, 2, 1 };

	std::cout << "����tested �����Ƿ����Ԥ�ڣ�\n";

	assert(sorted(arr1) == true);
	assert(sorted(arr1, "desc") == false);
	
	assert(sorted(arr2) == false);
	assert(sorted(arr2, "desc") == true);
	std::cout << "OK, PASSED\n";
}

#endif