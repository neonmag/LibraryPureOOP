class Book : protected AbstractBase {
	string bookName;
	string bookDescription;
	Author author;
	Genre genre;
	string dateOfRelease;
	bool isInLibrary;
public:
	Book(int id,
		string bookName,
		string bookDescription,
		Author& author,
		Genre& genre,
		string dateOfRelease,
		bool isInLibrary
	) {
		this->id = id;
		this->bookName = bookName;
		this->bookDescription = bookDescription;
		this->author = author;
		this->genre = genre;
		this->dateOfRelease = dateOfRelease;
		this->isInLibrary = isInLibrary;
	}

	friend ostream& operator<<(ostream& os, Book& book) {
		os << "ID: " << book.id << endl;
		os << "Book name: " << book.bookName << endl;
		os << "Book description: " << book.bookDescription << endl;
		os << "Author: " << book.author.GetName() << " " << book.author.GetSurname() << endl;
		os << "Genre: " << book.genre.GetName() << endl;
		os << "Date of release: " << book.dateOfRelease << endl;
		os << "Is in library: " << book.isInLibrary << endl;
		return os;
	}

	void SetId(int id) {
		this->id = id;
	}

	void SetBookName(string bookName) {
		this->bookName = bookName;
	}

	void SetBookDescription(string bookDescription) {
		this->bookDescription = bookDescription;
	}

	void SetAuthor(Author& author) {
		this->author = author;
	}

	void SetGenre(Genre& genre) {
		this->genre = genre;
	}

	void SetDateOfRelease(string dateOfRelease) {
		this->dateOfRelease = dateOfRelease;
	}

	bool SetIsInLibrary(bool isInLibrary) {
		this->isInLibrary = isInLibrary;
	}

	int GetId() {
		return this->id;
	}

	string GetBookName() {
		return this->bookName;
	}

	string GetBookDescription() {
		return this->bookDescription;
	}

	Author GetBookAuthor() {
		return this->author;
	}

	Genre GetBookGenre() {
		return this->genre;
	}

	string GetDateOfRelease() {
		return this->dateOfRelease;
	}

	bool GetIsInLibrary() {
		return this->isInLibrary;
	}
};