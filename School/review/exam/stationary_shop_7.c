#include <stdio.h>

int main() {
    // Declare variables
    char item[100]; // To store the name of the item
    int quantity; // To store the quantity of the item
    float price, total = 0.0, subtotal; // To store the price of the item, the total cost, and the subtotal

    // Read input until end of file
    while(scanf("%s %d %f", item, &quantity, &price) != EOF) {
        // Calculate the subtotal
        subtotal = price * quantity;
        // Add the subtotal to the total cost
        total += subtotal;
    }

    // Print the total cost
    printf("Total cost: %.1f\n", total);

    return 0;
}