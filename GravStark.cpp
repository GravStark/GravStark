#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string name = "@GravStark";
    string nationality = "Italian";
    int age = 18;
    string city = "Modena";

    vector<string> interests = {"Programming", "VideoGames", "Music", "Healthcare"};
    vector<string> languages = {"Italian", "English", "Finnish"};
    vector<string> programmingLanguages = {"C", "C++", "C#", "Batch", "Assembly", "Java", "Html", "CSS", "JavaScript"};

    cout << "Hi, I'm " << name << ", an " << nationality << " " << age << " y/o student from " << city << "." << endl;
    cout << "✨ Interests:" << endl;
    for (const string& interest : interests) {
        cout << "- " << interest << endl;
    }
    cout << "✨ Languages:" << endl;
    for (const string& language : languages) {
        cout << "- " << language << endl;
    }
    cout << "✨ Programming languages:" << endl;
    for (const string& programmingLanguage : programmingLanguages) {
        cout << "- " << programmingLanguage << endl;
    }

    return 0;
}
