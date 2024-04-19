#include <iostream>
using namespace std;

int main(){
    string s = "Hello";
    int a = 15;
    double d = 9.125;

    double *p;
    p =(double*) &d;
    int* k =(int*) &d;
    //printf("%x %d",p,*p);

    int q = 123;
    
    
    cout << *p <<endl;
    
    cout << *k;
    return 0;
}