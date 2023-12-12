#include <bits/stdc++.h> 
#define MAX 100001

using namespace std;

int main() 
{ 
    int n, dc = 0, dl = 0;
    int arr[MAX];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] % 2 == 0){
            dc++;
        }else{
            dl++;
        }
    }
    cout << dl << " " << dc << endl;
    return 0;
}

