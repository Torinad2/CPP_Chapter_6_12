/*************************************************************
 * Star Search Contestant Score Calculator                   *
 *                                                           *
 * This program calculates the final score for a contestant  *
 * based on scores from five judges.                         *
 *                                                           *
 * The calculation follows these steps:                      *
 * 1. Prompt the user to input a judge's score.              *
 * 2. Validate the score (0.0 - 10.0).                       *
 * 3. Drop the highest and lowest scores.                    *
 * 4. Average the remaining three scores.                    *
 * 5. Display the final average and the scores dropped.      *
 *                                                           *
 * Developed by: Nikita Baiborodov                           *
 *************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

/*************************************************************
 * Function Prototypes                                       *
 *************************************************************/
void getJudgeData(double& score);                          // Input and validate a judge's score
void calcScore(double, double, double, double, double);    // Calculate and display final score
double findLowest(double, double, double, double, double); // Find and return lowest score
double findHighest(double, double, double, double, double);// Find and return highest score

/*************************************************************
 * Main Function                                             *
 * Handles input and initiates the scoring process.          *
 *************************************************************/
int main() {

    /*************************************************************
     * Variable Declarations                                     *
     *************************************************************/
    double score1, score2, score3, score4, score5;

    /*************************************************************
     * Get Scores from Judges                                    *
     * Prompts the user and validates the scores.                *
     *************************************************************/
    getJudgeData(score1);
    getJudgeData(score2);
    getJudgeData(score3);
    getJudgeData(score4);
    getJudgeData(score5);

    /*************************************************************
     * Calculate and Display Final Score                         *
     *************************************************************/
    calcScore(score1, score2, score3, score4, score5);

    /*************************************************************
     * Developer Signature                                       *
     *************************************************************/
    cout << "\nDeveloped by: Nikita Baiborodov\n";

    return 0;
}

/*************************************************************
 * getJudgeData                                              *
 * This function prompts the user to input a judge's score.  *
 * It validates the score, ensuring it is between 0.0 and 10.0 *
 *************************************************************/
void getJudgeData(double& score) {
    cout << "Enter a judge's score (0.0 - 10.0): ";
    cin >> score;

    while (score < 0.0 || score > 10.0) {
        cout << "Score must be between 0.0 and 10.0. Please enter again: ";
        cin >> score;
    }
}

/*************************************************************
 * calcScore                                                 *
 * This function calculates the performer's final score.     *
 * It drops the highest and lowest scores and averages the   *
 * remaining three.                                          *
 *************************************************************/
void calcScore(double s1, double s2, double s3, double s4, double s5) {

    // Identify Scores to Drop
    double lowest = findLowest(s1, s2, s3, s4, s5);
    double highest = findHighest(s1, s2, s3, s4, s5);

    // Calculate Remaining Total and Average
    double total = s1 + s2 + s3 + s4 + s5 - lowest - highest;
    double average = total / 3.0;

    // Display Final Results
    cout << fixed << setprecision(2);
    cout << "\nFinal Results\n";
    cout << "-------------------------\n";
    cout << "Highest Score Dropped: " << highest << endl;
    cout << "Lowest Score Dropped : " << lowest << endl;
    cout << "Final Average        : " << average << endl;
}

/*************************************************************
 * findLowest                                                *
 * This function finds and returns the lowest of five scores.*
 *************************************************************/
double findLowest(double s1, double s2, double s3, double s4, double s5) {
    double lowest = s1;
    if (s2 < lowest) lowest = s2;
    if (s3 < lowest) lowest = s3;
    if (s4 < lowest) lowest = s4;
    if (s5 < lowest) lowest = s5;

    return lowest;
}

/*************************************************************
 * findHighest                                               *
 * This function finds and returns the highest of five scores.*
 *************************************************************/
double findHighest(double s1, double s2, double s3, double s4, double s5) {
    double highest = s1;
    if (s2 > highest) highest = s2;
    if (s3 > highest) highest = s3;
    if (s4 > highest) highest = s4;
    if (s5 > highest) highest = s5;

    return highest;
}
