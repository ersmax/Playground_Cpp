// Reads quiz scores for each student into two-dimensional array grade
// Compute the average score for each input and the average score for each quiz.
// Display then the quiz scores and the averages.

#include <iostream>
#include <limits>

constexpr int NUMBER_STUDENTS = 4;
constexpr int NUMBER_QUIZZES = 3;

void fillArray(int grade[][NUMBER_QUIZZES], std::size_t nStudents);

void display(const int grade[][NUMBER_QUIZZES], std::size_t nStudents);

int main( ) {
    int grades[NUMBER_STUDENTS][NUMBER_QUIZZES];
    double studentAverage[NUMBER_STUDENTS];
    double quizAverage[NUMBER_QUIZZES];

    fillArray(grades, std::size(grades));
    display(grades, std::size(grades));

    std::cout << "\n";
    return 0;
}

void fillArray(int grade[][NUMBER_QUIZZES], std::size_t nStudents) {
    std::size_t idxStudent = 1;
    int result;
    while (idxStudent <= nStudents) {

        int idxQuiz = 1;
        while (idxQuiz <= NUMBER_QUIZZES) {
            std::cout << "Enter result (0-10) quiz " << idxQuiz
                      << " for student " << idxStudent << ":";
            if (!(std::cin >> result)) {
                std::cout << "Wrong quiz results.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }
            if ((result >= 0) && (result <= 10))
                grade[idxStudent - 1][idxQuiz++ - 1] = result;
            else
                std::cout << "Grade must be between 0-10. Try again.\n\n";
        }
        ++idxStudent;
    }
}

void display(const int grade[][NUMBER_QUIZZES], std::size_t nStudents) {
    
}

