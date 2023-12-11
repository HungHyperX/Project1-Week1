#include <bits/stdc++.h> 
#define MAX 1000000

using namespace std;

int main() 
{ 
	int arr[MAX], n;
	long sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
		sum += arr[i];
	}
	cout << sum << endl;
}
