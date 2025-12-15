#ifndef QUIZMANAGER_H 
#define QUIZMANAGER_H 
#include <vector>
#include <string>
#include "Question.h"
std::vector<Question> loadQuestions(const std::string& filename);
#endif 