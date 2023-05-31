#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

struct DictionaryEntry {
    char word[50];
    char definition[100];
};

struct Dictionary {
    struct DictionaryEntry entries[MAX_ENTRIES];
    int count;
};

void addEntry(struct Dictionary *dict, const char *word, const char *definition) {
    if (dict->count >= MAX_ENTRIES) {
        printf("Dictionary is full. Cannot add more entries.\n");
        return;
    }

    struct DictionaryEntry newEntry;
    strncpy(newEntry.word, word, sizeof(newEntry.word) - 1);
    strncpy(newEntry.definition, definition, sizeof(newEntry.definition) - 1);

    dict->entries[dict->count] = newEntry;
    dict->count++;
}

void searchEntry(const struct Dictionary *dict, const char *word) {
    int i;
    for (i = 0; i < dict->count; i++) {
        if (strcmp(dict->entries[i].word, word) == 0) {
            printf("Definition: %s\n", dict->entries[i].definition);
            return;
        }
    }

    printf("Word not found in the dictionary.\n");
}

int main() {
    struct Dictionary dict;
    dict.count = 0;

    // Adding entries to the dictionary
    addEntry(&dict, "apple", "A fruit with red or green skin and a crisp texture.");
    addEntry(&dict, "book", "A written or printed work consisting of pages.");
    addEntry(&dict, "computer", "An electronic device that can store, retrieve, and process data.");

    // Searching for entries in the dictionary
    searchEntry(&dict, "apple");
    searchEntry(&dict, "book");
    searchEntry(&dict, "computer");
    searchEntry(&dict, "car");

    return 0;
}
