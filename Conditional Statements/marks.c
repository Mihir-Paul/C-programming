#include <stdio.h>

int main(){
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if (marks>0 && marks <=30){
        printf("Failed!");
    }
    else if(marks<=100 && marks>30) {
        printf("Passed!");
    }
    else {
        printf("Invalid Marks");
    }

}