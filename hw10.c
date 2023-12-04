#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct City {
    char name[100];
    char country[100];
    int population;
};

int main() {
    const int NUM_CITIES = 3;  

   
    struct City cities[NUM_CITIES];

    
    for (int i = 0; i < NUM_CITIES; ++i) {
        printf("Input information for City %d:\n", i + 1);
        printf("Name> ");
        scanf("%s", cities[i].name);
        printf("Country> ");
        scanf("%s", cities[i].country);
        printf("Population> ");
        scanf("%d", &cities[i].population);
    }

    
    printf("\nPrinting the three cities:\n");
    for (int i = 0; i < NUM_CITIES; ++i) {
        printf("%d. %s in %s with a population of %d people\n", i + 1,
            cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}