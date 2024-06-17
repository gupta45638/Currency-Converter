#include<bits/stdc++.h>
using namespace std;

int main()
{   char startValue;
    char selectAgain;
    float converter(void);
    start:
    cout<<"Welcome to Currency Converter Application"<<endl;
    cout<<"You can have currency doller,rupees,euro,pound"<<endl;
    cout<<"You can have currencies doller,rupees,euro,pound"<<endl;
    cout<<"You can have type a,b,c,d respectively for currencies doller,rupees,euro,pound"<<endl;
    cout<<"Enter currency1 which you want to convert"<<endl;
    cout<<"Enter value for currency1"<<endl;
    cout<<"Enter currency2 in which you want to convert currency1"<<endl;
    cout<<"(a) doller (b) rupees (c) euro (d) pound"<<endl;
    cout<<"please press s to start"<<endl;
    selectChoice:
    cin>>startValue;
    if(startValue=='s' || startValue=='S'){
       float finalValue=converter();
       cout<<"Result is"<<" "<<finalValue<<endl;
       cout<<"Do you want to use the application again?y or n"<<endl;
       typeAgain:
       cin>>selectAgain;
       if(selectAgain=='y' || selectAgain=='Y')
       {
           goto start;
       }
       else if(selectAgain=='n' || selectAgain=='N')
       {
           cout<<"Thank you for our application "<<endl;
       }
       else{
           cout<<"You have entered wrong value,please type again"<<endl;
           goto typeAgain;
       }
        
    }
    else
    {
        cout<<"You have entered wrong value,please type s"<<endl;
        goto selectChoice;
    }
}

float converter()
{
    char currName1;
    char currName2;
    float currency1;
    float currency2;

    cout<<"Enter currency1 Name"<<endl;
    cin>>currName1;
    cout<<"Enter currency1 Value"<<endl;
    cin>>currency1;
    switch(currName1)
    {
        //Usd
        case 'a':
            currlevel1:
            cout<<"Enter currency2 Name"<<endl;
            cin>>currName2;
            if(currName2=='a' || currName2=='A'){
                currency2=currency1*1;
            }
            else if(currName2=='b' || currName2=='B'){
                currency2=currency1*83.55;
                
            }
            else if(currName2=='c' || currName2=='C'){
                currency2=currency1*0.93;
                
            }
             else if(currName2=='d' || currName2=='D'){
                currency2=currency1*0.78;
                
            }
            else{
                cout<<"You have entered wrong value,please type again"<<endl;
                goto currlevel1;
            }
            break;
            //Rupees
        case 'b':
            currlevel2:
            cout<<"Enter currency2 Name"<<endl;
            cin>>currName2;
            if(currName2=='a' || currName2=='A'){
                currency2=currency1*0.01;
            }
            else if(currName2=='b' || currName2=='B'){
                currency2=currency1*1;
                
            }
            else if(currName2=='c' || currName2=='C'){
                currency2=currency1*0.01;
                
            }
             else if(currName2=='d' || currName2=='D'){
                currency2=currency1*0.009;
                
            }
            else{
                cout<<"You have entered wrong value,please type again"<<endl;
                goto currlevel2;
            }
            break;
            //Euro
        case 'c':
            currlevel3:
            cout<<"Enter currency2 Name"<<endl;
            cin>>currName2;
            if(currName2=='a' || currName2=='A'){
                currency2=currency1*1.06;
            }
            else if(currName2=='b' || currName2=='B'){
                currency2=currency1*89.32;
                
            }
            else if(currName2=='c' || currName2=='C'){
                currency2=currency1*1;
                
            }
             else if(currName2=='d' || currName2=='D'){
                currency2=currency1*0.84;
                
            }
            else{
                cout<<"You have entered wrong value,please type again"<<endl;
                goto currlevel3;
            }
            break;
        //pound
        case 'd':
            currlevel4:
            cout<<"Enter currency2 Name"<<endl;
            cin>>currName2;
            if(currName2=='a' || currName2=='A'){
                currency2=currency1*1.26;
            }
            else if(currName2=='b' || currName2=='B'){
                currency2=currency1*106.10;
                
            }
            else if(currName2=='c' || currName2=='C'){
                currency2=currency1*1.18;
                
            }
             else if(currName2=='d' || currName2=='D'){
                currency2=currency1*1;
                
            }
            else{
                cout<<"You have entered wrong value,please type again"<<endl;
                goto currlevel4;
            }
            break;
            default:{
                cout<<"You have entered wrong value,please type again"<<endl;
                goto currlevel1;
                break;
                
            }
    }
    return currency2;
    
}
