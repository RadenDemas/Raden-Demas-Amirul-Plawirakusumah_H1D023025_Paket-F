#include <iostream>
using namespace std;

void sort(int arr[], int size){
    for (int i = 0; i < size-1; i++){
        for (int j = 0; j < size-i-1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int size = 6;
    int arr[size];
    cout<<"Masukkan nominal uang: ";
    for(int i = 0; i<size;i++){
        cin>>arr[i];
    }
    cout<<"Sebelum disorting: ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<"\nSetelah disorting: ";
    sort(arr,6);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}