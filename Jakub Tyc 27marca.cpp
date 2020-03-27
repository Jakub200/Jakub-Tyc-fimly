#include <iostream>
#include <string.h>


using namespace std;


struct opis {
    string tytul;
    string rezyser;
    string rok;
    string gatunek;
    int czasTrwaniaMinuty;
};

int main()
{
    opis film[5] ;

    for (int i = 0; i<5; i++)
    {
        
        cout << "Podaj tytul filmu " << i+1 << endl;
        cin >> film[i].tytul;
        
        cout << "Podaj rezysera filmu " << i+1 << endl;
        cin >> film[i].rezyser;
        
        cout << "Podaj rok powstania filmu " << i+1 << endl;
        cin >> film[i].rok;
        
        cout << "Podaj gatunek filmu " << i+1 << endl;
        cin >> film[i].gatunek;
        
        cout << "Podaj czas trwania filmu w minutach " << i+1 << endl;
        cin >> film[i].czasTrwaniaMinuty;
    }

    for (int i = 0; i<5; i++)
    {
        cout <<"tytul filmu: "<< film[i].tytul << endl;
     	cout <<"rezyser filmu: "<< film[i].rezyser << endl;
     	cout <<"rok powstania filmu: "<< film[i].rok << endl;
     	cout <<"gatunek filmu: "<< film[i].gatunek << endl;
        cout << "czas trwania filmu: "<<film[i].czasTrwaniaMinuty << endl;
    }

    system("pause >nul");

    return 0;
}
