// write code here 
#include <iostream>
using namespace std;
int main()
{
	int num = 1, pre_num = 0, sum, n;
	do
	{
		cout << "Enter number of terms 'n'of Fibonacci series: ";
		cin >> n;
		cout << "Fibonacci series: ";
		for (int i = 0; i < n; i++)
		{
			sum = num + pre_num;
			pre_num = num;
			num = sum;
			cout << num << " ";
		}
	return 0;
}
