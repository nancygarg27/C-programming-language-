// print the product of all elements given in an array

# include <stdio.h>
int main() {
    int product=1;
int arr[5]= {2,3,5,4,12};
for(int i=0; i<5; i++){
product= product *arr[i];
}
printf("%d is the product", product);
}