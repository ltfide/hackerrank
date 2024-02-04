#include <stdio.h>
#include <stdlib.h>

#define BOY 'b'
#define GIRL 'g'

int marks_summation(int* marks, int number_of_students, char gender)
{
    int sum = 0;
    if (gender == BOY) {
        for (int i = 0; i < number_of_students; i+=2)
            sum += marks[i];
    } else {
        for (int i = 1; i < number_of_students; i+=2)
            sum += marks[i];
    }
    return sum;
}

/**
 * Students Marks Sum
 * Diflty : Easy
 * URL    : https://www.hackerrank.com/challenges/students-marks-sum
 * Date   : 04-02-2024
 * Author : Lutfi
*/
int main() 
{   
    int number_of_students = 3, sum;
    char gender = 'b';

    int *marks = (int *) malloc(number_of_students * sizeof(int));
    marks[0] = 3;
    marks[1] = 2;
    marks[2] = 5;

    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}