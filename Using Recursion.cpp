// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
//banspate



#include <iostream>
#include <cstring>

// This function uses recursion to reverse a word in C.
void reversedWord (char input [], int size){
	
	// create a temperory variable (this case char reverse[] which stores reversed word.
	char reverse[size];
	int i = 0;
	int j = size;

	//basic idea of reversing the word is swapping the letters
	//the first character of the reversed word is equal to the last character of the input
	reverse[i] = input[j-1];
	
	//the last character of the input is now the first character of the reversed word
	input[j-1] = input[i];
	
	// storing the reversed word back to the input variable.
	input[i] = reverse[i];

	j = j - 2 ;
	i++;

	/**as long as the size(length) of word is greater than 0, call the function reversedWord.
	* the parameter input +1 indicates that now the function points to the second character in the string
	*say the word "bottom" initially the function reversedWord (input, size) points to the first character 'b'.
	*but after the statement reversedWord(input+1, j) now points to 'o'
	**/
	if(j >=0 ){
		
		reversedWord(input+1, j);
	}
	
}
// This is our main method that is responsible for running our program.
int main (){

	char answer[1];
	// As long as user enters Y(or any other letter accept N, this loop keeps on repeating itself
	while(answer[0] != 'N' ){
		
	//ask usr to enter a word they want to reverse
	std::cout << " Please enter a word: " ;

	char input [100];
	std::cin >> input;

	//determining the string length (input of word user enters)
	int size;
	size = strlen(input);
	std::cout << " Your word spelled backward is: " ;   

	//call the function reversed word that is defined above
	reversedWord( input , size);
	std::cout << input << std::endl;
	
	//ask the user whether they would like to continue
	std::cout << "Would you like to continue?(Y|N):" ;
	
	std::cin >> answer;
	}
	//If the user enters N, as per the condition of the while loop than it exits while loop and prints the following statement
	std::cout << " Thank you! Good Bye! \n " << std::endl;

	return 0;
}