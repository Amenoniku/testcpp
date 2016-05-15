// CppLearn.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char hello[] = "Hello world";
	int length = strlen(hello),
		temp, i, j;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = hello[i];
		hello[i] = hello[j];
		hello[j] = temp;
	}
	cout << hello << endl;
	int pop1 = 4789426,
		pop2 = 274124,
		pop3 = 9761;
	cout << setw(9) << "City " << setw(12) << "Pop." << endl
		<< setw(9) << "Moscow" << setw(12) << pop1 << endl
		<< setw(9) << "Kirow" << setw(12) << pop2 << endl
		<< setw(9) << "Ugrumovk" << setw(12) << pop3 << endl;
	system("PAUSE");
	return 0;
}

