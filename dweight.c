/* compute weight */
#include <stdio.h>

int main(void)
{
    int h, l, w, v, weight;

    h = 8;
    l = 12;
    w = 10;
    v = h * l * w;
    weight = (v + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", h, l, w);
    printf("Volume (cubic inches): %d\n", v);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}