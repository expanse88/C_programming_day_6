/*WAP to display the grade system of KIIT University based on total marks secured by a 
student in a semester. Use swtich case statement.*/ 
#include<stdio.h>
int main()
{
int m;
printf("Enter total marks secured by a student:");
scanf("%d",&m);
switch(m/10){
        case 9: 	
                ("m>=90 && m<=100");
                printf("Secured grade is O.\n");
                break;	
        case 8:
               ("m>=80 && m<=89");
               printf("Secured grade is E.");
               break;
        case 7:
                ("m>=70 && m<=79");
                printf("Secured grade is A.\n");
                break;
        case 6:
               ("m>=60 && m<=69");
               printf("Secured grade is B.");
               break;
        case 5:
                ("m>=50 && m<=59");
                printf("Secured grade is C.\n");
                break;
        case 4:
               ("m>=40 && m<=49");
               printf("Secured grade is D.");
               break;        

        case 3:
                ("m<40");
                printf("Secured grade is F.\n");
                break;
default:
break;

} 


}
