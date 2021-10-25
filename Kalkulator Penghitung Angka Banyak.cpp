#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    string op;
    int i, k;
    int var;
    double value[100], result;
        
    cout<<"\n\n\n\n\nHello, this is a calculator in C++" <<endl;
    cout<<"\n\n\n\n\nWhat operator do you want to do? (+, -, *, /)" <<endl;
    cin>>op;
    cout<<"\n\n\n\n\nHow many values?" <<endl;
    cin>>var;
    
   
    for(i=0; i<var; i++)
    {
  
        cout<<"\n\n\n\n\nPut some value from the biggest value, than press ENTER. To finish it, type DONE"<<endl;
        
        cin>>value[i];
         
    }  
  
  if(op=="+")//operasi penjumlahan
  {
      for(i=0; i<var; i++)
      {
      
      result=result+value[i];
      }
      cout<< "\n this is your value!"<<endl;
      cout<< result <<endl;
  }else if(op=="-")//operasi pengurangan
  {
      for(i=0; i<var-1; i++)
      {
        value[i+1]=value[i]-value[i+1];
        result=value[i+1];
      }
      cout<< "\n this is your value!"<<endl;
      cout<< result <<endl;
  }else if(op=="*")//operasi pengalian
  {
     
     result=1;

      for(i=0; i<var; i++)
      {       
            result=result*value[i];
      }
      cout<< "\nThis is your value!"<<endl;
      cout<< result <<endl;
  }else if(op=="/")//operasi pembagian
  {
      for(i=0; i<var-1; i++)
      { 
        value[i+1]=value[i]/value[i+1];
        result=value[i+1];
      }
      cout<< "\n this is your value!"<<endl;
      cout<< result <<endl;
  } 



return 0;

}