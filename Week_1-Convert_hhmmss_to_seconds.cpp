//C/C++ 
#include <bits/stdc++.h> 
using namespace std;

int main() { 
	string time;
	int a[6] = {0,1,3,4,6,7};
	getline(cin, time);
	if (time.length()!=8) {
		cout << "INCORRECT";
		return 0;
	}
	for (int i : a)	{
	    if (time[i] < '0' || time[i] > '9') {
		    cout << "INCORRECT";
		    return 0;
	    }
	}
	if (time[2]!=':' || time[5]!=':') {
		cout << "INCORRECT";
		return 0;
	}
	int hour = stoi(time.substr(0, 2)), min = stoi(time.substr(3,2)), sec = stoi(time.substr(6,2));
	if (hour > 23 || min > 59 || sec > 59 || hour < 0 || min < 0 || sec < 0) {
		cout << "INCORRECT";
		return 0;
	}
	cout << hour*3600 + min*60 + sec;
	return 0;
}

