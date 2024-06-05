#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("I'm a Bot. What's your name?\n");
    char name[20];
    scanf("%s", name);
    printf("Hello, %s! How old are you?", name);
    int age;
    scanf("%d", &age);
    printf("You are looking younger! "
           "I thought you are %d \n", age - 3);
    return 0;
}