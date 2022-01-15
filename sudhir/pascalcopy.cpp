#include <iostream>
#include <conio.h>

using namespace std;

void printPascal(int n)
{

	for (int i = 1; i <= n; i++)
	{
		// used to represent C(line, i) 
		int C = 1; 
		int a=n-i+1;
		for (int j = 1; j < (a); j++){
			cout << " ";
		}

		for (int j = 1; j <= i; j++)
		{

			// The first value in a line is always 1 
			cout << C << " ";
			C = C * (i - j) / j;
		}

		cout << "\n";
	}
}

// Execution
int main()
{
	int n=6;
	printPascal(n);

		// Pause console
	_getch();

	return 0;
}
