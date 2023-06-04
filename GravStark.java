public class PersonalInfo {
    public static void main(String[] args) {
        String name = "@GravStark";
        String nationality = "Italian";
        int age = 18;
        String city = "Modena";

        String[] interests = {"Programming", "VideoGames", "Music", "Healthcare"};
        String[] languages = {"Italian", "English", "Finnish"};
        String[] programmingLanguages = {"C", "C++", "C#", "Batch", "Assembly", "Java", "Html", "CSS", "JavaScript"};

        System.out.println("Hi, I'm " + name + ", an " + nationality + " " + age + " y/o student from " + city + ".");
        System.out.println("✨ Interests:");
        for (String interest : interests) {
            System.out.println("- " + interest);
        }
        System.out.println("✨ Languages:");
        for (String language : languages) {
            System.out.println("- " + language);
        }
        System.out.println("✨ Programming languages:");
        for (String programmingLanguage : programmingLanguages) {
            System.out.println("- " + programmingLanguage);
        }
    }
}
