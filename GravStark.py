def main():
    name = "@GravStark"
    nationality = "Italian"
    age = 18
    city = "Modena"

    interests = ["Programming", "VideoGames", "Music", "Healthcare"]
    languages = ["Italian", "English", "Finnish"]
    programming_languages = ["C", "C++", "C#", "Batch", "Assembly", "Java", "Html", "CSS", "JavaScript"]

    print(f"Hi, I'm {name}, an {nationality} {age} y/o student from {city}.")
    print("✨ Interests:")
    for interest in interests:
        print(f"- {interest}")
    print("✨ Languages:")
    for language in languages:
        print(f"- {language}")
    print("✨ Programming languages:")
    for programming_language in programming_languages:
        print(f"- {programming_language}")

if __name__ == "__main__":
    main()
