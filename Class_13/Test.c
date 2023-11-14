#include<stdio.h>
#include<math.h>
double manss_cosinus(double x){
double a,S;
int k=0;

a = pow(-1,k) * pow(pow(k,2),k)/(1.);
S = a	;
printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

while(k<20){
k++;
a = a*(-1) *x*x / ((2*k)*(2*k-1));
S = S + a;
printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
}
return S;
}

void main(){
double x =2.05,y,yy;
y = cos(x);
printf("standarta funkcija cos, y=cos(%.2f)=%.2f\n",x,y);

yy= manss_cosinus(x);
printf("lietotaaja funkcija, y=manss_cosinus(%.2f)=%.2f\n",x,yy);
}