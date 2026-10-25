#include <iostream>

// Constants for game configuration
const int MAX_PLAYER_LEVEL = 100;
const double EXPERIENCE_MULTIPLIER = 1.5;
const char GOLD_TIER_RATING = 'A';

int main(){
    // Declare and initialize variables for player data
    int playerLevel = 5;
    double experiencePoints = 1250.74;
    char difficultyRating = 'B';
    bool hasCompletedTutorial = true;

    // Display the player information
    std::cout << "Player Profile:" << std::endl;
    std::cout << "Level: " << playerLevel << std::endl;
    std::cout << "Experience Points: " << experiencePoints << std::endl;
    std::cout << "Difficulty Rating: " << difficultyRating << std::endl;
    std::cout << "Completed Tutorial: " << hasCompletedTutorial << std::endl;

    // Using auto for type deduction
    auto currentScore = 98500;
    auto averagePlayTime = 45.5;
    auto playerInitial = 'M';
    auto isOnline = false;

    // Display constants
    std::cout << "Game Configuration:" << std::endl;
    std::cout << "Max Level:" << MAX_PLAYER_LEVEL << std::endl;
    std::cout << "Experience Multiplier: " << EXPERIENCE_MULTIPLIER << std::endl;

    // Display auto variables
    std::cout << "\nPlayer Data (using auto):" << std::endl;
    std::cout << "Score: " << currentScore << std::endl;
    std::cout << "Average Play Time: " << averagePlayTime << " hours" <<std::endl;
    std::cout << "Initial: " << playerInitial << std::endl;
    std::cout << "Online Status: " << isOnline << std::endl;

    // Return Statement
    return 0;
}