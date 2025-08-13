/*Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N.
 Find the number(between 1 to N), that is not present in the given array.
 N = 5, array[] = {1,2,4,5}*/

#include <stdio.h>
int main () {
int arr[]={1,2,3,5};
int n,count,size;
n= sizeof(arr)/ sizeof(int); //n =10
int number;
printf("the number is :");
scanf("%d",&number);//5
int brr[number];
for(int i=0; i<number; i++){
brr[i]=i+1;
}
for(int i=0; i<number; i++){
printf("%d ", brr[i]); // 1 2 3 4 5
}// 1 2 3 5
printf("\n");
for(int i=0; i<number; i++){ //i<5
for(int j=0; j<n; j++){ // j<4
if(brr[i]== arr[j]){
for(int k=i;(k+1)<number;k++){
brr[k]= brr[k+1];
}
number--;i--;}}}
for(int i=0; i<number; i++){
printf("%d ", brr[i]);
}
}