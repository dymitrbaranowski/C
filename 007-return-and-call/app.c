int func3 ()
{

    return func1();
}

int func2()
{
    return func3();
}
 
int func1()
{
    return func2();
}

int main()
{
    func1();

    return 0;
}