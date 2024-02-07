#include <iostream>
using namespace std;
int askQuestion(string questions[],string options[20][4],string correct_Options[],int &correct, char choice){
     for(int i=0; i<20; i++){
         cout << i+1 <<"-  " << questions[i] << " ? " << endl;
        for(int j=0; j<4; j++){
            if(j==0){
            cout <<"a-  " <<  options[i][j] << endl;
            }else if(j==1){
               cout <<"b-  " <<  options[i][j] << endl;
            }else if(j==2){
                cout <<"c-  " <<  options[i][j] << endl;
            }else{
                cout <<"d-  " <<  options[i][j] << endl;
            }
        }
        cout << "Your answer(a, b, c, or d): ";
        cin >> choice;
              if (choice == 'a' && options[i][0] == correct_Options[i]) {
        cout << "Correct! " << endl;
        correct++;
    } else if (choice == 'b' && options[i][1] == correct_Options[i]) {
        cout << "Correct! " << endl;
        correct++;
    } else if (choice == 'c' && options[i][2] == correct_Options[i]) {
        cout << "Correct! " << endl;
        correct++;
    } else if (choice == 'd' && options[i][3] == correct_Options[i]) {
        cout << "Correct! " << endl;
        correct++;
    } else {
        cout << "Wrong!" << endl;
    }
        }
        return correct;

}
int main(){
    char choice;
    string questions[20]={
     "What is the capital of France",
     "In which year did World War II end",
     "What is the largest planet in our solar system",
     "Who wrote Romeo and Juliet",
     "What is the capital of Japan",
     "Which ocean is the largest",
     "What is the currency of Australia",
     "Who was the first President of the United States",
     "What is the main ingredient in guacamole",
     "In which year did the Titanic sink",
     "What is the largest mammal on Earth",
     "Who painted the Mona Lisa",
     "What is the national flower of Japan",
     "Which planet is known as the \"Red Planet\"",
     "What is the largest desert in the world",
     "Who wrote \"To Kill a Mockingbird\"",
     "What is the capital of Canada",
     "Which element has the chemical symbol \"H\"",
     "What is the largest organ in the human body",
     "Which famous scientist developed the theory of relativity"
    };
    string options[20][4]={
        {"Berlin","Madrid","Paris","Rome"},
        {"1943","1945","1945", "1950"},
        {"Venus", "Mars","Jupiter","Saturn"},
        {"Charles Dickens","William Shakespeare","Jane Austen","Mark Twain"},
        {"Beijing","Seoul","Tokyo","Bangkok"},
        {" Indian Ocean","Atlantic Ocean","Pacific Ocean","Arctic Ocean"},
        {"Euro","Dollar","Australian Dollar","Peso"},
        {"Thomas Jefferson","George Washington","Abraham Lincoln","John Adams"},
        {"Tomatoes"," Onions","Avocado","Peppers"},
        {"1910","1912","1915","1920"},
        {"Elephant","Blue Whale","Giraffe","Polar Bear"},
        {"Vincent van Gogh","Leonardo da Vinci","Pablo Picasso","Claude Monet"},
        {"Rose","Tulip","Cherry Blossom","Orchid"},
        {"Jupiter","Venus","Saturn","Mars"},
        {"Sahara Desert","Gobi Desert","Arabian Desert","Antarctic Desert"},
        {"J.K. Rowling","Ernest Hemingway","Harper Lee","F. Scott Fitzgerald"},
        {"Ottawa","Toronto","Ottawa","Montreal"},
        {"Hydrogen","Helium","Carbon","Oxygen"},
        {"Heart","Liver","Skin","Lungs"},
        {"Isaac Newton","Galileo Galilei","Albert Einstein","Stephen Hawking"}
    };
string correct_Options[20]={
"Paris", "1945","Jupiter","Jane Austen","Tokyo", "Pacific Ocean",
"Australian Dollar","George Washington","Avocado","1912",
"Blue Whale","Leonardo da Vinci","Cherry Blossom","Mars",
"Antarctic Desert","Harper Lee","Ottawa","Hydrogen","Skin",
"Albert Einstein"};
char restart;
int correct=0;
do{
    askQuestion(questions,options,correct_Options,correct,choice);
    cout << "Overall Score : " << correct << " out of 20" << endl;
    do {
    cout << "Do you want to play again? (y or n): ";
    cin >> restart;
    if(restart != 'y' && restart != 'Y' && restart != 'n' && restart != 'N'){
        cout << "Enter the valid input!" << endl;
    }
} while (restart != 'y' && restart != 'Y' && restart != 'n' && restart != 'N');
}while (restart !='n' && restart !='N');
    return 0;
}
