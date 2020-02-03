#include <iostream>
#include <map>

int main() {
    std::map<char, std::string> morseMap;
    morseMap.insert(std::make_pair<char, std::string>('A', ".-"));
    morseMap.insert(std::make_pair<char, std::string>('B', "-..."));
    morseMap.insert(std::make_pair<char, std::string>('C', "-.-."));
    morseMap.insert(std::make_pair<char, std::string>('D', "-.."));
    morseMap.insert(std::make_pair<char, std::string>('E', "."));
    morseMap.insert(std::make_pair<char, std::string>('F', ".-.."));
    morseMap.insert(std::make_pair<char, std::string>('G', "--."));
    morseMap.insert(std::make_pair<char, std::string>('H', "...."));
    morseMap.insert(std::make_pair<char, std::string>('I', ".."));
    morseMap.insert(std::make_pair<char, std::string>('J', ".---"));
    morseMap.insert(std::make_pair<char, std::string>('K', "-.-"));
    morseMap.insert(std::make_pair<char, std::string>('L', "..-."));
    morseMap.insert(std::make_pair<char, std::string>('M', "--"));
    morseMap.insert(std::make_pair<char, std::string>('N', "-."));
    morseMap.insert(std::make_pair<char, std::string>('O', "---"));
    morseMap.insert(std::make_pair<char, std::string>('P', ".--."));
    morseMap.insert(std::make_pair<char, std::string>('Q', "--.-"));
    morseMap.insert(std::make_pair<char, std::string>('R', ".-."));
    morseMap.insert(std::make_pair<char, std::string>('S', "..."));
    morseMap.insert(std::make_pair<char, std::string>('T', "-"));
    morseMap.insert(std::make_pair<char, std::string>('U', "..-"));
    morseMap.insert(std::make_pair<char, std::string>('V', "...-"));
    morseMap.insert(std::make_pair<char, std::string>('W', ".--"));
    morseMap.insert(std::make_pair<char, std::string>('X', "-..-"));
    morseMap.insert(std::make_pair<char, std::string>('Y', "-.--"));
    morseMap.insert(std::make_pair<char, std::string>('Z', "--.."));
    std::string sentence;
    while (std::getline(std::cin, sentence)) {
        for (auto& it : sentence) {
            char val = it;
            if (val == ' ') {
                std::cout << "/";
            } else {
                if ((val >= 97) && (val <= 122)) {
                    val -= 32;
                }
                std::cout << morseMap.find(val)->second << "/";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
