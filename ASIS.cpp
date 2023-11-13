#include<stdio.h>
#include<cstdlib>
void balance();
void avarage();
int validate(int account_numb_temp,int passwd_temp);
int i,x;
int account_numb_temp;
int notes;
int notes1;
int notes2;
int total;
int ava;
int passwd_temp;
struct account_details
{
	int account_id;
	int password;
	int notes;
	int notes1;
	int notes2;
};
struct account_details s[3]={{123456789,1234,5,3,4},{5674321987,5678,0,2,3},{89877182,1098,2,3,4}};	
int main()
{
	while(1)
	{
		int choice;
		printf("\n---ASIS---\n");
		printf("1.BALANCE\n 2.AVARAGE\n 3.EXIT\n Enter Your Choice\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					balance();
					break;
				}
			case 2:
				{
					avarage();
					break;
				}
			case 3:
				{
					exit(1);
				}
			default:
				printf("Enter a Valid choice\n");

		}
	}
}
int validate(int account_numb_temp,int passwd_temp)
{
	for(i=0;i<3;i++)
	{
		if(s[i].account_id==account_numb_temp)
		{
			if(s[i].password==passwd_temp)
			{
				return i;
				break;	
			}
			else
			{
				printf("\nPassword Mismatch");
				exit(1);		
			}	
		}	
		if(i==2)
		{
			printf("\nAccount doesn't exist");
			exit(1);	
		}
	}
}
void balance()
{
	printf("\nEnter the account number\t");
	scanf("%d",&account_numb_temp);
	printf("\nEnter the password\t");
	scanf("%d",&passwd_temp);
	x=validate(account_numb_temp,passwd_temp);
	printf("\nYour first note are: %d contains Rs:%d",account_numb_temp,s[x].notes);	
	printf("\nYour second note are: %d contains Rs:%d",account_numb_temp,s[x].notes1);
	printf("\nYour third notes are: %d contains Rs:%d",account_numb_temp,s[x].notes2);
}
void avarage()
{
	printf("\nEnter the account number\t");
	scanf("%d",&account_numb_temp);
	printf("\nEnter the password\t");
	scanf("%d",&passwd_temp);
	x=validate(account_numb_temp,passwd_temp);
	total=s[x].notes+s[x].notes1+s[x].notes2;
	printf("The total of your notes are:%d",total);
	ava=total/3;
	printf("\nYour average is:%d",ava);
}

 

