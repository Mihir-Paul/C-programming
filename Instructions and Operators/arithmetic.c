#include <stdio.h>
#include <math.h>

int main(){
    int a =3,b=4;
    int sum = a+b;
    int multiply = a*b;
    int diff = a-b;
    int div = a/b;
    int modulo = a%b;

    int power = pow(a,b);

    printf("%d \n%d \n%d \n%d \n%d \n%d",sum,multiply,diff,div,modulo,power);
}