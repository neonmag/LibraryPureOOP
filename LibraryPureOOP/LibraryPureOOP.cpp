#include "Imports.h"


void main() {
	Visitor visitor = Visitor(1, 25, "Ivan", "Ivanov", "Ivanovich");
	Author author = Author(1, 26, "Petr", "Petrov", "Petrovich", "Petrusha");
	Genre genre = Genre(1, "Fantasy", "Fantasy genre", 1990);
	Book book = Book(1, "Harry Potter", "Harry Potter book", author, genre, "01.01.2000", true);
	Book book2 = Book(2, "Harry Potter", "Harry Potter book", author, genre, "01.01.2000", true);
	Book book3 = Book(3, "Harry Potter", "Harry Potter book", author, genre, "01.01.2000", true);
	Book book4 = Book(4, "Harry Potter", "Harry Potter book", author, genre, "01.01.2000", true);
	Book book5 = Book(5, "Harry Potter", "Harry Potter book", author, genre, "01.01.2000", true);
	Book book6 = Book(6, "Harry Potter", "Harry Potter book", author, genre, "01.01.2000", true);
	Book book7 = Book(7, "Harry Potter", "Harry Potter book", author, genre, "01.01.2000", true);
	Book book8 = Book(8, "Harry Potter", "Harry Potter book", author, genre, "01.01.2000", true);
	Book book9 = Book(9, "Harry Potter", "Harry Potter book", author, genre, "01.01.2000", true);
	Book book10 = Book(10, "Harry Potter", "Harry Potter book", author, genre, "01.01.2000", true);
	Book book11 = Book(10, "Harry Potter", "Harry Potter book", author, genre, "01.01.2000", true);

	Shelf shelf = Shelf(1, "A", 10);
	shelf.AddBook(book);
	shelf.AddBook(book2);
	shelf.AddBook(book3);
	shelf.AddBook(book4);
	shelf.AddBook(book5);
	shelf.AddBook(book6);
	shelf.AddBook(book7);
	shelf.AddBook(book8);
	shelf.AddBook(book9);
	shelf.AddBook(book10);
	shelf.AddBook(book11);

	cout << shelf;

}