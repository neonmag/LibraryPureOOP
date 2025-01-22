#include <iostream>
#include <string>
using namespace std;
#include "AbstractBase.h"
#include "AbstractHuman.h"
#include "IHuman.h"
#include "Author.h"
#include "Visitor.h"
#include "Genre.h"
#include "Shelf.h"
#include "Book.h"


void main() {
	Visitor visitor = Visitor(1, 25, "Ivan", "Ivanov", "Ivanovich");
	Author author = Author(1, 26, "Petr", "Petrov", "Petrovich", "Petrusha");
	Genre genre = Genre(1, "Fantasy", "Fantasy genre", 1990);
	Book book = Book(1, "Harry Potter", "Harry Potter book", author, genre, "01.01.2000", true);

	cout << book;

}