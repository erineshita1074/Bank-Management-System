//Bank Management System
//Star Players
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<time.h>

struct user {
    char name[50];
    char phone[50];
    char ac[50];
    char password[50];

};
int dip_amt, amt = 10000, acc_no,phone, ac, count = 0;
int trans_amt;
int with_amt;

void deposit_money();
void withdraw_money();
void transfer_money();
void checkdetail();
void lastdetail();
void transaction_details();
void user();
void back();
void user1()
{
    system("cls");
    divider();
    printf("\n\tMENU\n");

    divider();
    printf("\n1.Deposit Money\n");
    printf("\n2.Withdraw Money\n");
    printf("\n3.Transfer Money\n");
    printf("\n4.Account details\n");
    printf("\n5.Transaction details\n");
    printf("\n6.Exit\n");
    divider();
}
void divider()
{
    for (int i=0; i<50; i++)
    {
        printf("-");
    }
}

int main(){

    struct user user,usr;
    char filename[50], name[50], phone[50], password[50], phone2[50];
    FILE*fp,*fptr;
    int opt,choice;
    int amount;
    char cont= 'y';
    jump:
    printf("\n\t\t\t\t\t WELCOME TO CUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM\t\t\t\t\t");
    printf("\n\t\t\t\t\t1.Register your account\t\t\t\t");
    printf("\n\t\t\t\t\t2.Login your account\t\t\t\t");

    printf("\n\n\t\t\t\tPlease enter your choice:\t");
    scanf("%d",&opt);
    if(opt == 1){
        system("cls");
        printf("\nEnter your name:\t");
        scanf("%s",user.name);
        printf("\nEnter your account number:\t");
        scanf("%s",user.ac);
        printf("\nEnter your phone number:\t");
        scanf("%s",user.phone);
        printf("\nEnter your new password:\t");
        scanf("%s",user.password);

        stpcpy(filename,user.phone);
        fp=fopen(strcat(filename,".data"),"w");
        fwrite(&user,sizeof(user),1,fp);
        if(fwrite != 0){
            printf("Successfully registered");
            system("cls");
            goto jump;
            }
    }
    else if(opt == 2){
        system("cls");
        printf("\nPhone No.:\t");
        scanf("%s",phone);
        printf("\nPassword:\t");
        scanf("%s",password);
        fp=fopen(strcat(phone,".data"),"r");
        if(fp == NULL) printf("Account number not registered");
        else{
            fread(&user,sizeof(struct user),1,fp);
            fclose(fp);
            if(!strcmp(password,user.password)){
                while(cont == 'y'){
                    system("cls");

    printf("\n\tMENU\n");

    divider();
    printf("\n1.Deposit Money\n");
    printf("\n2.Withdraw Money\n");
    printf("\n3.Transfer Money\n");
    printf("\n4.Account details\n");
    printf("\n5.Transaction details\n");
    printf("\n6.Exit\n");

    scanf("%d",&choice);

    switch(choice){
    case 1:
    system("cls");
    deposit_money();
    break;
    case 2:
    system("cls");
    withdraw_money();
    break;
    case 3:
    system("cls");
    transfer_money();
    break;
    case 4:
    system("cls");
    checkdetail();
    break;
    case 5:
    system("cls");
    transactiondetails();
    break;
    case 6:
    system("cls");
    lastdetail();
    exit(0);

    default:
        printf("*****Invalid choice****");
    }
        printf("\n\nDo you want to continue?[y/n];\t");
        scanf("%s",&cont);
        }
    }
    else{
        printf("Invalid password");
    }
        }
        printf("\n\n***Thank you for banking ***\n\n");

}
 return 0;
}
void deposit_money()
{
	time_t tm;
	time(&tm);
	FILE*ptr=fopen("userAccount.txt","w");
	printf("*****DEPOSITING MONEY*****");
	for (int i=0; i<50; i++)
	{
		printf("-");
	}
	printf("\nEnter the amount you want to deposit\n");
	scanf("%d",&dip_amt);
	amt+=dip_amt;
	printf("*****Money Deposited*****\n");
	printf("Now Balance: %d\n",amt);
	fprintf(ptr,"\nRs%d had been deposited to your account\n",dip_amt);
	fprintf(ptr,"Date/Time of transaction: %s\n",ctime(&tm));
	count++;
	
	fclose(ptr);
	printf("Press any key....\n");
	getch();
}

void withdraw_money()
{
	time_t tm;
	time(&tm);
	FILE*ptr=fopen("userAccount.txt","w");
	printf("*****WITHDRAWING MONEY*****\n");
	for(int i=0;i<50;i++)
	{
		printf("-");
	}
	printf("\nEnter the amount you want to withdraw\n");
	scanf("%d",&with_amt);
	
	if(amt<with_amt)
	{
		printf("*****Insufficient Balance*****\n");
	} 
	else
	{
		amt=amt-with_amt;
		printf("Current Balance: %d\n",amt);
		fprintf(ptr,"\nBDT%d had been withdrawn from your account\n",with_amt);
		fprintf(ptr,"Date/Time of transaction: %s\n",ctime(&tm));
		count++;
	}
	fclose(ptr);
	printf("Press any key....\n");
	
	getch();
}


void transfer_money()
{
	time_t tm;
	time(&tm);
	FILE*ptr=fopen("userAccount.txt","w");
	printf("*****TRANSFERRING MONEY*****\n");
	for(int i=0;i<50;i++)
	{
		printf("-");
	}
	printf("\nEnter the account no. in which you want to transfer the money: ");
	scanf("%d",&ac);
	printf("\nEnter the amount you want to transfer\n");
	scanf("%d",&trans_amt);
	
	if(amt < trans_amt)
	{
		printf("*****You have not sufficient balance*****\n");
	}
	else
	{
		amt=amt-trans_amt;
		printf("*****Money transferred*****\n");
		printf("Current balance : %d\n",amt);
		fprintf(ptr,"\nTAKA%d had been transferred from your account to %d\n",trans_amt,ac);
		fprintf(ptr,"Date/Time of transaction: %s\n",ctime(&tm));
		count++;
	}
	fclose(ptr);
	fprintf("Press any key....\n");
	getch();
}

	}
	}
}
	}
	
}
}


