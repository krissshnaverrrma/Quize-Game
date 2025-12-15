#include <iostream>
#include <vector>
#include "Question.h"
#include "QuizManager.h"
int main()
{
    std::cout << "--- Welcome to the Modular C++ Console Quiz Game! ---\n";
    std::vector<Question> quiz = loadQuestions("data/questions.txt");
    if (quiz.empty())
    {
        std::cerr << "Quiz failed to load or contains no questions. Exiting.\n";
        return 1;
    }
    int score = 0;
    std::cout << "Quiz loaded with " << quiz.size() << " questions. Let's begin!\n";
    for (size_t i = 0; i < quiz.size(); ++i)
    {
        std::cout << "\nQuestion " << i + 1 << " of " << quiz.size() << ":\n";
        quiz[i].displayQuestion();
        char userAnswer;
        std::cout << "Enter your choice (A, B, C, or D): ";
        while (!(std::cin >> userAnswer) || (std::toupper(userAnswer) != 'A' && std::toupper(userAnswer) != 'B' && std::toupper(userAnswer) != 'C' && std::toupper(userAnswer) != 'D'))
        {
            std::cout << "Invalid input. Please enter A, B, C, or D: ";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        if (quiz[i].checkAnswer(userAnswer))
        {
            std::cout << "--> CORRECT! <--" << std::endl;
            score++;
        }
        else
        {
            std::cout << "--> INCORRECT. The correct answer was " << quiz[i].correctAnswer << ". <--" << std::endl;
        }
    }
    std::cout << "\n=================================================\n";
    std::cout << "               QUIZ COMPLETE!\n";
    std::cout << "Your Final Score: " << score << " out of " << quiz.size() << std::endl;
    std::cout << "=================================================\n";
    return 0;
}