#include <stdio.h>
#include <string.h>

struct Machine
{
    char mac[18];
    char hostname[50];
    char ip[16];
};

int main()
{
    struct Machine machine[5];

    int i;

    for (i = 0; i < 5; i++)
    {
        printf("\nMachine %d\n", i + 1);

        printf("Enter MAC Address: ");
        scanf("%17s", machine[i].mac);

        printf("Enter Hostname: ");
        scanf("%49s", machine[i].hostname);

        printf("Enter IP Address: ");
        scanf("%15s", machine[i].ip);
    }

    printf("\n--- Network Machine Details ---\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nMachine %d\n", i + 1);
        printf("MAC Address : %s\n", machine[i].mac);
        printf("Hostname    : %s\n", machine[i].hostname);
        printf("IP Address  : %s\n", machine[i].ip);
    }

    return 0;
}
