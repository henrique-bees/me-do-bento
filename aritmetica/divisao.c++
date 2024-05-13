
#include <iostream>
int divisao(int a, int b)
{
    return a / b;
}
int main()
{
    int a;
    int b;
    std::cout << "digite um número inteiro: ";
    std::cin >> a;
    std::cout << "digite um número inteiro: ";
    std::cin >> b;
    std::cout << "a razao entre " << a << " e " << b << " é " << divisao(a, b);
    return 0;
}