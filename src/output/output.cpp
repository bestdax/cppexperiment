#include <iostream>

void moveCursor(int row, int col) {
    std::cout << "\033[" << row << ";" << col << "H";
}

int main() {
    moveCursor(10, 10); // 将光标移动到第10行第10列
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
