#include <stdio.h>

int main(void)
{
    int result = printf("with proper grammar, but the outcome is a piece of art,\n");
    (void)result;  // To avoid "unused variable" warning with -Wall option
    return 0;
}
