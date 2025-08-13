/* WAP to reverse the array without using extra array */

# include <stdio.h>
int main() {
int arr[5]= {2,30,5,4,12};
for (int i=0, j=4; i<=j; i++,j-- ){
int temp= arr[i]; //temp=2
arr[i]= arr[j];//arr[0]=12
arr[j]= temp;// arr[4]=2
}
for(int i=0; i<=4;i++){
printf("%d ",arr[i]);
}
}