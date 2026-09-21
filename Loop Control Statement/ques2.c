#include <stdio.h>

int main(){
    int sum =0;
    printf("Enter the number:");
    scanf("%d",&sum);

    for (int i = 1;i<=10;i++){
        sum +=i;
    }

    printf("SUM= %d",sum);
}