// lab_02.cpp
// Savshak Arsen
// Лабораторна робота No 2.
// Лінійні програми.
// Варіант 11

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, z2, z1; // a - змінна для обчислення, z2 i z1 - змінні, які далі будуть обозначати рішення обох прикладів.
    cout << "Input your number here: "; cin >> a;
    // z1 = (1 - 2 * pow(sin(a), 2))/(1 + sin(2) * a); // рішення першого прикладу
    cout << "Your answer for the first function is: " << z1 << endl;
    // z2 = (1 - tan(a))/(1+tan(a)); // рішення другого прикладу
    cout << "Your answer for the second function is: " << z2 << endl;
    return 0;
}
