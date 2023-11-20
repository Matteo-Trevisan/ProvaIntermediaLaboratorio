#ifndef PROVA_INTERMEDIA_BOOKSHELF_HPP
#define PROVA_INTERMEDIA_BOOKSHELF_HPP

#include "iostream"
#include "../include/Book.hpp"

class BookShelf {
public:
    BookShelf();
    explicit BookShelf (int size);
    BookShelf(std::initializer_list<Book> il);
    BookShelf (const BookShelf& arg);
    BookShelf (BookShelf&& arg) noexcept;
    ~BookShelf();

    BookShelf& operator=(const BookShelf& arg);
    BookShelf& operator=(BookShelf&& arg) noexcept;
    Book& operator[](int i);
    const Book& operator[](int i) const;

    Book& at(int i);
    const Book& at(int i) const;

    void clear();
    int size() const;
    bool empty() const;
    int capacity() const;
    void push_back(Book& b);
    void pop_back();
    void reserve(int n);
    void resize (int size);
    void shrink_to_fit();

private:
    static const int min_buff_capacity = 5;
    int length;
    int buff_capacity;
    Book *buff;

};

std::ostream &operator<<(std::ostream &os, const BookShelf &b);

#endif //PROVA_INTERMEDIA_BOOKSHELF_HPP
