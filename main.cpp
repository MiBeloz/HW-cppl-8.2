#include <iostream>
#include <set>
#include <vector>
#include <list>

template<typename T>
void print_container(const T& container) {
	for (const auto& it : container) {
		std::cout << it << " ";
	}
	std::cout << std::endl;
}

int main() {
	setlocale(LC_ALL, "ru");
	std::cout << "\tПечать контейнера\n" << std::endl;

	std::set<std::string> test_set = { "one", "two", "three", "four" };
	std::list<std::string> test_list = { "one", "two", "three", "four" };
	std::vector<std::string> test_vector = { "one", "two", "three", "four" };
	
	print_container(test_set); //элементы test_set выведутся в отсортированном порядке
	print_container(test_list);
	print_container(test_vector);

	system("pause > nul");
	return 0;
}
