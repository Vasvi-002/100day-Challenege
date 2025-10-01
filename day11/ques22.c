//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include<stdio.h>
int main()
{
int sp;
int cp;
int choice;
int profit;
int loss;
printf("Enter the sp and cp");
scanf("%d %d",&sp, &cp);
if(sp==cp)
printf("No profit or loss");
else
{
printf("Enter the choice 1 for profit and 2 for loss");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    profit=((cp-sp)/cp)*100;
    printf("profit = %d",profit);
    break;
    case 2:
    loss=((sp-cp)/sp)*100;
    printf("loss = %d",loss);
    break;
    default:
    printf("Enter a valid choice");

}
}
return 0;
}