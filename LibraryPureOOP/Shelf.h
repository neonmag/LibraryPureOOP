class Shelf : protected AbstractBase {
	vector<Book> books;
	string name;
	int maxAmountOfBooks;
public:
	Shelf() {
		this->id = 0;
		this->name = "Default";
		this->maxAmountOfBooks = 0;
	}

	Shelf(int id, string name, int maxAmountOfBooks) {
		this->id = id;
		this->name = name;
		this->maxAmountOfBooks = maxAmountOfBooks;
	}

	Shelf(const Shelf& shelf) {
		this->id = shelf.id;
		this->name = shelf.name;
		this->maxAmountOfBooks = shelf.maxAmountOfBooks;
		this->books = shelf.books;
	}

	friend ostream& operator<<(ostream& os, Shelf& shelf) {
		os << "ID: " << shelf.id << endl;
		os << "Name: " << shelf.name << endl;
		os << "Max amount of books: " << shelf.maxAmountOfBooks << endl;
		os << "Books: " << endl;
		for (int i = 0; i < shelf.books.size(); i++) {
			os << shelf.books[i] << endl;
		}
		return os;
	}

	void SetId(int id) {
		this->id = id;
	}

	void SetName(string name) {
		this->name = name;
	}

	void SetMaxAmountOfBooks(int maxAmountOfBooks) {
		this->maxAmountOfBooks = maxAmountOfBooks;
	}

	void AddBook(Book& book) {
		if (books.size() < maxAmountOfBooks) {
			books.push_back(book);
		}
		else {
			cout << "Shelf is full" << endl;
		}
	}

	void RemoveBook(int id) {
		for (int i = 0; i < books.size(); i++) {
			if (books[i].GetId() == id) {
				books.erase(books.begin() + i);
				break;
			}
		}
	}

	int GetId() {
		return this->id;
	}

	string GetName() {
		return this->name;
	}

	int GetMaxAmountOfBooks() {
		return this->maxAmountOfBooks;
	}

	vector<Book> GetBooks() {
		return this->books;
	}
};