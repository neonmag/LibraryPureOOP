class Visitor : public IHuman, protected AbstractHuman {
public:
	Visitor(int id, int age, string name, string surname, string fathername) {
		this->id = id;
		this->age = age;
		this->name = name;
		this->surname = surname;
		this->fathername = fathername;
	}

	friend ostream& operator<<(ostream& os, Visitor& visitor) {
		os << "ID: " << visitor.id << endl;
		os << "Name: " << visitor.name << endl;
		os << "Surname: " << visitor.surname << endl;
		os << "Fathername: " << visitor.fathername << endl;
		os << "Age: " << visitor.age << endl;
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
};