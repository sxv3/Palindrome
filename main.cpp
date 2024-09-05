#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <bits/stdc++.h>
#include <fstream>

//Palindrome, a simple text based program that tells the user if they inputted a palindrome
//Created by Tai Wong
//9/5/24

using namespace std;

int main() {
  //define variables
  
  char input[80];

  while (true) {
    //asks user for input and gets input
    cout << "Input something" << std::endl;
    cin.getline(input, 80);

    //checks if input is greaterthan 80 characters
    if (strlen(input) > 80) {
      cout << "Invalid! Input is greater than 80 characters" << std::endl;
    } else {
      //defines a char array to store characters
      char fixedInput[80];
      int counter = 0;

      //gets rid of non alpha characters
      for (int i=0; i<strlen(input); i++) {
	if (isalpha(input[i])) {
	  
	  fixedInput[counter] = tolower(input[i]);
	  counter += 1;
	  
	}    
      }

      fixedInput[counter] = '\0';

      //palindrome detection
      int palindromeCount = 0;

      //checks if the nth character of the char array is the same as the nth character of the char array starting at the end
      for (int n=0; n<strlen(fixedInput); n++) {
	if(fixedInput[n] == fixedInput[(strlen(fixedInput)-1)-n]) {
	  palindromeCount += 1;
	}  
      }
      //tells user if palindrome or not
      if(palindromeCount == strlen(fixedInput)) {
	cout << "Palindrome" << std::endl;
      } else {
	cout << "Not a Palindrome" << std::endl;
      }
   
    }  
    
  }
  
}
