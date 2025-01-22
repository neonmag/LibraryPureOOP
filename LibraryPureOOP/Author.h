class Author : public IHuman, protected AbstractHuman{
	string pseudonym;
public:
	Author() {
		this->id = 0;
		this->age = 0;
		this->name = "Default";
		this->surname = "Default";
		this->fathername = "Default";
		this->pseudonym = "Default";
	}

	Author(int id, int age, string name, string surname, string fathername, string pseudonym) {
		this->id = id;
		this->age = age;
		this->name = name;
		this->surname = surname;
		this->fathername = fathername;
		this->pseudonym = pseudonym;
	}

	Author(const Author& author) {
		this->id = author.id;
		this->age = author.age;
		this->name = author.name;
		this->surname = author.surname;
		this->fathername = author.fathername;
		this->pseudonym = author.pseudonym;
	}

	friend ostream & operator<<(ostream & os, Author& author) {
		os << "ID: " << author.id << endl;
		os << "Name: " << author.name << endl;
		os << "Surname: " << author.surname << endl;
		os << "Fathername: " << author.fathername << endl;
		os << "Pseudonym: " << author.pseudonym << endl;
		os << "Age: " << author.age << endl;
		return os;
	}

	void SetAge(int age) override {
		this->age = age;
	}

	void SetId(int id) {
		this->id = id;
	}

	void SetName(string name) override {
		this->name = name;
	}

	void SetSurname(string surname) override {
		this->surname = surname;
	}

	void SetFathername(string fathername) override {
		this->fathername = fathername;
	}

	void SetPseudonym(string pseudonym) {
		this->pseudonym = pseudonym;
	}

	int GetId() {
		return this->id;
	}

	int GetAge() override {
		return this->age;
	}

	string GetName() override {
		return this->name;
	}

	string GetSurname() override {
		return this->surname;
	}

	string GetFathername() override {
		return this->fathername;
	}

	string GetPseudonym() {
		return this->pseudonym;
	}
};