using System;
using System.Collections.Generic;

class PersonalInfo
{
    static void Main()
    {
        string name = "@GravStark";
        string nationality = "Italian";
        int age = 18;
        string city = "Modena";

        List<string> interests = new List<string> { "Programming", "VideoGames", "Music", "Healthcare" };
        List<string> languages = new List<string> { "Italian", "English", "Finnish" };
        List<string> programmingLanguages = new List<string> { "C", "C++", "C#", "Batch", "Assembly", "Java", "Html", "CSS", "JavaScript" };

        Console.WriteLine($"Hi, I'm {name}, an {nationality} {age} y/o student from {city}.");
        Console.WriteLine("✨ Interests:");
        foreach (string interest in interests)
        {
            Console.WriteLine($"- {interest}");
        }
        Console.WriteLine("✨ Languages:");
        foreach (string language in languages)
        {
            Console.WriteLine($"- {language}");
        }
        Console.WriteLine("✨ Programming languages:");
        foreach (string programmingLanguage in programmingLanguages)
        {
            Console.WriteLine($"- {programmingLanguage}");
        }
    }
}
