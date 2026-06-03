#include <iostream>
using namespace std;
int main()
{
    int gracz = 1;
    int t[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            t[i][j] = 0;
        }
    }
    int wiersz, kolumna;
    int ruchy = 0;
    bool koniec = false;
    while (!koniec && ruchy < 9) {
        cout << "Aktualna plansza:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {

                if (t[i][j] == 1) cout << "X";
                else if (t[i][j] == 2) cout << "O";
                else cout << " ";
                if (j < 2) cout << " | ";
            }
            cout << endl;
            if (i < 2) cout << "---------" << endl;
        }
        cout << endl;
        char symbolGracza = (gracz == 1) ? 'X' : 'O';
        cout << "Ruch gracza " << symbolGracza << ". Podaj kolumne (0-2) i wiersz (0-2)  (po spacji): ";
        cin >> kolumna >> wiersz;
        if (wiersz >= 0 && wiersz < 3 && kolumna >= 0 && kolumna < 3 && t[wiersz][kolumna] == 0) {
            t[wiersz][kolumna] = gracz;
            ruchy++;
            bool wygrana =
                (t[0][0] == gracz && t[0][1] == gracz && t[0][2] == gracz) ||
                (t[1][0] == gracz && t[1][1] == gracz && t[1][2] == gracz) ||
                (t[2][0] == gracz && t[2][1] == gracz && t[2][2] == gracz) ||
                (t[0][0] == gracz && t[1][0] == gracz && t[2][0] == gracz) ||
                (t[0][1] == gracz && t[1][1] == gracz && t[2][1] == gracz) ||
                (t[0][2] == gracz && t[1][2] == gracz && t[2][2] == gracz) ||
                (t[0][0] == gracz && t[1][1] == gracz && t[2][2] == gracz) ||
                (t[0][2] == gracz && t[1][1] == gracz && t[2][0] == gracz);
            if (wygrana) {
                cout << "Ostateczna plansza: " << endl;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        if (t[i][j] == 1) cout << "X";
                        else if (t[i][j] == 2) cout << "O";
                        else cout << " ";
                        if (j < 2) cout << " | ";
                    }
                    cout << endl;
                    if (i < 2) cout << "---------" << endl;
                }
                cout << "Koniec gry. Wygrywa gracz " << symbolGracza << "!" << endl;
                koniec = true;
            } else if (ruchy == 9) {
                cout << "Koniec gry. Remis." << endl;
            } else {
                if (gracz == 1) {
                    gracz = 2;
                } else {
                    gracz = 1;
                }
            }
        } else {
            cout << "Niepoprawny ruch. Spróbuj ponownie." << endl;
        }
    }
    return 0;
}
