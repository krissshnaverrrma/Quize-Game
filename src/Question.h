#ifndef QUESTION_H
#define QUESTION_H
#include <string>
#include <iostream>
class Question
{
public:
    std::string text;
    std::string optionA, optionB, optionC, optionD;
    char correctAnswer;
    Question(std::string t, std::string a, std::string b, std::string c, std::string d, char correct)
        : text(std::move(t)), optionA(std::move(a)), optionB(std::move(b)), optionC(std::move(c)), optionD(std::move(d)), correctAnswer(correct) {}
    void displayQuestion() const;
    bool checkAnswer(char userAnswer) const;
};
#endif