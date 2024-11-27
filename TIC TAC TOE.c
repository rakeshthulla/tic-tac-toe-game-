#include<stdio.h>
void board(char []);
void system();
void main()
{
	char x[10]={'0','1','2','3','4','5','6','7','8'},control,l,r[100],t[100],min;
	int y[10],n,p,i,flag=0,s=0,q=0;
	
	printf("                    WELCOME TO TIC TAC TOE                    \n");
	printf("Enter player1 name :");
	gets(r);
	printf("Enter player2 name :");
	gets(t);
	printf("Enter your choice\n");
	printf("If your choice is X enter 1 or If your choice is O enter 2:");
	scanf("%d",&n);
	while(flag==0) 
	{ 
		if(n!=1 && n!=2)
		{
			printf("\nINVALID CHOICE\n\v");
			printf("Enter your choice:");
			scanf("%d",&n);
			if(n==1 || n==2)
			{
				flag++;
				break;
			}
		}
		else
		flag++;
	}	
	if(n==1)
	{
		control='X';
	}
	else
	{
		control='O';
	}
	flag=0;
	printf("\n\n");
	printf("Your choice is %c\n\n",control);
	printf("WELCOME TO TIC TAC TOE\n");
	board(x);
	n++;
	while(flag==0)
	{
		control=(n%2==0)?'X':'O';
		printf("%c should be entered by\t",control);
		min=(n%2==0)?puts(r):puts(t);
		scanf("%d",&p);
		if(p>=0 && p<=8 && x[p]!='X' && x[p]!='O')
		{
			x[p]=control;
			board(x);
			n++;
			s++;
			if(x[0]==x[3] && x[3]==x[6])
			{
				printf("The winner is ");
				min=(n%2==0)?puts(t):puts(r);
				flag++;
			}
			else if(x[1]==x[4] && x[4]==x[7])
			{
				printf("The winner is ");
				min=(n%2==0)?puts(t):puts(r);
				flag++;
			}
			else if(x[2]==x[5] && x[5]==x[8])
			{
				printf("The winner is ");
				min=(n%2==0)?puts(t):puts(r);
				flag++;
			}
			else if(x[0]==x[4] && x[4]==x[8])
			{
			    printf("The winner is ");
				min=(n%2==0)?puts(t):puts(r);
				flag++;
			}
			else if(x[2]==x[4] && x[4]==x[6])
			{
				printf("The winner is ");
				min=(n%2==0)?puts(t):puts(r);
				flag++;
			}
			else if(x[0]==x[1]&&x[1]==x[2])
			{
				printf("The winner is ");
				min=(n%2==0)?puts(t):puts(r);
				flag++;
			}
			else if(x[3]==x[4] && x[4]==x[5])
			{
				printf("The winner is ");
				min=(n%2==0)?puts(t):puts(r);
				flag++;
			}
			else if(x[6]==x[7] && x[7]==x[8])
			{
				
				printf("The winner is ");
				min=(n%2==0)?puts(t):puts(r);
				flag++;
	
			}
			else if(s==9)
			{
				printf("THIS MATCH IS A DRAW");
				flag++;
			}
	    }
		else
		{
			if(p>=0&&p<=8)
			{
				l=n%2==0?'O':'X';
				printf("The position has already been taken by\t");
				min=(n%2==0)?puts(r):puts(t);
				
			}
			else
			printf("Invalid input\n");
		}
	}
}
void board(char a[10])
{
	system("cls");
	printf("\n\n");
	printf("'\'\'\'TIC TAC TOE'\'\'\'\n");
	printf("      |      |     \n");
	printf("  %c   |  %c   |  %c \n",a[0],a[1],a[2]);
	printf("______|______|_____\n");
	printf("      |      |     \n");
	printf("  %c   |  %c   |  %c \n",a[3],a[4],a[5]);
	printf("______|______|_____\n");
	printf("      |      |     \n");
	printf("  %c   |  %c   |  %c \n",a[6],a[7],a[8]);
	printf("      |      |     \n");
}
