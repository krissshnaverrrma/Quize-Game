#include "QuizManager.h"
#include <fstream>
#include <iostream>
#include <cctype>
std::vector<Question> loadQuestions(const std::string &filename)
{
    std::vector<Question> quiz;
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Error: Could not open Question File: " << filename << std::endl;
        return quiz;
    }
    std::string text, a, b, c, d, correctLine;
    while (
        std::getline(file, text) &&
        std::getline(file, a) &&
        std::getline(file, b) &&
        std::getline(file, c) &&
        std::getline(file, d) &&
        std::getline(file, correctLine))
    {
        if (correctLine.empty())
            continue;
        char correct = std::toupper(correctLine[0]);
        quiz.emplace_back(text, a, b, c, d, correct);
    }
    file.close();
    return quiz;
}