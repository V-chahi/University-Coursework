/*
CH-231-A
A4_P1.cpp
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <iostream>
#include <chrono>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;
using namespace std::chrono;

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int leftarr = m - l + 1;
    int rightarr = r - m;

    int L[leftarr], R[rightarr];

    for (i = 0; i < leftarr; i++)
        L[i] = arr[l + i];
    for (j = 0; j < rightarr; j++)
        R[j] = arr[m + 1 + j];

    i = 0, j = 0, k = l;

    while (i < leftarr && j < rightarr) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < leftarr)
        arr[k++] = L[i++];

    while (j < rightarr)
        arr[k++] = R[j++];
}

void insertionSort(int arr[], int l, int r) {
    int i, j, key;
    for (i = l + 1; i <= r; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= l && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void mergeSort(int arr[], int l, int r, int k) {
    if ((r - l) <= k) {
        insertionSort(arr, l, r);
    }
    else {
        int m = (l + r) / 2;
        mergeSort(arr, l, m, k);
        mergeSort(arr, m + 1, r, k);
        merge(arr, l, m, r);
    }
}

int main() {
    const int size = 1000;
    int arr[size];
    ofstream out("Data.txt");

    srand(time(NULL)); // random number generator

    for (int k = 0; k < size; k += 10) {             //Best case scenario
        for (int i = 0; i < size; i++) {
            arr[i] = i;
        }

        auto start1 = high_resolution_clock::now();
        mergeSort(arr, 0, size - 1, k);
        auto stop1 = high_resolution_clock::now();
        auto best_case = duration_cast<microseconds>(stop1 - start1);

        for (int i = 0; i < size; i++) {               //Average case scenario
            arr[i] = rand() % size;
        }

        auto start2 = high_resolution_clock::now();
        mergeSort(arr, 0, size - 1, k);
        auto stop2 = high_resolution_clock::now();
        auto average_case = duration_cast<microseconds>(stop2 - start2);

        for (int i = 0; i < size; i++) {            //Worst case scneario
            arr[i] = size - i;
        }

        auto start = high_resolution_clock::now();
        mergeSort(arr, 0, size - 1, k);
        auto stop = high_resolution_clock::now();
        auto worst_case = duration_cast<microseconds>(stop - start);

        out << k << " " << (double)worst_case.count() << " " << (double)best_case.count() << " " << (double)average_case.count() << endl;
    }

    out.close(); // Close the output file
    return 0;
}



void insersort(int arr[], int n){
    for (j=2, j<n, j++){
        int Key = A[j];
        int i = j - 1;
        while ( i > 0 && Arr[i] > Arr[j] ){
            Arr[i+1] = Arr[i];
            i = i - 1;
        }
        Arr[i+1] = key;
    }
    
    void Merrge(int Arr[],p,q,r){
        int i,j,k;
        int n1 = q - p + 1;
        int n2 = r - q;
        int L[n1], R[n2];
        for (i = 0; i < n1; i++){
            L[i]=Arr[p + i];
        }
        for(j = 0; j<n2; j++){
            R[j]=Arr[q + 1 + j];
        }
        L[n1+1]
        R[n1+1]=
        i,j=1;
        for(k = p; k<=r,k++){
            if(L[i]<=R[j])
                A[k]=L[i];
            i=i+1;
            else
                A[k]=R[j];
            j=j+1;
    
        }
void MergeSort(int Arr[],p,r,k){
    if((r-p) <= k)
        insertionSort(Arr,p,r);
    else
        q=(p+r)/2;
    Mergesort(Arr,p,q,k);
    Mergesort(Arr,q+1,r,k);
    Merge(Arr,p,q,r);
}
