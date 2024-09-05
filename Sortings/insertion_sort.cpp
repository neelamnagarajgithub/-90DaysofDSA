#include<iostream>
using namespace std;


void insertion_sort(int arr[],int n){
    int j;
for(int i=1;i<n;i++) {
    j=i;
    //swapping till its reaches its destination
   while((arr[j]<arr[j-1])&&j>0){
    //swap
    int temp=arr[j];
    arr[j]=arr[j-1];
    arr[j-1]=temp;

    j--;
   }
}
for(int i=0;i<n;i++) {
    cout<<arr[i]<<endl;
}
}


int main(){
    int arr[]={14,9,15,12,6,8,13};
    insertion_sort(arr,7);
}