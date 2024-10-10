#include <stdio.h>

int main() {
    int customerID, unitsConsumed;
    char customerName[100];
    float totalBill, surcharge = 0.0, chargePerUnit;

    // Prompt user for input
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Calculate charge per unit based on units consumed
    if (unitsConsumed <= 199) {
        chargePerUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        chargePerUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }

    // Calculate total bill before surcharge
    totalBill = unitsConsumed * chargePerUnit;

    // Apply surcharge if bill exceeds Kshs. 400
    if (totalBill > 400) {
        surcharge = 0.15 * totalBill;
        totalBill += surcharge;
    }

    // Ensure the minimum bill is Kshs. 100
    if (totalBill < 100) {
        totalBill = 100;
    }

    // Display the results
    printf("\nElectricity Bill\n");
    printf("----------------\n");
    printf("Customer ID      : %d\n", customerID);
    printf("Customer Name    : %s\n", customerName);
    printf("Units Consumed   : %d\n", unitsConsumed);
    printf("Charges per Unit : Ksh %.2f\n", chargePerUnit);
    printf("Total Amount to Pay: Ksh %.2f\n", totalBill);

    return 0;
}