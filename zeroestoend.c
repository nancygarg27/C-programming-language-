/*You are given an array of integers, your task is to move
all the zeros in the array to the end of the array and move 
non-negative integers to the front by maintaining their order.*/

#include <stdio.h>
int main () {
int arr[]={1,2,0,1,0,4,0}; 
// 1 2 3 0 0 4 0 1 // 1 2 3 0 4 0 0 1 // 1 2 3 0 4 0 1 0
// {1,2,3,4,1,0,0,0}
int n;
n= sizeof(arr)/ sizeof(int);
for (int i=0; i<n; i++){
if(arr[i]==0){
int temp= arr[i];
arr[i]= arr[i+1];
arr[i+1]= temp;
}
if(arr[i] == arr[i+1]){
for(int j=i; j<n; j++){
if (arr[j] !=0){
int temp= arr[i];
arr[i]= arr[j];
arr[j]= temp;
break;
}}}
}
for (int i=0; i<n; i++){
printf("%d ", arr[i]);
}
}