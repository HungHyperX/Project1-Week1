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

> ### Problem: Week 1 - Extract Year, Month, Date from a String YYYY-MM-DD
#### Description:
    Given a date which is a string under the format YYYY-MM-DD (in which YYYY is the year, MM is the month (the month í from 1 to 12), and DD is the date (the date is from 1 to 31)). Extract the year, month and date.
    Input
    Line 1: contains a string s  
    Output
    if s is not under the format YYYY-MM-DD, then write INCORRECT. Otherwise, write year, month, and date separated by a SPACE character
    
    Example
    Input
    2023-10-04
    Output
    2023 10 4
    
    
    Input
    2023-10-4
    Output
    INCORRECT 
    
    Input
    2023-10 04
    Output
    INCORRECT


#### Source code:
    //C/C++ 
    #include <bits/stdc++.h> 
    using namespace std;
    
    int main() { 
    	string date;
    	int a[8] = {0,1,2,3,5,6,8,9};
    	getline(cin, date);
    	if (date.length()!=10) {
    		cout << "INCORRECT";
    		return 0;
    	}
    	for (int i : a){
        	if (date[i] < '0' || date[i] > '9') {
    		    cout << "INCORRECT";
    		    return 0;
    		}
    	}
    	if (date[4]!='-' || date[7]!='-') {
    		cout << "INCORRECT";
    		return 0;
    	}
    	int year = stoi(date.substr(0, 4));
    	int month = stoi(date.substr(5,2));
    	int day = stoi(date.substr(8,2));
    	if (month > 12 || month < 0 || day > 31 || day < 0) {
    		cout << "INCORRECT";
    		return 0;
    	}
    	cout << year << " " << month << " " << day << endl;
    	return 0;
    }

> ### Problem: Week 1 - List all numbers from 1 to n and its squares
#### Description:
    Given an integer n, print numbers from 1 to n and its squares.
    Input
    Line 1: contains a positive integer n (1 <= n <= 100)
    Output
    Each line i (i = 1,...,n): contains i and i^2 (elements are separated by one SPACE character)
    
    Example
    Input
    3
    Output
    1 1
    2 4
    3 9

#### Source code:    
    #include <bits/stdc++.h> 
    using namespace std;
    
    int main() 
    { 
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++){
            cout << i << " " << i * i << "\n";
        }
        return 0;
    }

> ### Problem: Week 1 - Count odd and even number from a sequence
#### Description:
    Given a sequence of integer a1, a2, ..., an. Count the number of odd elements and even elements of the sequence.
    Input
    Line 1: contains a positive integer n (1 <= n <= 100000)
    Line 2: contains a1, a2, ..., an. (1 <= ai <= 1000000)
    Output
    Write the number of odd elements and the number of even elements (separated by a SPACE character)
    
    Example 
    Input 
    6
    2 3 4 3 7 1
    Output 
    4 2
    
#### Source code:
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

> ### Problem: Week 1 - Add Subtract Multiplication Division of A and B
#### Description:
    Given 2 integers a and b. Compute a+b, a-b, a*b, a/b.
    Input
    Line 1 contains 2 integers a and b (1 <= a,b <= 1000)
    Output
    Write a+b, a-b, a*b, a/b  (4 integers are separated by a SPACE characters)
    
    Example
    Input
    9 4
    
    Output 
    13 5 36 2
    
#### Source code:
    //C++ 
    #include <bits/stdc++.h> 
    
    using namespace std;
    
    int main() 
    { 
        int a, b;
        cin >> a >> b;
        cout << a + b << " " << a - b << " " << a * b << " " << a / b << endl;
        return 0;
    }

> ### Problem: Week 1 - Convert hh:mm:ss to seconds
#### Description
    Given a time moment which is a string under the format hh:mm:ss (in which hh (0 <= hh <= 23) is the hour, mm (0 <= mm <= 59) is the minute, and ss (0 <= ss <= 59) is the second). Convert this time moment in seconds (result = hh*3600 + mm*60 + ss).
    Input
    Line 1: contains a string s representing the time moment.  
    Output
    if s is not under the format hh:mm:ss, then write INCORRECT. Otherwise, write value converted.
    
    Example
    Input
    13:05:26
    
    Output
    47126
    
    
    Input
    13:05:6
    
    Output
    INCORRECT 
    
    Input
    13:05 26
    
    Output
    INCORRECT

