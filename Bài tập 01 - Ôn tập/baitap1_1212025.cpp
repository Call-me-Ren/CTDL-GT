//GiaiPTBac2.cpp 
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void GiaiPTBac2(double a, double b, double c) 
{
    if (a == 0) 
    {
        if (b == 0) 
        {
            if (c == 0) 
            {
                cout << "Phuong trinh co vo so nghiem" << endl;
            }
            else 
            {
                cout << "Phuong trinh vo nghiem" << endl;
            }
        }
        else 
        {
            cout << "Phuong trinh co 1 nghiem" << endl;
            cout << fixed << setprecision(2) << -c/b << endl;
        }
    }
    else {
        double Delta = b*b-4*a*c;
        if (Delta < 0) 
        {
            cout << "Phuong trinh vo nghiem" << endl;
        }
        else if (Delta == 0) 
        {
            cout << "Phuong trinh co 1 nghiem" << endl;
            cout << fixed << setprecision(2) << -b/(2*a) << endl;
        }
        else 
        {
            cout << "Phuong trinh co 2 nghiem" << endl;
            double x1 = (-b-sqrt(Delta)) / (2*a);
            double x2 = (-b+sqrt(Delta)) / (2*a);
            cout << fixed << setprecision(2) << x1 << " " << x2 << endl;
        }
    }
}

int main() 
{
    double a, b, c;
    cin >> a >> b >> c;
    GiaiPTBac2(a, b, c);
    return 0;
}
