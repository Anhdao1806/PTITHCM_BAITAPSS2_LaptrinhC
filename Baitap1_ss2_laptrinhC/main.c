#include <stdio.h>
int a=100000; // khai bao bien kieu so nguyen,chua gia tri lon hon hoac nho hon kieu short
char b='H';// khai bao bien kieu ki tu
long c= 12345678;// khai bao bien kieu so nguyen
float d= 3.14;// khai bao bien kieu so thuc có kich thuoc 4 bytes
short e= 100;//khai bao bien kieu so nguyen
double f= 2.28634; // khai bao bien kieu so thuc có kich thuoc 8 bytes
int main() {
    printf("int: %d \n",a);
    printf("char: %c \n",b);
    printf("long: %ld \n",c);
    printf("float: %.2f \n",d);
    printf("short: %d",e);
    printf("double: %f",f);
    return 0;
}


