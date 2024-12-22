#include<stdio.h>
int day(int,int);
int year(int);
void main()
{
	int m,y,a[7][7],i,j,f,b=1,c,d=0,e;
	printf("Enter The month And year (MM-YYYY) :");
	scanf("%d%d",&m,&y);
	f=day(m,y);

	printf("\t Mon \t");
	printf("\t Tue \t");
	printf("\t Wed \t");
	printf("\t Thu \t");
	printf("\t Fri \t");
	printf("\t Sat \t");
	printf("\t Sun \t\n");
	
	for(i=1;i<y;i++)
	{
		c=year(i);
		d=d+c;
	}
	e=d%7;
	d=0;
	for(i=1;i<m;i++)
	{
		c=day(i,y);
		d=d+c;
	}
	e=e+d;
	d=e%7;
	for(i=0;i<1;i++)
	{
		for(j=0;j<d;j++)
		{
			printf("\t   \t");
		}
	}
	
	for(i=0;i<1;i++)
	{
		for(j=d;j<7;j++)
		{
		    a[i][j]=b;
		    printf("\t %d \t",a[i][j]);
		    b=b+1;
		}
		printf("\n");
	}
	
	for(i=1;i<6;i++)
	{
		for(j=0;j<7;j++)
		{
		    a[i][j]=b;
		    if(b<=f)
		    {
		    	printf("\t %d \t",a[i][j]);
			}
			else break;
		    b=b+1;
		}
		printf("\n");
	}
}

int year(int i)
{
		if(i%100==0)
		{
			if(i%400==0)
			{
				return 366;
			}
			else return 365;
		}
		if(i%4==0)
		{
			return 366;
		}
		else return 365;
}

int day(int m,int y)
{
	if(m<12)
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
    else
    {
    	m=m-12;
    	return(day(m,y));
	}
}
