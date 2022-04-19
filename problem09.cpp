#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // problem : Calculate the volume of a sphere

    int radius = 6;

    float volumeOfSphere = (4*3.1416*radius*radius*radius) / 3;

    cout << fixed << setprecision(2);
    cout << "The value of sphere is : " << volumeOfSphere << endl;


return 0;
}
