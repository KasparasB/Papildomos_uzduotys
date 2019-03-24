#include <iostream>
#include <stdlib.h>

struct Laikas{int Metai; int Menesis; int Diena;};

void Priskirti(int a, int b, int c, Laikas &A)
{
    A.Metai = a;
    A.Menesis = b;
    A.Diena = c;
}

void Spausdinti(Laikas A)
{
    std::cout<< A.Metai << " " << A.Menesis << " " << A.Diena << std::endl;
}

int main()
{
int a,b,c;
Laikas A;

std::cin>>a>>b>>c;

Priskirti(a,b,c,A);
Spausdinti(A);

system("Pause");
return 0;
}
