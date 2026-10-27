#include <iostream>
using namespace std;

int main(){
    // Part 1:
    // Player Statistics
    // int baseScore = 90;
    // int bonusPoints = 15;
    // int timeBonus = 10;

    // // Basic Calculations
    // int totalScore = baseScore + bonusPoints + timeBonus;
    // cout << "Total Score: " << totalScore << endl;

    // // Division and Modulus Examples
    // int averageScore = totalScore / 3.0; // Integer Division
    // int remainder = totalScore % 10; // Remainder when divided by 10
    // cout << "Average per section: " << averageScore << endl;
    // cout << "Score Remainder: " << remainder << endl;
    
    // Part 2:
    // Player Attributes
    // int playerLevel = 3;
    // int playerScore = 1550;
    // int minimumLevel = 5;
    // int minimumScore = 1000;
    // bool hasCompleteMap = false;

    // // Relational Comparisons
    // bool levelQualified = playerLevel >= minimumLevel;
    // bool scoreQualified = playerScore >= minimumScore;
    // cout << "Level Qualified: " << (levelQualified ? "Yes" : "No") << endl;
    // cout << "Score Qualified: " << (scoreQualified ? "Yes" : "No") << endl;

    // // Logical Combinations
    // bool basicAchievement = levelQualified && scoreQualified;
    // bool specialAchievement = basicAchievement && hasCompleteMap;
    // bool anyQualification = levelQualified || scoreQualified;
    // cout << "Basic Achievement: " << (basicAchievement ? "Earned" : "Not Earned") << endl;
    // cout << "Special Achievement: " << (specialAchievement ? "Earned" : "Not Earned") << endl;
    // cout << "Any Qualification: " << (anyQualification ? "Yes" : "No") << endl << endl;

    // // Check for Elite achievement
    // if (playerScore > 1500) {
    //     cout << "You have reached an Elite Achievement" << endl;
    // } else {
    //     cout << "You have not reached an Elite Achievement yet" << endl;
    // }

    // // Check for beginners
    // if (playerLevel != 5) {
    //     cout << "You are still a beginner" << endl;
    // } else {
    //     cout << "You are not a beginner" << endl;
    // }

    // Part 3:
    // Demonstrate precedence in arithmatic operations
    int baseDamage = 10;
    int weaponBonus = 5;
    int strengthMultiplier = 2;

    // Without Parentheses - multliplication happens first
    int damage1 = baseDamage + weaponBonus + strengthMultiplier;
    cout << "Damage without parentheses: " << damage1 << endl;
    // With Parentheses - addition happens first
    int damage2 = (baseDamage + weaponBonus) * strengthMultiplier;
    cout << "Damage with parentheses: " << damage2 << endl;
    //Complex expression with multiple operators
    int level = 5;
    int experience = 100;
    bool isAdvanced;

    //bool isAdvanced = level > 3 && experience >= 50 * 2;  // Alternate of isAdvanced calculations
    if ((level > 3) && (experience >= (50 * 2))){
        isAdvanced = true;
    } else {
        isAdvanced = false;
    }
    cout << "Advanced Player: " << (isAdvanced ? "Yes" : "No") << endl;

    // Return Statement
    return 0;
}