#include <iostream>
using namespace std;

int main()
{
    int dzien;
    
    cout<<"Wpisz liczbowo dzien tygodnia: "; cin>>dzien;
    switch(dzien)
    {
        case 1: 
            cout<<"Podany dzien to Poniedzialek";
            break;
        case 2: 
            cout<<"Podany dzien to Wtorek";
            break;
        case 3: 
            cout<<"Podany dzien to Sroda";
            break;
        case 4: 
            cout<<"Podany dzien to Czwartek";
            break;
        case 5: 
            cout<<"Podany dzien to Piatek";
            break;
        case 6: 
            cout<<"Podany dzien to Sobota";
            break;
        case 7: 
            cout<<"Podany dzien to Niedziela";
            break;
        default: 
            cout<<"Bledny zakres danych";
    }

    return 0;
}
