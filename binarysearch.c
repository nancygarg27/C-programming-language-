// binary search
# include <stdio.h>
int main (){
int arr[]= { 11,17,18,45,50,71,95};
int n= sizeof(arr)/ sizeof(int);
int ele; 
printf("enter the value of element: ");
scanf("%d", & ele);
int left=0;
int right= n-1;
int found=0;
while(left <= right){
int mid= (left+  right)/2;
if(ele > arr[mid]){
left= mid+1;
}
else if(ele< arr[mid]){
right= mid-1;
}
else if(ele == arr[mid]){
found=1;
printf("Element is found at %d index", mid);
break;
}
}
if( found =0){
printf("Element is not found in the given array");
}
return 0;
}