#include <iostream>
int subtracao(int a, int b)
{
    return a - b;
}
int main()
{
    int a;
    int b;
    std::cout << "digite um número inteiro: ";
    std::cin >> a;
    std::cout << "digite um número inteiro: ";
    std::cin >> b;
    std::cout <<"a subtração de "<<a <<" menos "<<b <<" é "<<subtracao(a, b);
    return 0;
}