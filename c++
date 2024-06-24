#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

class Student {
private:
    char identifier; // Private member variable, search identifier

public:
    Student(char id) : identifier(id) {} // Constructor

    // Private method: Fill array of student grades randomly
    void fillRandomGrades(int grades[], int numGrades) {
        srand(time(NULL)); // Initialize random seed
        for (int i = 0; i < numGrades; ++i) {
            grades[i] = rand() % 101; // Generate random grades between 0 to 100
        }
    }

    // Private method: Search for given identifier in student grades
    void searchInGrades(const int grades[], int numGrades) {
        bool found = false;
        for (int i = 0; i < numGrades; ++i) {
            if (grades[i] == identifier) {
                std::cout << "Index found: " << i << std::endl;
                found = true;
                break;
            }
        }
        if (!found) {
            std::cout << "Required notification" << std::endl;
        }
    }

    // Main function: Print maximum evaluation for each student
    void printMaxGrade(const int grades[], int numGrades) {
        int maxGrade = *std::max_element(grades, grades + numGrades);
        std::cout << "Maximum evaluation: " << maxGrade << std::endl;
    }

    // Calculate and print average arithmetic from remaining evaluations
    void printAverageGrade(const int grades[], int numGrades) {
        int sum = 0;
        for (int i = 0; i < numGrades; ++i) {
            sum += grades[i];
        }
        float average = static_cast<float>(sum) / numGrades;
        std::cout << "Average of remaining evaluations: " << average << std::endl;
    }
};

int main() {
    const int numStudents = 5; // Number of students
    const int numGrades = 10; // Number of evaluations per student

    int studentGrades[numStudents][numGrades];

    // Fill student grades randomly
    for (int i = 0; i < numStudents; ++i) {
        Student student('A' + i); // Create student object with identifier 'A' to 'E'
        student.fillRandomGrades(studentGrades[i], numGrades);
    }

    // Sort grades in ascending order for each student
    for (int i = 0; i < numStudents; ++i) {
        std::sort(studentGrades[i], studentGrades[i] + numGrades);
    }

    // Print results
    for (int i = 0; i < numStudents; ++i) {
        Student student('A' + i); // Create student object with identifier 'A' to 'E'

        std::cout << "Results for student " << char('A' + i) << ":" << std::endl;

        // Print maximum grade
        student.printMaxGrade(studentGrades[i], numGrades);

        // Accumulate and print average arithmetic of remaining grades
        student.printAverageGrade(studentGrades[i], numGrades);
    }
    
    return 0;
}

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <algorithm>

void fillArray(int arr[], int size) {
    srand(time(NULL)); // Initialize random seed
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100; // Fill array with random numbers from 0 to 99
    }
}

void sortArray(int arr[], int size) {
    std::sort(arr, arr + size); // Sort array in ascending order
}

int main() {
    const int size = 10;
    int numbers[size];

    fillArray(numbers, size); // Fill array with random numbers
    sortArray(numbers, size); // Sort array

    // Print sorted array
    std::cout << "Sorted array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Simple switch statement
    int choice;
    std::cout << "Enter choice (1, 2, 3 or 0): ";
    std::cin >> choice;

    switch(choice) {
        case 1:
            std::cout << "Case 1 chosen" << std::endl;
            break;
        case 2:
            std::cout << "Case 2 chosen" << std::endl;
            break;
        case 3:
            std::cout << "Case 3 chosen" << std::endl;
            break;
        case 0:
            std::cout << "Case 0 chosen" << std::endl;
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
    }

    // Initialize two strings
    char str1[] = "Hello";
    char str2[] = "World";

    // Compare strings and print result
    if (strcmp(str1, str2) == 0) {
        std::cout << "Strings are equal" << std::endl;
    } else {
        std::cout << "Strings are not equal" << std::endl;
    }

    // Manipulate strings
    strncat(str1, str2 + strlen(str2) - 5, 5); // Append last 5 characters of str2 to str1
    std::cout << "Modified str1: " << str1 << std::endl;

    // Print numeric value of first character of str1
    std::cout << "Numeric value of first character of str1: " << static_cast<int>(str1[0]) << std::endl;

    // Convert str2 to uppercase
    for (int i = 0; str2[i] != '\0'; ++i) {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            str2[i] = str2[i] - 'a' + 'A';
        }
    }
    std::cout << "Uppercase str2: " << str2 << std::endl;

    return 0;
}    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
     
