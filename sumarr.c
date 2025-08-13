// print the sum of all elements given in an array

#include <stdio.h>
int main() {
    int sum=0;
int arr[5]= {12,50,25,15,10};
for(int i=0; i<5; i++){
sum= sum +arr[i];
}
printf("%d is the sum", sum);
}