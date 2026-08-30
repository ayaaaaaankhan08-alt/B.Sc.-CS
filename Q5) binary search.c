// #include<stdio.h>
// int main() {
//     int n, target;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements of the array in sorted order: ");
//     for(int i=0; i<n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the target element to search: ");
//     scanf("%d", &target);
//     int st = 0, end = n-1, mid = (st + end)/2;
//     while(st <= end) {
//         if(arr[mid] == target) {
//             printf("Element %d found at index %d.", target, mid);
//             return 0;
//         }
//         else if(arr[mid] < target) {
//             st = mid+1;
//         }
//         else {
//             end = mid-1;
//         }
//         mid = (st + end)/2;
//     }
//     printf("Element %d not found in the array.", target);
//     return 0;
// }
