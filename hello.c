#include <stdio.h>
#include <cs50.h>

    //to prompt the user for their name

int main(void)
{
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}
