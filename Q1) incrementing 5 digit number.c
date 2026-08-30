// #include <stdio.h>
// int main() {
//     int n, newn = 0, place = 1;
//     printf("Enter a 5-digit number: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= 5; i++) {
//         int ld = n % 10;          
//         ld = (ld + 1) % 10;  
//         newn = ld * place + newn; 
//         place = place * 10;  
//         n = n / 10;      
//     }
//     printf("New number: %d", newn);
//     return 0;
// }
