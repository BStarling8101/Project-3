// Project 3
#include <iostream>

using namespace std;

template <class T> 
void populate_array(T arr[], int size)
{
	for (int i=0; i<size; i++)
	{
		cout << "Please enter an integer: ";
		cin >> arr[i];
	}
}

template <class T> 
void display_array(T arr[], int size)
{
	cout << "The elements of the array are: ";
	for (int i=0; i<size; i++)
	{
		cout << arr[i];
		
		// Check if we're at the end of the array, 
		// if so, output a comma
		// otherwise, new line
		if (i!=size-1)
		{
			cout << ", ";
		}
		else
		{
			cout << "\n";  
		}

	}
	
}

template <class T> 
void invert_array(T arr[], int size)
{

}

template <class T> 
T max_element(T arr[], int size)
{
	return 0;
}

template <class T> 
T min_element(T arr[], int size)
{
	return 0;
}

template <class T> 
T sum_array(T arr[], int size)
{
	int sum=0;
	cout << "The sum of the elements: ";
	for (int i=0; i<size; i++)
	{
		sum+=arr[i];
	}
	cout << sum << endl;
	return 0;          //exits program on doubles without output of array and sum of array. 

}

int main()
{
	int size = 5;
	
	cout << "We will play around with two arrays, first with integers and then with doubles\n\n";

	int int_array[5];
	float float_array[5];

	/* 
	 *	Integers
	 */

	populate_array<int>(int_array, size);
	display_array<int>(int_array, size);
	invert_array<int>(int_array, size);
	max_element<int>(int_array, size);
	min_element<int>(int_array, size);
	sum_array<int>(int_array, size);

	/*
	 *	Doubles
	 */

	populate_array<float>(float_array, size);
	display_array<float>(float_array, size);
	invert_array<float>(float_array, size);
	max_element<float>(float_array, size);
	min_element<float>(float_array, size);
	sum_array<float>(float_array, size);

}