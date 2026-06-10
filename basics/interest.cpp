#include<iostream>
using namespace std;
int main(){
    float principal, rate, si;
    int time;
    cout<< "Enter the priciple amount: \n";
     cin>> principal;
    cout << "Enter the rate: \n";
    cin>> rate;
    cout<< "Enter the time: \n";
    cin>> time;
    
    si= (principal*rate*time)/100;
    cout<< "The simple interest is: "<< si;
    return 0;

}