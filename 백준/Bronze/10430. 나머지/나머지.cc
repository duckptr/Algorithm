#include <iostream>
using namespace std;

int main(void)
{
    int A,B,C;
    cout<<"";
    cin>>A>>B>>C;
    
    int result1 = (A+B)%C;
    cout<<""<<result1<<endl;
    
    int result2 = ((A%C)+(B%C))%C;
    cout<<""<<result2<<endl;
    
    int result3 = (A*B)%C;
    cout<<""<<result3<<endl;
    
    int result4 = ((A%C)*(B%C))%C;
    cout<<""<<result4<<endl;
    return 0;
}