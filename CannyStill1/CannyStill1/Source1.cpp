#include <iostream>
#include <windows.h>
#include "SerialClass.h"
using namespace std;

void main() {
	Serial * Arduino = new Serial("\\\\.\\COM10");
	if (Arduino->IsConnected()){ cout << "Arduino connected" << endl; }
	
	cout << "please enter a letter ";
	char word[] = "Hello";
	char b;
	cin >> b;
	word[0] = b;
	cout << word;
	cout << sizeof(word) - 1;

	while (Arduino->IsConnected()) {


		/*cout << "Sending:" << word << endl;
		Arduino->WriteData(word, sizeof(word) - 1);
		Sleep(1000);*/
		

		/*Arduino->ReadData(word, sizeof(word) - 1);
		cout << "Received:" << word << endl;

		cout << "-------------------" << endl;
		Sleep(1000);*/

		if (word[0] == 'a')
		Arduino->WriteData(word, sizeof(word) - 1);
		Sleep(500);

		
	}
		//cout << "Sending:" << word << endl;
		//Arduino->WriteData(word, sizeof(word) - 1);

		//

		//Arduino->ReadData(word, sizeof(word) - 1);
		//cout << "Received:" << word << endl;

		//cout << "-------------------" << endl;
		//Sleep(1000);
		
	
	//return 0;
}
