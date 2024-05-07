#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    int id;
    string type;
    string name;
    double price;
    string author;
    bool isBorrowed;
    Book* next;

public:
    Book(int id, string type, string name, double price, string author) {
        this->id = id;
        this->type = type;
        this->name = name;
        this->price = price;
        this->author = author;
        this->isBorrowed = false;
        this->next = nullptr;
    }

    int getId() {
        return id;
    }
    void setId(int id) {
        this->id = id;
    }

    string getType() {
        return type;
    }

    void setType(string type) {
        this->type = type;
    }

    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    double getPrice() {
        return price;
    }

    void setPrice(double price) {
        this->price = price;
    }

    string getAuthor() {
        return author;
    }

    void setAuthor(string author) {
        this->author = author;
    }

    bool getIsBorrowed() {
        return isBorrowed;
    }

    void setIsBorrowed(bool isBorrowed) {
        this->isBorrowed = isBorrowed;
    }

    Book* getNext() {
        return next;
    }

    void setNext(Book* next) {
        this->next = next;
    }
};


class Person {
private:
    int id;
    string name;
    int age;
    Book *borrowedBooks;
    Person *next;

public:
    Person(int id, string name, int age) {
        this->id = id;
        this->name = name;
        this->age = age;
        this->borrowedBooks = nullptr;
        this->next = nullptr;
    }
    int getId() {
        return id;
    }

    void setId(int id) {
        this->id = id;
    }

    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    int getAge() {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }

    Book* getBorrowedBooks() {
        return borrowedBooks;
    }

    Person* getNext() {
        return next;
    }

    void setNext(Person* next) {
        this->next = next;
    }
};