#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct Taskas{int x; int y;};

int main()
{
Taskas A;
Taskas B;

cout<<"Iveskite K.V koordinates"<<endl;
cin>>A.x>>A.y;
cout<<"Iveskite D.A koordinates"<<endl;
cin>>B.x>>B.y;

cout<<"Plotas yra: "<< (B.x - A.x) * (A.y - B.y) << endl;

}
