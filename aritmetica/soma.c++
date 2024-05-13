#include <iostream>
int soma(int a, int b)
{
    return a + b;
}
int main()
{
    int a;
    int b;
    std::cout << "digite um número inteiro: ";
    std::cin >> a;
    std::cout << "digite um número inteiro: ";
    std::cin >> b;
    std::cout << "a soma de " << a << "+ " << b << "é igual a " << soma(a, b);

    return 0;
}
