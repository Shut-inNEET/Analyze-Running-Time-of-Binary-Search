#include <iostream>
#include <vector>
#include <random>

using namespace std;

class searchClassType
{
public:
	// Performs recursive binary search for an array 
	// Precontions: arr must be sorted
	//				target must be present in arr
	//				low and high must be valid indices into arr
	// Postconditions: Returns index of target in arr if found
	//				   Returns -1 if target not found
	int recursiveBinarySearch(const vector<int>&, int, int, int);

	// Performs iterative binary search for an array
	// Precontions: arr must be sorted
	//				target must be present in arr
	// Postconditions: Returns index of target in arr if found
	//				   Returns -1 if target not found
	int iterativeBinarySearch(const vector<int>&, int);

	// Performs sequential search for an array
	// Precontions: target must be present in arr
	// Postconditions: Returns index of target in arr if found
	//				   Returns -1 if target not found
	int sequentialSearch(const vector<int>&, int);

	// Performs bubble sort method for an array
	// Preconditions: arr is an unsorted vector of ints
	// Postconditions: Elements of arr are sorted in ascending order
	void bubbleSort(vector<int>&);

	// Generates a random int between 0 and 100
	// Precontions: none
	// Postconditions: Returns a random int between 0 and 100
	int generateRandomNumbers();
};