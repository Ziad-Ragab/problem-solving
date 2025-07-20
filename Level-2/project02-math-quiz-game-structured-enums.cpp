// ========================================MY Code========================================
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enOperationType { Add = 1, Subtract = 2, Multiply = 3, Divide = 4 };
namespace EnumTwo {
    enum enQuestionLevel { Easy = 1, Medium = 2, Hard = 3, Mix = 4 };
}

enum enAnswerType { Right = 1, Wrong = 2 };

struct stGameResults {
    short GameRounds = 0;
    short RightAnswer = 0;
    short WrongAnswer = 0;
    EnumTwo::enQuestionLevel QuestionLevel;
    enOperationType OperationType;
};

// Random number generator
int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

// Ask how many questions
short HowManyQuestions() {
    short numberOfQuestions;
    cout << "How many questions do you want to answer: ";
    cin >> numberOfQuestions;
    return numberOfQuestions;
}

// Ask level
EnumTwo::enQuestionLevel EnterQuestionLevel() {
    short level;
    do {
        cout << "Enter question level (1: Easy, 2: Medium, 3: Hard, 4: Mix): ";
        cin >> level;
    } while (level < 1 || level > 4);
    return (EnumTwo::enQuestionLevel)level;
}

// Ask operation
enOperationType EnterOperationType() {
    short op;
    do {
        cout << "Enter operation type (1: Add, 2: Subtract, 3: Multiply, 4: Divide): ";
        cin >> op;
    } while (op < 1 || op > 4);
    return (enOperationType)op;
}

// Generate number based on level
int GenerateNumber(EnumTwo::enQuestionLevel level) {
    switch (level) {
        case EnumTwo::Easy: return RandomNumber(1, 10);
        case EnumTwo::Medium: return RandomNumber(11, 50);
        case EnumTwo::Hard: return RandomNumber(51, 100);
        case EnumTwo::Mix: return RandomNumber(1, 100);
    }
    return 0;
}

// Get operator symbol
char GetOperatorSymbol(enOperationType op) {
    switch (op) {
        case Add: return '+';
        case Subtract: return '-';
        case Multiply: return '*';
        case Divide: return '/';
    }
    return '?';
}

// Evaluate correct answer
int EvaluateAnswer(int n1, int n2, enOperationType op) {
    switch (op) {
        case Add: return n1 + n2;
        case Subtract: return n1 - n2;
        case Multiply: return n1 * n2;
        case Divide: return (n2 != 0) ? n1 / n2 : 0;
    }
    return 0;
}

stGameResults PlayGame(short questionCount) {
    stGameResults result;
    result.GameRounds = questionCount;
    result.QuestionLevel = EnterQuestionLevel();
    result.OperationType = EnterOperationType();

    for (short i = 0; i < questionCount; i++) {
        cout << "\nQuestion [" << i + 1 << "/" << questionCount << "]:\n";

        int n1 = GenerateNumber(result.QuestionLevel);
        int n2 = GenerateNumber(result.QuestionLevel);
        int correctAnswer = EvaluateAnswer(n1, n2, result.OperationType);

        cout << n1 << " " << GetOperatorSymbol(result.OperationType) << " " << n2 << " = ";
        int userAnswer;
        cin >> userAnswer;

        if (userAnswer == correctAnswer) {
            cout << "✅ Correct!\n";
            result.RightAnswer++;
        } else {
            cout << "❌ Wrong! Correct answer was: " << correctAnswer << "\n";
            result.WrongAnswer++;
        }
    }

    return result;
}

void ShowGameResults(stGameResults result) {
    cout << "\n==============================\n";
    cout << "         Final Result\n";
    cout << "==============================\n";
    cout << "Total Questions : " << result.GameRounds << "\n";
    cout << "Right Answers   : " << result.RightAnswer << "\n";
    cout << "Wrong Answers   : " << result.WrongAnswer << "\n";
    cout << "Your Score      : " << (result.RightAnswer * 100) / result.GameRounds << "%\n";
    if (result.RightAnswer >= result.WrongAnswer) {
        cout << "✅ Congratulations! You Passed!\n";
    } else {
        cout << "❌ Unfortunately, You Failed!\n";
    }
    cout << "==============================\n";
}

void StartGame() {
    char playAgain = 'Y';
    do {
        system("cls");
        short questionCount = HowManyQuestions();
        stGameResults result = PlayGame(questionCount);
        ShowGameResults(result);

        cout << "\nDo you want to play again? (Y/N): ";
        cin >> playAgain;
    } while (playAgain == 'Y' || playAgain == 'y');
}

int main() {
    srand((unsigned)time(NULL));
    StartGame();
    cout << "\nThank you for playing! Goodbye!\n";
    return 0;
}



// ========================================Prof's Code========================================
// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;

// enum enQuestionsLevel { EasyLevel = 1, MedLevel = 2, HardLevel = 3, Mix = 4 };
// enum enOperationType { Add = 1, Sub = 2, Mult = 3, Div = 4, MixOp = 5 };

// int RandomNumber(int From, int To)
// {
//     return rand() % (To - From + 1) + From;
// }

// string GetOpTypeSymbol(enOperationType OpType)
// {
//     switch (OpType)
//     {
//     case enOperationType::Add:
//         return "+";
//     case enOperationType::Sub:
//         return "-";
//     case enOperationType::Mult:
//         return "x";
//     case enOperationType::Div:
//         return "/";
//     default:
//         return "Mix";
//     }
// }

