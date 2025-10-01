//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int cp;
    int c;
    int fd;
    int s;
    int ld;
    printf("Enter the number");
    scanf("%d",&n);
    cp=n;
    ld=n%10;
    while(n>0)
    {
        int d=n%10;
        n=n/10;
        c++;
    }
    fd=cp/(pow(10,c));
    s=ld * (int)pow(10,c)+ (cp % (int)pow(10,c))- ld+ fd;  
    printf("%d",s);
    return 0;                       

}