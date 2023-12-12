//C/C++ 
#include <bits/stdc++.h> 
using namespace std;

int main() { 
	string date;
	int a[8] = {0,1,2,3,5,6,8,9};
	getline(cin, date);
	if (date.length()!=10) {
		cout << "INCORRECT";
		return 0;
	}
	for (int i : a){
    	if (date[i] < '0' || date[i] > '9') {
		    cout << "INCORRECT";
		    return 0;
		}
	}
	if (date[4]!='-' || date[7]!='-') {
		cout << "INCORRECT";
		return 0;
	}
	int year = stoi(date.substr(0, 4));
	int month = stoi(date.substr(5,2));
	int day = stoi(date.substr(8,2));
	if (month > 12 || month < 0 || day > 31 || day < 0) {
		cout << "INCORRECT";
		return 0;
	}
	cout << year << " " << month << " " << day << endl;
	return 0;
}

