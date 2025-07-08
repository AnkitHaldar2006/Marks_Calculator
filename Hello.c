#include <stdio.h>

int main() {
    int eng, beng, math, phy, chmy, life_sin, his, geo;
    int total;
    float avg, per;

    // Input
    printf("Enter English Marks: "); 
    scanf("%d", &eng);
    printf("Enter Bengali Marks: "); 
    scanf("%d", &beng);
    printf("Enter Math Marks: "); 
    scanf("%d", &math);
    printf("Enter History Marks: "); 
    scanf("%d", &his);
    printf("Enter Geography Marks: "); 
    scanf("%d", &geo);
    printf("Enter Physics Marks: "); 
    scanf("%d", &phy);
    printf("Enter Chemistry Marks: "); 
    scanf("%d", &chmy);
    printf("Enter Life Science Marks: ");
    scanf("%d", &life_sin);

    // Total, Average, Percentage
    total = eng + beng + math + phy + chmy + life_sin + his + geo;
    avg = total / 8.0;
    per = (total / 800.0) * 100;

    // Output marks
    printf("\n--- Marks Summary ---\n");
    printf("English: %d\nBengali: %d\nMath: %d\nHistory: %d\n", eng, beng, math, his);
    printf("Geography: %d\nPhysics: %d\nChemistry: %d\nLife Science: %d\n", geo, phy, chmy, life_sin);
    printf("Total: %d\nAverage: %.2f\nPercentage: %.2f%%\n", total, avg, per);

    // Grade Logic
    if (eng < 49 || beng < 49 || math < 49 || phy < 49 || chmy < 49 || life_sin < 49 || his < 49 || geo < 49) {
        printf("Grade: F\nYou have failed.\n");
    } else if (eng >= 90 && beng >= 90 && math >= 90 && phy >= 90 && chmy >= 90 && life_sin >= 90 && his >= 90 && geo >= 90) {
        printf("Grade: A+\n");
    } else if (eng >= 80 && beng >= 80 && math >= 80 && phy >= 80 && chmy >= 80 && life_sin >= 80 && his >= 80 && geo >= 80) {
        printf("Grade: A\n");
    } else if (eng >= 70 && beng >= 70 && math >= 70 && phy >= 70 && chmy >= 70 && life_sin >= 70 && his >= 70 && geo >= 70) {
        printf("Grade: B\n");
    } else if (eng >= 60 && beng >= 60 && math >= 60 && phy >= 60 && chmy >= 60 && life_sin >= 60 && his >= 60 && geo >= 60) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }

    return 0;
}
