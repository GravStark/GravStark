name = "@GravStark"
nationality = "Italian"
age = 18
city = "Modena"

interests = ["Programming", "VideoGames", "Music", "Healthcare"]
languages = ["Italian", "English", "Finnish"]
programming_languages = ["C", "C++", "C#", "Batch", "Assembly", "Java", "Html", "CSS", "JavaScript"]

puts "Hi, I'm #{name}, an #{nationality} #{age} y/o student from #{city}."
puts "✨ Interests:"
interests.each { |interest| puts "- #{interest}" }
puts "✨ Languages:"
languages.each { |language| puts "- #{language}" }
puts "✨ Programming languages:"
programming_languages.each { |programming_language| puts "- #{programming_language}" }
