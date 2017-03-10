#include <stdio.h>
#include <string.h>
int main() {
        int set = 0;
        int n;
        char polecenie[8];
        do
        {
            scanf("%s", polecenie);
            if (!strcmp(polecenie,"wczytaj"))
            {
                scanf("%d", &n);
                set |=(1<<n);
            } else if (!strcmp(polecenie,"wyjmij"))
            {
                scanf("%d", &n);
                set&=(~(1<<n));
            } else if (!strcmp(polecenie,"sprawdz"))
            {
                scanf("%d", &n);
                printf((set&(1<<n))==0 ? "NIE":"TAK");
            }
        } while (strcmp(polecenie,"wyjdz"));
        return 0;
}
