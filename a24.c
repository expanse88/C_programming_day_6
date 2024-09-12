/*WAP to input any two integers, and provide a menu to the user to select any of the options as 
add, subtract, multiply, divide and display the result accordingly */
#include<stdio.h>
int main()
{
int a,b,choice,add,sub,div,mul;
printf("Enter any two integers:\n");
scanf("%d %d",&a,&b);
printf("Select the operation from the menu:\n 1 for Add, 2 for Subtract, 3 for Multiplication, 4 for Division:");
scanf("%d",&choice);
add = a+b;
sub = a-b;
mul = a*b;
div = a/b;
switch (choice){ 
        	case 1 :  
			printf("Addition=%d",add);
			break;
	
		case 2 :
                	printf("Subtraction=%d",sub);
	        	break;
        	
		case 3 :
			printf("Multiplication=%d",mul);
                	break;	
        	
		case 4 : 
                	printf("Division=%d",div);
                	break;

		default:
		break;
}
}
