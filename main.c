#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10
#define MAX_DISTANCE 100

//Emirhan Dizdaroğlu SE-1105 HOMEWORK-2

void printInfo(int current, int previous, int distance) {
    //I am printing all values we needed.
    printf("C: %d P: %d Distance: %d\n", current, previous, distance);
}

int main() {
    srand(time(NULL));

    int houses[ARRAY_SIZE] = {1, 2, 4, 5, 7, 3, 1, 2, 6, 0}; // Example street information
    int visitedCount[ARRAY_SIZE] = {0};
    // int current=1; rand() % ARRAY_SIZE; // Starting from a random index
    int current = 1; //starting index to be 1
    int previous = -1; // I will print -1 with printInfo function for previous index
    int totalDistance = 0; // At begin the total distance is 0

    // Generate random street information // If we do random array we could do like that.
    //for (int i = 0; i < ARRAY_SIZE; ++i) {
    //    houses[i] = rand() % ARRAY_SIZE;
    //}

    while (visitedCount[current] < 3) {//The traversal continues until any one of the houses is visited 3 times
        printInfo(current, previous, totalDistance);// printing all values
        visitedCount[current]++;

        previous = current;
        current = houses[current];

        totalDistance = totalDistance + abs(previous - current); //I am updating total distance
    }

    return 0;
}
