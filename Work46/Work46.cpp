#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double P, S;
	int i, k;

	P = 1;
	i = 1;

	while (i <= 10) 
	{
		S = 0;
		k = 1;
		while (k <= i) 
		{
			S += 1 / k;
			k++;
		}
		P *= i + S / sqrt(S);
		i++;
	}
	cout<<"1) " << P << endl;
	
	P = 1;
	i = 1;
	do 
	{
		S = 0;
		k = 1;
		do 
		{
			S += 1 / k;
			k++;
		} while (k <= i);
		P *= i + S / sqrt(S);
		i++;
	} while (i <= 10);
	cout <<"2) "<< P << endl;

	P = 1;
	for (i = 1; i <= 10; i++) 
	{
		S = 0;
		for (k = 1; k <= 10; k++) 
		{
			S += 1 / k;
		}
		P *= i + S / sqrt(S);
	}
	cout << "3) " << P << endl;

	P = 1;
	for (i = 10; i >= 1; i--) 
	{
		S = 0;
		for (k = 10; k >= 1; k--) 
		{
			S += 1 / k;
		}
		P *= i + S / sqrt(S);
	}
	cout << "4) " << P;

	cin.get();
	return 0;
}