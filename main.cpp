# include <iostream>
# include <string>



int main(void) {

    std::cout << "Hello, welcome to the calculator. Things to note: 1) add spaces between numbers and operators. 2) this calculator does only addition, subtraction, multiplication, and division. Do not use parenthesis or exponent. 3) only include 2 numbers... for now. Good luck." << std:: endl;

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    char operation = 'a';
    std::string equation;
    std::string history;
    char choose = 'c';

    while (1){
        
        if (choose == 'c'){
            
            choose = NULL;

            std::cout << "Enter your 2 number equation: " << std::endl;
            
            std::cin >> num1;
            std::cin >> operation;
            std::cin >> num2;

            switch (operation){

                case '+':
                    num3 = num1 + num2;
                
                case '-':
                    num3 = num1 - num2;
                
                case '/':
                    num3 = num1 * num2;
                
                case '*':
                    num3 = num1 / num2;
                
            }
            equation = std::to_string(num1) + ' ' + operation + ' ' + std::to_string(num2) + " = " + std::to_string(num3);
            std::cout << equation << std::endl;
            history += equation + "\n";
        }

        else if(choose == 'h'){
            
            choose = NULL;

            std::cout << history;
        }

        else if(choose == 'e'){
            break;
        }

        else{
            std::cout << "Sorry, that doesn't work. Maybe you put it in uppercase? Try again:";
            std::cin >> choose;
        }
        if(choose == NULL){
            std::cout << "What next? h=history c=calculations e=exit:";
            std::cin >> choose;
        }
    }

    return 0;
}