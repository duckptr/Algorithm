#include <iostream>
using namespace std;

int main(void) 
{
    double value1, value2;
    

    cin >> value1 >> value2;
    

    cout << fixed;
    cout.precision(15); 
    

    cout << value1 / value2 << endl;

    return 0;
}