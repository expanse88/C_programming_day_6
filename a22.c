#include<math.h>
#include<stdio.h>
int main()
{
float a,b,c,d,r_1,r_2,real,imag;
printf("Enter the value of a,b,c:");
scanf("%f,%f,%f" ,&a,&b,&c);
d =b*b-4*a*c;
if (d>0){
r_1 = (-b + sqrt(d)) / (2 * a);
r_2 = (-b - sqrt(d)) / (2 * a);
printf("Roots are real and distinct.\n ");
printf("r_1=%f and r_2=%f", r_1, r_2);
}
else if(d == 0){
r_1 = r_2 = -b / (2 * a);
printf("roots are equal");
printf("r_1=%f and r_2=%f\n",r_1,r_2);
}
else{
real = -b/(2*a);
imag = sqrt(-d)/(2*a);
printf("Roots are imaginery\n");
printf("root1=%f+i%f\n and root2= %f-i%f\n",real,imag,real,imag);
}
return 0;
}    
