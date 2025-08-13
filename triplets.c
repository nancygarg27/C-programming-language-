/* */

# include <stdio.h>
int main() {
int arr[5]= {1,2,3,4,5};
int x=7;
int triplets=0;
for(int i=0; i<5; i++){
for(int j=i; j<5; j++){
for(int k=j; k<5; k++){
if( arr[i]+ arr[j]+ arr[k]==x){
triplets= triplets+1;
printf("%d, %d and %d add up to x\n", arr[i], arr[j], arr[k]);
}}}}
printf("%d are total triplets", triplets);
}