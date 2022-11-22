#include<iostream>
using namespace std;

void currencyConvert(int value){
    float dollorValue;
    cout<<"Enter how much dollor you have\t";
    cin>>dollorValue;
    switch (value)
    {
    case 1:
        cout<<"Euro(EUR) value of "<<dollorValue<<" dollor is "<<(dollorValue*0.99)<<endl;
        break;
    
    case 2:
        cout<<"Pound Sterling(GBP) value of "<<dollorValue<<" dollor is "<<(dollorValue*0.86)<<endl;
        break;
    
    case 3:
        cout<<"Australian Dollor(AUD) value of "<<dollorValue<<" dollor is "<<(dollorValue*1.53)<<endl;
        break;
    
    case 4:
        cout<<"Canadian Dollor(CAD) value of "<<dollorValue<<" dollor is "<<(dollorValue*1.34)<<endl;
        break;
    
    case 5:
        cout<<"Swiss Franc(CHF) value of "<<dollorValue<<" dollor is "<<(dollorValue*0.98)<<endl;
        break;
    
    case 6:
        cout<<"Indian Rupee(INR) value of "<<dollorValue<<" dollor is "<<(dollorValue*81.31)<<endl;
        break;
    
    default:
        cout<<"Enter Valid Input....."<<endl;
        break;
    }
}

int main(){
    cout<<"Currency Convertor..."<<endl;
    int userInput , select;
    again:
        cout<<"Select option....."<<endl;
        cout<<"1.Dollor to Euro(EUr)\n";
        cout<<"2.Dollor to Pound Sterling(GBP)\n";
        cout<<"3.Dollor to Australian Dollor(AUD)\n";
        cout<<"4.Dollor to Canadian Dollor(CAD)\n";
        cout<<"5.Dollor to Swiss Franc(CHF)\n";
        cout<<"6.Dollor to Indian Rupee(INR)\n";
        cin>>userInput;
        cout<<"\n";
        currencyConvert(userInput);
        cout<<"\n";
    //add lable to continue in loop
    cout<<"If you want to continue then enter 1 else 0"<<endl;
    cin>>select;
    if(select == 1){
        goto again;
    }
    else{
        cout<<"Thanks.....";
    }

  
}