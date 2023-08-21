#include <stdio.h>
int main() {
    int medical_history, symptoms;

    printf("Enter medical history (1 = no history, 2 = minor history, 3 = major history): ");
    scanf("%d", &medical_history);

    printf("Enter symptoms (1 = mild, 2 = moderate, 3 = severe): ");
    scanf("%d", &symptoms);

    if (medical_history == 1 && symptoms == 1) {
        printf("Treatment plan: Over-the-counter medication and monitoring.\n");
    } else if (medical_history == 1 && symptoms == 2) {
        printf("Treatment plan: Prescription medication and monitoring.\n");
    } else if (medical_history == 1 && symptoms == 3) {
        printf("Treatment plan: Hospitalization and intensive treatment.\n");
    } else if (medical_history == 2 && symptoms == 1) {
        printf("Treatment plan: Prescription medication and monitoring.\n");
    } else if (medical_history == 2 && symptoms == 2) {
        printf("Treatment plan: Hospitalization and intensive treatment.\n");
    } else if (medical_history == 2 && symptoms == 3) {
        printf("Treatment plan: Hospitalization and emergency treatment.\n");
    } else if (medical_history == 3 && symptoms == 1) {
        printf("Treatment plan: Hospitalization and intensive treatment.\n");
    } else if (medical_history == 3 && symptoms == 2) {
        printf("Treatment plan: Hospitalization and emergency treatment.\n");
    } else if (medical_history == 3 && symptoms == 3) {
        printf("Treatment plan: Hospitalization and emergency treatment.\n");
    } else {
        printf("Invalid medical history or symptoms. Please enter values between 1 and 3.\n");
    }
}