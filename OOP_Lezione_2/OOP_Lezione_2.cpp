#include<iostream>
#include<string>
#include<vector>
#include<iterator> 

class Person {
private:
	std::string _name;
	int _age;
public:
	Person(std::string name, int age) {             // конструктор
		_name = name; _age = age;
	}
	//~Person() {                //  Деструктор
	//	std::cout << _name << "deleted";
	//}
	void ShowAll() {
		std::cout << "Имя     : " << _name << '\n';
		std::cout << "Возраст : " << _age << '\n';
	}
	void SetName(std::string name) {
		_name = name;
	}
	void SetAge(int age) {
		_age = age;
	}
	std::string GetName() {
		return _name;
	}
	int GetAge() {
		return _age;
	}
};
class Pupil {
private:
	std::string _name;
	int _age;
	std::vector<int> _marks;
public:
	Pupil(std::string name, int age, std::vector<int> marks) {
		_name = name; _age = age; _marks = marks;
	}
	void ShowAll() {
		std::cout << "Имя    : " << _name << '\n';
		std::cout << "Возраст: " << _age << '\n';
		std::cout << "Оценки : ";
		for (std::vector<int>::iterator it = _marks.begin(); it != _marks.end(); it++)
			std::cout << *it << ' ';
		std::cout << '\n';
	}
	void SetName(std::string name) {
		_name = name;
	}
	void SetAge(int age) {
		_age = age;
	}
	void SetMarks(std::vector<int> marks) {
		_marks = marks;
	}
	std::string GetName() {
		return _name;
	}
	int GetAge() {
		return _age;
	}
	std::vector<int> GetMarks() {
		return _marks;
	}
};
class Professor {
private:
	std::string _name;
	std::string _degree;
public:
	Professor(std::string name, std::string degree) {
		_name = name; _degree = degree;
	}
	void ShowAll() {
		std::cout << "Имя     : " << _name << '\n';
		std::cout << "Степень : " << _degree << '\n';
	}
	void SetName(std::string name) {
		_name = name;
	}
	void SetAge(std::string degree) {
		_degree = degree;
	}
	std::string GetName() {
		return _name;
	}
	std::string GetDegree() {
		return _degree;
	}
};

class Client {
private:
	std::string _name;
	int _age;
	long double _bill;
public:
	Client(std::string name, int age, long double bill) {
		_name = name; _age = age; _bill = bill;
	}
	void ShowData() {
		std::cout << "Имя     : " << _name << '\n';
		std::cout << "Возраст : " << _age << '\n';
		std::cout << "Счёт    : " << _bill << '\n';
	}
};

class Bank {
private:
	std::vector<Client*>_clients;
public:
	void AddClient(Client* client) {
		_clients.push_back(client);
	}
	void ShowClients() {
		for (const auto& it : _clients)
			it->ShowData();
	}
	void ShowClient(int index) {
		if (index > _clients.size())
			return;
		_clients.at(index - 1)->ShowData();
	}

};

class MobilBook {
private:
	std::string _FIO;
	int _homeNumber;
	int _mobileNomber;
	std::string _additionalInformation;
public:
	MobilBook(std::string c, int x, int y, std::string g) {
		_FIO = new char[c.length()];

		for (int i = 0; i < c.length(); i++)
			_FIO[i] = c[i];
		_homeNumber = x;
		_mobileNomber = y;
		_additionalInformation = g;
	}
	//	~MobileBook() {
	//		delete()
	//	}
};
int main() {
	setlocale(LC_ALL, "Russian");
	/*Person person1("Andru", 22);
	Person person2("Oleg", 45);
	Pupil pupil1("Ars", 12, {5,4,3});
	Pupil pupil2("Anne", 21, {2,4,1});
	Professor professor1("Alex Gennad", "d.m.s");
	Professor professor2("Kira Petr", "k.m.s");
	person1.ShowAll();
	person2.ShowAll();
	std::cout << '\n';
	pupil1.ShowAll();
	pupil2.ShowAll();
	std::cout << '\n';
	professor1.ShowAll();
	professor2.ShowAll();*/

	Bank* bank = new Bank();
	Client* client1 = new Client("Bob", 20, 6462);
	Client* client2 = new Client("Alex", 25, 662);
	Client* client3 = new Client("Ann", 54, 6562);
	Client* client4 = new Client("Oleg", 54, 7462);
	Client* client5 = new Client("Boris", 29, 7462);

	bank->AddClient(client1);
	bank->AddClient(client2);
	bank->AddClient(client3);
	bank->AddClient(client4);
	bank->AddClient(client5);
	bank->ShowClients();
	bank->ShowClient(2);







	return 0;
}