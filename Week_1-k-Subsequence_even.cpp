//C++ 
#include <bits/stdc++.h> 
#define MAX 100001

using namespace std;

int main() 
{ 
    int arr[MAX], n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0, dem = 0, count = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
        count++;
        if (count == k){
            if (sum % 2 == 0){
                dem++;
            }
            sum -= arr[i-k+1];
            count--;
        }
    }
    cout << dem << endl;
}

