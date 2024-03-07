// Student.cpp
#include "Student.h"

// Student::Man methods
Student::Man::Man() {}

Student::Man::Man(const std::string& name, int age, const std::string& gender, double weight) {
    Init(name, age, gender, weight);
}

void Student::Man::Display() const {
    std::cout << std::endl;
    std::cout << "name = " << getName() << std::endl;
    std::cout << "age = " << getAge() << std::endl;
    std::cout << "gender = " << getGender() << std::endl;
    std::cout << "weight = " << getWeight() << std::endl;
}

void Student::Man::Read() {
    std::string name, gender;
    int age;
    double weight;

    std::cout << std::endl;
    std::cout << "name =  "; std::cin >> name;
    std::cout << "age =  "; std::cin >> age;
    std::cout << "gender =  "; std::cin >> gender;
    std::cout << "weight =  "; std::cin >> weight;

    Init(name, age, gender, weight);
}

void Student::Man::setName(const std::string& name) {
    this->name = name;
}

void Student::Man::setAge(int age) {
    this->age = age;
}

void Student::Man::setGender(const std::string& gender) {
    this->gender = gender;
}

void Student::Man::setWeight(double weight) {
    this->weight = weight;
}

void Student::Man::changeName(const std::string& newName) {
    setName(newName);
}

void Student::Man::changeAge(int newAge) {
    setAge(newAge);
}

void Student::Man::changeWeight(double newWeight) {
    setWeight(newWeight);
}

void Student::Man::Init(const std::string& name, int age, const std::string& gender, double weight) {
    setName(name);
    setAge(age);
    setGender(gender);
    setWeight(weight);
}

// Student methods
Student::Student() : yearOfStudy(0) {}

void Student::displayMenu() {
    std::cout << "Menu:" << std::endl;
    std::cout << "1. Change Person Information" << std::endl;
    std::cout << "2. Increase Year of Study" << std::endl;
    std::cout << "0. Exit" << std::endl;
}

void Student::changePerson(const Man& newPerson) {
    setPerson(newPerson);
}

void Student::increaseYearOfStudy() {
    yearOfStudy++;
}

void Student::Init(const std::string& spec, const Man& man, int year) {
    setPerson(man);
    setYearOfStudy(year);
}

void Student::Display() const {
    std::cout << std::endl;
    std::cout << "man = " << std::endl;
    getPerson().Display();
    std::cout << "yearOfStudy = " << getYearOfStudy() << std::endl;
}

void Student::Read() {
    std::string spec;
    Man m;
    int year;

    std::cout << std::endl;
    std::cout << "Man =  " << std::endl;
    m.Read();
    std::cout << "spec =  "; std::cin >> spec;
    std::cout << "yearOfStudy =  "; std::cin >> year;

    Init(spec, m, year);
}
