 #include<stdio.h>
 int main() {
     int x;
     float y;
     char ch;
     printf("Enter an integer: ");
     scanf("%d", &x);
     printf("Enter a decimal value: ");
     scanf("%f", &y);
     printf("Enter a character: ");
     scanf(" %c", &ch);
     printf("The no. of bytes that the int data type occupies is: %d\n", sizeof(x));
     printf("The no. of bytes that the float data type occupies is: %d\n", sizeof(y));
     printf("The no. of bytes that the character data type occupies is: %d", sizeof(ch));
     return 0;
 }
