#include <iostream>
#include <string>
#include <map>

// Fungsi untuk mengkonversi karakter ke kode Morse
std::string charToMorse(char c) {
    std::map<char, std::string> morseCode = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
        {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
        {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
        {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
        {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
        {'Z', "--.."},
        {'0', "-----"}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"},
        {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."},
        {'8', "---.."}, {'9', "----."},
        {' ', "/"} // spasi
    };

    auto it = morseCode.find(toupper(c));
    return (it != morseCode.end()) ? it->second : "";
}

// Fungsi untuk mengkonversi teks ke kode Morse
std::string textToMorse(const std::string& text) {
    std::string morse;
    for (char c : text) {
        morse += charToMorse(c) + " ";
    }
    return morse;
}

int main() {
    std::string text;
    std::cout << "Masukkan teks: ";
    std::getline(std::cin, text);

    std::string morse = textToMorse(text);
    std::cout << "Kode Morse: " << morse << std::endl;

    return 0;
}
