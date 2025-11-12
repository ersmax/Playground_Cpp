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

void computeQuizAverage(const int grade[][NUMBER_QUIZZES], std::size_t nStudents,
                        double quizAverage[], std::size_t nQuizzes);

void computeStudentAverage(const int grade[][NUMBER_QUIZZES], std::size_t nStudents,
                           double studentAverage[], std::size_t nStud);

int main( ) {
    int grades[NUMBER_STUDENTS][NUMBER_QUIZZES];
    double studentAverage[NUMBER_STUDENTS];
    double quizAverage[NUMBER_QUIZZES];

    fillArray(grades, std::size(grades));

    // TODO // computeQuizAverage(grades, std::size(grades), quizAverage, std::size(quizAverage));
    // TODO // computeStudentAverage(grades, std::size(grades), studentAverage, std::size(studentAverage));

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
              << std::setw(10)  << "Average"
              << std::setw(15) << "Quizzes\n";

    for (size_t idxStudent = 1; idxStudent <= nStudents; ++idxStudent) {
        std::cout << std::setw(10) << idxStudent
                  << std::setw(10)  << "average";

        for (int idxQuiz = 1; idxQuiz <= NUMBER_QUIZZES; ++idxQuiz)
            std::cout << std::setw(5) << grade[idxStudent - 1][idxQuiz - 1];

        std::cout << "\n";
    }

    std::cout << std::setw(20) << "Quiz average = ";
    for (int idxQuiz = 1; idxQuiz <= NUMBER_QUIZZES; ++idxQuiz)
        std::cout << std::setw(5) << "n.d.";
    std::cout << "\n";
}

void computeQuizAverage(const int grade[][NUMBER_QUIZZES], std::size_t nStudents,
                        double quizAverage[], std::size_t nQuizzes) {
    // TODO
}

void computeStudentAverage(const int grade[][NUMBER_QUIZZES], std::size_t nStudents,
                           double studentAverage[], std::size_t nStud) {
    // TODO
}



