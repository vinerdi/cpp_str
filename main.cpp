#include <iostream>
using namespace std;

string deleteCharAtIndex(string str, int index) {
    index--;
    if (index >= 0 && index < str.length()) {
        str.erase(index, 1);
    }
    return str;
}


string deleteCharAtLetter(string str, char letter) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == letter) {
			str.erase(i, 1);
		}
	}
	return str;
}


string insertCharAtIndex(string str, int index, char letter) {
	index--;
	if (index >= 0 && index < str.length()) {
		str.insert(index, 1, letter);
	}
	return str;
}

string ExclamationMarkReplacement(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '.') {
            str[i] = '!';
        }
    }
    return str;
}

int countCharInString(string str, char letter) {
	int count = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == letter) {
			count++;
		}
	}
	return count;
}

void countLettersNumbersOthers(string str, int &letters, int &numbers, int &others) {
	letters = 0;
	numbers = 0;
	others = 0;
	for (int i = 0; i < str.length(); i++) {
		if (isalpha(str[i])) {
			letters++;
		}
		else if (isdigit(str[i])) {
			numbers++;
		}
		else {
			others++;
		}
	}
}


void replaceSpacesWithTabs(string& str) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			str[i] = '\t';
		}
	}
}

void countSpacesTabs(string str, int& words) {
	words = 1;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			words++;
		}
	}
}


void isPalindrome(string str) {
	bool isPalindrome = true;
	for (int i = 0; i < str.length() / 2; i++) {
		if (str[i] != str[str.length() - i - 1]) {
			isPalindrome = false;
			break;
		}
	}
	if (isPalindrome) {
		cout << "The string is a palindrome." << endl;
	}
	else {
		cout << "The string is not a palindrome." << endl;
	}
}

int main()
{
    string str = "Hello World!";
    int index = 6;
    cout << "Original String: " << str << endl;
    cout << "String after deleting character at index " << index << ": " << deleteCharAtIndex(str, index) << endl << endl;


    string str2 = "Hello World!";
    char letter = 'o';
    cout << "Original String: " << str2 << endl;
    cout << "String after deleting character " << letter << ": " << deleteCharAtLetter(str2, letter) << endl << endl;


    string str3 = "Hello World!";
    int index2 = 6;
    char letter2 = 'o';
    cout << "Original String: " << str3 << endl;
    cout << "String after inserting character " << letter2 << " at index " << index2 << ": " << insertCharAtIndex(str3, index2, letter2) << endl << endl;


    string str4 = "Hello. World.";
    cout << "Original String: " << str4 << endl;
    cout << "String after replacing '.' with '!': " << ExclamationMarkReplacement(str4) << endl << endl;


    string str5 = "Hello World!";
    char letter3 = 'o';
    cout << "Original String: " << str5 << endl;
    cout << "Number of times character " << letter3 << " occurs in the string: " << countCharInString(str5, letter3) << endl << endl;


	string str6 = "Hello World! 123";
	int letters, numbers, others;
	countLettersNumbersOthers(str6, letters, numbers, others);
	cout << "Original String: " << str6 << endl;
	cout << "Number of letters: " << letters << endl;
	cout << "Number of numbers: " << numbers << endl;
	cout << "Number of other characters: " << others << endl << endl << endl;

	cout << "Practical task: " << endl << endl << endl;

	string str7 = "Hello World!";
	cout << "Original String: " << str7 << endl;
	replaceSpacesWithTabs(str7);
	cout << "String after replacing spaces with tabs: " << str7 << endl << endl;


	string str8 = "Hi im Vlad!! I old 16";
	int letters2, numbers2, others2;
	countLettersNumbersOthers(str8, letters2, numbers2, others2);
	cout << "Original String: " << str8 << endl;
	cout << "Number of letters: " << letters2 << endl;
	cout << "Number of numbers: " << numbers2 << endl;
	cout << "Number of other characters: " << others2 << endl << endl;

	string str9 = "Hello World!";
	int words;
	countSpacesTabs(str9, words);
	cout << "Original String: " << str9 << endl;
	cout << "Number of spaces: " << words << endl << endl;

	string str10 = "madam";
	cout << "Original String: " << str10 << endl;
	isPalindrome(str10);


    return 0;
}