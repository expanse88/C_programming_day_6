/*WAP to display the grade system of KIIT University based on total marks secured by a student in a 
semester. Assume marks are integer values. Use multiple if-else statement. 
The grade is calculated is as follows: 
Marks Grade 
90 to 100 O 
80 to 89 E 
70 to 79 A 
60 to 69 B 
50 to 59 C 
40 to 49 D 
< 40 F*/
#include<stdio.h>
int main()
{
int m;
printf("Enter total mark secured by a student(out of 100):\n");
scanf("%d",&m);
if (m<40){
printf("Sorry you are failed.\n");
}
else if(m>=40 && m<=49 ){
printf("You got a D grade.\n");
}
else if(m>=50 && m<=59){
printf("You got a C grade.\n");
}
else if(m>=60 && m <=69){
printf("You got a B grade.\n");
}
else if(m>=70 && m<=79 ){
printf("Yaay!!You got an A grade.\n");
}
else if(m>=80 && m<=89){
printf("Yaay!!You got an E grade.\n");
}
else if(m>=90 && m<= 100){
printf("Yaay!!You got an O grade.\n");
}
else{
printf("This input is not applicable to this question.\n");
}
return 0;
}
