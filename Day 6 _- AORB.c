#include <stdio.h>

int main() 
{
 int T;
    scanf("%d",&T);
    for(int i =0;i<T;i++)
    {
        int X,Y,TX,TY;
       scanf("%d %d",&X, &Y);
       TX=(500-(X*2)+1000-(4*(X+Y)));
       TY=(1000-(Y*4)+500-(2*(Y+X)));
       if (TX>TY)
       {
           printf("%d\n",TX);
       }
       else
       {
           printf("%d\n",TY);
       }
    }
       return 0;
   
}