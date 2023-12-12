// //C++ 
#include <bits/stdc++.h> 
#define MAX 100001
using namespace std;

int substrPosition(string str, string sub_str, int pos[]) {
    int dx = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str.substr(i, sub_str.length()) == sub_str) {
            pos[dx] = i; 
            dx++;
        }
    }
    return dx;
}
int main() {
    string sub_str;
    getline(cin, sub_str, '\n');
    string strrep;
    getline(cin, strrep, '\n');
    string str;
    getline(cin, str, '\n');
    int pos[MAX];
    int index = substrPosition(str, sub_str, pos);
    for (int i = index - 1; i >= 0; i--){
        str.replace(pos[i], sub_str.length(), strrep);
    }
    cout << str << endl;
}

