#include "pch.h"
namespace dax
{
template<typename... Args>
void print(Args&&... args)
{
	// Print all arguments separated by ", "
	bool first = true;
	((std::cout << (first ? first = false, "" : ", ") << args), ...) << std::endl;
}

template<typename... Ts>
void print_limits()
{
	((std::cout << typeid(Ts).name() << ' ' << +std::numeric_limits<Ts>::max() << ' ' << +std::numeric_limits<Ts>::min <<
	  '\n'), ...);
	std::cout << std::endl;
}

template<typename T, typename... Args>
void push_back(T container, Args&&... args)
{
	(..., (container.push_back(args)));
}

void test_foldexpr();
}
