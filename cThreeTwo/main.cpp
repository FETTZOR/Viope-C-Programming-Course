#include <stdio.h>
/* This is a fine program */

int main(){
    double FIM;
    double  FIM_to_euro;
    double conversion_factor = 5.94573;
    printf("Enter an amount in FIM:");
    scanf("%lf", &FIM);
    FIM_to_euro = FIM / conversion_factor;
    printf("FIM converted to euro: %.2f",FIM_to_euro);
    return 0;
}