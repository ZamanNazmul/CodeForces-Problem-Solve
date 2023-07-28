// ans no 9

#include <stdio.h>
int main() {
    int ph;
    scanf("%d", &ph);

    if (ph > 7) {
        if (ph < 12) {
            printf("Alkaline\n");
        } else {
            printf("Very Alkaline\n");
        }
    } else {
        if (ph == 7) {
            printf("Neutral\n");
        } else if (ph > 2) {
            printf("Acidic\n");
        } else {
            printf("Very Acidic\n");
        }
    }

    return 0;
}
