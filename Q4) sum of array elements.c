 #include<stdio.h>
 int main() {
     int n;
     printf("Enter the number of elements in the array: ");
     scanf("%d", &n);
     int arr[n], sum = 0;
     printf("Enter the elements of the array: ");
     for(int i = 0; i < n; i++) {
         scanf("%d", &arr[i]); 
         sum+= arr[i];
     }
     printf("The sum of the array elements is: %d", sum);
     return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
