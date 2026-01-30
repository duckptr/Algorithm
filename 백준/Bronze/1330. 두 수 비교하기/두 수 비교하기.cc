#include <iostream>
using namespace std;

int main(void) 
{
    int A,B;
    if (!(cin >> A >> B)) return 0;
    
    if (A>B) {
        cout<<">"<<endl;
    } else if(A<B) {
        cout<<"<"<<endl;
    } else {
        cout<<"=="<<endl;
    }
    
    return 0;
}