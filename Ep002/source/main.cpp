#include <iostream>
#include <concepts>

template<typename T>
requires std::integral<T>
T add(T a, T b) {
	return a + b;
}

int main() {
	std::cout << "Hello! The sum is: " << add(5, 6) << std::endl;
	return 0;
}