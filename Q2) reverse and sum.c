// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int temp = n;
//     int reversen = 0;
//     while(n!=0) {
//         int ld=n%10;
//         n/=10;
//         reversen*= 10;
//         reversen+= ld;
//     }
//     printf("The reverse of given number is: %d\n", reversen);
//
//     int sum=0;
//     while(temp!=0) {
//         int ld=temp%10;
//         temp/=10;
//         sum+=ld;
//     }
//     printf("The sum of digits of given number is: %d", sum);
//     return 0;
// }