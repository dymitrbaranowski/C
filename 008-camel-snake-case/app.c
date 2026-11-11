int func_three()
{

    return funcOne();
}

int func_two()
{
    return func_three();
}
 
int funcOne()
{
    return func_two();
}

int main()
{
    funcOne();

    return 0;
}