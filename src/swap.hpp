/*
* 通过传递两个变量的引用，交换两个变量的值
*/
#ifndef _SWAP_HPP_
#define _SWAP_HPP_

template<class T>
void swap(T & a, T & b) {
	T temp{a};
	a = b;
	b = temp;
}

void swap_test() {
	using namespace std;
	cout << "swap_test" << endl;
}

#endif
