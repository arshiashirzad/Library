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