// ========================================MY Code========================================
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <windows.h>
using namespace std;

enum StonepaperScissors
{
    Stone = 1,
    Paper = 2,
    Scissors = 3
};

int readRoundNumber()
{
    int rounds;
    cout << "Please enter the number of rounds you want to play: ";
    cin >> rounds;
    return rounds;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int WhoIsWinner(int userChoiceInt, StonepaperScissors computerChoice)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // for setting color

    if (userChoiceInt == computerChoice)
    {
        SetConsoleTextAttribute(hConsole, 7); // White for draw
        cout << "It's a tie!" << endl;
        return 0; // draw
    }
    else if ((userChoiceInt == Stone && computerChoice == Scissors) ||
             (userChoiceInt == Paper && computerChoice == Stone) ||
             (userChoiceInt == Scissors && computerChoice == Paper))
    {
        SetConsoleTextAttribute(hConsole, 10); // Light Green for Player win
        cout << "Round winner:   Player" << endl;
        return 1; // player
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 12); // Light Red for Computer win
        cout << "Round winner:   Computer" << endl;
        return 2; // computer
    }

    SetConsoleTextAttribute(hConsole, 7); // Reset to white after result (optional)
}


StonepaperScissors getUserChoice(int choice)
{
    switch (choice)
    {
    case 1:
        return Stone;
    case 2:
        return Paper;
    case 3:
        return Scissors;
    }
    return Stone;
}

StonepaperScissors getComputerChoice()
{
    int choice = RandomNumber(1, 3);
    switch (choice)
    {
    case 1:
        return Stone;
    case 2:
        return Paper;
    case 3:
        return Scissors;
    }
    return Stone;
}

string choiceToString(StonepaperScissors choice)
{
    switch (choice)
    {
    case Stone:
        return "Stone";
    case Paper:
        return "Paper";
    case Scissors:
        return "Scissors";
    }
    return "Unknown";
}

void NumberOfRounds(int &rounds)
{
    rounds++;
}

void playerScore(int &playerScore)
{
    playerScore++;
}

void computerScore(int &computerScore)
{
    computerScore++;
}

void drawTimes(int &drawTimes)
{
    drawTimes++;
}

bool isPlayAgain()
{
    char choice;
    while (true)
    {
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            return true;
        }
        else if (choice == 'n' || choice == 'N')
        {
            return false;
        }
        else
        {
            cout << "Invalid input. Please enter 'y' or 'n'." << endl;
        }
    }
}

void gameResults(int playerScore, int computerScore, int drawTimes, int rounds)
{
    cout << "_________________________Game Results_____________________________:" << endl;
    cout << "Game Rounds: " << rounds << endl;
    cout << "Player Score: " << playerScore << endl;
    cout << "Computer Score: " << computerScore << endl;
    cout << "Draw Times: " << drawTimes << endl;
    if (playerScore > computerScore)
    {
        cout << "Player wins the game!" << endl;
    }
    else if (computerScore > playerScore)
    {
        cout << "Computer wins the game!" << endl;
    }
    else
    {
        cout << "It's a tie!" << endl;
    }
    cout << "_________________________________________________________" << endl;
    cout << "Thank you for playing!" << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int rounds = 0;
    int drawTimes = 0;
    int playerScore = 0;
    int computerScore = 0;
    int numberOfRounds = readRoundNumber();
    int userChoiceInt;
    cout << "Welcome to the Stone-Paper-Scissors game!" << endl;
    do
    {
        rounds = 0;
        playerScore = 0;
        computerScore = 0;
        drawTimes = 0;
        do
        {
            NumberOfRounds(rounds);
            cout << "Round " << "[" << rounds << "]" << " begins:" << endl;
            cout << "Please enter your choice (1 for Stone, 2 for Paper, 3 for Scissors):  ";
            cin >> userChoiceInt;

            if (userChoiceInt < 1 || userChoiceInt > 3) {
                cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
                continue;
            }

            cout << "_____________________Round " << "[" << rounds << "]" << "____________________" << endl;
            StonepaperScissors userChoice = getUserChoice(userChoiceInt);
            cout << "\nPlayer Choice: " << choiceToString(userChoice);
            StonepaperScissors computerChoice = getComputerChoice();
            cout << "\nComputer choice: " << choiceToString(computerChoice) << endl;
            int result = WhoIsWinner(userChoiceInt, computerChoice);

            if (result == 0) drawTimes++;
            else if (result == 1) playerScore++;
            else computerScore++;

            cout << "_________________________________________________________" << endl;
        } while (rounds < numberOfRounds);
        gameResults(playerScore, computerScore, drawTimes, rounds);
        cout << "Do you want to play again? (y/n): ";
    } while (isPlayAgain());
}


