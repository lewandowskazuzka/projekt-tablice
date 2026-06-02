#include <iostream>
using namespace std;
int main()
{
    int t[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            t[i][j]=0;
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout << t[i][j];
        }
    cout << endl;
    }

}
