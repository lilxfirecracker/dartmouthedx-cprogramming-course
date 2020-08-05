// You are helping a teacher average grades. You get bored computing averages by hand, so you decide to write a computer program to do the work for you.
// Your program must first read an integer indicating the number of grades to be averaged. 
// Next, your program will read the grades one by one, all of which are integers as well. 
// Finally, your program will calculate and print the average of the grades to two decimal places.


#include <stdio.h>
int main(void)
{
    int numberOfScores;
    int score;
    int i;
    int total = 0;
    double doubleTotal;
    scanf("%d", &numberOfScores);
    for(i=0; i < numberOfScores; i++)
    {
        scanf("%d", &score);
        total = total + score;
    }
    doubleTotal = (double) total;
    printf("%.2lf", doubleTotal/numberOfScores);
    return 0;
}