// ========================================Prof's Code=======================================
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enGameChoice { Stone = 1, Paper = 2, Scissors = 3 };
enum enWinner { Player1 = 1, Computer = 2, Draw = 3 };

// Function prototypes
struct stNewRoundInfo {
    enGameChoice Player1Choice;
    enGameChoice ComputerChoice;
    short RoundNumber = 0;
    enWinner Winner;
    string WinnerName = "";
};

struct stGameResults {
    short GameRounds = 0;
    short Player1WinTimes = 0;
    short ComputerWinTimes = 0;
    short DrawTimes = 0;
    short GameWinner = 0;
    string WinnerName = "";
};


int readPlayerChoice() {
    int choice;
    do {
        cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors? ";
        cin >> choice;
    } while (choice < 1 || choice > 3);
    return choice;
}

string ChoiceName(int choice) {
    string arrGameChoices[3] = { "Stone", "Paper", "Scissors" };
    return arrGameChoices[choice - 1];
}

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

enGameChoice getComputerChoice() {
    return (enGameChoice)(RandomNumber(1, 3));
}

enWinner WhoWonTheRound(stNewRoundInfo RoundInfo) {
    if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice)
        return enWinner::Draw;

    switch (RoundInfo.Player1Choice) {
    case enGameChoice::Stone:
        return (RoundInfo.ComputerChoice == enGameChoice::Paper) ? enWinner::Computer : enWinner::Player1;
    case enGameChoice::Paper:
        return (RoundInfo.ComputerChoice == enGameChoice::Scissors) ? enWinner::Computer : enWinner::Player1;
    case enGameChoice::Scissors:
        return (RoundInfo.ComputerChoice == enGameChoice::Stone) ? enWinner::Computer : enWinner::Player1;
    }
}

void PrintRoundResults(stNewRoundInfo RoundInfo) {
    cout << "\n____________ Round [" << RoundInfo.RoundNumber << "] ____________\n\n";
    cout << "Player1 Choice: " << ChoiceName(RoundInfo.Player1Choice) << endl;
    cout << "Computer Choice: " << ChoiceName(RoundInfo.ComputerChoice) << endl;
    cout << "Round Winner   : [" << RoundInfo.WinnerName << "]\n";
    cout << "_________________________________________\n" << endl;
}


stGameResults PlayGame(int HowManyQuestions) {
    stNewRoundInfo RoundInfo;
    short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;
    for ( short GameRound = 1; GameRound <= HowManyQuestions; GameRound++)
    {
        cout << "\nQuestion [" << GameRound << "/" << HowManyQuestions << "] \n";
        RoundInfo.QuestionNumber = GameRound;
        RoundInfo.Player1Choice = (enGameChoice)readPlayerChoice();
        RoundInfo.ComputerChoice = getComputerChoice();
        RoundInfo.Winner = WhoWonTheRound(RoundInfo);
        RoundInfo.WinnerName = ChoiceName(RoundInfo.Winner);

        if (RoundInfo.Winner == enWinner::Player1)
            Player1WinTimes++;
        else if (RoundInfo.Winner == enWinner::Computer)
            ComputerWinTimes++;
        else
            DrawTimes++;


        PrintRoundResults(RoundInfo);
    }
    return { HowManyRounds, Player1WinTimes, ComputerWinTimes, DrawTimes, WhoWonTheGame(Player1WinTimes, ComputerWinTimes), WinnerName(WhoWonTheGame(Player1WinTimes, ComputerWinTimes)) };


    
}

