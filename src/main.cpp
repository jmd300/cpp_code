#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <functional>
#include <cstdio>

#include "public.h"

class TestCase {
public:
	TestCase() {}
	TestCase(std:: string index, std::string name, void (*func)()) : index(index), name(name), func(func) {}
	
	std::string index;
	std::string name;
	void (* func)();
	
	std::string to_string() {
		return this->index + ": " + this->name + "\n";
	}
};

class TestCaseMap {
public:
	TestCaseMap() {}

	bool insert(std::string index, std::string name, void (*func)()) {
		if (map.find(index) == map.end() || map.find(name) == map.end()) {
			TestCase test_case{ index, name, func };
			// std::cout << test_case.to_string() << std::endl;
			map[index] = test_case;
			map[name] = test_case;
			return true;
		}
		return false;
	}
	std::string to_string() {
		std::string ret;
		for (auto iter = this->map.begin(); iter != map.end(); iter++){
			if(is_number(iter-> first)) ret += iter->second.to_string();
		}
		return ret;
	}
	void test_func(const std::string index_name) {
		if (map.find(index_name) != map.end()) {
			map[index_name].func();
		}
	}
private:
	std::map<std::string, TestCase> map;
};

int main() {
	std::string input_str;
	TestCaseMap test_case_map;
	test_case_map.insert("1", "sorted_test", &sorted_test);

	std::cout << test_case_map.to_string() << std::endl;
	while (true) {
		std::cin >> input_str;
		if (input_str == "q") break;
		test_case_map.test_func(input_str);
	}
}
