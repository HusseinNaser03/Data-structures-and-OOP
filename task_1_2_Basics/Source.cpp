#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	//quastion 1: write a c++ program that allows the user to insert an integer then print that value ?
	int n1;
	cout << "please insert an integer number : ";
	cin >> n1;
	cout << "n1= " << n1 << endl;

	//question 2: write a c++ program that value the user to insert two integers and print them to the screem ?
	int n2, n3;
	cout << "please insert two integer number : " ;
	cin >> n2 >> n3;
	cout << "n2= " << n2 << endl << "n3= " << n3 << endl;

	////question 3: write a c++ program that inputs two integer from the keyboard, and print the sum, difference, product of them ?
	int n4 , n5;
	cout << "please insert two integer : ";
	cin >> n4 >> n5;
	cout << "sum= " << n4 + n5 << endl;
	cout << "difference= " << n4 - n5 << endl;
	cout << "product= " << n4 * n5 << endl;
	if (n5 != 0)
		cout << "division= " << n4 / n5 << endl;

	////question 4: write a c++ program that accepts a character in lower case and print it in upper case ?
	char ch;
	cout << "please insert a character in lower case : ";
	cin >> ch;
	ch = ch - 32;
	cout << "the character in lower case= " << ch << endl;

	//question 5: write a c+ program that accepts a letter in upper case and prints it in lower case in two difference ways
	char ch1;
	cout << "please insert a character in upper case : ";
	cin >> ch1;
	ch1 = ch1 + 32;
	cout << "the character in lower case= " << ch1 << endl;

	//question 6: write a c++ program that inserts an integer from the keyboard then evaluates the square and cubic values for that insert value ?
	int n6;
	cout << "please insert an integer number : " ;
	cin >> n6;
	cout << "the square value= " << n6 * n6 << endl;
	cout << "the cubic value= " << n6 * n6 * n6 << endl;


	/*question 7: write a ct program, the output screen should be :
	  x      x^2        x^3
	  ********************
	  1      1         1
	  2      4         16
	  3      9         27
	  4      16        64
	  5      25        125
	  6      36        216

	*/
	int d = 1;
	cout << "x\t" << "x^2\t" << "x^3" << endl;
	while (d <= 20) {
		cout << "*";
		d++;
	}
	cout << endl;
	for (int x = 1; x <= 6; x++) {
		cout << x << "\t" << x * x << "\t" << x * x * x << endl;
	}


	return 0 ;

}