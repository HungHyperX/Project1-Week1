//C++ 
#include <bits/stdc++.h> 

using namespace std;

int main() 
{ 
    int a, b ,c;
    cin >> a >> b >> c;
    long delta = b*b - 4*a*c;
    if (delta < 0) {
        cout << "NO SOLUTION" << "\n";
    }else if (delta == 0){
        cout << fixed << setprecision(2) << (double)(-b) / 2/ a << "\n";
    }else{
        cout << fixed << setprecision(2) << (double)(-b - sqrt(delta))/2/a << " " << (-b + sqrt(delta))/2/a << "\n";
    }
}

