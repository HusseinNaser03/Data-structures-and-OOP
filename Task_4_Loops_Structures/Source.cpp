#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
using namespace std;
int main() {
	//question 1:Write a C++ program that calculates the following series, the value of n should be determined by the user
	// sum 0-n , 3x^2
	int n;
	double x = 0;
	double sum = 0;
	cout << "please insert an upper summation" << endl;
	cout << "upper summation = ";
	cin >> n;
	while (x <= n) {
		sum += 3 * x * x;
		++x;
	}
	cout << "summation = " << sum << endl;

	sum = 0; // رجعن صفرت المجموع مشان اثبت اني بقدر اشتغلها وايل لووب وفور لووب وبعطيني نفس النتيجه
	for (x = 0; x <= n; x++)
		sum += 3 * x * x;
	cout << "summation = " << sum << endl;



	//question 2:Write a C++ program that calculates the following series, the value of n should be determined by the user
	// summation (3*x-2)/(4+x) , from 2 two n
	int n1;
	double sum1 = 0;
	int x1 = 2;
	cout << "please insert upper summation" << endl;
	cout << "upper = ";
	cin >> n1;
	for (x1 = 2; x1 <= n1; x1++)
		sum1 += static_cast<double> ((3 * x1 - 2)) / (4 + x1);
	cout << "summation = " << sum1 << endl;


	//question 3:Write a C++ program that calculates the following series, the value of n should be determined by the user
	// summation 4*x^3 / 2x - 4 , from 0 to n 
	int n2;
	double sum2 = 0;
	int x2 = 0;
	cout << "please insert an upper summation" << endl;
	cout << "the upper summation = ";
	cin >> n2;
	for (x2 = 0; x2 <= n2; ++x2) {
		if (x2 == 2)
			continue;
		else
			sum2 += static_cast <double> ((4 * x2 * x2 * x2)) / (2 * x2 - 4);
	}
	cout << "summation = " << sum2 << endl;


	//question 4: Write a C*+ program that calculates the following series
	// product 3x / 5 + x , from  to 2n
	double n3;
	double x3 = 1;
	double prod = 1;
	cout << "please insert an upper" << endl;
	cout << "upper = ";
	cin >> n3;
	for (x3 = 1; x3 <= 2 * n3; ++x3)
		prod *= (3 * x3) / (5 + x3);
	cout << "product = " << prod << endl;


	//question 5: Write a C++ program that prompts the user to insert a sequence of characters and computes and prints the number of digits.
	// your insertion terminates when the user inserts the symbol (!)
	char ch;
	int count = 0;
	int count1 = 0;
	cout << "please insert a character when done enter !" << endl;
	cout << "character #" << count + 1 << " : ";
	cin >> ch;
	while (ch != '!') {
		count++;
		if (ch >= '0' && ch <= '9')
			count1++;
		cout << "character #" << count + 1 << " : ";
		cin >> ch;
	}
	cout << "total of characters = " << count << endl;
	cout << "numbers of characters = " << count1 << endl;


	//question 6: Write a C++ program that reads one integer as input ,and prints and calculates the sum of numbers from 1 to n.
	int v;
	int sum0 = 0;
	int z;
	cout << "please insert an integer number" << endl;
	cout << "integer = ";
	cin >> v;
	for (z = 1; z <= v; ++z)
		sum0 += z;
	cout << "sum0 = " << sum0 << endl;


	//question 7: Write a C++ program that reads one integer from the keyboard and prints and calculates the factorial of that inserted number :
	int s;
	int w;
	int prod0 = 1;
	cout << "please insert an integer number .. ";
	cin >> s;
	cout << "s = " << s << endl;
	for (w = s; w >= 1; w--)
		prod0 *= w;
	cout << "factorial = " << prod0 << endl;


	//question 8: Write a C++ program to print all numbers from 1 to 100.
	int s1 = 1;
	for (s1 = 1; s1 <= 100; s1++)
		cout << s1 << " ";
	cout << endl << endl;


	//question 9: Write a C++ program to print all numbers from 1 to 100 except the multiplies of 3
	int y = 1;
	for (y = 1; y <= 100; y++) {
		if (y % 3 == 0)
			continue;
		else
			cout << y << " ";
	}
	cout << endl << endl ;


	//question  10: Write a C++ program to print all numbers from 1 to 100 except the multiplies of 3, print each 5 numbers on a line .
	int q = 1;
	int count3 = 0;
	for (q = 1; q <= 100; q++) {
		if (q % 3 != 0) {
			cout << q << "  ";
			count3++;
			if (count3 == 5) {
				count3 = 0;
				cout << endl;
			}
		}
	}
	cout << endl << endl;

	//question 11:- Write a C++ program to count digits in an inserted number
	int f;
	int count4 = 0;
	cout << "please insert an integer" << endl;
	cout << "the number = ";
	cin >> f;
	while (f > 0) {
		count4++;
		f /= 10;
	}
	cout << "digit = " << count4 << endl;


	//question 12:Write a program to print factors of a positive inserted number
	int d;
	cout << "please insert an positive integer number" << endl;
	cout << "number = ";
	cin >> d;
	for (int p = 1; p <= d; ++p) {
		if (d % p == 0)
			cout << p << "  ";
	}
	cout << endl;


	//question 13:Write a C++ program to print all numbers from N to M except the multiples of 4, where N and M are read from the keyboard.
	int N;
	int M;
	cout << "please insert two integer number" << endl;
	cout << "N = ";
	cin >> N;
	cout << "M = ";
	cin >> M;
	if (N < M) {
		for (int e = N; e <= M; e++) {
			if (e % 4 != 0)
				cout << e << "  ";
		}
		cout << endl;
	}
	else {
		for (int i = M; i <= N; ++i) {
			if (i % 4 != 0)
				cout << i << "  ";
		}
		cout << endl;
	}


	//question 14:- Write a C++ program to read N integers from the keyboard and count number of evens, If count reaches 8, the loop should be terminated.
	int v1;
	int count6 = 0;
	int c1 = 0;
	cout << "please insert integer numbers" << endl;
	cout << "number #" << c1 + 1 << " = ";
	cin >> v1;
	while (true) {
		if (v1 % 2 == 0)
			count6++;
		if (count6 == 8)
			break;
		c1++;
		cout << "number #" << c1 + 1 << " = ";
		cin >> v1;
	}

	//question 15: Write a C++ program to print the following shape
	int X;
	cout << "please insert an integer number" << endl;
	cin >> X;
	for (int i = 1 ; i <= X; i++) {
		for (int e = 1; e <= i; e++) {
			cout << "*";
		}
		cout << endl;
	}


	//question 16:Write a C+ program to read a set of characters until the user insert (*) and count the number of characters inserted except vowels .
	int coun = 0 ;
	char ch2;
	cout << "please insert set of characters when done insert *" << endl;
	cin >> ch2;
	while (ch2 != '*') {
		char lower_ch2 = tolower(ch2);
		if (lower_ch2 != 'a' && lower_ch2 != 'e' && lower_ch2 != 'i' && lower_ch2 != 'o' && lower_ch2 != 'u') {
			coun++;
		}
		cin >> ch2;
	}
	cout << "numbers of characters except vowels = " << coun << endl;


	//question 17:write a c++ program that accepts 4 double values and calculate the distance between two points .
	double A1, B1, A2, B2;
	double distance;
	cout << "please insert 4 double values" << endl;
	cout << "A1 = ";
	cin >> A1;
	cout << "B1 = ";
	cin >> B1;
	cout << "A2 = ";
	cin >> A2;
	cout << "B2 = ";
	cin >> B2;
	distance = pow((pow((A2 - A1), 2) + pow((B2 - B1), 2)), 0.5);
	cout << "Distance = " << distance;


	return 0;
}