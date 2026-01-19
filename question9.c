#include <stdio.h>
int main()
{
    int h, m, s, total;
    printf("Enter hours minutes seconds: ");
    scanf("%d %d %d", &h, &m, &s);
    total = h * 3600 + m * 60 + s;
    printf("Total Seconds = %d", total);
    return 0;
}
