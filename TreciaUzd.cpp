#include <iostream>
#include <cstdlib>
#include <string>

struct Laikas{int Metai; int Menesis; int Diena;};
struct Biblioteka{std::string Knyga; Laikas Data;};

void Spausdinti(Biblioteka B)
{
    std::cout<<B.Knyga<<" "<<B.Data.Metai<<" "<<B.Data.Menesis<<" "<<B.Data.Diena<<std::endl;
}

void Priskirti(Laikas &A, Biblioteka &B, int a, int b, int c, std::string knyga)
{
    A.Metai = a; A.Menesis = b; A.Diena = c;
    B.Knyga = knyga; B.Data = A;

    Spausdinti(B);

}

int main()
{
    Laikas A;
    Biblioteka B;
    int a,b,c;
    std::string knyga;

    std::cin>>a>>b>>c>>knyga;

    Priskirti(A,B,a,b,c,knyga);
    system("pause");
}
