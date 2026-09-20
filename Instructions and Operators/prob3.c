#include <stdio.h>

int main(){
    int x;
    printf("Enter the integer:");
    scanf("%d",&x);
    printf("%d \n",x>9 && x<100);
}