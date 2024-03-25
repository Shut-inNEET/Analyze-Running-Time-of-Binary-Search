#include "searchClassType.h"

int main() 
{

    vector<int> arr = { 21, 8, 5, 28, 15, 11, 19, 1, 9 };
    searchClassType search;

    // Sort the vector
    search.bubbleSort(arr);
    
    // Print sorted vector
    cout << "Sorted Array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n" << endl;

    int target1 = 15;
    int target2 = 17;

    // Recursive Binary Search
    cout << "Performing recursive binary search for " << target1 << endl;
    int index = search.recursiveBinarySearch(arr, target1, 0, arr.size() - 1);
    if (index != -1)
        cout << "Target " << target1 << " found at location " << index << "\n";
    else
        cout << "Target " << target1 << " not found\n";
    cout << endl;

    cout << "Performing recursive binary search for " << target2 << endl;
    index = search.recursiveBinarySearch(arr, target2, 0, arr.size() - 1);
    if (index != -1)
        cout << "Target " << target2 << " found at location " << index << "\n";
    else
        cout << "Target " << target2 << " not found, return value is " << index << "\n";
    cout << endl;

    // Iterative Binary Search
    cout << "Performing iterative binary search for " << target1 << endl;
    index = search.iterativeBinarySearch(arr, target1);
    if (index != -1)
        cout << "Target " << target1 << " found at location " << index << "\n";
    else
        cout << "Target " << target1 << " not found\n";
    cout << endl;

    cout << "Performing iterative binary search for " << target2 << endl;
    index = search.iterativeBinarySearch(arr, target2);
    if (index != -1)
        cout << "Target " << target2 << " found at location " << index << "\n";
    else
        cout << "Target " << target2 << " not found, return value is " << index << "\n";
    cout << endl;

    // Sequential Search 
    cout << "Performing squential search for " << target1 << endl;
    index = search.sequentialSearch(arr, target1);
    if (index != -1)
        cout << "Target " << target1 << " found at location " << index << "\n";
    else
        cout << "Target " << target1 << " not found\n";
    cout << endl;

    cout << "Performing squential search for " << target2 << endl;
    index = search.sequentialSearch(arr, target2);
    if (index != -1)
        cout << "Target " << target2 << " found at location " << index << "\n";
    else
        cout << "Target " << target2 << " not found, return value is " << index << "\n";
    cout << endl;
}
