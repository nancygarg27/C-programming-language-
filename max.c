// find the max value out of all the elements in the array

# include <stdio.h>
int main() {
int max=0;
int arr[5]= {2,30,5,4,12};
for(int i=0; i<5; i++){
if( max<= arr[i]) {
max= arr[i];
}
} 
printf("%d is the greatest", max);}