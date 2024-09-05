#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
  for(int i=0;i<n-1;i++) {
    int min=i;
    //loop to find the minimum value
    for(int j=i+1;j<n;j++){
        if(arr[min]>arr[j]) {
            min=j;
        }
    }
    //swap here the minimum value and the first index
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=arr[min];
  }
  for(int i=0;i<n;i++) {
    cout<<arr[i];
  }
 }

int main(){
    int arr[]={1,23,22,34,44,32,33};
    selection_sort(arr,7);
}