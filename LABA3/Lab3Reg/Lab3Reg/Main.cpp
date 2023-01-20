#include <iostream>
#include <regex>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	ifstream f("email.html");
	string str;
	smatch match;

	const auto r = regex(R"([a-zA-Z0-9_-]+@[a-zA-Z0-9_-]+\.[a-zA-Z0-9_-]+)");
	while (getline(f, str))
	{
		regex_search(str, match, r);
		if (!match.empty()) cout << match[0] << "\n";
	}
}