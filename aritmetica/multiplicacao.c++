#include <iostream>
int multiplicacao(int a, int b)
{
    return a * b;
}
int main()
{
    int a;
    int b;
    std::cout << "digite um número inteiro: ";
    std::cin >> a;
    std::cout << "digite um número inteiro: ";
    std::cin >> b;
    std::cout << "o produto de " << a << " com " << b << " é " << multiplicacao(a, b);
    return 0;
}