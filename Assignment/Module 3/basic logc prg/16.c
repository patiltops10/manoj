
#include <stdio.h>
#include <string.h>

#define MAX_COUNTRIES 15
#define MAX_NAME_LEN 50
#define MAX_ABBR_LEN 10

typedef struct {
    char name[MAX_NAME_LEN];
    char abbreviation[MAX_ABBR_LEN];
} Country;

void getCountryAbbreviation(char *country, char *abbreviation) {
    Country countries[MAX_COUNTRIES] = {
        {"United States of America", "USA"},
        {"United Kingdom", "UK"},
        {"Canada", "CA"},
        {"Australia", "AU"},
        {"India", "IN"},
        {"Germany", "DE"},
        {"France", "FR"},
        {"Japan", "JP"},
        {"China", "CN"},
        {"Russia", "RU"},
        {"South Korea", "KR"},
        {"Brazil", "BR"},
        {"Italy", "IT"},
        {"Mexico", "MX"},
        {"Spain", "ES"}
    };

    for (int i = 0; i < MAX_COUNTRIES; i++) {
        if (strcmp(country, countries[i].name) == 0) {
            strcpy(abbreviation, countries[i].abbreviation);
            return;
        }
    }

    strcpy(abbreviation, "Unknown");
}

int main() {
    char country[MAX_NAME_LEN];
    char abbreviation[MAX_ABBR_LEN];

    printf("Enter the name of the country: ");
    fgets(country, sizeof(country), stdin);

    // Remove the newline character at the end if present
    country[strcspn(country, "\n")] = 0;

    getCountryAbbreviation(country, abbreviation);

    printf("The abbreviation for %s is %s\n", country, abbreviation);

    return 0;
}