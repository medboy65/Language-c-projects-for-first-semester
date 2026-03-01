#include <stdio.h>
#include <string.h>
                                                                                                            //@Mohammed Lamkhayar 24070260026//
#define MAX_NAME_LENGTH 50
#define MAX_ID_LENGTH 50

int main() {
    int N;
                                                                                //@Mohammed Lamkhayar 24070260026//                                                                //@Mohammed Lamkhayar 24070260026//
    // Prompt the user to enter the number of students
    printf("Enter the number of students: ");
    scanf("%d", &N);

    // Arrays to store student data
    char id[MAX_ID_LENGTH], name[MAX_NAME_LENGTH];
    int grades[3];
    int total_score = 0, highest_score = -1;                                //@Mohammed Lamkhayar 24070260026//

    int total_grades[3] = {0, 0, 0};  // To store total grades for each subject

    // Variables to store the student with the highest total score
    char highest_id[MAX_ID_LENGTH], highest_name[MAX_NAME_LENGTH];
    int highest_grades[3];

    // Iterate through each student                                                                                            //@Mohammed Lamkhayar 24070260026//
    for (int i = 0; i < N; i++) {
        // Prompt the user to enter student data
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter the student ID : ");
        scanf("%s", id);  // Read student ID                                //@Mohammed Lamkhayar 24070260026//

        printf("Enter the student name: ");
        scanf("%s", name);  // Read student name

        printf("Enter the grades for 3 subjects: ");
        scanf("%d %d %d", &grades[0], &grades[1], &grades[2]);  // Read 3 grades

        // Calculate total score for the current student
        total_score = grades[0] + grades[1] + grades[2];
                                                                                                                    //@Mohammed Lamkhayar 24070260026//
        // Update total grades for each subject
        total_grades[0] += grades[0];
        total_grades[1] += grades[1];
        total_grades[2] += grades[2];

        // Track the student with the highest total score
        if (total_score > highest_score) {                                                                    //@Mohammed Lamkhayar 24070260026//                                            //@Mohammed Lamkhayar 24070260026//
            highest_score = total_score;
            strcpy(highest_id, id);  // Store ID of the student with highest score
            strcpy(highest_name, name);  // Store name of the student with highest score
            highest_grades[0] = grades[0];  // Store grades of the student with highest score
            highest_grades[1] = grades[1];
            highest_grades[2] = grades[2];                                                                                                        //@Mohammed Lamkhayar 24070260026//
        }
    }

    // Calculate and print average scores for each subject
    printf(" %d %d %d", total_grades[0] / N,total_grades[1] / N,total_grades[2] / N);
    // Print the data of the student with the highest total score
    printf(" %s %s ", highest_id, highest_name);
    printf(" %d %d %d\n", highest_grades[0], highest_grades[1], highest_grades[2]);

    return 0;                                                                                            //@Mohammed Lamkhayar 24070260026//
}

