#include <iostream>
using namespace std;

void rainbow();

int main(){
//	cout << sizeof(bool) <<endl;
	rainbow();
}

void rainbow(){
	int counter = 0;
	bool identity = 1;

	while(1){
		string line(counter,'-');
		cout << line << endl;

		if (identity){
			counter++;
			if(counter == 140)
				identity = 0;

		}else if(counter != 1){
			counter--;

		}else{
			identity = 1;
		}

	}
}