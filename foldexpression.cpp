#include "headers.h"

void dax::test_foldexpr()
{
	dax::print("hello", "world", 22);
	dax::print_limits<unsigned long, unsigned long long, unsigned, signed, int, float, double, long double, long, long long, char, short>();
	dax::print("hello", "world", 23);

	std::vector<int> ivec{};
	// push_back(ivec, 1, 2, 3);
	// print(ivec[2]);
}
