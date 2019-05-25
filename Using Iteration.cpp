#include <iostream>
#include <cstring>

using namespace std;

void reversedWord (char input [], int size){
	int i;
	cout << " Your word spelled backward is: " << endl;

	for( i = size; i >= 0 ; i-- )
	{
		cout << input[i];
	}
	
}

int main (){

	char answer[1];
	do{
	cout << " Please enter a word: " << endl;

	char input [100];
	cin >> input ;

	int size;
	size = strlen(input);

	reversedWord( input , size);
	cout << "\n " << endl;
	

	cout << "Would you like to continue?(Y|N):" << endl;
	
	cin >> answer;
	}

	while(answer[0] == 'Y' );	

	if ( answer[0] == 'Y' ){
	
	int main();

	}else if( answer[0] == 'N' ){
	
	cout << " Thank you! Good Bye! \n " << endl;

	}else{

	cout << " I don't know what to do\n " << endl;
	
	}
	return 0;
}