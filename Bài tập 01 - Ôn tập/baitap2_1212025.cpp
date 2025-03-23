//GiaiPTTrungPhuong.cpp 
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
void GiaiPTTrungPhuong(double a, double b, double c)
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
            double y = -c / b;
            if (y < 0)
            {
                cout << "Phuong trinh vo nghiem" << endl;
            }
            else
            {
                cout << "Phuong trinh co 2 nghiem" << endl;
                double x1 = -sqrt(y), x2 = sqrt(y);
                cout << fixed << setprecision(2) << x1 << " " << x2 << endl;
            }
        }
    }
    else
    {
        double Delta = b * b - 4 * a * c;
        if (Delta < 0)
        {
            cout << "Phuong trinh vo nghiem" << endl;
        }
        else
        {
            vector<double> nghiem;
            double y1 = (-b - sqrt(Delta)) / (2 * a);
            double y2 = (-b + sqrt(Delta)) / (2 * a);

            if (y1 >= 0)
            {
                nghiem.push_back(-sqrt(y1));
                nghiem.push_back(sqrt(y1));
            }
            if (y2 >= 0)
            {
                nghiem.push_back(-sqrt(y2));
                nghiem.push_back(sqrt(y2));
            }

            if (nghiem.empty())
            {
                cout << "Phuong trinh vo nghiem" << endl;
            }
            else
            {
                sort(nghiem.begin(), nghiem.end());
                nghiem.erase(unique(nghiem.begin(), nghiem.end()), nghiem.end());
                cout << "Phuong trinh co " << nghiem.size() << " nghiem" << endl;
                for (double x : nghiem) {
                    cout << fixed << setprecision(2) << x << " ";
                }
                cout << endl;
            }
        }
    }
}

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    GiaiPTTrungPhuong(a, b, c);
    return 0;
}
