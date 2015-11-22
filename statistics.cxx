#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

void fill(double* p, const int N);
void varmean(double &mean, double &var, double* p, const int N);

int main(){
   const int N = 50;
   double p[N];
   double mean = 0;
   double var = 0;

fill(p, N);
varmean(mean,var,p,N);

// for testing:
//for(int i=0; i<N; i++){
//  cout << p[i] << endl;
//}
   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}

// function for filling the array
void fill(double* p, const int N){
for(int i=0; i<N; i++){
  double a = double(rand());
  double b = double(RAND_MAX);
  p[i] = double(a/b);
}
}

// function for calculating the mean value and variance
void varmean(double &mean, double &var, double* p, const int N){
for(int i=0; i<N; i++){
  mean += p[i];
}
mean = mean/N;
for(int i=0; i<N; i++){
var += pow(p[i]-mean,2);
}
var = var/N;
}
