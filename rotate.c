/*Given an array of N integers, left rotate the array by one
 place.*/

 #include <stdio.h>
 int main () {
 int arr[]={1,2,3,4,5,6,7}; // 2 3 4 5 6 7 1
 // 3 4 5 6 7 1 2  // 4 5 6 7 1 2 3  // 5 6 7 1 2 3 4  
 // 6 7 1 2 3 4 5 // 7 1 2 3 4 5 6 // 1 2 3 4 5 6 7
 int n,k=10;
 n= sizeof(arr)/ sizeof(int);
 if(k>n){k= k%n;}
 for(int i=0, j=n-1; i<=j ; i++,j--){
 int temp= arr[i];
 arr[i]= arr[j];
 arr[j]= temp;
 }
 for(int i=0; i<n; i++){
 printf("%d ", arr[i]);
 }
 printf("\n");
 for(int i=0, j=n-1-k; i<=j ; i++,j--){
 int temp= arr[i];
 arr[i]= arr[j];
 arr[j]= temp;
 }
 for(int i=0; i<n; i++){
 printf("%d ", arr[i]);
 }
 printf("\n");
 for(int i=n-k, j=n-1; i<=j ; i++,j--){
 int temp= arr[i];
 arr[i]= arr[j];
 arr[j]= temp;
 }
 for(int i=0; i<n; i++){
 printf("%d ", arr[i]);
 }
 }