#include <iostream>
using namespace std;

int main(){
	int randNum = 255;
	cout << showpos << dec << randNum << endl
		 << oct << randNum << endl
		 << hex << uppercase << randNum << endl;

		 //all manipulators for for the next possible output
		 // cin >> x; for one group like "546" or "sdfas" not "sdfsd sdfsdf"
		 //getline(cin, x); for entire sentenace like "sfsdfsd dsfsd", getline(cin, x, '.') with a delimiting character
		 //cin.get(c); for next char even if its a white space //cin looks for next non-white space
}	