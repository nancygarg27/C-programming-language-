/*Given an array, and an element num the task is to 
find if num is present in the given array or not. If present 
print the index of the element or print -1.*/

#include <stdio.h>
int main () {
int arr[]={1,2,0,1,0,4,0}; 
int n;
n= sizeof(arr)/ sizeof(int);
int a, found=0;
printf("the number you want to search is : ");
scanf("%d", &a);
for(int i=0; i<n; i++){
if (arr[i]== a){
found++;
printf("\n%d is found at index %d",a, i);
}
}
printf("\nThe element is found %d times.", found);
}