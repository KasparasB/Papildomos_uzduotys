#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct Krepsininkai{
    string Pavarde;
    int Ugis;
    int Rezultatyvumas;
    Krepsininkai *Kitas;
};

void Spausdinti(Krepsininkai *root) {
  Krepsininkai *t = root;
  while (t) {
    cout << t->Pavarde << " " << t->Ugis << " " << t->Rezultatyvumas << endl;
    t = t->Kitas;
  }
  cout << endl;
}

int main()
{
string a;
int b,c;
Krepsininkai *root = NULL;

cin>>a>>b>>c;

root = new Krepsininkai;
root->Pavarde = a;
root->Ugis = b;
root->Rezultatyvumas = c;
root->Kitas = NULL;

Krepsininkai *t = root;
  for (int i=1; i<3; i++) {
    cin>>a>>b>>c;
    t->Kitas = new Krepsininkai;
    t = t->Kitas;
    t->Pavarde = a;
    t->Ugis = b;
    t->Rezultatyvumas = c;
    t->Kitas = NULL;
  }

Spausdinti(root);

system("PAUSE");
return 0;
}
