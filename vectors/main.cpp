#include <iostream>
#include <vector>

using std::cout, std::endl;

std::ostream& operator<<(std::ostream& out, const std::vector<int>& v) {
    for (auto& n:v) {
        out << n << ' ';
    }
    return out;
}

void operator<<(std::vector<int>& v, const std::vector<int>& int_vec) {
    for (auto& n:int_vec) {
        v.push_back(n);
    }
}

int main() {
    std:: vector<int> v;
    v.reserve(100);

    srand(time(nullptr));
    for (auto i = 0; i < 10; i++) {
        v.push_back(rand() % 100);
    }

    v.shrink_to_fit();

    cout << v << endl;
    cout << "capacity = " << v.capacity() << endl;
    cout << "size = " << v.size() << endl;

    // v.resize(200);
    v.push_back(6);

    cout << v << endl;
    cout << "capacity = " << v.capacity() << endl;
    cout << "size = " << v.size() << endl;

    v << std::vector({7, 8, 9, 10, 11});

    cout << v << endl;
    cout << "capacity = " << v.capacity() << endl;
    cout << "size = " << v.size() << endl;

    // remove from a verctor
    v.push_back(666);
    cout << v << endl;
    v.erase(v.begin() + 17);
    cout << v << endl;

    v.erase(v.begin() + 5, v.begin() + 10);
    v.shrink_to_fit();

    // ccess items in a vector
    cout << v[0] << endl;
    cout << v.at(15) << endl;

    return 0;
}