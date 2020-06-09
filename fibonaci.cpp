#include<iostream>
int fibonacci(int n)
{
    if (n<2)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int num=0,res=0;
    int("::NUMEROS DE FIBONACCI::");
    int("Introduce el numero de numeros: ");scanf("%i",&num);
    int("t");
    for(int i=0;i<=num-1;i++)
    {
        res = fibonacci(i);
        printf("%i  ", res);
    }
    int("n");
    return 0;
}
