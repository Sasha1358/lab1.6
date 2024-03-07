#pragma once
#include <iostream>

class Student {
public: // Make the Man class public
    class Man {
    private:
        std::string name;
        int age;
        std::string gender;
        double weight;

    public:
        Man();
        Man(const std::string& name, int age, const std::string& gender, double weight);
        std::string getName() const { return name; }
        int getAge() const { return age; }
        std::string getGender() const { return gender; }
        double getWeight() const { return weight; }

        void setName(const std::string& name);
        void setAge(int age);
        void setGender(const std::string& gender);
        void setWeight(double weight);

        void changeName(const std::string& newName);
        void changeAge(int newAge);
        void changeWeight(double newWeight);

        void Init(const std::string& name, int age, const std::string& gender, double weight);
        void Display() const;
        void Read();
    };

private:
    Man person;
    int yearOfStudy;

public:
    Student();
    void displayMenu();

    Man getPerson() const { return person; }
    int getYearOfStudy() const { return yearOfStudy; }

    void setPerson(const Man& person) { this->person = person; }
    void setYearOfStudy(int year) { this->yearOfStudy = year; }

    void changePerson(const Man& newPerson);
    void increaseYearOfStudy();

    void Init(const std::string& spec, const Man& man, int year);
    void Display() const;
    void Read();
};