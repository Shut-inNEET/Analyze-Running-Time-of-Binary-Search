#include "searchClassType.h"

int main() 
{   
    searchClassType search; 
    vector<int> arr;
    int size; 

    // Randomly generate vector of specified size
    cout << "Enter desired size of RNG array: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        arr.push_back(search.generateRandomNumbers());
    }

    // Sort the vector
    search.bubbleSort(arr);

    // Print sorted vector
    cout << "Sorted Array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n" << endl;

    int target = search.generateRandomNumbers();

    // Recursive Binary Search
    cout << "Performing recursive binary search for " << target << endl;
    int index = search.recursiveBinarySearch(arr, target, 0, arr.size() - 1);
    if (index != -1)
        cout << "Target " << target << " found at location " << index << "\n";
    else
        cout << "Target " << target << " not found\n";
    cout << endl;

    // Iterative Binary Search
    cout << "Performing iterative binary search for " << target << endl;
    index = search.iterativeBinarySearch(arr, target);
    if (index != -1)
        cout << "Target " << target << " found at location " << index << "\n";
    else
        cout << "Target " << target << " not found\n";
    cout << endl;

    // Sequential Search 
    cout << "Performing squential search for " << target << endl;
    index = search.sequentialSearch(arr, target);
    if (index != -1)
        cout << "Target " << target << " found at location " << index << "\n";
    else
        cout << "Target " << target << " not found\n";
    cout << endl;
}
