#ifndef BOOK
#define BOOK

#include <iostream>
#include <string>

class Book
{
private:
    std::string title;
    std::string author;
    std::string isbn;

public:
    Book() : title(""), author(""), isbn("") {};
    Book(std::string title, std::string author, std::string isbn)
        : title(title), author(author), isbn(isbn) {};

    ~Book()
    {
        std::cout << "Destroying book: " << title << std::endl;
    }

    std::string getTitle() const 
    {
        return title;
    }
    std::string getAuthor() const 
    {
        return author;
    }
    std::string getIsbn() const 
    {
        return isbn;
    }
    
};

#endif