#include <iostream>

using namespace std;

// EX05_01: 11.1 
void arrSize(int* size)
{
	cout << "How many numbers will you input? "; // Prompts user for array size.
	cin >> *size;
}
void arrNumbers(int* numbers, int size)
{ // Asks user for the numbers that will get read into array
	for (int*current = numbers; current < numbers + size; current++)
	{
		cout << "Please input a number: ";
		cin >> *current;
	}
}
int *allocArr(int size)
{
	int* pointArr = new int[size];
	for (int i = 0; i < size; i++)
	{
		pointArr[i] = 20; // Stores the numbers of the Array (from above)
	} 
	return pointArr;
}

double computeAvg(int numbers[], int size)
{
	double avg = 0;
	double sum = 0;
	for (int* current = numbers; current < numbers + size; current++)
	{
		sum += *current;
	}
	avg = sum / size;
	return avg;
}

int aboveAvg(int num[], int size)
{
	int numAbove = 0;

	double avg = computeAvg(num, size);
	for (int* current = num; current < num + size; current++)
	{
		if (*current > avg)
		{
			numAbove++;
		}
		cout << "Number above average: " << numAbove;
	}
	return numAbove;
}

// EX05_02: 11.3 
int* doubleCapacity(int * list, int size)
{
	int  newSize = 2 * size; // Multiplies the Array availability by 2 to double
	int* newArray = new int[newSize]; // Implements it to new size

	for (int i = 0; i < size; i++)
	{
		newArray[i] = list[i]; // Takes new number to be stored in List
	}
	return newArray;
}

// EX05_03: 11.5 
double smallestElmt(double *list, double size)
{
	double smallestElmt = list[0]; // Assumes that it starts at zero
	for (int x = 1; x < size; x++)
	{
		if (list[x] < smallestElmt)
			smallestElmt = list[x];
	}
	return smallestElmt;
}


int main()
{
	// EX05_01: 11.1
	int nums;
	arrSize(&nums);
	int* numbers = allocArr(nums);
	arrNumbers(numbers, nums);
	cout << "Average of inputted numbers: " << computeAvg(numbers, nums) << endl;
	cout << "Numbers above average are: " << aboveAvg(numbers, nums) << endl;
	delete[] numbers;
	
	// EX05_03: 11.5
	double value[8] = { 1,2,4,5,10,100,2,-22 };
	cout << smallestElmt(value, 8);
}