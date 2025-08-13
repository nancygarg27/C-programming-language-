/* Find mode of an array */

#include <stdio.h>
int main() {
int arr[] = {1, 2, 2, 3, 4, 2, 5, 3, 3, 3}; 
int size = sizeof(arr) / sizeof(arr[0]);  // Size of the array
int maxCount = 0, mode = arr[0];
for (int i = 0; i < size; i++) {
int count = 0;
// Count the occurrences of arr[i]
for (int j = i+1; j < size; j++) {
if (arr[j] == arr[i]) {
count++;
}}
// If the current element has a higher count, update the mode
if (count > maxCount) {
maxCount = count;
mode = arr[i];
}}
 printf("The mode of the array is: %d\n", mode);
return 0;
}
