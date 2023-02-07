#include <stdio.h>
#include <stdlib.h>

int main()
{
    //storage
    float TC = 0.0;
    float TF = 0.0;
    printf("TC    -    TF\n");
    for(float TC=0.0;TC<255.0;TC++)
    {
        TF=((TC*9)/5)+32;
        printf("%f - %f\n",TC,TF);
    }

    return 0;
}
