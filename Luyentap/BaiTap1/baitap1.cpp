#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    printf("Enter Element For Array: ");
    int n;
    scanf("%d", &n);
    int M[n];
    printf("\n Enter Value Of  Element:\n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &M[i]);
    }
    printf("\nArray After Input: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", M[i]);
        printf("\t");
    }

    return 0;
}