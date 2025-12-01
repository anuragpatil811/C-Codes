#include<stdio.h>
#include<math.h>
int main()
{
    int Red, Green, Blue;
    float Cyan, Magenta, Yellow, White, Black;
    printf("Enter RGB:");
    scanf("%d%d%d", &Red, &Green, &Blue);
      float r = Red / 255.0;
    float g = Green / 255.0;
    float b = Blue / 255.0;
    White = fmax(r, fmax(g, b));

    if (White == 0) {
        Cyan = Magenta = Yellow = 0;
        Black = 1;
    } else {
        Cyan    = (White - r) / White;
        Magenta = (White - g) / White;
        Yellow  = (White - b) / White;
        Black   = 1 - White;
    }

    printf("CMYK values are:\n");
    printf("Cyan: %.2f\nMagenta: %.2f\nYellow: %.2f\nBlack: %.2f\n", Cyan, Magenta, Yellow, Black);

    return 0;

}