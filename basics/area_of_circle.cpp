#include<iostream>
using namespace std;
int main(){
    float radius;
    float pie =3.1415F;
    cout<< "Enter the radius of the circle: "<<endl;
    cin>> radius;
    float area= pie*radius*radius;
    cout<<"The area of the circle is: "<< area;
    return 0;
}