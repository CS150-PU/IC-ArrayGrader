//******************************************************************************
// File name:   main.cpp
// Author:      
// Date:        
// Class:       
// Assignment:  In class arrays
// Purpose:     Allow the user the ability to enter homework scores from the 
//              keyboard. There can be at most 20 scores and you are to enter
//              the scores in an array scores. The program then calculates
//              and displays the average after dropping the lowest score.
//              Your program interaction is to be:
//
//              How many scores would you like: XX
//              Enter Score 1: XXX.XX         and so on
//
//              Lowest Score Is: XXX.XX
//              Average After Dropping Lowest Score Is: XXX.XX
//  
// Hours:       
//******************************************************************************

#include <iostream>

using namespace std;

void inputScores (double scores[], int numScores);
double getTotal (const double scores[], int numScores);
double getLowest (const double scores[], int numScores);

int main () {
  const int MAX_SCORES = 20;

  return EXIT_SUCCESS;
}