// enOperationType GetRandomOperationType()
// {
//     return (enOperationType)RandomNumber(1, 4);
// }

// string GetQuestionLevelText(enQuestionsLevel QuestionLevel)
// {
//     string arrQuestionLevelText[4] = { "Easy","Medium","Hard","Mixed" };
//     return arrQuestionLevelText[QuestionLevel - 1];
// }

// void SetScreenColor(bool Right)
// {
//     if (Right)
//         system("color 2F");
//     else
//     {
//         system("color 4F");
//         cout << "\a";
//     }
// }

// int SimpleCalculator(int Number1, int Number2, enOperationType OpType)
// {
//     switch (OpType)
//     {
//     case enOperationType::Add:
//         return Number1 + Number2;
//     case enOperationType::Sub:
//         return Number1 - Number2;
//     case enOperationType::Mult:
//         return Number1 * Number2;
//     case enOperationType::Div:
//         return (Number2 != 0) ? (Number1 / Number2) : 0;
//     default:
//         return Number1 + Number2;
//     }
// }

// struct stQuestion
// {
//     int Number1 = 0;
//     int Number2 = 0;
//     enOperationType OperationType;
//     enQuestionsLevel QuestionLevel;
//     int CorrectAnswer = 0;
//     int PlayerAnswer = 0;
//     bool AnswerResult = false;
// };

// struct stQuizz
// {
//     stQuestion QuestionList[100];
//     short NumberOfQuestions;
//     enQuestionsLevel QuestionsLevel;
//     enOperationType OpType;
//     short NumberOfWrongAnswers = 0;
//     short NumberOfRightAnswers = 0;
//     bool isPass = false;
// };

// stQuestion GenerateQuestion(enQuestionsLevel QuestionLevel, enOperationType OpType)
// {
//     stQuestion Question;

//     if (QuestionLevel == enQuestionsLevel::Mix)
//         QuestionLevel = (enQuestionsLevel)RandomNumber(1, 3);

//     if (OpType == enOperationType::MixOp)
//         OpType = GetRandomOperationType();

//     Question.OperationType = OpType;

//     switch (QuestionLevel)
//     {
//     case enQuestionsLevel::EasyLevel:
//         Question.Number1 = RandomNumber(1, 10);
//         Question.Number2 = RandomNumber(1, 10);
//         break;
//     case enQuestionsLevel::MedLevel:
//         Question.Number1 = RandomNumber(10, 50);
//         Question.Number2 = RandomNumber(10, 50);
//         break;
//     case enQuestionsLevel::HardLevel:
//         Question.Number1 = RandomNumber(50, 100);
//         Question.Number2 = RandomNumber(50, 100);
//         break;
//     }

//     Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
//     Question.QuestionLevel = QuestionLevel;

//     return Question;
// }

// void AskAndCorrectQuestionListAnswers(stQuizz& Quizz)
// {
//     for (short QuestionNumber = 0; QuestionNumber < Quizz.NumberOfQuestions; QuestionNumber++)
//     {
//         cout << "\nQuestion [" << QuestionNumber + 1 << "/" << Quizz.NumberOfQuestions << "]\n";
//         cout << Quizz.QuestionList[QuestionNumber].Number1 << " "
//             << GetOpTypeSymbol(Quizz.QuestionList[QuestionNumber].OperationType) << " "
//             << Quizz.QuestionList[QuestionNumber].Number2 << " = ";

//         cin >> Quizz.QuestionList[QuestionNumber].PlayerAnswer;

//         if (Quizz.QuestionList[QuestionNumber].PlayerAnswer == Quizz.QuestionList[QuestionNumber].CorrectAnswer)
//         {
//             cout << "Correct!\n";
//             Quizz.NumberOfRightAnswers++;
//         }
//         else
//         {
//             cout << "Wrong! Correct Answer: " << Quizz.QuestionList[QuestionNumber].CorrectAnswer << endl;
//             Quizz.NumberOfWrongAnswers++;
//         }
//     }

//     Quizz.isPass = (Quizz.NumberOfRightAnswers >= Quizz.NumberOfWrongAnswers);
// }

// void PlayMathGame()
// {
//     stQuizz Quizz;
//     Quizz.NumberOfQuestions = 5;
//     Quizz.QuestionsLevel = enQuestionsLevel::EasyLevel;
//     Quizz.OpType = enOperationType::MixOp;

//     for (short QuestionNumber = 0; QuestionNumber < Quizz.NumberOfQuestions; QuestionNumber++)
//     {
//         Quizz.QuestionList[QuestionNumber] = GenerateQuestion(Quizz.QuestionsLevel, Quizz.OpType);
//     }

//     AskAndCorrectQuestionListAnswers(Quizz);

//     cout << "\nQuiz Completed! Right Answers: " << Quizz.NumberOfRightAnswers
//         << ", Wrong Answers: " << Quizz.NumberOfWrongAnswers << "\n";

//     cout << (Quizz.isPass ? "You Passed the Quiz!\n" : "You Failed the Quiz!\n");
// }

// int main()
// {
//     srand((unsigned)time(NULL));
//     PlayMathGame();
//     return 0;
// }
