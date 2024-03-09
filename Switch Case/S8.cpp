#include <stdio.h>
int main() {
    char vehicleType;
    int hours, parkingCharge;
    printf("Enter the type of vehicle (c for car, b for bus, s for scooter): ");
    scanf(" %c", &vehicleType);
    printf("Enter the number of hours parked: ");
    scanf("%d", &hours);
    switch (vehicleType) {
        case 'c':
        case 'C':
            parkingCharge = hours * 10;
            break;
        case 'b':
        case 'B':
            parkingCharge = hours * 20;
            break;
        case 's':
        case 'S':
            parkingCharge = hours * 5;
            break;
        default:
            printf("Invalid vehicle type entered.\n");
    }
    printf("Parking charge: Rs. %d\n", parkingCharge);
}

