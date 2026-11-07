#include <iostream>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define STEPEN(a) ((a) * (a))
#define POWER(a, b) pow(a, b)

#define EVEN(a) ((a) % 2 == 0 ? true : false)
#define ODD(a) ((a) % 2 == 0 ? false : true)

#include <cmath>

int main()
{
    int a, b;

    std::cin >> a >> b;

    std::cout << MIN(a, b) << '\n';
    std::cout << MAX(a, b) << '\n';

    std::cout << STEPEN(a)<<'\n';
    std::cout << POWER(a, b)<<'\n';

    std::cout << EVEN(a)<<'\n';
    std::cout << ODD(b)<<'\n';


}

