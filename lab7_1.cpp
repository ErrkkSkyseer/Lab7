#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int b = 30;
    int c = 4;
    double output;

    output = double(a) - double(b) / double(c);
    cout << "output: " << output << "\n";
    return 0;
}
