#include<stdio.h>
int main(){
int a;
int b;
int choice;
printf("enter first number: ");
scanf("%d",&a);
printf("enter second number: ");
scanf("%d",&b);
printf("enter your choice:\n");
printf("1.add\n");
printf("2.sub\n");
printf("3.multi\n");
printf("4.div\n");
scanf("%d",&choice);
switch (choice){
case 1:
   int result = a+b;
   printf("%d",result);
break;
case 2:
   int result1=a-b;
   printf("%d",result1);
break;
case 3:
   int result2=a*b;
   printf("%d",result2);
break;
case 4:
   int result3=a/b;
   printf("%d",result3);
break;
default:
  printf("Enter the correct operation.");
break;
}
}