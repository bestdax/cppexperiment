int main(int argc, char *argv[])
{
	namespace fs = std::filesystem;

	auto home = std::getenv("HOME");
	fs::path ph = home;
	auto pa = ph / "Downloads/a";
	auto pd = pa / "b/c/d";
	fs::create_directories(pd);
	fs::remove(pd);
	return 0;
}
