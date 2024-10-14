#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n = 0;
    string frase = "Contando ate 1 bi: ";
    while(n < 1'000'000'000)
    n++;
    {
        cout << frase << n;
    }
    cout << endl;

    return 0;
}
