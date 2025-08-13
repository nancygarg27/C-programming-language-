#include<stdio.h>
int main () {
int arr[5]= {1,6,10,7,2}; // 1 2 4 6 7
int brr[5]={1,6,8,9,10};
// 1 6 8 7 10 9 2
int crr[10],k;
for( int i=0; i<5; i++){
crr[i]= arr[i];
}
for(int j=0; j<5;j++){
crr[5+j]= brr[j];
}
for(int i=0; i<10; i++){
printf("%d ", crr[i]);}
// 1 6 10 7 2 1 6 8 9 10
// 1 1 2 6 6 7 8 9 10 10
printf("\n");
for(int i=0; i<10; i++){
    k=0;
for(int j=i+1; j<10; j++){
if(crr[i]==crr[j]){
    k=1;
    break;
}}
if(k==0){
printf("%d ", crr[i]);
}
}
printf("\n");

}