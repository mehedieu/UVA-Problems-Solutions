#include <stdio.h>

int main()
{
int year_1,year_2,month_1,month_2,day_1,day_2,age,i,j,k,tcase;

while(scanf("%d",&tcase)==1)
{
  for(i=1;i<=tcase;i++){

  scanf("%d/%d/%d",&day_1,&month_1,&year_1);
  scanf("%d/%d/%d",&day_2,&month_2,&year_2);

  age=(year_1-year_2);
  if(month_1<month_2)
   age --;
   else if(month_1==month_2) {
   if(day_1<day_2)
   age --;
    }

  if(age<0)
   printf("Case #%d: Invalid birth date\n",i);
   else if(age>130)
   printf("Case #%d: Check birth date\n",i);
   else
   printf("Case #%d: %d\n",i,age);
}
}

}
