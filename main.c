#include <stdio.h>
#include <stdlib.h>
#include "methods.h"
444444

//int method(int index, char type, int head, int expand, int length){
   // int str[length], i;
   // switch(type)
    //{ 
     //���t            
     //case 'A':
         // for(i==1; i <= length; i++)
        //  {    
       //         str[i] = head + expand*(i-1);
      //          } 
     //����            
    // case 'B':
    //      for(i==1; i <= length; i++)
    //      {
   //             str[i] = head * expand*(i-1);
                
  //              }
     //��ƦC    
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
   printf("�п�J��k:\n");
   scanf("%s",&type);
   printf("�п�J����,���t/����,����:\n");
   scanf("%d-%d-%d",&head,&expand,&length);
 */
   head = 2;
   expand = 2;
   length =6;
   type = 'B';
   switch(type)
    { 
     //���t            
     case 'A':
          printf("A\n");
          for(i=1; i <= length; i++)
          {    
               temp = head + expand*(i-1);
               printf("%d\n",temp);
               
          }
          break; 
     //����            
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
     //��ƦC    
     //case 'C':                       
    }
    #endif
  system("PAUSE");	
  return 0;
}


