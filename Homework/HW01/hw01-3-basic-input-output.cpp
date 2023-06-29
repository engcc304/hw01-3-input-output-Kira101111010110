#include <stdio.h>

int main() {
char FN[50]; 
char LN[50];  
printf("Test case:\n");
    printf("    First Name: ");
    scanf("%s", FN);
    printf("    Last Name: ");
    scanf("%s", LN);
printf("Output:\n");
    printf("    %s %s%s, %s, %s, %s\n", FN, LN, "s TC", "RMUTL", "Chiang Mai", "Thailand");
return 0;
}