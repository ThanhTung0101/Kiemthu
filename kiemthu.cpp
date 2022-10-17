#include <bits/stdc++.h>

using namespace std;

int main()
{
    int DRL;
    float Diem;
    cin >> DRL >> Diem;
    if (DRL >= 90 && DRL <= 100 &&
        Diem >= 3.6 && Diem <= 4.0) {cout << "Duoc"; return 0;}
    else {cout << "Khong duoc"; return 0;}
}
