# CPP_Chapter_6_12

Star Search

A particular talent competition has five judges, each of whom awards a score between

0 and 10 to each performer. Fractional scores, such as 8.3, are allowed. A performer’s

final score is determined by dropping the highest and lowest score received, then aver-

aging the three remaining scores. Write a program that uses this method to calculate a

contestant’s score. It should include the following functions:

• void getJudgeData() should ask the user for a judge’s score, store it in a reference

parameter variable, and validate it. This function should be called by main once for

each of the five judges.

• void calcScore() should calculate and display the average of the three scores

that remain after dropping the highest and lowest scores the performer received.

This function should be called just once by main and should be passed the five

scores.

The last two functions, described below, should be called by calcScore, which uses

the returned information to determine which of the scores to drop.

• int findLowest() should find and return the lowest of the five scores passed to it.

• int findHighest() should find and return the highest of the five scores passed to it.

Input Validation: Do not accept judge scores lower than 0 or higher than 10.
