//if-else-if ladder
//grade
//90-A grade
//70-90-B grade
//50-70-C grade
//30-50-D grade
//>30- Fail
#include<stdio.h>
int main()
{
int marks;
scanf("%d",&marks);
if(marks>=90){
printf("A grade");
}
else if (marks>=70 && marks <90){
printf("B grade");
}
else if (marks>=50 && marks <70){
printf("C grade");
}
else if (marks>=30 && marks <50){
printf("D grade");
}
else{
printf("Fail");
}
}