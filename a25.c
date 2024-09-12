/*Print weekday name program according to given weekday number using switch-case
weekday number (0-6) and print weekday name (Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday)*/
#include<stdio.h>
int main()
{
int choice,sun;
printf("Enter the weekday:");
scanf("%d",&choice);
switch(choice){
     		case 0:
                       printf("This is Sunday.\n");
                       break;                 
                case 1:
                       printf("This is Monday.\n");   
                       break;
                case 2:
                       printf("This is Tuesday.\n");
                       break;
                case 3:
                       printf("This is Wednesday.\n");
                       break;  
                case 4: 
                       printf("This is Thursday.\n"); 										
                       break;               
                case 5:
                       printf("This is Friday.\n");
                       break;
                case 6:
                       printf("This is Saturday.\n");
                       break;
                          

default:
break;

}
}
