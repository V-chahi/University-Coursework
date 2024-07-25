/*
CH-231-A
a3_p2.cpp
Amine Chahi
m.chahi@jacobs-university.de
*/
#include <iostream>
#include <chrono>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;
using namespace std::chrono;

void Selectionsort(int *arr, int n){
    for (int i = 0; i < n - 1; i++){
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        if (min != i) {
            swap(arr[min], arr[i]);
        }
    }
}

int *randomArray(int size) {
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % size;
    }
    return arr;
}

int main(){
 ofstream out;
    out.open("Input.txt");

 for (int size = 0; size <= 1000; size += 5) {
   vector<double> times;

    // Case A: (Most Swap Involved) Worst Case
    int *arr = randomArray(size);
    arr[0] = size;

    auto start = high_resolution_clock::now();
    Selectionsort(arr, size);
    auto stop = high_resolution_clock::now();
    times.push_back(duration_cast<microseconds>(stop - start).count());
     
    // Case B: (Least Swap Involved Case)Best Case
    auto start1 = high_resolution_clock::now();
    Selectionsort(arr, size);
    auto stop1 = high_resolution_clock::now();
    times.push_back(duration_cast<microseconds>(stop1 - start1).count());

    // Average Case (Average of 5 runs)
    double sum = 0;
     
for (int i = 0; i < 5; i++) {
    arr = randomArray(size);
    auto start2 = high_resolution_clock::now();
    Selectionsort(arr, size);
    auto stop2 = high_resolution_clock::now();
    sum += duration_cast<microseconds>(stop2 - start2).count();
        }
        double average = sum / 5;
        times.push_back(average);

        out << size << " " << times[0] << " " << times[1] << " " << times[2] << endl;
        delete[] arr; // Free dynamically allocated memory at the end of each iter to avoid memory leaks.
    }

    out.close();
    return 0;
}
