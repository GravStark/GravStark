fn main() {
    let name = "@GravStark";
    let nationality = "Italian";
    let age = 18;
    let city = "Modena";

    let interests = vec!["Programming", "VideoGames", "Music", "Healthcare"];
    let languages = vec!["Italian", "English", "Finnish"];
    let programming_languages = vec!["C", "C++", "C#", "Batch", "Assembly", "Java", "Html", "CSS", "JavaScript"];

    println!("Hi, I'm {}, an {} {} y/o student from {}.", name, nationality, age, city);
    println!("✨ Interests:");
    for interest in interests.iter() {
        println!("- {}", interest);
    }
    println!("✨ Languages:");
    for language in languages.iter() {
        println!("- {}", language);
    }
    println!("✨ Programming languages:");
    for programming_language in programming_languages.iter() {
        println!("- {}", programming_language);
    }
}
