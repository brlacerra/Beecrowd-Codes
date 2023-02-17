#include <stdio.h>
 
int main() {
 
    float time, vm;

    scanf("%f %f", &time, &vm);

    printf("%.3f\n",(time*vm)/12);

    return 0;
}