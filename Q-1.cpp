#include<iostream>
using namespace std;

class options {
    string text;

public:
    options() {
        text = "";
    }

    options(string t) {
        text = t;
    }

    string getquestion() {
        return text;
    }
};

class Question {
    string questionText;
    options option[4];

public:
    int optionCount;
    int correctOption;

    Question() {
        questionText = "";
        optionCount = 0;
        correctOption = 0;
    }

    Question(string q) {
        questionText = q;
        optionCount = 0;
        correctOption = 0;
    }

    void addQuestion(string optionText) {
        if (optionCount < 4) {
            option[optionCount] = options(optionText);
            optionCount++;
        }
    }

    void setCorrectOption(int correct) {
        correctOption = correct;
    }

    bool checkAns(int userAns) {
        return (correctOption == userAns);
    }

    void display() {
        cout << questionText << endl;
        for (int i = 0; i < optionCount; i++) {
            cout << i + 1 << ". " << option[i].getquestion() << endl;
        }
    }
};

int main() {
    int totalQues = 4;
    int score = 0;
    int useAns;

    Question* quiz = new Question[totalQues];

    quiz[0] = Question("Capital of Pakistan?");
    quiz[0].addQuestion("Karachi");
    quiz[0].addQuestion("Islamabad");
    quiz[0].addQuestion("Lahore");
    quiz[0].addQuestion("Quetta");
    quiz[0].setCorrectOption(2);

    quiz[1] = Question("Fastest land animal?");
    quiz[1].addQuestion("Cheetah");
    quiz[1].addQuestion("Lion");
    quiz[1].addQuestion("Horse");
    quiz[1].addQuestion("Tiger");
    quiz[1].setCorrectOption(1);

    quiz[2] = Question("Largest ocean?");
    quiz[2].addQuestion("Atlantic");
    quiz[2].addQuestion("Pacific");
    quiz[2].addQuestion("Indian");
    quiz[2].addQuestion("Arctic");
    quiz[2].setCorrectOption(2);

    quiz[3] = Question("2 + 2 = ?");
    quiz[3].addQuestion("3");
    quiz[3].addQuestion("4");
    quiz[3].addQuestion("5");
    quiz[3].addQuestion("22");
    quiz[3].setCorrectOption(2);

    for (int i = 0; i < totalQues; i++) {
        cout << "\nQ" << i + 1 << ": ";
        quiz[i].display();
        cout << "Enter your choice (1-4): ";
        cin >> useAns;

        if (quiz[i].checkAns(useAns)) {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong!\n";
        }
    }

    cout << "\nYour final score: " << score << " out of " << totalQues << endl;

    delete[] quiz;
    return 0;
}
