#include <iostream>
#include <algorithm>
using namespace std;

int getnum()
{
	int number;
	cout << "Please enter a number: ";
	cin >> number;
	return number;
}


int main ()
{
	int numArr[5];
	for (int i=0; i<5; i++)
	{
		numArr[i] = getnum();
	}

	// Solving for the median
	//
	// Determining Array Length
	int ArrLength = sizeof(numArr)/sizeof(numArr[0]);


	//Sorting array in ascending order
	sort(numArr, numArr + ArrLength);
	for (int i=0; i<ArrLength; i++)
	{
		cout << numArr[i] << ' ' << endl;
	}

	// capturing median
	int median;
	median = numArr[ArrLength/2];
	
	cout << "The median is: " << median << endl;


	// determining the mean
	float mean;
	for (int i = 0; i < ArrLength; i++)
	{
		mean += numArr[i];
	}


	mean /= ArrLength;

	cout << "The Mean is: " << mean << endl;
	return 0;
}


