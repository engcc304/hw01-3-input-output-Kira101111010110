
/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
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