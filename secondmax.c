/* find the second largest element in the given array */

# include <stdio.h>
int main() {
int arr[5]= {2,30,5,4,12};
int max=arr[0];
int secmax=0;
for(int i=0; i<5; i++){
if( max<= arr[i]) {
max= arr[i];}
}
printf("%d is the greatest\n", max);
for(int i=0; i<5; i++){
if( secmax< arr[i] &&  (max != arr[i])){
secmax= arr[i];
}
}
printf("%d is the second largest\n", secmax);
}
