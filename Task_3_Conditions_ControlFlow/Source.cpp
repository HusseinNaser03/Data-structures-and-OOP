#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
using namespace std;
int main() {
	//question 1: Write a C++ program that inserts an integer from the keyboard then evaluates the value of y according to the following split function
	// y = x + 2 , x<0
	// y = x^2 +10 , otherwise
	int x, y;
	cout << "please insert an integer number" << endl;
	cin >> x;
	if (x < 0)
		cout << "y = " << x + 2 << endl;
	else
		cout << "y = " << x * x + 10 << endl;

	//question 2: Write a C++ program that accepts three integers from the keyboard and determines the maximum and minimum.
	int x1, x2, x3;
	cout << "please insert three integers numbers" << endl;
	cout << "x1 = ";
	cin >> x1;
	cout << "x2 = ";
	cin >> x2;
	cout << "x3 = ";
	cin >> x3;
	if (x1 == x2 && x2 == x3) {
		cout << "the numbers are equal" << endl;
	}
	else {
		int max_num = x1;
		int min_num = x1;

		if (x2 > max_num) max_num = x2;
		if (x3 > max_num) max_num = x3;

		if (x2 < min_num) min_num = x2;
		if (x3 < min_num) min_num = x3;

		cout << "Maximum number is: " << max_num << endl;
		cout << "Minimum number is: " << min_num << endl;
	}


	//question 3:Write a C++ program that accepts a person age and determines his state according to the following
	/*
	age        state
	0-10       child
	11-20      youth
	21-60      adult
	>60        senior
	*/
	int age;
	cout << "please insert tour age" << endl;
	cout << "Age : ";
	cin >> age;
	if (age >= 0 && age <= 10)
		cout << "Child" << endl;
	else if (age >= 11 && age <= 20)
		cout << "Youth" << endl;
	else if (age >= 21 && age <= 60)
		cout << "Adult" << endl;
	else if (age > 60)
		cout << "Senior" << endl;
	else
		cout << "incorrect !" << endl;


	//question 4:Write a C++ program that calculates the value of y according to the following split function:
	/*
	y1 = t^3 , t <= -2 
	y1 = t+1 , t >= 2 
	y1 = (t + 1)^2 / 2 , -2 < t < 2 
	*/
	double t, y1;
	cout << "please insert an integer number" << endl;
	cout << "t = ";
	cin >> t;
	if (t <= -2)
		cout << "y1 = t^3 = " << t * t * t << endl;
	else if (t >= 2)
		cout << "y1 = t+1 = " << t + 1 << endl;
	else
		cout << "y1 = (t+1)^2 / 2 = " << pow(t + 1, 2) / 2 << endl;


	//question 5:Write a C++ program that accepts one letter ( if the user inserts T or t asks for base and height of triangle and calculates it's area )
	// && (if the user inserts R or r asks for length and height of rectangle then calculates its area ) •
	char ch;
	cout << "program calculate area of triangle and area rectangle" << endl;
	cout << "please insert character t ot r" << endl;
	cin >> ch;
	switch (ch) {
	case 't' :
	case 'T' :
		double high;
		double base;
		cout << "please insert high and base of triangle" << endl;
		cout << "high = ";
		cin >> high;
		cout << "base = ";
		cin >> base;
		if (high > 0 && base > 0)
			cout << "the area of triangle = " << 0.5 * high * base << endl;
		else
			cout << "dimintion isn't correct" << endl;
		break;
	case 'r' :
	case 'R' :
		double length;
		double width;
		cout << "please insert length and width of rectangle" << endl;
		cout << "length = ";
		cin >> length;
		cout << "width = ";
		cin >> width;
		if (length > 0 && width > 0)
		cout << "the area of rectangle = " << length * width << endl;
		else 
			cout << "dimintion isn't correct" << endl;
		break;
	default :
		cout << "the character incorrect" << endl;
	}

	//question 6:Write a C++ program that accepts a character from the user ,then print a message shows whether the inserted letter is small or capital.
	char ch1;
	int capital;
	int small;
	cout << "please insert a character" << endl;
	cout << "ch1 = ";
	cin >> ch1;
	if (ch1 == toupper(ch1) )
		cout << "user insert capital letter" << endl;
	else
		cout << "user insert small letter" << endl;

	//question 7:Write a C++ program that accepts an integer then determines whether it's an even or odd number
	int number;
	cout << "please insert an integer number" << endl;
	cout << "number = ";
	cin >> number;
	if (number % 2 == 0)
		cout << "the number is even" << endl;
	else 
		cout << "the number is odd" << endl;


	//question 8:Write a C++ program that accepts an integer then determines whether it's one of multiplies of 5 or not.
	int number1;
	cout << "please insert an integer number" << endl;
	cout << "number1 = ";
	cin >> number1;
	if (number1 % 5 == 0)
		cout << "the number is multiplies of 5" << endl;
	else 
		cout << "the number is not multiplies of 5" << endl;


	//question 9:write a c++ program that accepts two integers from the keyboard , then prints sum,difference,product,division to the screen
	// in division if the denominator equal zero print an error massage .
	int  n1, n2;
	cout << "please insert two integer number" << endl;
	cout << "n1 = ";
	cin >>  n1;
	cout << "n2 = ";
	cin >> n2;
	cout << "n1 + n2 = " << n1 + n2 << endl;
	cout << "n1 - n2 = " << n1 - n2 << endl;
	cout << "n1 x n2 = " << n1 * n2 << endl; 
	/*cout << "n1 / n2 = ";*/
	if (n2 == 0)
		cout << "error !..n1/n2 the denominator equal zero" << endl;
	else
		cout << "n1 / n2 = " << static_cast <double> (n1) / n2 << endl;


	//question 10:Write a C++ program that accepts two integers and one character.. if the character (+) sum is printed..if (- ) difference is printed...
	// if (* ) product is printed . if (%) remainder is printed.. if (/ ) division is printed ( be careful... if denominator =0 prints an error message)
	int a, b;
	char c;
	cout << "please insert two integer numbers" << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "please insert one character arithmetic operators (+,-,*,%,/)" << endl;
	cout << "character = ";
	cin >> c;

	if (c == '+')
		cout << "sum = " << a + b << endl;
	else if (c == '-')
		cout << "difference = " << a - b << endl;
	else if (c == '*')
		cout << "product = " << a * b << endl;
	else if (c == '%')
		cout << "modules = " << a % b << endl;
	else if (c == '/')
		if (b != 0)
			cout << "division = " << static_cast <double> (a) / b << endl;
		else
			cout << "division error because denominator b equal zero" << endl;
	else
		cout << "the character not correct" << endl;



	return 0;
}