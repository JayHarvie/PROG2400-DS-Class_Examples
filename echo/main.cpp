#include <iostream>
#include <string>

using std::cout, std::cin, std::endl, std::getline;

int main() {

    std::string input;
    constexpr auto END = "end";

    do {
        cout << "Please enter a line of text (type 'end' to quit): " << endl;
        getline(cin, input);

        if (input != END) {
            cout << "You typed: " << input << "\n" << endl;
        }

    } while (input != END);

    return 0;
}
