#include <iostream>
#include <cmath>
using namespace std;
void output_c(double inp,double outp){
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"--       "<<inp<<" INR is equal to "<<outp<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"--                1.INR to US DOLLAR               --"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"--                2.INR to WON                     --"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"--                3.INR to EURO                    --"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"--                4.INR to DHIRAM                  --"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"--                5.INR to POUND                   --"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
}
    
void display_c(){
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"--                   CURRENCY                      --"<<endl;
    cout<<"--                   CONVERTER                     --"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"--                1.INR to US DOLLAR               --"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"--                2.INR to WON                     --"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"--                3.INR to EURO                    --"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"--                4.INR to DHIRAM                  --"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"--                5.INR to POUND                   --"<<endl;
    cout<<"--                                                 --"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    
    
    
}


int main(){
    double inp=0.0;
    double outp=0.0;
    int  take;
    display_c();
    cout<<"Enter YOUR DECISION:";
    cin>>take;
    cout<<"Enter the amount of currency: ";
    cin>>inp;
    switch(take){
        case 1:
        outp=inp/86.6;
       
        break;

        case 2:
        outp=inp*16.65;
       
        break;

        
        case 3:
        outp=inp/90.16;
       
        break;

        
        case 4:
        outp=inp/23.58;
     
        break;

        
        case 5:
        outp=inp/107.75;
     
        break;

        default:
        cout<<"~~~~~~~~~INVALID INPUT~~~~~~~~~~~";
         
     }
     output_c(inp,outp);
     return 0;

    
}