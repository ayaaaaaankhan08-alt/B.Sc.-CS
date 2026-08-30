//  #include<stdio.h>
//  int fibonacci(int n) {
//      if (n<=1) {
//          return n;
//      }
//      return fibonacci(n-1) + fibonacci(n-2);
//  }
//  int main() {
//       int terms;
//       int first = 0;
//       int second = 1;
//       int next;
//       printf("Enter the number of terms: ");
//       scanf("%d", &terms);
//       printf("Fibonacci series: ");
//       for (int count = 0; count < terms; count++) {
//           printf("%d, ", first);
//           next = first + second;
//           first = second;
//           second = next;
//       }
//       return 0;
//  }