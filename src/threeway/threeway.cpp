struct Vecnumber
{
	Vecnumber(std::vector<char>&& v): digits(v) {};

	std::vector<char> digits;
	auto operator<=>(const Vecnumber&) const = default;

};

int main(int argc, char *argv[])
{

	if(Vecnumber({4, 2, 3}) > Vecnumber({4, 2}))
		std::cout << "lhs > rhs" << std::endl;
	return 0;
}
