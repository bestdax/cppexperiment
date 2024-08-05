#include "headers.h"

void test_foldexpr()
{
	print("hello", "world", 22);
	print_limits<unsigned long, unsigned long long, unsigned, signed, int, float, double, long double, long, long long, char, short>();

	std::vector<int> ivec{};
	// push_back(ivec, 1, 2, 3);
	// print(ivec[2]);
}
