#include <math.h>
#include <stdio.h>
int main() {
   
    int n;
    scanf("%d",&n);

    float sum = 0.0;

    int current = 1;

    for(int i=1; i<=n; i++) {

        float equation = (float)(current*current) / (float)(current*current*current);

        sum = sum + equation;

        current = current + 2;
    }

    printf("%f",sum);


    return 0;
}
