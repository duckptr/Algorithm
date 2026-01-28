#include <iostream>
using namespace std;

int main(void) {
    int value1, value2;
    cout<<"";
    cin>>value1>>value2;
    
    int add=value1+value2;
    cout<<""<<add<<endl;
    
    int minus=value1-value2;
    cout<<""<<minus<<endl;
    
    int gob=value1*value2;
    cout<<""<<gob<<endl;
    
    int namu=value1/value2;
    if (value2==0) {
        cout<<"error"<<endl;
    } else {
        cout<<""<<namu<<endl; 
    }

    
    int mok=value1%value2;
    cout<<""<<mok<<endl;
    return 0;
}