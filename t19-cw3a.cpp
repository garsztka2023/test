/*
Uruchom powyzszy program i sprawdz jego dzialanie. Nowa
*/

#include <iostream>

using namespace std;

const int N = 4;
const int NOMINALY[] = {1,2,4,5};
const int KWOTA = 8;

int IleMonet()
{
    int i, j;
    int IleM[KWOTA + 1];
    IleM[0] = 0;

    for(i = 1; i <= KWOTA; i++)
        IleM[i] = KWOTA + 1;

    for(i = 1; i <= KWOTA; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(NOMINALY[j] <= i)
                if(IleM[i - NOMINALY[j]] + 1 < IleM[i])
                    IleM[i] = IleM[i - NOMINALY[j]] + 1;
        }
    }

    return IleM[KWOTA];
}

int main()
{
    cout << "Minimalna liczba monet dla kwoty ";
    cout << KWOTA << ": " << IleMonet();
    return 0;
}
