> # **Làm quen với GitHub và báo cáo Project1-Week1**

> ## Làm quen với GitHub

> ### GitHub là gì ?

> ## Project 1 - Week 1

> ### Problem: Week 1 - Sum Array
 #### Description:
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
    
 #### Source code:
    
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

> ### Problem: Week 1 - List sequence of integer having 3 digits divisible by n
#### Description: 
    Given a positive integer n, find all integer having 3 digits which is divisible by n.
    Input
    Line 1: contains a positive integer n (1 <= n <= 999)
    Output
    Write the sequence of numbers found (elements are separated by a SPACE character)
    
    Example
    Input 
    200
    
    Output 
    200 400 600 800

#### Source code: 
    #include <bits/stdc++.h> 

    using namespace std;
    
    int main() 
    { 
    	int n;
    	cin >> n;
    	for(int i = 100; i < 1000; i++){
    	    if ( i % n == 0 ){
    	        cout << i << " ";
    	    }
    	}
    	cout << endl;
    }

> ### Problem: Week 1 - So sánh chênh lệch giá điện theo đề xuất mới của EVN
#### Description:
    Hiện tại giá điện đang được tính theo bậc thang gồm 6 mức (mức điều chỉnh từ 04/05/2023), với giá thấp nhất (bậc 1) là 1.728VND và giá bậc cao nhất là 3.015 VND. Tuy nhiên EVN đang đề xuất một cách tính giá điện bậc thang mới chỉ gồm 5 mức như hinh dưới, giá thấp nhất (bậc 1) khoảng 1.728 đồng một kWh và cao nhất (bậc 5) là 3.457 đồng một kWh. 
    
    Bậc	Biểu giá hiện hành	Phương án 5 bậc
      	Mức sử dụng	Giá (*)	Mức sử dụng	Giá
    1	0-50 kWh	1.728	0-100 kWh	1.728
    2	51-100 kWh	1.786	101-200 kWh	2.074
    3	101-200 kWh	2.074	201-400 kWh	2.612
    4	201-300 kWh	2.612	401-700 kWh	3.111
    5	301-400 kWh	2.919	701 kWh trở lên	3.457
    6  	401 kWh trở lên	3.015		
    (*) Giá chưa bao gồm thuế VAT
    
    Hãy xây dựng chương trình nhập vào số kwh điện của một hộ tiêu thụ và so sánh xem theo bảng giá mới đang lấy ý kiến thì tiền điện tiêu thụ của hộ đó sẽ tăng thêm hay giảm đi bao nhiêu.
    
    INPUT: là số kwh điện tiêu thụ của hộ (là số nguyên)
    OUTPUT: là chênh lệch giữa giá theo đề xuất và giá theo mô hình bậc thang 6 mức đang được áp dụng.
    
    VAT sẽ được lấy là 10%, và kết quả in ra sẽ lấy tới 2 chữ số thập phân
    
    EXAMPLE 
    INPUT
    540
    OUTPUT
    -22176.00
    
    INPUT
    70
    OUTPUT
    -1276.00

#### Source code:
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
    
> ### Problem: Week 1 - Convert a TEXT to Upper-Case
#### Description:
    Given a TEXT, write a program that converts the TEXT to upper-case. 
    
    Input
    The TEXT
    
    Output
    The TEXT in which characters are converted into upper-case
    
    Example 
    Input 
    Hello John,
    How are you?
    
    Bye,
    
    Output 
    HELLO JOHN,
    HOW ARE YOU?
    
    BYE, 

#### Source code:
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

    
