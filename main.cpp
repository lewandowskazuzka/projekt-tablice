#include <iostream>
using namespace std;
int main()
{
    int gracz=1;
    int t[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            t[i][j]=0;
        }
    }
    int wiersz,kolumna;
    int ruchy=0;
    bool koniec=false;
    while(!koniec&&ruchy<9){
        cout << "Aktualna plansza" << endl;
        for (int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout << t[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        cout << "Ruch gracza " << gracz << ". Podaj wiersz (0-2) i kolumne (0-2)";
        cin >> wiersz >> kolumna;
    }
    if (wiersz>=0 && wiersz<3 && kolumna>=0 && kolumna <3 && t[wiersz][kolumna]==0){
        t[wiersz][kolumna]=gracz;
        ruchy++;
    }
    bool wygrana =
        (t[0][0] == gracz && t[0][1] == gracz && t[0][2] == gracz) ||
        (t[1][0] == gracz && t[1][1] == gracz && t[1][2] == gracz) ||
        (t[2][0] == gracz && t[2][1] == gracz && t[2][2] == gracz) ||
        (t[0][0] == gracz && t[1][0] == gracz && t[2][0] == gracz) ||
        (t[0][1] == gracz && t[1][1] == gracz && t[2][1] == gracz) ||
        (t[0][2] == gracz && t[1][2] == gracz && t[2][2] == gracz) ||
        (t[0][0] == gracz && t[1][1] == gracz && t[2][2] == gracz) ||
        (t[0][2] == gracz && t[1][1] == gracz && t[2][0] == gracz);


}
