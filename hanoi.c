#include <stdio.h>
#include <math.h>
 
int main() {
    int ile = 2;
    int x, i=0;
    int b =0;
    x=2;

    for (b = 0; b <= ile; ++b)
    {
    	x=x*2;
    }

    x = x - 1;
 	printf("%d",&x );
     
     
    while(x>=1){
         
        if(x<=0) {
            break;
        }
        else {
            printf("Wykonaj mozliwe przeniesienie A - C\n");
                    --x;
        }
        if(x<=0) {
                        break;
                }
                else {
                        printf("Wykonaj mozliwe przeniesienie A - B\n");
                    --x;
                }
        if(x<=0) {
                        break;
                }
                else {
                        printf("Wykonaj mozliwe przeniesienie B - C\n");
                    --x;
                }
         
    }
    return 0;
}