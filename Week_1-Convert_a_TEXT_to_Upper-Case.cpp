#include <bits/stdc++.h>
#include <cstring>
using namespace std;

void upper(string &s){
	for (int i = 0; i < s.length(); i++){
		s[i] = toupper(s[i]);
	}
}

int main() {
    string s;
    while(getline(cin, s)){
        upper(s);
        cout << s << "\n";
    }
}

