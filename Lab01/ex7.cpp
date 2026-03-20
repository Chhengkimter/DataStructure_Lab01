#include <iostream>
#include <string>
#include <array>

struct book {
    int id;
    std::string isbn;
    std::string title;
    int year;
    std::string authors[5];
    double price;
};

void printBookDetails(const book& b) {
    std::cout << "ID: " << b.id << std::endl;
    std::cout << "ISBN: " << b.isbn << std::endl;
    std::cout << "Title: " << b.title << std::endl;
    std::cout << "Year: " << b.year << std::endl;
    std::cout << "Authors: ";
    for (const auto& author : b.authors) {
        if (!author.empty()) {
            std::cout << author << " ";
        }
    }
    std::cout << std::endl;
    std::cout << "Price: $" << b.price << std::endl;
}

void basedISBN(book books[], int size, std::string isbn) {
    for (int i = 0; i < size; i++) {
        if (books[i].isbn == isbn) {
            printBookDetails(books[i]);
            return;
        }
    }
    std::cout << "Not found." << std::endl;
}


int main() {
    
    book books[5] = {
        {1, "978-3-16-148410-0", "The Great Gatsby", 1925, {"F. Scott Fitzgerald"}, 10.99},
        {2, "978-0-14-028333-4", "To Kill a Mockingbird", 1960, {"Harper Lee"}, 7.99},
        {3, "978-0-452-28423-4", "1984", 1949, {"George Orwell"}, 8.99},
        {4, "978-0-7432-7356-5", "The Catcher in the Rye", 1951, {"J.D. Salinger"}, 6.99},
        {5, "978-0-316-76948-0", "The Lord of the Rings", 1954, {"J.R.R. Tolkien"}, 15.99}
    };

    std::cout << "What would you like to do?(Enter the number)" << std::endl;
    std::cout << "1. Print details of all books" << std::endl;
    std::cout << "2. Search for a book by ISBN" << std::endl;
    std::cout << "3. Exit" << std::endl;

    int choice;
    std::cin >> choice;
    while(choice != 3) {
        switch(choice) {
            case 1:
                for (const auto& book : books) {
                    printBookDetails(book);
                    std::cout << "------------------------" << std::endl;
                }
                break;
            case 2: {
                std::cout << "Enter ISBN to search:" << std::endl;
                std::string isbn;
                std::cin >> isbn;
                basedISBN(books, 5, isbn);
                break;
            }
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
        std::cout << "What would you like to do?(Enter the number)" << std::endl;
        std::cout << "1. Print details of all books" << std::endl;
        std::cout << "2. Search for a book by ISBN" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cin >> choice;
    }
    return 0;
}