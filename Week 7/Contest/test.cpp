#include <iostream>

using namespace std;

int main()
{

    int decimal, quotient, remainder, binary = 0, place = 1;

    cin >> decimal;

    quotient = decimal;

    while (quotient != 0)
    {

        remainder = quotient % 2;

        binary += remainder * place;

        place *= 10;

        quotient /= 2;
    }

    cout <<  binary << endl;

    return 0;
}