#### Source code    
    //C/C++ 
    #include <bits/stdc++.h> 
    using namespace std;
    
    int main() { 
    	string time;
    	int a[6] = {0,1,3,4,6,7};
    	getline(cin, time);
    	if (time.length()!=8) {
    		cout << "INCORRECT";
    		return 0;
    	}
    	for (int i : a)	{
    	    if (time[i] < '0' || time[i] > '9') {
    		    cout << "INCORRECT";
    		    return 0;
    	    }
    	}
    	if (time[2]!=':' || time[5]!=':') {
    		cout << "INCORRECT";
    		return 0;
    	}
    	int hour = stoi(time.substr(0, 2)), min = stoi(time.substr(3,2)), sec = stoi(time.substr(6,2));
    	if (hour > 23 || min > 59 || sec > 59 || hour < 0 || min < 0 || sec < 0) {
    		cout << "INCORRECT";
    		return 0;
    	}
    	cout << hour*3600 + min*60 + sec;
    	return 0;
    }

> ### Problem: Week 1 - Basic queries on array
#### Description:
    Given a sequence of integers a1, a2, ..., an. Perform a sequence of queries over this sequence including:
    find-max: return the maximum element of the given sequence
    find-min: return the minimum element of the given sequence 
    sum: return the sum of the elements of the given sequence 
    find-max-segment i j: return the maximum element of the subsequence from index i to index j (i <= j)
    
    Input
    The first block contains the information about the given sequence with the following format:
    Line 1: contains a positive integer n (1 <= n <= 10000)
    Line 2: contains n integers a1, a2, ..., an (-1000 <= ai <= 1000)
    The first block is terminated by a character *
    The second block contains a sequence of queries defined above, each query is in a line. The second block is terminated a 3 characters ***
    
    Output
    Write the result of each query in a corresponding line
     
    Example
    Input
    5
    1 4 3 2 5
    *
    find-max
    find-min
    find-max-segment 1 3
    find-max-segment 2 5
    sum
    ***
    
    Output
    5
    1
    4
    5
    15

#### Source code:
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

> ### Problem: Week 1 - k-Subsequence even
#### Description
    Given a sequence of integers a1, a2, . . ., an. A k-subsequence is define to be a sequence of k consecutive elements: ai, ai+1, . . ., ai+k-1. The weight of a k-subsequence is the sum of its elements.
    Given positive integers k and m. Compute the number Q of k-subsequences such that the weight is even.
    Input
    Line 1: contains 2 positive integers n, k (1 <= n <= 100000, 1 <= k <= n/2)
    Line 2: contains a1, a2, . . ., an. (1 <= ai <= 10000)
    Output
    Write the value Q
    Example
    Input
    6  3
    2 4 5 1 1 2 
    Output
    2
#### Source code
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

> ### Problem: Week 1 - Count words
#### Description
    Given a Text, write a prorgam to count the number Q of words (ignore characters SPACE, TAB, LineBreak) of this Text
    
    Input
    The Text
    
    Output
    Write the number Q of words
    
    Example
    Input
    Hanoi University Of Science and Technology
    School of Information and Communication Technology
    
    
    Output
    12

#### Source code
    #include <bits/stdc++.h>
    using namespace std;
    
    int main() {
        string s;
        int ans = 0;
        while(cin >> s) ans++;
        cout << ans;
    }

Problem: Week 1 - Text Replacement
Description
Cho văn bản T và 2 mẫu P1, P2 đều là các xâu ký tự (không chứa ký tự xuống dòng, độ dài không vượt quá 1000). Hãy thay thế các xâu P1 trong T bằng xâu P2.
Dữ liệu
· Dòng 1: xâu P1
· Dòng 2: xâu P2
· Dòng 3: văn bản T
Kết quả:
· Ghi văn bản T sau khi thay thế
Ví dụ
Dữ liệu
AI
Artificial Intelligence
Recently, AI is a key technology. AI enable efficient operations in many fields.
Kết quả
Recently, Artificial Intelligence is a key technology. Artificial Intelligence enable efficient operations in many fields.
Source code
