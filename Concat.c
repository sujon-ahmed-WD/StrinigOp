#include <stdio.h>
#include <string.h>
int main()
{
    char a[20] = "Phitron ";
    char b[20] = "World ";
    // int len_a = strlen(a);
    // int len_b = strlen(b);
    // int length = len_a + len_b;

    // for (int i = len_a, j = 0; i < length; i++, j++)
    // {
    //     a[i] = b[j];
    // }
    // a[length]='\0';
    strcat(b,a);

    printf("%s ", b);
    return 0;
}
//   P h i t r o n W o  r  l  d
//   1 2 3 4 5 6 7 8 9 10 11  12
