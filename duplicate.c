/* Given an integer array sorted in non-decreasing order, 
remove the duplicates in place such that each unique 
element appears only once. The relative order of the 
elements should be kept the same.*/
#include <stdio.h>
int main() {
int arr[]= {1,2,3,4,5,2,3};
int n;
n= sizeof(arr)/ sizeof(int);
// sorting
for(int i=0; i<n-1; i++){
for(int j=0; j<n-1; j++){
if(arr[j] >= arr[j+1]){
int temp = arr[j];
arr[j]= arr[j+1];
arr[j+1]= temp;
}}}
for(int i=0; i<n; i++){
printf("%d ", arr[i]);
}
printf("\n");
// output : 1 2 2 3 3 4 5 
// removing of duplicates // 1 2 3 3 4 5 // 1 2 3 4 5 
for(int i=0; i<n; i++){
for(int j= i+1; j<n;j++){
if(arr[i]== arr[j]){
for(int k=j; k+1<n; k++){
arr[k]= arr[k+1];}
n--;}
}}
printf("\n");
for(int i=0; i<n; i++){
printf("%d ", arr[i]);
}
}

