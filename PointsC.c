/*
Author: Donald Jackson
Course: CET 2152C - Advanced Microcontrollers  / Fall Semester / INDEPENDENT STUDY
Date Authored: 08/22/2024
File: points.c
Description: This file contains a program that calculates the total points for multiple courses based on user input. 
             It uses logic to determine the course points and outputs the final total after adjustments.
*/
#include <stdlib.h>
#include <math.h>

#define BASE_POINTS 150 // Number of Base Points.


void main(){

    int courses, min_enrolled, enrolled, sum;
    float course_points, result, extra_points; 

    printf("Input the number of courses:\n");
    scanf("%d", &courses);

    float total_course_points[courses]; /* 
                                        Initialize array to store the course points for each course.
                                        It will be sized to the number of
                                        courses, and contain either the given number 
                                        of course points or the modified one.
                                        */


    for (int i = 0; i < courses; i++){ 
        // For loop so that multiple calculations may be made based on user input.
        printf("Input the Minimum Number fo Enrolled Students for course %d:\n", (i+1));
        scanf("%d", &min_enrolled);
            
            
        printf("Input the number of Enrolled Students for Course %d:\n", (i+1));
        scanf("%d", &enrolled);

        printf("Input the number of Course Points for Course %d:\n",(i+1));
        scanf("%f", &course_points);

        // Enrolled Condition given in the assignment. course_points is only
        // modified if this conditon is met. 

        if (min_enrolled > enrolled){ 
            course_points = course_points * 2;}

        // Append course_points to the array so that we may sum it later.
        total_course_points[i] = course_points; 
    }

    sum = 0;
    for (int j = 0; j < courses; j++){
        sum += total_course_points[j];
    }

    printf("Input the number of Extra Points:\n");
    scanf("%.3f", &extra_points); 


    //  Calculate the resulting number of points based on the given .
    result = (sum + extra_points - BASE_POINTS);
    printf("The resulting points are: %.3f points\n", result);

}