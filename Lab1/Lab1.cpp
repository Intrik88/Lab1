#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char fullname[] = "Adam Gomez";
    char ch;

    printf("The string is: %s \n", fullname);
    printf("The new string is: ");

    for (int i = 0; i < strlen(fullname); i++) {
        ch = toupper(fullname[i]);

        printf("%c", ch);
    }

    return 0;
}