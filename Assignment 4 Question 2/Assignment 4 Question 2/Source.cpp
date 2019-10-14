//Name: Alexander
//Date: 10/13/2019
//Assignment #4 Question 2

using namespace std;

#include <iostream>
#include <string>



//Declarations
int to_number(string word);

//Variables
string test = "3ac4";

int main()
{
	cout << to_number(test) << endl;

	return 0;
}

//Function
int to_number(string word) {
	if (word.length() > 0) {
		int res = 0;
		if (isdigit(word[0])) {
				
			//Converts to int.
			res = word[0] - '0';
		}
		return res + to_number(word.substr(1, word.length()));
	}
	else {
		return 0;
	}
}