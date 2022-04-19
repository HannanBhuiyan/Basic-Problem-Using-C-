#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

    // problem : Write a program in C++ to calculate the volume of a cube.
    int a;
    float volumeOfCube;
    cout << "Enter the volume \n";
    cin >> a;
    volumeOfCube = a*a*a;

    cout << fixed << setprecision(2);
    cout << " The volume of a cube is : " << volumeOfCube << endl;


return 0;
}
