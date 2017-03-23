#include <stdio.h>
#include <math.h>
 
int main() {
    int ile = 2;
    int x, i=0;
     
    x = pow(2,ile) - 1;
 
    //printf("%d\n", x);
     
     
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
                    --x;;
                }
         
    }
    return 0;
}