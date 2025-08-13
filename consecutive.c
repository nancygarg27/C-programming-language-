//Given a binary array nums, return the maximum number of consecutive 1's in the array.
# include <stdio.h>
int main () {
int n, count=1,max=0;
int arr[]= {1,1,0,1,1,1};
n= sizeof(arr)/sizeof(int);
printf("%d\n",n);
for(int i=0; i<n; i++){
count=1;
for(int j= i+1; j<n; j++){
if(arr[i] != arr[j]){
break;
}
if (arr[i]== arr[j]){
count++;
if(max<count){
max= count;
}
}
}}
printf(" the max number of consecutive 1's in the array are %d", max);
}
