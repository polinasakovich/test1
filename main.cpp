#include <iostream>

using namespace std;

int main()
{
    int x;
    int z;
    cout << "podaj pierszą zmienna:";
    cin>>x;
    cout << "podaj drugą zmienna:";
    cin>>z;
    cout << "wynik dodania:"<<x+z<<endl;
    cout << "wynik odejmowania:"<<x-z<<endl;
    cout << "wynik mnożenia:"<<x*z<<endl;
    cout << "wynik dzielenia:"<<x/z<<endl;
    cout << "wynik modulu:"<<x%z<<endl;
    return 0;
}
