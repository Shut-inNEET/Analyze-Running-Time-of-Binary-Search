#include "searchClassType.h"
#include <chrono>

int main() 
{   
    searchClassType search; 
    vector<int> arr;
    int size; 

    double SumRBS = 0; 
    double SumIBS = 0;
    double SumSeqS = 0;

    int loopCount = 1;
    
    cout << "Enter desired size of RNG array: ";
    cin >> size;

    // Repeat 10 times
    for (int i = 0; i < 10; i++)
    {
        // Keep track of loop
        cout << "Loop: " << loopCount << endl;
        loopCount++;

        // Randomly generate vector of specified size
        for (int i = 0; i < size; i++)
        {
            arr.push_back(search.generateRandomNumbers());
        }

        // Sort the vector
        search.bubbleSort(arr);

        // Generate target to find in vector
        int target = search.generateRandomNumbers();

        // Start the clock
        auto start_time = chrono::high_resolution_clock::now();

        // Recursive Binary Search
        cout << "Performing recursive binary search for " << target << endl;
        int index = search.recursiveBinarySearch(arr, target, 0, arr.size() - 1);
        if (index != -1)
            cout << "Target " << target << " found at location " << index << "\n";
        else
            cout << "Target " << target << " not found\n";
        cout << endl;

        // Stop the clock
        auto end_time = chrono::high_resolution_clock::now();

        // Calculate duration in microseconds
        auto durationRBS = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

        // Add up the time of all RBS
        SumRBS += (double)durationRBS; 
   
        // Start the clock
        auto start_time1 = chrono::high_resolution_clock::now();

        // Iterative Binary Search
        cout << "Performing iterative binary search for " << target << endl;
        index = search.iterativeBinarySearch(arr, target);
        if (index != -1)
            cout << "Target " << target << " found at location " << index << "\n";
        else
            cout << "Target " << target << " not found\n";
        cout << endl;

        // Stop the clock
        auto end_time1 = chrono::high_resolution_clock::now();

        // Calculate duration in microseconds
        auto durationIBS = chrono::duration_cast<chrono::microseconds>(end_time1 - start_time1).count();

        // Add up the time of all IBS
        SumIBS += (double)durationIBS;

        // Start the clock
        auto start_time2 = chrono::high_resolution_clock::now();

        // Sequential Search 
        cout << "Performing squential search for " << target << endl;
        index = search.sequentialSearch(arr, target);
        if (index != -1)
            cout << "Target " << target << " found at location " << index << "\n";
        else
            cout << "Target " << target << " not found\n";
        cout << endl;

        // Stop the clock
        auto end_time2 = chrono::high_resolution_clock::now();

        // Calculate duration in microseconds
        auto durationSeqS = chrono::duration_cast<chrono::microseconds>(end_time2 - start_time2).count();

        // Add up the time of all IBS
        SumSeqS += (double)durationSeqS;
    } 
    cout << "Average Running Time for Recursive Binary Search in microseconds: " << SumRBS / 10 << endl;
    cout << "Average Running Time for Iterative Binary Search in microseconds: " << SumIBS / 10 << endl;
    cout << "Average Running Time for Sequential Search in microseconds: " << SumSeqS / 10 << endl;

}
