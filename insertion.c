/* WAP to insert an element in the array */

# include <stdio.h>
int main() {
int arr[10],i,pos,val;
for(i=0; i<9; i++){
scanf("%d",&arr[i]);
printf("%d ",arr[i]);//{1,2,3,4,5,6,7,8,9}
}
printf("enter index to insert: ");
scanf("%d",&pos);
printf("enter val to insert: ");
scanf("%d",&val);
for(i=8; i>=pos;i--){
arr[i+1]= arr[i];
}
arr[pos]= val;
printf("array after insertion: ");
for(i=0; i<10; i++){
printf("%d ",arr[i]);    
}
}




