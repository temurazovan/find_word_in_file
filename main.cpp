#include <iostream>
#include <fstream>

int main() {
    std::ifstream words("words.txt");
    std::string targerWord;

    words.open("/Users/user/CLionProjects/find_word_in_file/words.txt");

    int count = 0;

    while (!words.eof()) {
        words >> targerWord;
        if (targerWord == "cat") {
            count++;
        }
    }
    std::cout << count;

    words.close();
    return 0;
}
