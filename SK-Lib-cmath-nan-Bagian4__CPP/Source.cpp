#include <iostream>
#include <cmath>
#include <cstring>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main() {
    double src = nan("1");
    uint64_t dest;

    memcpy(&dest, &src, sizeof src);
    cout << "nan(\"1\") = " << src << " (" << hex << dest << ")\n";

    _getch();
    return 0;
}