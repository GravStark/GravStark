<?php
$name = "@GravStark";
$nationality = "Italian";
$age = 18;
$city = "Modena";

$interests = array("Programming", "VideoGames", "Music", "Healthcare");
$languages = array("Italian", "English", "Finnish");
$programming_languages = array("C", "C++", "C#", "Batch", "Assembly", "Java", "Html", "CSS", "JavaScript");

echo "Hi, I'm $name, an $nationality $age y/o student from $city.\n";
echo "✨ Interests:\n";
foreach ($interests as $interest) {
    echo "- $interest\n";
}
echo "✨ Languages:\n";
foreach ($languages as $language) {
    echo "- $language\n";
}
echo "✨ Programming languages:\n";
foreach ($programming_languages as $programming_language) {
    echo "- $programming_language\n";
}
?>
