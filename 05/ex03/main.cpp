#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat highGradeBureaucrat("High Grade", 1);
        std::cout << highGradeBureaucrat << std::endl;

        Bureaucrat lowGradeBureaucrat("Low Grade", 150);
        std::cout << lowGradeBureaucrat << std::endl;

        Form form("Form", 50, 25);
        std::cout << form << std::endl;

        highGradeBureaucrat.signForm(form);
        form.beSigned(highGradeBureaucrat);
        highGradeBureaucrat.signForm(form);

        lowGradeBureaucrat.signForm(form);
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

