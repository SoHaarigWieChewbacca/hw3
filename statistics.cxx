#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

void random(const int N, double* p){
   
   for(int i=0; i<N; i++)
	p[i] = 1.0*rand()/RAND_MAX;
}

void calc(const int N, double* p, double& mean, double& var){
   mean = 0;
   var = 0;
   
   for(int i=0; i<N; i++)
	mean += p[i];
   
   mean /= N;

   for(int i=0; i<N; i++)
	var += (p[i] - mean) * (p[i] - mean);
   
   var /= N;
}


int main(){

   srand(time(NULL));
   const int N = 100;
   double p[N];
   double mean, var;

   random(N, p);
   calc(N, p, mean, var);

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
