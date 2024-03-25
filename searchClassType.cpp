#include "searchClassType.h"

int searchClassType::recursiveBinarySearch(const vector<int>& arr, int target, int low, int high)
{
	if (low <= high)
	{
		int mid = low + (high - low) / 2;

		if (arr[mid] == target)
		{
			return mid; // Target found
		}
		else if (arr[mid] < target)
		{
			return recursiveBinarySearch(arr, target, mid + 1, high);
		}
		else
		{
			return recursiveBinarySearch(arr, target, low, mid - 1);
		}
	}
	else
	{
		return -1; // Target not found
	}
}

int searchClassType::iterativeBinarySearch(const vector<int>& arr, int target)
{
	int low = 0;
	int high = arr.size() - 1;

	while (low <= high)
	{
		int mid = low + (high - low) / 2;

		if (arr[mid] == target)
		{
			return mid; // Target found
		}
		else if (arr[mid] < target)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return -1; // Target not found
}

int searchClassType::sequentialSearch(const vector<int>& arr, int target)
{
	for (int i = 0; i < arr.size(); ++i)
	{
		if (arr[i] == target) 
		{
			return i; // Target found at index i
		}
	}
	return -1; //Target not found
}

void searchClassType::bubbleSort(vector<int>& arr)
{
	int length = arr.size();

	for (int iter = 1; iter < length; iter++)
	{
		for (int i = 0; i < length - iter; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
			}
		}
	}
}

int searchClassType::generateRandomNumbers()
{
	// Creates a random number generator using the Mersenne Twister engine
	mt19937 rng(random_device{}());

	// Defines a range for random integers (inclusive)
	uniform_int_distribution<int> distribution(1, 100);

	// Generate random numbers and populate array
	int randomNumber = distribution(rng);
	
	return randomNumber;
}