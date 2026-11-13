#include <stdio.h>


int func_three();
int func_four();

int main()
{
    /*declaration and Initialisation with literal*/
    int v1 = 1;
    int v2 = 2;

    printf("v1 = %i\n", v1);
    printf("v2 = %i\n", v2);

    /*Declaration and Initialisation with function calls*/
    int v3 = func_three();
    int v4 = func_four();
    int v7 = v3 + v4;

    /* Potencially may contain uninitialized values trash*/
    // int v5, v6, v7;
    printf("%i + %i\n = %i\n", v3, v4, v7);



    int a = 0, b = 0, c = 0;

    printf("Welcome to the C23 Language Standard\n");
    printf("a: %i\n", a);
    printf("b: %i\n", b);
    printf("c: %i\n", c);

    return 0;
}

int func_three()
{
    return 3;

}

int func_four()
{
    return 4;
}

