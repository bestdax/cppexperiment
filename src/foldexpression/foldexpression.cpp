#include "headers.h"

void dax::test_foldexpr()
{
	dax::print("hello", "world", 22);
	dax::print_limits<unsigned long, unsigned long long, unsigned, signed, int, float, double, long double, long, long long, char, short>();
}

int main(int argc, char *argv[])
{
	dax::test_foldexpr();
	return 0;
}
