# Reverse-Word

Goal: Reverse the string.
Input: 
* String to be reverssed.
Output:
* Print out the reversed string.
Requirements:
* A reverse string function that helps helps reverse the user input.
1.	Ask the user for the word they want to reverse and store it in a global variable
2.	Determine the length of the word (string) user entered and store the value.
3.	Create a local variable that stores the reversed word.
4.	The basic idea of reversed word is swapping up two letters, one from the beginning and other from the end.
5.	The first character of the reversed word should be the last character of user’s word i.e. the word user wants to reverse.
6.	Also, the last letter of the user’s word should be the first letter of user’s word itself.
7.	The swapped letters are stored in the temporary local variable and so we store it back in the global variable; the first letter of the user’s word is now same as the first letter of the reversed word.
8.	Decrease the size/length of the word by two and now consider the second character in user’s input/word.
9.	Now if the size/length of the word is greater than or equal to zero go back to step 5.
10.	Print the reversed word which is now stored back in the global variable. 
11.	Once the reversed word is printed, ask the user if they still wish to continue.
12.	If yes go back to step one.
13.	Else say thank you and good bye.
