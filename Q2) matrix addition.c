// #include<stdio.h>
// int main() {
//     int n, m;
//     printf("Enter the number of rows and columns in the matrices: ");
//     scanf("%d %d", &n, &m);
//     int a[n][m], b[n][m], sum[n][m];
//     printf("Enter the elements of the first matrix:\n");
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter the elements of the second matrix:\n");
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             scanf("%d", &b[i][j]);
//         }
//     }
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             sum[i][j] = a[i][j] + b[i][j];
//         }
//     }
//     printf("The sum of the two matrices is:\n");
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             printf("%d ", sum[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
