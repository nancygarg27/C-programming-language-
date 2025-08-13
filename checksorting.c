/* Given an array of size n, write a program to check 
if the given array is sorted in
 (ascending / Increasing / Non-decreasing) order or not. 
 If the array is sorted then return True, Else return False.*/

 #include <stdio.h>
 int main () {
 int arr[]={1,3,5,6,7};
 int n,flag=0;
 n= sizeof(arr)/ sizeof(int);
 int crr[n];
 for(int i=0; i<n; i++){
 crr[i]= arr[i];
 printf("%d ",crr[i]);
 }
 printf("\n");
 for(int i=0; i<n; i++){
 for(int j=i+1; j<n;j++){
 if(arr[i]>arr[j]){
 int temp= arr[i];
 arr[i]= arr[j];
 arr[j]= temp;
 }}}
 for(int i=0; i<n; i++){
 printf("%d ", arr[i]);
 }
 for(int i=0; i<n;i++){
 if (arr[i]== crr[i]){
 flag++;
 }}
 if(flag==n){printf("\nthe array is in ascending order");}
 else {printf("\nthe array is not in ascending order");}
 }


// alternate
/*
# include <stdio.h>
int main (){
int n;
int arr[]= {2,3,4,5,7};
n= sizeof(arr)/ sizeof(int);
int brr[n]; int crr[n];
// printing brr[]
for(int i=0; i<n; i++){
brr[i]=arr[i];}
for(int i=0; i<n; i++){
printf("%d ", brr[i]);}
printf("\n");
// printing crr[]
for(int i=0; i<n; i++){
crr[i]=arr[i];}
for(int i=0; i<n; i++){
printf("%d ", crr[i]);}
printf("\n");
// ascending order
for(int i=0; i<n; i++){
for(int j=0; j<n; j++){
if(brr[j]> brr[j+1]){
int temp= brr[j];
brr[j]= brr[j+1];
brr[j+1]= temp;}}}
for(int i=0; i<n; i++){
printf("%d ", brr[i]);}
printf("\n");
// descending order
for(int i=0; i<n-1; i++){
for(int j=0; j<n-1; j++){
if(crr[j]< crr[j+1]){
int temp= crr[j];
crr[j]= crr[j+1];
crr[j+1]= temp;}}}
for(int i=0; i<n; i++){
printf("%d ", crr[i]);}
printf("\n");
// equating 
int count=0; int count1=0; 
for(int i=0; i<n; i++){
if(arr[i] == brr[i]){count++;}
}
for(int i=0; i<n; i++){
if(arr[i] == crr[i]){count1++;}
}
// comparing
if(count==n){printf("Given array is in ascending order");}
if(count1==n){printf("Given array is in descending order");}
if(count !=n && count1 !=n){ printf("Given array is not in any order");}
return 0;
}
*/