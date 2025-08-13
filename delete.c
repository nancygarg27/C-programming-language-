/*WAP to remove an element from a given array*/

# include <stdio.h>
int main(){
int arr[]= {2,4,7,6,8};
int n;
n= sizeof(arr)/ sizeof(int);
int pos;
printf("enter the position at which you want to remove the element: ");
scanf("%d",&pos);
int index= pos-1;
for (int i=index; i<n; i++){
arr[i]= arr[i+1];
}
for(int i=0; i<n-1; i++){
printf("%d ", arr[i]);
}
}