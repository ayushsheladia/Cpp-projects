#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
void display_output(int ans){
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"-                                         ---------------------------"<<endl;
    cout<<"-               CURRENT                  |          "<<endl;
    cout<<"-               OUTPUT IS                |        "<<ans<<endl;
    cout<<"-                                         ---------------------------"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"-         +          |           -           |          *           -"<<endl;
    cout<<"-        ADD         |          SUB          |       MULTIPLY       -"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"-         /          |           m           |          L           -"<<endl;
    cout<<"-      DIVISON       |          MOD          |         LOG          -"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"-         s          |           c           |          p           -"<<endl;
    cout<<"-      square        |          cube         |        power         -"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"-         S          |           C           |          T           -"<<endl;
    cout<<"-        SIN         |          COS          |         TAN          -"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"-         r          |           k           |          .           -"<<endl;
    cout<<"-      sq root       |         clear         |        stop          -"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
}
void display_calculator(){
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"-                                                                   -"<<endl;
    cout<<"-                            SCIENTIFIC                             -"<<endl;
    cout<<"-                            CALCULATOR                             -"<<endl;
    cout<<"-                                                                   -"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"-         +          |           -           |          *           -"<<endl;
    cout<<"-        ADD         |          SUB          |       MULTIPLY       -"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"-         /          |           m           |          L           -"<<endl;
    cout<<"-      DIVISON       |          MOD          |         LOG          -"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"-         s          |           c           |          p           -"<<endl;
    cout<<"-      square        |          cube         |        power         -"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"-         S          |           C           |          T           -"<<endl;
    cout<<"-        SIN         |          COS          |         TAN          -"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"-         r          |           k           |          .           -"<<endl;
    cout<<"-      sq root       |         clear         |        stop          -"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    
   
}

int main(){
    double num1=0.0;
    double num2=0.0;
    double  ans=0.0;
    display_calculator();

    char inp='\n';
    while(inp!='.'){
        cout<<"enter opertion: ";
        cin>>inp;
        if(inp=='+' || inp=='-' || inp=='*' || inp=='/' || inp=='m' || inp=='p'){
            cout<<"Number: ";
            cin>>num1;

            cout<<"Number: ";
            cin>>num2;
        }
        else if(inp=='k' || inp=='.'){
            //no input
        }
        else{
            cout<<"enter number: ";
            cin>>num1;
        }
        switch(inp){
            case '+':
            ans=num1+num2;
            break;

            case '-':
            ans=num1-num2;
            break;


            case '*':
            ans=num1*num2;
            break;

            case '/':
            ans=num1/num2;
            break;

            case 'm':
            ans=int(num1)%int(num2);
            break;

            case 'L':
            ans=log(num1);
            break;

            case 's':
            ans=num1*num1;
            break;

            case 'c':
            ans=(num1*num1)*num1;
            break;

            case 'p':
            ans=pow(num1,num1);
            break;

            case 'S':
            ans=sin(num1);
            break;

            case 'C':
            ans=cos(num1);
            break;

            case 'T':
            ans=tan(num1);
            break;

            case 'r':
            ans=sqrt(num1);
            break;

            case '.':
            break;

            default:
            cout<<"~~~~~~invalid operation~~~~~~"<<endl;

        }
        display_output(ans);
    }
    return 0;
};

