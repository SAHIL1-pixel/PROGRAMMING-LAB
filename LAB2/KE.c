#include <stdio.h>

int main() {
    double mass, velocity, kineticEnergy;

    printf("=== Kinetic Energy Calculator ===\n");
    printf("Enter mass (in kilograms): ");
    scanf("%lf", &mass);

    printf("Enter velocity (in meters per second): ");
    scanf("%lf", &velocity);

    kineticEnergy = 0.5 * mass * velocity * velocity;

    printf("\nKinetic Energy = %.2lf Joules\n", kineticEnergy);

    return 0;
}