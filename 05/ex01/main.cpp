#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat highGradeBureaucrat("High Grade", 1);
        std::cout << highGradeBureaucrat << std::endl;

        Bureaucrat lowGradeBureaucrat("Low Grade", 150);
        std::cout << lowGradeBureaucrat << std::endl;

        Form form("Form1", 50, 25);
        //Form form2 ("FormBad", -3, 10);
        //Form form3 ("FormBad2", 10, 151);
        std::cout << form << std::endl;

        //form.beSigned(lowGradeBureaucrat);
        lowGradeBureaucrat.signForm(form);

        highGradeBureaucrat.signForm(form);
        form.beSigned(highGradeBureaucrat);

    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

