#include<stdio.h>


void currencyConvert(int value){
    float dollorValue;
    printf("Enter how much dollor you have\t");
    scanf("%f" , &dollorValue);
    switch (value)
    {
    case 1:
        printf("Euro(EUR) value of %0.2f dollor is %0.2f \n" , dollorValue , (dollorValue*0.99));
        break;
    case 2:
        printf("Pound Sterling(GBP) value of %0.2f dollor is %0.2f \n" , dollorValue , (dollorValue*0.86));
        break;
    
    case 3:
        printf("Australian Dollor(AUD) value of %0.2f dollor is %0.2f \n" , dollorValue , (dollorValue*1.53));
        break;
    
    case 4:
        printf("Canadian Dollor(CAD) value of %0.2f dollor is %0.2f \n" , dollorValue , (dollorValue*1.34));
        break;
    
    case 5:
        printf("Swiss Franc(CHF) value of %0.2f dollor is %0.2f \n" , dollorValue , (dollorValue*0.98));
        break;
    case 6:
        printf("Indian Rupee(INR) value of %0.2f dollor is %0.2f \n" , dollorValue , (dollorValue*81.31));
        break;
    default:
        printf("Please enter valid input\n");
        break;
    }
}






int main(){
    printf("Currency Convertor..........\n");
    int userInput , select;
    again:
        printf("Select option .......\n\n");
        printf("1.Dollor to Euro(EUR)\n");
        printf("2.Dollor to Pound Sterling(GBP)\n");
        printf("3.Dollor to Australian Dollor(AUD)\n");
        printf("4.Dollor to Canadian Dollor(CAD)\n");
        printf("5.Dollor to Swiss Franc(CHF)\n");
        printf("6.Dollor to Indian Rupee(INR)\n");
        scanf("%d" , &userInput);
        printf("\n");
        currencyConvert(userInput);
        printf("\n");
    //to continue in loop we use lables
    printf("If you want to continue then enter 1 else enter 0\n");
    scanf("%d" , &select);
    if (select == 1)
    {
        goto again;
    }else{
        printf("Thanks ...");
    }
    


}