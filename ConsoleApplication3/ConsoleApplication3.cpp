#include <iostream>
#include "MultiplicationTable.h"

// 構造函數與析構函數實作
MultiplicationTable::MultiplicationTable() {}
MultiplicationTable::~MultiplicationTable() {}

// 公共成員函數實作
void MultiplicationTable::printTable() {
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            std::cout << i << " * " << j << " = " << i * j << "\t";
        }
        std::cout << std::endl;
    }
}

int main() {
    MultiplicationTable table;
    table.printTable();
    return 0;
}
