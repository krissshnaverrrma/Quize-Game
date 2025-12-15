#include "Question.h"
#include <cctype>
void Question::displayQuestion() const
{
    std::cout << "\n-------------------------------------------------\n";
    std::cout << "Question: " << text << "\n";
    std::cout << "A. " << optionA << "\n";
    std::cout << "B. " << optionB << "\n";
    std::cout << "C. " << optionC << "\n";
    std::cout << "D. " << optionD << "\n";
    std::cout << "-------------------------------------------------\n";
}
bool Question::checkAnswer(char userAnswer) const
{
    return std::toupper(userAnswer) == std::toupper(correctAnswer);
}