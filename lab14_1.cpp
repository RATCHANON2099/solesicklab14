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




void stat(const double A[],int N,double B[])
{
    double sum=0, Arithmetic=0, SD=0, GM=1, HMF=0, MAX=0, MIN=100;
    for(int i=0; i<N; i++){
        sum += A[i];
        SD += pow(A[i],2);
        GM *= A[i];
        HMF += 1.0/A[i];
        if(MAX<A[i])
        {
            MAX = A[i];
        }
        if(MIN>A[i])
        {
            MIN = A[i];
        }
        
    }
    Arithmetic = sum/N;
    B[0] = Arithmetic;
    B[1] = sqrt((SD/N)-pow(Arithmetic,2));
    B[2] = pow(GM,1.0/N);
    B[3] = N/HMF; 
    B[4] = MAX;
    B[5] = MIN;
}