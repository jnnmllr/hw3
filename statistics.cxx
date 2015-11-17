#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;
//--------------------------------------------------
// plenty of lines here
//--------------------------------------------------
void fill(double* p, const int N){
  double b=RAND_MAX;
for(int i=0; i<N; i++){
  double a = rand ();
  p[i] = a/b;
}
}

void varmean(double &mean, double &var, double* p, const int N){
  double sum1;
  double sum2;
for(int i=0; i<N; i++){
  sum1 += p[i];
}
mean = sum1/N;
for(int i=0; i<N; i++){
sum2 += pow(2,p[i]-mean);
}
var = sum2/N;
}


int main(){
   const int N = 100;
   double p[N];
   double mean, var;

   // Some lines here....
fill(p, N);
varmean(mean,var,p,N);

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
