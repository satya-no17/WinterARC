#include <iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        for (int j=1;j<n;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void selectionSort(int arr[],int n){
    for (int i = 0;i<n-1;i++){
        int min =i;
        for (int j=i+1;j<n;j++){
            if (arr[min]>arr[j]){
                min = j;
            }
        }swap(arr[min],arr[i]);
    }
}
void insertionSort(int arr[],int n){
    for (int i =1;i<n;i++){
        int key = arr[i];
        int prev = i-1;
        while(prev>=0&&arr[prev]>key){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=key;
    }
}
void countingSort(int arr [],int n){
    
}
int main() {

    return 0;
}