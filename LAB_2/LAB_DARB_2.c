#include<stdio.h>
#include<math.h>
int main(){
 float a=0.01, b=1.5*M_PI, x, delta_x=1.e-3, funkca, funkcb, funkcx;
 int k=0;

 funkca = cos(a); funkcb = cos(b);
 if(funkca*funkcb>0){
    printf("intevala [%.2f;%.2f] cos(x) funkcijai",a,b);
    printf("saknju nav (vai taja ir paru saknju skaits)\n");
return 1;}

printf("cos(%7.3f)=%7.3f\t\t\t\t",a,b);
printf("sin(%7.3f)=%7.3f\n",b,sin(b));
while((b-a)>delta_x)
    {
    k++;
    x=(a+b)/2.;
    if(funkca*cos(x)>0)

     a=x;
    else
     b=x;
    printf("%2d. interacija: cos(%7.3f)=%7.3f\t",k,a,sin(a));
    printf("sin(%7.3f)=%7.3f\t",x,cos(x));
    printf("sin(%7.3f)=%7.3f\t",b,cos(b));
    }

printf("sakne atrodas pie x=%.3f, jo sin(x) ir %.3f\n",x,cos(x));
return 0;
}
