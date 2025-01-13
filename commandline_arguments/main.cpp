#include <iostream>

int main(const int argc, char* argv[])
{
    for (int i = 1; i < argc; ++i) {
        std::cout << argv[i] << std::endl;
    }

    return 0;
}
