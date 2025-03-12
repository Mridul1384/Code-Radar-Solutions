#include <stdio.h>

int main() {
    char Name[100],Hobby[100];
    int Age;
    scanf("%s %d %s",&Name,&Age,&Hobby);
    printf("Name: %s\n",Name);
    printf("Age: %d\n",Age);
    printf("Hobby: %s\n",Hobby);
    return 0;
}