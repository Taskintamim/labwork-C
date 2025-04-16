#include <stdio.h>
int main()
{
    int Ah, Am,  As, Bh, Bm, Bs, X, Y;
    printf("Please Enter Ah = ");
    scanf("%d", &Ah);
    printf("Please Enter Am = ");
    scanf("%d", &Am);
    printf("Please Enter As = ");
    scanf("%d", &As);
    printf("Please Enter Bh = ");
    scanf("%d", &Bh);
    printf("Please Enter Bm = ");
    scanf("%d", &Bm);
    printf("Please Enter Bs = ");
    scanf("%d", &Bs);
    X = (Ah * 3600) + (Am*60) + As;
    Y = (Bh * 3600) + (Bm*60) + Bs;
     if (X >Y){
        printf("A takes more time.\n");
     }
     else if ( Y>X)
        {
        printf("B takes more time.\n");
        }
     else{
        printf("Both take the same time.\n");
     }
     return 0;
}
