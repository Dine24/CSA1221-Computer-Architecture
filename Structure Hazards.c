#include <stdio.h>
int main() {
 int a = 5;
 int b = 10;
 int c;
 int flag = (a > b);
 if (flag) {
 c = a + b;
 } else {
 c = b;
 }
 c = c * 2;
 printf("Result: %d\n", c);
 return 0;