void StartGame() {
    char PlayAgain = 'Y';
    do {
        system("cls");
        int rounds = HowManyRounds();
        stGameResults GameResults = PlayGame(rounds);
        cout << "\nGame Over! Winner: " << GameResults.WinnerName << endl;

        cout << "\nDo you want to play again? (Y/N): ";
        cin >> PlayAgain;

    } while (PlayAgain == 'Y' || PlayAgain == 'y');
}

int main()
{
    srand((unsigned)time(NULL));
    StartGame();
    cout << "\nThank you for playing! Goodbye!" << endl;
    return 0;
}




































// #include <iostream>   // Include iostream for input/output operations.
// #include <cstdlib>    // Include cstdlib for system functions like clearing the screen.
// #include <ctime>      // Include ctime for random number seeding.
// using namespace std;  // Use the standard namespace to avoid prefixing std:: before standard functions.

// // Enumeration: enGameChoice
// // Purpose: Defines the choices available in the game.
// enum enGameChoice { Stone = 1, Paper = 2, Scissors = 3 };

// // Enumeration: enWinner
// // Purpose: Defines possible winners for a round or game.
// enum enWinner { Player1 = 1, Computer = 2, Draw = 3 };

// // Structure: stRoundInfo
// // Purpose: Stores details of a single round of the game.
// struct stRoundInfo
// {
//     short RoundNumber = 0;          // Round number.
//     enGameChoice Player1Choice;     // Player's choice.
//     enGameChoice ComputerChoice;    // Computer's choice.
//     enWinner Winner;                // Stores the winner of the round.
//     string WinnerName;               // Stores the winner's name.
// };

// // Structure: stGameResults
// // Purpose: Stores overall game results after all rounds are played.
// struct stGameResults
// {
//     short GameRounds = 0;        // Number of rounds played.
//     short Player1WinTimes = 0;   // Count of Player1's wins.
//     short ComputerWinTimes = 0;  // Count of Computer's wins.
//     short DrawTimes = 0;         // Number of rounds that ended in a draw.
//     enWinner GameWinner;         // Stores the overall game winner.
//     string WinnerName = "";      // Name of the game winner.
// };

// // Function: RandomNumber
// // Purpose: Generates a random number within the given range [From, To].
// // Parameters:
// //   - From: Lower bound of the random range.
// //   - To: Upper bound of the random range.
// // Returns: A random integer between From and To.
// int RandomNumber(int From, int To)
// {
//     return rand() % (To - From + 1) + From;
// }

// // Function: GetComputerChoice
// // Purpose: Randomly selects the computer's choice.
// // Returns: An enGameChoice value representing the computer's move.
// enGameChoice GetComputerChoice()
// {
//     return (enGameChoice)RandomNumber(1, 3);
// }

// // Function: WhoWonTheRound
// // Purpose: Determines the winner of a round based on player and computer choices.
// enWinner WhoWonTheRound(stRoundInfo RoundInfo)
// {
//     // If both choices are the same, it's a draw.
//     if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice)
//         return enWinner::Draw;

//     // Determine the winner based on game rules.
//     switch (RoundInfo.Player1Choice)
//     {
//     case enGameChoice::Stone:
//         return (RoundInfo.ComputerChoice == enGameChoice::Paper) ? enWinner::Computer : enWinner::Player1;
//     case enGameChoice::Paper:
//         return (RoundInfo.ComputerChoice == enGameChoice::Scissors) ? enWinner::Computer : enWinner::Player1;
//     case enGameChoice::Scissors:
//         return (RoundInfo.ComputerChoice == enGameChoice::Stone) ? enWinner::Computer : enWinner::Player1;
//     }
// }

