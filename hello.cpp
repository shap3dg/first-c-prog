#include <cstdlib>
#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string yourName;
	cout<<"Please type your name ";
	cin>>yourName;
	
	cout<<endl<< "Hello, "<<yourName<<endl<<endl;
	cout<<"Press c and then Enter to continue...";
	
	char justWait;
	cin>>justWait;
	
	
	
	return (EXIT_SUCCESS);
}
