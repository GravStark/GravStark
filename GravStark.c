#include <stdio.h>

int main() {
    char name[] = "@GravStark";
    char nationality[] = "Italian";
    int age = 18;
    char city[] = "Modena";

    char* interests[] = { "Programming", "VideoGames", "Music", "Healthcare" };
    char* languages[] = { "Italian", "English", "Finnish" };
    char* programming_languages[] = { "C", "C++", "C#", "Batch", "Assembly", "Java", "Html", "CSS", "JavaScript" };

    printf("Hi, I'm %s, an %s %d y/o student from %s.\n", name, nationality, age, city);
    printf("✨ Interests:\n");
    for (int i = 0; i < sizeof(interests) / sizeof(interests[0]); i++) {
        printf("- %s\n", interests[i]);
    }
    printf("✨ Languages:\n");
    for (int i = 0; i < sizeof(languages) / sizeof(languages[0]); i++) {
        printf("- %s\n", languages[i]);
    }
    printf("✨ Programming languages:\n");
    for (int i = 0; i < sizeof(programming_languages) / sizeof(programming_languages[0]); i++) {
        printf("- %s\n", programming_languages[i]);
    }

    return 0;
}
