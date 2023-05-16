#include <stdio.h>

void main()
{
    int withdrawValue, fiveBill, tenBill, twentyBill, fiftyBill, hundredBill;
    fiveBill = tenBill = twentyBill = fiftyBill = hundredBill = 0;
    do
    {
        printf("Withdraw value: U$");
        scanf("%i", &withdrawValue);
        if (withdrawValue % 5 != 0)
        {
            printf("The withdraw value is not valid. Try again.\n");
        }
    } while (withdrawValue % 5 != 0);

    hundredBill = withdrawValue / 100;
    withdrawValue -= hundredBill * 100;

    fiftyBill = withdrawValue / 50;
    withdrawValue -= fiftyBill * 50;

    twentyBill = withdrawValue / 20;
    withdrawValue -= twentyBill * 20;

    tenBill = withdrawValue / 10;
    withdrawValue -= tenBill * 10;

    fiveBill = withdrawValue / 5;
    withdrawValue -= fiveBill * 5;

    printf("Hundred bills: %i\n", hundredBill);
    printf("Fifty bills: %i\n", fiftyBill);
    printf("Twenty bills: %i\n", twentyBill);
    printf("Ten bills: %i\n", tenBill);
    printf("Five bills: %i\n", fiveBill);
}