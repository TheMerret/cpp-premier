#include <iostream>

int main() {
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */";  // added double quote in the end
    std::cout << /* "*/" /* "/*" */;
}
