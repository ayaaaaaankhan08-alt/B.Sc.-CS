// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter the side of square matrix: ");
//     scanf("%d", &n);
//     int a[n][n];
//     printf("Enter the elements of the matrix:\n");
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("The lower triangular matrix is:\n");
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++) {
//             if(i >= j) {
//                 printf("%d ", a[i][j]);
//             } 
//             else {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
//     printf("The upper triangular matrix is:\n");
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++) {
//             if(i <= j) {
//                 printf("%d ", a[i][j]);
//             } 
//             else {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
