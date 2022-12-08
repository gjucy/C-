#include <iostream>
#include <fstream>
#include <cmath>
#include<iomanip>
using namespace std;
const char CDfv[] = "Duomenys.txt";
const char CRfv[] = "Rezultatai.txt";
void Dieta (double & a, double & b, double & r, int g);
int main()
{
double a, b, r;
int d, i, g;
ifstream fd(CDfv);
ofstream fr(CRfv);
fd >> d;
for (i = 1; i<=d; i++){
fd >> g;
Dieta (a, b, r, g);
fr << fixed << setprecision (1) << a  << " " << fixed << setprecision (1) << b << " " << fixed << setprecision (1) << r << endl;
}
fd.close();
fr.close();
    return 0;
}
void Dieta (double & a, double & b, double & r, int g) {
a = g*0.71;
b = g*0.11;
r = g*0.015;
}