// // Function: WhoWonTheGame
// // Purpose: Determines the final game winner based on win counts.
// enWinner WhoWonTheGame(short Player1WinTimes, short ComputerWinTimes)
// {
//     if (Player1WinTimes > ComputerWinTimes) return enWinner::Player1;
//     else if (ComputerWinTimes > Player1WinTimes) return enWinner::Computer;
//     else return enWinner::Draw;
// }

// // Function: ChoiceName
// // Purpose: Converts an enGameChoice enum to a string representation.
// string ChoiceName(enGameChoice Choice)
// {
//     string arrGameChoices[3] = { "Stone", "Paper", "Scissors" };
//     return arrGameChoices[Choice - 1];
// }

// // Function: WinnerName
// // Purpose: Converts an enWinner enum to a string representation.
// string WinnerName(enWinner Winner)
// {
//     string arrWinnerName[3] = { "Player1", "Computer", "No Winner (Draw)" };
//     return arrWinnerName[Winner - 1];
// }

// // Function: ReadPlayer1Choice
// // Purpose: Prompts the player to input their choice.
// enGameChoice ReadPlayer1Choice()
// {
//     short Choice;
//     do
//     {
//         cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors? ";
//         cin >> Choice;
//     } while (Choice < 1 || Choice > 3);
//     return (enGameChoice)Choice;
// }

// // Function: PrintRoundResults
// // Purpose: Displays the results of a single round.
// void PrintRoundResults(stRoundInfo RoundInfo)
// {
//     cout << "\n____________ Round [" << RoundInfo.RoundNumber << "] ____________\n\n";
//     cout << "Player1 Choice: " << ChoiceName(RoundInfo.Player1Choice) << endl;
//     cout << "Computer Choice: " << ChoiceName(RoundInfo.ComputerChoice) << endl;
//     cout << "Round Winner   : [" << RoundInfo.WinnerName << "]\n";
//     cout << "_________________________________________\n" << endl;
// }

// // Function: PlayGame
// // Purpose: Runs the game for a given number of rounds and determines the final winner.
// stGameResults PlayGame(short HowManyRounds)
// {
//     stRoundInfo RoundInfo;
//     short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;

//     for (short GameRound = 1; GameRound <= HowManyRounds; GameRound++)
//     {
//         cout << "\nRound [" << GameRound << "] begins:\n";
//         RoundInfo.RoundNumber = GameRound;
//         RoundInfo.Player1Choice = ReadPlayer1Choice();
//         RoundInfo.ComputerChoice = GetComputerChoice();
//         RoundInfo.Winner = WhoWonTheRound(RoundInfo);
//         RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

//         if (RoundInfo.Winner == enWinner::Player1)
//             Player1WinTimes++;
//         else if (RoundInfo.Winner == enWinner::Computer)
//             ComputerWinTimes++;
//         else
//             DrawTimes++;

//         PrintRoundResults(RoundInfo);
//     }

//     return { HowManyRounds, Player1WinTimes, ComputerWinTimes, DrawTimes, WhoWonTheGame(Player1WinTimes, ComputerWinTimes), WinnerName(WhoWonTheGame(Player1WinTimes, ComputerWinTimes)) };
// }

// // Function: StartGame
// // Purpose: Controls the game loop, allowing players to replay the game.
// void StartGame()
// {
//     char PlayAgain = 'Y';

//     do
//     {
//         system("cls");  // Clear the screen before starting a new game.
//         stGameResults GameResults = PlayGame(3); // Play 3 rounds.
//         cout << "\nGame Over! Winner: " << GameResults.WinnerName << endl;

//         cout << "\nDo you want to play again? (Y/N): ";
//         cin >> PlayAgain;

//     } while (PlayAgain == 'Y' || PlayAgain == 'y');
// }

// // Main Function
// int main()
// {
//     srand((unsigned)time(NULL));  // Seed random number generator.
//     StartGame();  // Start the game.
//     return 0;  // Return 0 to indicate successful execution.
// }


