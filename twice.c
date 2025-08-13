/*Given a non-empty array of integers arr, every element appears twice except for one. 
Find that single one.*/

#include <stdio.h>
int main () {
int arr[]={5,1,2,1,7,8,2};
int n,count=0,max=0, i;
n= sizeof(arr)/ sizeof(int);
for(int i=0; i<n; i++){
for(int j=i+1; j<n; j++){
if(arr[i]>arr[j]){
int temp= arr[i];
arr[i]= arr[j];
arr[j]= temp;
}}}
for( i=0; i<n; i++){
printf("%d ", arr[i]);}
///////////////////////
// 1 1 2 2 5 7 8 // 1 2 2 5 7 8  // 1 2 5 7 8
for(int i=0; i<n; i++){
count=1;max=1;
for(int j=i+1; j<n; j++){
if(arr[i] == arr[j]){
count++;
if(max< count){
max = count;}
for(int k=j; (k+1)<n; k++){
arr[k]= arr[k+1];
}
n--;j--;
}}
if(max <= 1){
 printf("\n%d is present once", arr[i]);}}
 printf("\n");
for(int i=0; i<n; i++){
printf("%d ", arr[i]);
}
}