#include <iostream>

int time, dial[] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };

int main()
{
	std::string word;

	std::cin >> word;

	for (const auto& c : word)
	{
		time += dial[c - 65];
	}

	std::cout << time;
}