#include <stdio.h>
int main() {
    char value;
    printf("Enter character");
    value=getchar();
    value=value-32;
    printf("%c\n",value);
    return 0;
}

