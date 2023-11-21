/*  while loop                 for loop                do while loop
   (1) initialize            (1) initialize            (1) initialize
   (2) break                 (2) break                 (2) updation
   (3) updation              (3) updation              (3) break

   i=1;  (initialize)
   do{
    code...
    .....
    ......

    i++   (updation)
    
   }while(break condition)
*/
#include<iostream>
using namespace std;
int main(){
    int i=1;
    do
    {
        cout<<i<<" ";
        
        i++;

    } while (i<=10);
    return 0;
}