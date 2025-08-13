/* given an array of integers, change the value of all
 odd indexed to its second multiple and increment all
 even indexed value by 10. */

 # include <stdio.h>
 int main() {
 int arr[5]= {1,2,3,4,5};
 for(int i=0; i<5; i++){
 if(i%2 != 0) {
 arr[i]= arr[i] *2;
 }
 else{
 arr[i]= arr[i]+10;}
 printf("%d ", arr[i]);
 } 
 }
 // my answer should be {11,4,13,8,15}