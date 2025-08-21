#include <stdio.h>
#include <math.h>
int main(){
  double a,b,c,d, root1, root2;
  char ch;
  printf("Enter a choice(y/n)\n");
  scanf(" %c", &ch);
  while(ch=='y')
{
  //input coefficients
  printf("Enter 3 intergers\n");
  scanf("%lf%lf%lf", &a, &b, &c );
  //to check if inputs are valid
  if(a == 0){
    printf("The input is invalid\n");
  }
  //calculate discriminatnt
  d= b*b-4*a*c;
  if(d>0){
    root1=-b+sqrt(d)/2*a;
    root2=-b-sqrt(d)/2*a;
    printf("The roots are %.2lf\n", root1);
    printf("The roots are %.2lf\n", root2);

  }
  else if (d<0)
  {
    printf("The roots is %.2lf + i%.2lf\n", a, b);
    printf("The roots is %.2lf - i%.2lf\n", a, b);
  }
  else
  {
    root1=-b/2*a;
    root2=-b/2*a;
    printf("The roots are %.2lf\n", root1);
    printf("The roots are %.2lf\n", root2);
  }
  {
    printf("do you wannna continue?\n");
    scanf(" %c", &ch);
  }
} 
}
