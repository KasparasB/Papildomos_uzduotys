#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct Krepsininkas{
    string Pavarde;
    int Ugis;
    int Rezultatyvumas;
};

int main()
{
int Min = 9999;
int MinSenas;

Krepsininkas Rytas[5], *rod;
Krepsininkas tmp;

rod = Rytas;

for(int i=0; i<5; i++)
{
    cin>>(rod+i)->Pavarde>>(rod+i)->Ugis>>(rod+i)->Rezultatyvumas;

        if(Min > (rod+i)->Rezultatyvumas)
            Min = (rod+i)->Rezultatyvumas;
}

MinSenas = Min;
Min = 9999;

for(int i = 0; i<4; i++)
{
    for(int y = i+1; y<5; y++)
    {
        if((rod+i)->Rezultatyvumas > (rod + y)->Rezultatyvumas )
        {
            tmp = Rytas[i];
            Rytas[i] = Rytas[y];
            Rytas[y] = tmp;
        }
    }
}

for(int i = 0; i<5 ; i++)
{
    cout<<(rod+i)->Pavarde<<" "<<(rod+i)->Ugis<<" "<<(rod+i)->Rezultatyvumas<<endl;
}




}
