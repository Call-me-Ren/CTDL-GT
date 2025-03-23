//PhanTuChung.cpp 
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
void TimPhanTuChung(vector<int>& x, vector<int>& y, vector<int>& z) 
{
    set<int> setX(x.begin(), x.end());
    set<int> setY(y.begin(), y.end());
    set<int> setZ(z.begin(), z.end());

    vector<int> giaoXY;
    set_intersection(setX.begin(), setX.end(), setY.begin(), setY.end(), back_inserter(giaoXY));

    vector<int> giaoXYZ;
    set_intersection(giaoXY.begin(), giaoXY.end(), setZ.begin(), setZ.end(), back_inserter(giaoXYZ));

    cout << giaoXYZ.size() << endl;
    for (int val : giaoXYZ) 
    {
        cout << val << " ";
    }
    cout << endl;
}

int main() 
{
    int nx, ny, nz;
    cin >> nx;
    vector<int> x(nx);
    for (int& xi : x) cin >> xi;

    cin >> ny;
    vector<int> y(ny);
    for (int& yi : y) cin >> yi;

    cin >> nz;
    vector<int> z(nz);
    for (int& zi : z) cin >> zi;

    TimPhanTuChung(x, y, z);
    return 0;
}
