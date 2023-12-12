> # **Làm quen với GitHub và báo cáo Project1-Week1**

> ## Làm quen với GitHub

> ### GitHub là gì ?

> ## Project 1 - Week 1

> ### Problem: Week 1 - Sum Array
    Description
    Given a sequence of integers a1, a2, ..., an. Compute the sum Q of elements of this sequence.
    
    Input
    Line 1: contains n (1 <= n <= 1000000)
    Line 2: contains a1, a2, ..., an (-10000 <= ai <= 10000)
    Output
    Write the value of Q
    
    Example:
    Input
    4
    3 2 5 4
    Output
    14
    
    Source code:
    ```cpp
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
    ```
