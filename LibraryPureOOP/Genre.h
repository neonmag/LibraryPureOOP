class Genre : protected AbstractBase {
	string name;
	string description;
	int dateOfRelease;
public:
	Genre() {
		this->id = 0;
		this->name = "Default";
		this->description = "Default";
		this->dateOfRelease = 0;
	}

	Genre(int id, string name, string description, int dateOfRelease) {
		this->id = id;
		this->name = name;
		this->description = description;
		this->dateOfRelease = dateOfRelease;
	}

	Genre(const Genre& genre) {
		this->id = genre.id;
		this->name = genre.name;
		this->description = genre.description;
		this->dateOfRelease = genre.dateOfRelease;
	}

	friend ostream& operator<<(ostream& os, Genre& genre) {
		os << "ID: " << genre.id << endl;
		os << "Name: " << genre.name << endl;
		os << "Description: " << genre.description << endl;
		os << "Release date: " << genre.dateOfRelease << endl;
		return os;
	}

	void SetId(int id) {
		this->id = id;
	}

	void SetName(string name) {
		this->name = name;
	}

	void SetDescription(string description) {
		this->description = description;
	}

	void SetDateOfRelease(int dateOfRelease) {
		this->dateOfRelease = dateOfRelease;
	}

	int GetId() {
		return this->id;
	}

	string GetName() {
		return this->name;
	}

	string GetDescription() {
		return this->description;
	}

	int GetDateOfRelease() {
		return this->dateOfRelease;
	}
};
