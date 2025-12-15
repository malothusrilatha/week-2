#include <stdio.h>
int main() {
    int i;
    char ch;
    for(i = 1; i <= 5; i++) {  
        printf("Enter alphabet %d: ", i);
        scanf(" %c", &ch);  
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            printf("%c is a Vowel\n", ch);
        else
            printf("%c is a Consonant\n", ch);
    }
    return 0;
}








