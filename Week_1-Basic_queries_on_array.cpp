//C/C++ 
#include <bits/stdc++.h> 
#define MAX 10001

using namespace std;

int get_i (string s) {
	int a;
	int i = 17;
	while (s[i]!=' ') i++;
	a = stoi(s.substr(17,i-17));
	return a;
	}
int get_j (string s) {
	int a;
	int i = s.length();
	while (s[i]!=' ') i--;
	a = stoi(s.substr(i+1, s.length()-i));
	return a;
	}
	
int max(int i, int j, int *a) {
	int m = a[i-1];
	for (int k = i-1; k < j; k++) if (m < a[k]) m = a[k];
	return m;
	}
int min(int n, int *a) {
	int m = a[0];
	for (int i = 1; i < n; i++) if (m > a[i]) m = a[i];
	return m;
	}
	
int sum(int n, int *a) {
	int s = 0;
	for (int i = 0; i < n; i++) s+= a[i];
	return s;
	}

int main() { 
	int n;
	cin >> n;
	int a[MAX];
	for (int i = 0; i < n; i++) cin >> a[i];
	cin.ignore();
	string s;
	getline(cin, s);
	while (s!="***") {
		getline (cin,s);
		if (s == "find-max") cout << max(1, n, a) << endl;
		if (s == "find-min") cout << min(n, a) << endl;
		else if (s == "sum") cout << sum(n, a) << endl;
		else if (s.substr(0, 16) == "find-max-segment") {
				cout << max(get_i(s), get_j(s) ,a) << endl;
				};
		}
	
	return 0;
}

