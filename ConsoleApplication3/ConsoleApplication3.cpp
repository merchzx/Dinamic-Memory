// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <random>
int main()
{
	/*int s;
	cout << "Enter size ->";
	cin >> s;
	int* arr = new int[s];
	srand(time(0));
	for (int i = 0; i < s; i++) {
		arr[i] = rand()%40;
	}

	for (int i = 0; i < s; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;


	int ss=0;
	for (int i = 0; i < s; i++) {
		if (arr[i] % 2 != 0) {
			ss++;
		}
	}

	int *ptr2=nullptr;

	if(ss>0)
	{
		ptr2 = new int[ss];
	}
	else {
		cout << "UNLUCKY";
	}

	for (int i = 0,j=0; i < s; i++) {
		if (arr[i] % 2 != 0) {
			ptr2[j]=arr[i];
			j++;
		}
	}

	cout << "Size 2 ->" << ss<<endl;
	for (int i = 0; i < ss; i++) {
		cout << ptr2[i] << "\t";
	}
	cout << endl;

	delete[]arr;
	delete[]ptr2;*/



	int* arrP = nullptr;
	int* arrZ = nullptr;
	int* arrM = nullptr;
	int s,zer=0,pl=0,minn=0;
	cout << "Enter size ->";
	cin >> s;
	int* arr = new int[s];
	for (int i = 0; i < s; i++) {
		arr[i] = rand() % 41 - 20;
		cout << arr[i] << "\t";
	}

	for (int i = 0; i < s; i++) {
		if (arr[i] == 0) {
			zer++;
		}
		else if (arr[i]>0) {
			pl++;
		}
		else if (arr[i] < 0) {
			minn++;
		}
	}

	arrP = new int[pl];
	arrM = new int[minn];
	arrZ = new int[zer];

	for (int i = 0, j = 0; i < s; i++) {
		if (arr[i]>0) {
			arrP[j] = arr[i];
			j++;
		}
	}

	for (int i = 0, j = 0; i < s; i++) {
		if (arr[i]<0) {
			arrM[j] = arr[i];
			j++;
		}
	}

	for (int i = 0, j = 0; i < s; i++) {
		if (arr[i]==0) {
			arrZ[j] = arr[i];
			j++;
		}
	}
	cout << endl;

	cout << "Plus massive:" << endl;
	for (int i = 0; i < pl; i++) {
		cout << arrP[i] << "\t";
	}
	cout << endl;

	cout << "Minus massive:" << endl;
	for (int i = 0; i < minn; i++) {
		cout << arrM[i] << "\t";
	}
	cout << endl;

	cout << "Zero massive:" << endl;
	for (int i = 0; i < zer; i++) {
		cout << arrZ[i] << "\t";
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
