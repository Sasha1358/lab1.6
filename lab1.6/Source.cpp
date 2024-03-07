//source
#include "Student.h"
int main() {
    Student s;
    s.Read();

    int choice = 0;
    do {
        s.displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::string newName, newGender;
            int newAge;
            double newWeight;

            std::cout << "Enter new name: ";
            std::cin >> newName;
            std::cout << "Enter new age: ";
            std::cin >> newAge;
            std::cout << "Enter new gender: ";
            std::cin >> newGender;
            std::cout << "Enter new weight: ";
            std::cin >> newWeight;

            // Create a Man object and then use changePerson
            Student::Man newPerson(newName, newAge, newGender, newWeight);
            s.changePerson(newPerson);
            break;
        }
        case 2:
            s.increaseYearOfStudy();
            break;
        case 0:
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }

    } while (choice != 0);

    s.Display();

    return 0;
}