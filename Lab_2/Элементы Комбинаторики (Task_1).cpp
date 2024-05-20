#include <iostream>
#include <set>
#include <string>
#include <cmath>

int calcWords(std::string str, int length) {
	std::set<char> uniquLetter;

	for (char i : str) {
		uniquLetter.insert(i);
	}

	return pow(uniquLetter.size(), length);
}

int main() {
	int quantityWords = calcWords("�������������", 4);
	std::cout << quantityWords << std::endl;

	return 0;
};