#include<iostream>
using namespace std;

int main()
{
	int number_of_bottles = 99;
	while (number_of_bottles > 2) 
	{
		cout << number_of_bottles << " bottles of beer on the wall, "<< number_of_bottles << " bottles of beer.\n";
		--number_of_bottles;
		cout << "Take one down, pass it around. " << number_of_bottles << " bottles of beer on the wall.\n\n";
	}
	// lyrics adjusted here at the end to make "bottles" singular, to change wording to "no more" when at 0, and to reset counter
	cout << number_of_bottles << " bottles of beer on the wall, "<< number_of_bottles << " bottles of beer.\n";
		--number_of_bottles;
	cout << "Take one down, pass it around. " << number_of_bottles << " bottle of beer on the wall.\n\n";
		
	cout << number_of_bottles << " bottle of beer on the wall, "<< number_of_bottles << " bottle of beer.\n";
		--number_of_bottles;
	cout << "Take one down, pass it around. No more bottles of beer on the wall.\n\n";
	
	cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
	number_of_bottles = 99;
	cout << "Go to the store, buy some more. " << number_of_bottles << " bottles of beer on the wall.";
	
	return 0;
}