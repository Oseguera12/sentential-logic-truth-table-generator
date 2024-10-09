/*
    General Steps:
    - Inform the user of the various symbols
    - Prompt user to proceed with the program
    - Take an input as a string
    - Check for errors in the input by doing the following:
        - Check that all symbols are appropriate
        - Check that all () {} [] close correctly
        - Chech that all operators are taking the correct # of arguments
        - Re-prompt for input or to exit program if error was found
    - Process expression into a truth table
    - Check if program is a tautology (expression is always true)
    - Check if program is a contradiction (expression is always false)
    - Output truth table to terminal with additional information
    - Prompt to continue program or exit
*/

#include <string>

int main()
{
    std::string expression;
    errorCheckExpression(expression);
    expressionToTruthTable(expression);
    return 0;
}

//---------------------------------- Code for error checking
void errorCheckExpression(std::string & expression)
{
    checkSymbolsAppropriate();
    checkSymbolsClose();
    checkOperatorArguments();
}

void checkSymbolsAppropriate(std::string & expression)
{
    int length = static_cast<int>(expression.length());
    for (int i = 0; i < length; i++) {

    }
}

void checkSymbolsClose(std::string & expression)
{
    int length = static_cast<int>(expression.length());
    for (int i = 0; i < length; i++) {

    }
}

void checkOperatorArguments(std::string & expression)
{

}

//---------------------------------- Code for converting string to truth table
void expressionToTruthTable(std::string expression)
{

}

//---------------------------------- Code for outputting truth table to terminal
void checkTautology()
{

}

void CheckContradiction()
{

}
