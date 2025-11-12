// Reads quiz scores for each student into two-dimensional array grade
// Compute the average score for each input and the average score for each quiz.
// Display then the quiz scores and the averages.

#include <iostream>
#include <limits>
#include <iomanip>
#include <sstream>

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

void fillArray(int grade[][NUMBER_QUIZZES], const std::size_t nStudents) {
    std::string line;
    for (std::size_t student = 1; student <= nStudents; ++student) {
        std::cout << "Enter result (0-10) for " << NUMBER_QUIZZES
                  << " quizzes for student " << (student) << ":";
        for (int quiz = 1; quiz <= NUMBER_QUIZZES; ++quiz) {
            int result;
            while (true) {

                if (!(std::cin >> result)) {
                    std::cout << "Invalid value for quiz " << quiz
                              << ". Retry.\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    continue;
                }

                if (result >= 0 && result <= 10) {
                    grade[student - 1][quiz - 1] = result;
                    std::cout << "Quiz " << quiz << " score: " << result << "\n";
                    break;
                }
                std::cout << "Grade must be between 0-10 for quiz " << quiz
                          << " . Retry.\n";
            }
        }
    }
}

void display(const int grade[][NUMBER_QUIZZES], std::size_t nStudents) {
    std::cout << std::fixed << std::showpoint << std::setprecision(1);
    std::cout << std::setw(10) << "Student"
              << std::setw(7)  << "Average"
              << std::setw(15) << "Quizzes\n";

    for (size_t idxStudent = 1; idxStudent <= nStudents; ++idxStudent) {
        std::cout << std::setw(10) << idxStudent
                  << std::setw(7)  << "average";

        for (int idxQuiz = 1; idxQuiz <= NUMBER_QUIZZES; ++idxQuiz)
            std::cout << std::setw(5) << grade[idxStudent - 1][idxQuiz - 1];

        std::cout << "\n";
    }

    std::cout << "Quiz average = ";
    for (int idxQuiz = 1; idxQuiz <= NUMBER_QUIZZES; ++idxQuiz)
        std::cout << std::setw(5) << "n.d.";
    std::cout << "\n";
}

