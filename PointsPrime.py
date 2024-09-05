# Author: Donald Jackson
# Course: CET 2152C - Advanced Microcontrollers  / Fall Semester / INDEPENDENT STUDY
# Date Authored: 08/22/2024
# File: PointsPrime.py
# Description: This file contains a program that calculates the total points for multiple courses based on user input. 
# It uses logic to determine the course points and outputs the final total after adjustments.



courses = int(input("Input the number of Classes:\n"))
BASE_POINTS = 150 # Number of Base Points.
total_course_points = [] # Initialize array to store the course points for each course.
                          # It will be dynamically sized to the number of
                          # courses, and contain either the given number 
                          # of course points or the modified one. 


for i in range(courses): # For loop so that multiple calculations may be made based on user input.
        """
        
        I chose to embed the iteration of the loop within the request for input so user
        may keep track of the course they are inputing information on. This
        is done by using the f-strings found in python's documentation.
        
        """
s
        min_enrolled = int(input("Input the Minimum number of Enrolled Students for Course :\n"))
        enrolled = int(input("Input the number of Enrolled Students for Course :\n"))
        course_points = float(input("Input the number of Course Points for Course :\n"))
        

        # Enrolled Condition given in the assignment. course_points is only
        # modified if this conditon is met. 

        if min_enrolled > enrolled:  
            course_points = course_points * 2
        
        # Append course_points to the array so that we may sum it later.
        total_course_points.append(course_points)

extra_points = float(input("Input the number of Extra Points:\n"))

#  Calculate the resulting number of points based on the given .
result = sum(total_course_points) + extra_points - BASE_POINTS
print("The resulting points are: ")
print(result)
