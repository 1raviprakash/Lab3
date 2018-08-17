//include library
#include <iostream>
using namespace std;

//main function
int main()
{
int a,b,sum,substract,product,division,remainder ; //declaration
a = 7;
b = 2;
sum = a + b; // adds 2 numbers
substract = a - b; //givesthe difference
product= a * b; //gives product
division= a / b; //divides the numbers
remainder= a % b;// remainder of division
cout << "numbers are"<< a << " and " << b  << endl;
cout << "sum is" << sum << endl;
cout << "difference" << substract << endl;
cout << "product is" << product << endl;
cout << "quotient is" << division << endl;
cout << "remainder is" << remainder << endl;
return 0;
}
