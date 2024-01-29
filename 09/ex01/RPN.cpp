#include "RPN.hpp"

bool isOperator(const std::string& token)
{
    return token == "+" || token == "-" || token == "*" || token == "/";
}

int evaluateRPN(const std::string& expression)
{
    std::stack<int> stack;
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token)
    {
        if (isOperator(token))
        {
            if (stack.size() < 2)
                throw std::runtime_error("Not enough operands for operator");

            int operand2 = stack.top();
            stack.pop();
            int operand1 = stack.top();
            stack.pop();

            if (token == "+")
                stack.push(operand1 + operand2);
            else if (token == "-")
                stack.push(operand1 - operand2);
            else if (token == "*")
                stack.push(operand1 * operand2);
            else if (token == "/")
            {
                if (operand2 == 0)
                    throw std::runtime_error("Division by zero");
                stack.push(operand1 / operand2);
            }
        }
        else if (token == "(")
        {
            std::string subexpression;
            while (iss >> token && token != ")")
                subexpression += token + " ";
            if (token != ")")
                throw std::runtime_error("Unbalanced parentheses");
            subexpression.erase(subexpression.size() - 1);
            stack.push(evaluateRPN(subexpression));
        }
        else
        {
            int value;
            std::istringstream tokenStream(token);
            if (tokenStream >> value)
                stack.push(value);
            else
                throw std::runtime_error("Invalid token");
        }
    }
    if (stack.size() != 1)
        throw std::runtime_error("Unbalanced operators");

    return stack.top();
}

