#ifndef LIBRARYITEM_HPP
#define LIBRARYITEM_HPP

#include <string>

// Base Class (Inheritance ka concept yahan hai)
class LibraryItem {
protected:
    std::string title;
    int id;
public:
    LibraryItem(std::string t, int i) : title(t), id(i) {}
    virtual ~LibraryItem() = default;
    
    virtual std::string getType() const = 0; // Pure virtual function
    std::string getTitle() const { return title; }
    int getId() const { return id; }
};

// Derived Class (Book inheritance kar rahi hai LibraryItem se)
class Book : public LibraryItem {
    std::string author;
public:
    Book(std::string t, int i, std::string a) : LibraryItem(t, i), author(a) {}
    std::string getType() const override { return "Book"; }
    std::string getAuthor() const { return author; }
};

#endif