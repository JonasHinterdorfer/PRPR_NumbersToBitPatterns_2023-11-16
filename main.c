#include <stdio.h>
char* getBits(const int *reg, char bits[32])
{
    int hilf,i;
    hilf=*reg;

    for (i=0; i<32; i++)
    {
        if (hilf & 0x80000000) bits[i] = '1';
        else bits[i] = '0';
        hilf=hilf <<1;
    }
    return bits;
}
int main() {
    int reg;
    char bits[32];
    scanf("%i", &reg);
    getBits(&reg, bits);

    for (int i = 0; i < 32; ++i) {
        printf("%c", bits[i]);
        if((i+1) % 4 == 0)
            printf(" ");
    }

    return 0;
}
