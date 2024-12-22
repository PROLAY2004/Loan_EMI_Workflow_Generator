#include<stdio.h>
int day(int,int);
void main()
{
	int d,y,t,m,b,c,x,j,i,k=0;
	float r,a,i1,i2,p;
	printf("Enter the principle amount :");
	scanf("%f",&p);
	printf("enter the rate of interest :");
	scanf("%f",&r);	
	printf("enter the time period in year :");
	scanf("%d",&t);
	printf("enter the date of loan (DD-MM-YYYY) :");
	scanf("%d%d%d",&b,&m,&y);
	printf("enter the date of emi payment of every month :");
	scanf("%d",&d);
	printf("enter the ammount of emi :");	
	scanf("%f",&a);
	c=day(m,y);
	m=m+1;
	x=c-b;
	i=(p*r*x)/36500;
	printf("interest of month %d , %d = %d \n",m-1 ,y ,i);
	for(j=1;j<=(t*12);j++)
	{
		k=k+i;
		c=day(m,y);
		p=p+i;
	    i1=(p*r*(d-1))/36500;
	    p=p-a;
	    printf("balance = %f \n",p);
	    i2=(p*r*(c-d+1))/36500;
	    i=i1+i2+2;
	    printf("interest of month %d , %d = %d \n",m ,y ,i);
		m=m+1;
		if(m==13)
		{
			m=1;
			y=y+1;
			continue ;
		}
    } 
	printf("Remaining = %f",p+i-a);	
	printf("total interest = %d",k);
}
int day(int m,int y)
{
	if(m==1)
	{
		return 31;
	}
	else if(m==2)
	{
		if(y%100==0)
		{
			if(y%400==0)
			{
				return 29;
			}
			else return 28;
		}
		if(y%4==0)
		{
			return 29;
		}
		else return 28;
	}
	else if(m==3)
	{
		return 31;
	}
		else if(m==4)
	{
		return 30;
	}
		else if(m==5)
	{
		return 31;
	}
		else if(m==6)
	{
		return 30;
	}
		else if(m==7)
	{
		return 31;
	}
		else if(m==8)
	{
		return 31;
	}
		else if(m==9)
	{
		return 30;
	}
		else if(m==10)
	{
		return 31;
	}
		else if(m==11)
	{
		return 30;
	}
		else if(m==12)
	{
		return 31;
	}
}
