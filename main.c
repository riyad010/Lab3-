
#include <stdio.h>

int main() {
    float boy = 100.0;
    float artis_orani = 0.10;
    float hedef_boy = 150.0;

    int ay = 0;

    while (boy < hedef_boy) {
        boy *= (1 + artis_orani);
        ay++;
    }

    printf("%d ay sonra boyunuz %.2f'yi geçer.\n", ay, hedef_boy);

    return 0;
}