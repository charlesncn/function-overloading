#include <iostream>
using namespace std;
#define pi 3.142

void display(int, int, int);
void display(double);
void display(float);

int main() {
	
    int length, width, height;
    double radius_cylinder;
    float radius_sphere;
    cout<<"Enter the measurements for length, width and height of the rectangular tank in meters "<<endl;
    cin>>length>>width>>height;
    
    cout<<"Enter the measurements for radius of the cylindrical tank in meters"<<endl;
    cin>>radius_cylinder;
    
    cout<<"Enter the measurements for radius of the spherical tank in meters"<<endl;
    cin>>radius_sphere;

    display(length, width, height);
    display(radius_cylinder);
    display(radius_sphere);

    return 0;
}

void display(int l, int w, int h) {
    cout << "Volume of the rectangular tank is : " <<l*w*h << endl;
}

void display(double r) {
    cout << "Volume of the cylindrical tank is : " <<pi*r*r << endl;
}

void display(float r) {
    cout << "Volume of the spherical tank is : " << pi*r*r*r;
}
