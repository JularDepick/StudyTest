#include <bits/stdc++.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

#define n 60

int main() {
	system("color F9");
	string s;
	cin >> s;
	system("cls");
	for (int i = n; ; i--) {
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		for (int  j = 0; j < i; j++) {
			cout << " ";
		}
		cout << s;
		if (i == 10) {
			i = n;
		}
		Sleep(50);
		system("cls");
	}


	return 0;
}
