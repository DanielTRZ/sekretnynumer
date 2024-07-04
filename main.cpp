#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
string haslo;
cout<<"Zgadnij sekretny numer"<<endl;
cout<< "Podaj liczbe calkowita: ";

while(cin>>haslo)
{

if(haslo != "3")
{
            cout<< "Nie, to nie jest ta liczba, ktora wybralem dla ciebie. Sprobuj ponownie!. " <<endl;

            cout<< "Podaj haslo: ";
        }

        else
        {
            cout<< "Dobra robota! To numer, ktory wybralem dla ciebie! Jestes teraz wolny."<<endl;
            exit(0);
        }
    }

    return 0;
}
