#include <stdio.h>
#include <string.h>

// Define the user-defined structure
struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

// Function to print the address
void printAdd(struct address add);

int main() {
    struct address adds[5];
    
    // Take input for each person
    printf("Enter info for person 1:\n");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("Enter info for person 2:\n");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("Enter info for person 3:\n");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("Enter info for person 4:\n");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printf("Enter info for person 5:\n");
    scanf("%d", &adds[4].houseNo);
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);

    // Print the addresses
    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);

    return 0;
}

// Function definition to print the address
void printAdd(struct address add) {
    printf("Address: %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
}
