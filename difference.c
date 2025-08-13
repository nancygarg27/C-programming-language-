/* find the diiference between the sum of elements at even
indices to the sum of elements at the odd indices. */

# include <stdio.h>
int main() {
int arr[5]= {1,2,3,4,5};
int sumodd=0;
int sumeven =0;
int difference;
for(int i=0; i<5; i++){
if(i%2 != 0) {
sumodd= sumodd+ arr[i];
}
else{
sumeven= sumeven +arr[i];}
} 
difference= sumeven- sumodd;
printf("%d is the difference", difference);
}
// sumodd= 6 sumeven=9 difference 3
