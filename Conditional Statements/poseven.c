#include <stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if (num >=0){
        printf("%d is a Positive number\n", num);
        if (num%2==0){
            printf("%d is an even number\n", num);
        }
        else {
            printf("%d is an odd number",num);
        }
        }
    else {
        printf("%d is a negative number",num);
    }
}