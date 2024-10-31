// counts the amount of vowels in given letters 

#include <iostream> 
#include <string>

using namespace std;

//functions and global var here 

int countVowel(string str);

//need to fix Q
bool Q = false;


//int main here 
int main(void) {

	string letter;

	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q") break;
		cout << "Vowel count: " << countVowel(input) << endl; // do something with input

	}
	return 0;




}

//function definitions here  

int countVowel(string str) {

	int count = 0;
	for (char ch : str) {
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
			ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
			count++;
		}
	}
	return count;

}