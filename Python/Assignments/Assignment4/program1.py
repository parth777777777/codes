import re

def get_words_of_length(filename, length):
    try:
        with open(filename, 'r', encoding='utf-8') as file:
            text = file.read()
            words = re.findall(r'\b\w+\b', text)  # Extract words
            # Filter words by the specified length
            matching_words = [word for word in words if len(word) == length]
            return matching_words
    except FileNotFoundError:
        print("Error: File not found.")
        return []

# User input
file_name = input("Enter the filename: ")
word_length = int(input("Enter the word length: "))

# Get and print words
result_words = get_words_of_length(file_name, word_length)
if result_words:
    print(f"Words with length {word_length}: {', '.join(result_words)}")
else:
    print(f"No words of length {word_length} found.")