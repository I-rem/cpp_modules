#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat Bureaucrat1("Bureaucrat_1", 1);
        std::cout << Bureaucrat1 << std::endl;

        Bureaucrat Bureaucrat2("Bureaucrat_2", 150);
        std::cout << Bureaucrat2 << std::endl;

        Bureaucrat Bureaucrat3("Bureaucrat_3", 75);
        std::cout << Bureaucrat3 << std::endl;

         //Bureaucrat1.incrementGrade();
         //Bureaucrat2.decrementGrade();

         Bureaucrat Bureaucrat4("Bureaucrat_4", 200);
         //Bureaucrat Bureaucrat4("Bureaucrat_4", 0);
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

