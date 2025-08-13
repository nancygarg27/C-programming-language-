#include<stdio.h>
int main () {
int arr[5]= {1,6,10,7,2}; // 1 2 4 6 7
int brr[5]={1,6,8,9,10};
// 1 6 8 7 10 9 2
int crr[5];
for(int i=0; i<5; i++){
for (int j=0; j<5; j++){
if (arr[i]== brr[j]){
int temp = brr[j];
brr[j]= crr[j];
crr[j]= temp;
printf("%d ", crr[j]);
}}}}

// alternate 
/*
# include <stdio.h>
int main(){
int arr[5]= {1,2,3,5,6};
int brr[5]={1,3,5,8,9};
int crr[5];int k=0;
for(int i=0; i<5; i++){
for(int j=0; j<5; j++){
if(arr[i]== brr[j]){
crr[k]= arr[i];
k=k+1;
break;
}}}
for(int i=0; i<k; i++){
printf("%d ", crr[i]);
}}
*/