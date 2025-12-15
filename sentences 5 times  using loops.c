#include <stdio.h>
int main() {
    int i, marks;
    for(i = 1; i <= 5; i++) {   
        printf("Enter marks of student %d: ", i);
        scanf("%d", &marks);
        if(marks >= 90)
            printf("Grade: A\n");
        else if(marks >= 75)
            printf("Grade: B\n");
        else if(marks >= 60)
            printf("Grade: C\n");
        else if(marks >= 40)
            printf("Grade: D\n");
        else
            printf("Grade: Fail\n");
    }
    return 0;
}







