#include<stdio.h>
    void Deposite(int *D){
        int bal;
        printf("Enter your Deposite Amount: ");
        scanf("%d",&bal);
        *D += bal;
        printf("Your Total balance is = %d\n",*D);
    }

    void Withdraw(int *W){
        int min;
        printf("Enter your Withdraw Amount: ");
        scanf("%d",&min);
        *W -= min;
        printf("Your Total balance is = %d\n",*W);
    }
void main(){

    int opening_bal = 1000;
    int btn,pin,repeat;
    char ch;
    while(pin != 1234){
        printf("ENTER YOUR PIN: ");
        scanf("%d",&pin);
        if(pin!=1234)
        printf("PLEASE ENTER VALID PIN!\n");
    }
    do{
    printf("**************Welcome to OurBank Pvt. Ttd.*************\n\n");
    printf("  PRESS 1 FOR CHEKC YOUR BALANCE\n");
    printf("  PRESS 2 FOR DEPOSITE AMOUNT\n");
    printf("  PRESS 3 FOR WITHDRAW AMOUNT\n");
    printf("  PRESS 4 FOR EXIT\n");
    printf("\n*******************************************************\n\n");
    printf("Choise your: ");
    scanf("%d",&btn);
    if(btn == 1){
    printf("Your Balance is : %d\n",opening_bal);
    }
    else if(btn == 2){
        Deposite(&opening_bal);
    }
    else if(btn == 3){
        Withdraw(&opening_bal);
    }
    else if(btn == 4){
        printf("Thank you for Use OurBank!");
        goto end;
    }
    else{
        printf("Invalid number");
    }
    printf("\n\n If you want to make Another Transaction pres (Y/N): \n");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch == 'y'|| ch == 'Y'){
    repeat = 1;
    }
    else if(ch=='n'||ch=='N'){
        goto end;
    }
    }while(repeat==1);
    end:
    printf("\n\n THANKS FOR USING OurBank SERVICE");
}