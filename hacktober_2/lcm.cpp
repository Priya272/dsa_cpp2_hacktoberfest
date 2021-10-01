// C++ program to find LCM of two numbers
#include <iostream>
using namespace std;

// Recursive function to return gcd of a and b
int gcd(long long int a, long long int b)
{
if (b == 0)
	return a;
return gcd(b, a % b);
}

// Function to return LCM of two numbers
int lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}

int main()
{
	int a = 10, b = 12;
	cout <<"LCM of " << a << " and " << b << " is " << lcm(a, b);
	return 0;
}
