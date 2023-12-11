#include <bits/stdc++.h> 
using namespace std;

double old_price(int n){
	if (n<=50) return n*1728;
	else if (n<=100) return 86400 + (n-50)*1786;
	else if (n<=200) return 175700 + (n-100)*2074;
	else if (n<=300) return 383100 + (n-200)*2612;
	else if (n<=400) return 644300 + (n-300)*2919;
	else return 936200 + (n-400)*3015;
}

double new_price(int n){
	if (n<=100) return n*1728;
	else if (n<=200) return 172800 + (n-100)*2074;
	else if (n<=400) return 380200 + (n-200)*2612;
	else if (n<=700) return 902600 + (n-400)*3111;
	else return 1835900 + (n-700)*3457;
}

int main() 
{ 
    int n;
    cin >> n;
    cout << fixed << setprecision(2) << (new_price(n)-old_price(n))*1.1 << endl;
    return 0;
}

