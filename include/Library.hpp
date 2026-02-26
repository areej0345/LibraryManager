#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <vector>
#include <memory>
#include "LibraryItem.hpp"

class Library {
public:
    // STL Vector: Different items ko store karne ke liye
    std::vector<std::shared_ptr<LibraryItem>> items;

    void addItem(std::shared_ptr<LibraryItem> item) {
        items.push_back(item);
    }
};

#endif