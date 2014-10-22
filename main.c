#include <stdio.h>
#include <stdlib.h>
#include "methods.h"
444444

//int method(int index, char type, int head, int expand, int length){
   // int str[length], i;
   // switch(type)
    //{ 
     //公差            
     //case 'A':
         // for(i==1; i <= length; i++)
        //  {    
       //         str[i] = head + expand*(i-1);
      //          } 
     //公比            
    // case 'B':
    //      for(i==1; i <= length; i++)
    //      {
   //             str[i] = head * expand*(i-1);
                
  //              }
     //質數列    
     //case 'C':                       
  //  }
 //   return str;
//}


int main(int argc, char* argv[])
{
    int temp=3;
      printf("%d\n",temp);
   #if 0 
  //printf("%",method(100,'A',1,2,3));
   char type;
   int i, head, expand, length, temp;
   
   method1(1,'A',2,3,4);
 
 /*
   printf("請輸入方法:\n");
   scanf("%s",&type);
   printf("請輸入首項,等差/等比,項數:\n");
   scanf("%d-%d-%d",&head,&expand,&length);
 */
   head = 2;
   expand = 2;
   length =6;
   type = 'B';
   switch(type)
    { 
     //公差            
     case 'A':
          printf("A\n");
          for(i=1; i <= length; i++)
          {    
               temp = head + expand*(i-1);
               printf("%d\n",temp);
               
          }
          break; 
     //公比            
     case 'B':
          printf("B\n");
          for(i=1; i <= length; i++)
          {
                temp = head * expand*(i-1);
                printf("%d\n",temp);
                
          }
          break;
     default:
          printf("Default\n");        
     //質數列    
     //case 'C':                       
    }
    #endif
  system("PAUSE");	
  return 0;
}


