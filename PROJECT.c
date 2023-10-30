#include<stdio.h>
void transaction()
{
    int b,mnum,id,amt;
    printf("\n1.ONLINE\t2.CASH");
    printf("\nSELECT THE MODE OF TRANSACTION");
    printf("\nENTER YOUR CHOICE");
    scanf("%d",&b);
    switch(b){
case 1:
    printf("\nENTER MOBILE NUMBER :");
    scanf("%d",&mnum);
    printf("\nENTER THE UPI ID :");
    scanf("%d",&id);
    printf("\nENTER THE AMOUNT");
    scanf("%d",&amt);
    printf("\n*****YOUR TRANSACTION WAS SUCCESSFUL*******\n");
    printf("\nYOUR TICKETS ARE BOOKED");
    printf("\n************THANKS FOR VISITING!!!*************");
break;
case 2 :
    printf("\n**************GO TO THE CASH COUNTER***************\n");
    printf("PAY THE MONEY\n");
    printf("\n************THANKS FOR VISITING!!!*************");
break;
default:
    printf("EXIT");

}
}
void main()
{
int ch,b,a,n,i,sch;
char num[100],name,mnum;
while(1){
	printf("\n****************************************************************************");
printf("\n\n\t\t\tWELCOME TO C BOXOFFICE......\n\n");
printf("********************************************************************************\n");
printf("\n1.VIEW NOW PLAYING MOVIES");
printf("\n2.BOOK TICKETS");
printf("\n3.TRANSACTION");
printf("\nENTER YOUR CHOICE");
scanf("\n%d",&ch);
switch(ch)
{
	case 1:
		printf("1.DHAMAKA\t\t2.MAJOR\t\t3.18PAGES\t\t4.VERAIAH\n");
	break;
	case 2:
	    printf("\nNAME : ");
		scanf("%s",&name);
		printf("\nSELECT MOVIE NUMBER :");
		scanf("%d,&mnum");
	printf("\nNUMBER OF TICKETS : ");
	scanf("%d",&n);
	printf("\nSEAT NUMBER : ");
	for(i=0;i<n;i++)
        {
	scanf("%s",&num[i]);
	}
	printf("\n SCHEDULE AVAILABLE");
	printf("\n1.9.00AM TO 11.00AM\t\t2.11.30AM TO 1.30PM\t\t3.2.00PM TO 4.00PM");
	printf("\nSELECT SCHEDULE : ");
	scanf("%d",&sch);
	break;
	case 3:transaction();
	break;
	default:
	printf("EXIT");

}

}

}
