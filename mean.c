/* Find mean of an array */

#include<stdio.h>
int main () {
int n;
// n is the number of elements present in an array
int arr[]={ 3,7,5,9,4,8}; 
n= sizeof(arr)/ sizeof(int);
printf("%d",n);
float sum=0.0;
float mean;
for(int i=0; i<n; i++){
sum= sum +arr[i];
}
printf("\n%f", sum);
mean= sum/n;
printf("\n%f is the mean", mean);

}