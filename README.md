# DA322blc1234
A student details management system which incorporates the use of polymorphism to better understand the concept.

# DA3 Assignment Documentation
Program Name:  Student Details Management using Polymorphism
Student Name: Andrew Joy Hembrom
Reg No: 22BLC1234

## Description:
This program allows the user to store and display details of undergraduate and graduate students using polymorphism. It demonstrates the concept of runtime polymorphism by utilizing virtual functions in the base and derived classes.

## Classes:
1. Student:
   - This is the base class that represents a student.
   - It contains the attributes name and age, along with virtual functions for inputting and displaying student details.
   - The virtual functions are overridden in the derived classes.

2. Undergraduate:
   - This derived class extends the Student class and represents an undergraduate student.
   - It adds an additional attribute, course, and overrides the inputDetails() and displayDetails() functions to incorporate the course field.

3. Graduate:
   - This derived class extends the Student class and represents a graduate student.
   - It adds an additional attribute, researchTopic, and overrides the inputDetails() and displayDetails() functions to incorporate the research topic field.

## Main Function:
The main function acts as the entry point for the program. It performs the following steps:

1. Declares an integer totalStudents to define the total number of students to be stored.

2. Creates an array of Student pointers, named students, with a size of totalStudents. These pointers will be used to store objects of the base or derived classes.

3. Prompts the user to enter the details of each student, including the student type (undergraduate or graduate), and calls the appropriate constructor based on the input.

4. Uses polymorphism to input and display the details of each student using the base class pointers. This demonstrates the runtime polymorphism concept, where the appropriate derived class functions are called dynamically.

5. Cleans up the dynamically allocated memory for each student object.

## Usage:
1. The program prompts the user to enter the details of undergraduate and graduate students.
2. For each student, the user provides the student type (U for undergraduate, G for graduate), followed by the specific details for that student type.
3. The program then displays the entered student details, including the base class details and additional fields specific to the derived class.








