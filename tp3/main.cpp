#include <iostream>
#include <vector>

using namespace std;


int jouer(int tab)
{
    int i=5;
    int j;
    bool j1=true,j2=false,n;
    while(gagne(tab) == True)
    {
        cout << "entrez la colonne souhaité" << endl;
        cin >> j;
        while(tab[i][j] != 0)
        {
            i -= 1;

        }
        if(j1 == true)
        {
            tab[i][j] = 1;
        }
        else
        {
            tab[i][j] = 2;
        }
        j1=n;
        j1 = j2;
        j2=n;
    }

}

int main()
{

    int tab[6][7];
    int i, j;

    /* Affichage de chaque élément de tableau */
    for ( i = 0; i < 6; i++ )
    {
        cout << endl;
        for ( j = 0; j < 7; j++ ) {
            cout <<  tab[i][j] ;

        }
    }
    return 0;
}
