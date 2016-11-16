// Rick Sellers; LecSec# 1002; LabSec# 1008; Exercise 10

// This program

#include<iostream>
#include<string>
#include<cmath>
#include<cctype>
#include<fstream>

using namespace std;

const int WIDTH = 11;

void filename (string);
bool ifvowel (string, int);
void vtoupper (string&);
void ctolower (string&);
void output (string);

int main()
{

string input_name, output_name, word;
int word_count = 0;
int length;

cout<< "Please enter the name of the input file."<<endl;
cin >>input_name;
cout<< "Please enter the name of the output file."<<endl;
cin >>output_name;

	//filename(input_name);
	//if(input_name not valid)
		// cout<< "The file could not be opened."<<endl;
		// cout<< input_name<< " is not a valid file."<<endl<<endl;

	//else
	//open input file
	cout<< "Rick Sellers; LecSec# 1002; LabSec# 1008; Exercise 10"<<endl<<endl;
	cout<< "Input file name: "<< input_name<<end<<endl;
	cout<< "rEfOrmAttEd wOrds:"<<endl<<endl;

	cin >>word;

	while(cin)
	{
	word_count++;
	length = word.length();
	word = vtoupper(word);
	word = ctolower(word);
	cout<< left<< setw(WIDTH + WIDTH*(word_count-1))<< word;
	cin >>word;
	}

	return 0;
}

void filename (string input_name)
// The filename function checks if an input file exists given a file name input by the user.  If the file is valid, the function will configure the program to read from this file.
// Input:  The function accepts a string parameter of the user-entered input file name
// Output: The function will display a message if the file is not valid, or it will open the file and configure the program to read from this file if it is a valid file.
{

}

bool ifvowel(string word, int length)
// The ifvowel function checks if a character in a word from the file is a vowel or not.
// Input:  The function accepts a string as input.
// Output: The function retuns a bool value of true or false depending if the character in the string input are vowels
{
	char ch;
	//int length; 
	bool vowel = false;
	for (int i = 0; i < length; i++)
	{
		//ch = word[i];
		if (word[i] == 'a' or word[i] == 'e' or word[i] == 'i' or word[i] == 'o'		 or word[i] == 'u')
		vowel = true;
	}
}

void vtoupper(string word&)
// The vtoupper function converts the vowels in a word from the input file to uppercase.
// Input:  
// Output:  
{
	char ch;
	int length = 0;
	length = word.length();
	
	
	for (int i = 0; i < length; i++)
	{
		ch = word[i];
		if (ifvowel(word,length) == true)
		word[i] = toupper(ch);
	}
}

void ctolower(word&)
// The ctolower function converts the consonants in a word from the input file to lowercase.
//Input:  
//Output:  
{
	char ch = ' ';
	int length = 0;
	length = word.length();
	for (int i = 0; i < length; i++)
	{
		ch = word[i];
		if (ch != 'a' or ch != 'e' or ch != 'i' or ch != 'o' or ch != 'u' or ch != 			'A' or ch != 'E' or ch != 'I' or ch != 'O' or ch != 'U')
			word[i] = tolower(ch);
	}
}


		



