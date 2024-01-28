#include<stdio.h>
int main()

{
    char A1 = 'a';
    char B1 = 'b';
    char C1 = 'c';
    char D1 = 'd';
    char E1 = 'e';

    printf("\n%c",(A1));
    printf("\n%C%C",(A1),(B1));
    printf("\n%C%C%C",(A1),(B1),(C1));
    printf("\n%c%c%c%C",(A1),(B1),(C1),(D1));
    printf("\n%c%c%c%c%c",(A1),(B1),(C1),(D1),(E1));

    return 0;



}