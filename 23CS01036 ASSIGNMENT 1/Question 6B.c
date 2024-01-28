#include<stdio.h>
int main(){


#include <stdio.h>
#include <limits.h>

int main() {
    // Using different integer data types
    short shortVar = SHRT_MAX;
    int intVar = INT_MAX;
    long longVar = LONG_MAX;
    long long longLongVar = LLONG_MAX;

    // Printing the values for each data type
    printf("Short Variable: %hd\n", shortVar);
    printf("Int Variable: %d\n", intVar);
    printf("Long Variable: %ld\n", longVar);
    printf("Long Long Variable: %lld\n", longLongVar);

    return 0;
}
    