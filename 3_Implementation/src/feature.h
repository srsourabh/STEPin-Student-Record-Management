


#ifndef FEATURE_H_
#define FEATURE_H_




void gotoxy(int ,int );

/**
 * @brief Menu List 
 * This function is for creating the menu list for user. User need to make a choice to access the content.
 * @param user need to make a choice 
 * @return Once you make your choice the function wil return the details 
 */

void MenuList();

/**
 * @brief Add new student record 
 * User can add new student record
 * @param You need to type the user name 
 * @return It will add that name to .txt file
 */
void AddStudent();

/**
 * @brief View student records
 * User can view all student records here
 * @param you need to make a choice
 * @return It will show you details of added students 
 */

void ViewStudent();

/**
 * @brief search a perticular student records
 * User can search a random student record by his/her name
 * @param you need to enter the student name
 * @return It will show you details of student
 */
void SearchStudent();

/**
 * @brief modify a perticular student records
 * User can modify a random student record by his/her name
 * @param you need to enter the student name
 * @return N/A
 */

void ModifyStudent();
/**
 * @brief Delete a perticular student records
 * User can Delete a random student record by his/her name
 * @param you need to enter the student name
 * @return It will delete the details of student
 */
void DeleteStudent();


/**
 * @brief struture for student
 * created a structure to create different type of characterstics of students
 */

struct student
{
    char name[20];
    char mobile[10];
    int rollno;
    char course[20];
    char branch[20];
};


#define MACRO -99
#endif