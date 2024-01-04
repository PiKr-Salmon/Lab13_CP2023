#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double x[],int i,double y[]){
    double sum = 0,harmosum = 0 ;
    double geosum = 1;
    for(int cou = 0; cou < i; cou++ ){
    sum = sum + (x[cou]);
    harmosum = harmosum + (1 / x[cou]);
    }
    y[0] = sum/i ;

    double Sd = 0;
    for(int couu = 0; couu < i; couu++){
        Sd = Sd + pow(x[couu] - y[0],2.0);
    }
    y[1] = sqrtl( Sd / i);

    for(int cou = 0; cou < i; cou++ ){
    geosum = geosum * (x[cou]);}
    y[2] = pow(geosum,(1.0 / i));

    y[3] = i/harmosum;

     double max = x[0],min = x[0];
    for(int findmm = 1 ; findmm < i ; findmm++ ){
        if(x[findmm]>max) max = x[findmm];
        if(x[findmm]<min) min = x[findmm];
    }
        y[4] = max ; y[5] = min ;
}