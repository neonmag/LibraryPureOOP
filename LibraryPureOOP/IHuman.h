class IHuman {
public:
	virtual void SetAge(int age) = 0;
	virtual void SetName(string name) = 0;
	virtual void SetSurname(string surname) = 0;
	virtual void SetFathername(string fathername) = 0;
	virtual int GetAge() = 0;
	virtual string GetName() = 0;
	virtual string GetSurname() = 0;
	virtual string GetFathername() = 0;
};