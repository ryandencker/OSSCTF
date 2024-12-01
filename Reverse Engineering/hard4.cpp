#include <iostream>
#include <string>

using namespace std;

// Function to return "wowza"
string OSS() {
    return to_string(int('O')) + to_string(int('S')); // 79 83
}

// Function to return ASCII representation of "SC"
string SC() {
    return to_string(int('S')) + to_string(int('C')); // 83 67
}

// Function to return ASCII representation of "TF"
string CTF() {
    return to_string(int('T')) + to_string(int('F')); // 84 70
}

// Function to return ASCII representation of "{1_"
string getIs() {
    return to_string(int('{')) + to_string(int('1')) + to_string(int('_')); // 123 49 95
}

// Function to return ASCII representation of "L0V"
string getA() {
    return to_string(int('L')) + to_string(int('0')) + to_string(int('V')); // 76 48 86
}

// Function to return ASCII representation of "3_D"
string getFlag() {
    return to_string(int('3')) + to_string(int('_')) + to_string(int('D')); // 51 95 68
}

// Function to return ASCII representation of "4NK"
string dank() {
    return to_string(int('4')) + to_string(int('N')) + to_string(int('K')); // 52 78 75
}

// Function to return ASCII representation of "3R}"
string meow() {
    return to_string(int('3')) + to_string(int('R')) + to_string(int('}')); // 51 82 125
}

void minions() {
    string opinion;
    cout << "I LOVE the Minions. Each Minions movie is a rollercoaster of emotions and laughs, wrapped up in a vibrant, colorful world that’s impossible not to fall in love with. The Minions are more than just sidekicks; they are the heart and soul of the story. They bring a unique charm that resonates with both kids and adults alike." << endl;
    cout << "What do you think about the Minions?" << endl;
    getline(cin, opinion);
    cout << "That's nice. I should get going now. I have to go volunteer at my cat rescue. I hope to see you again soon!" << endl;
}

void anime() {
    string anime, arc, meow;
    cout << "What anime do you like?\na.) My Hero Academia\nb.) Hunter x Hunter\nc.) Spongebob" << endl;
    cin >> anime;

    if (anime == "a" || anime == "A" || anime == "My Hero Academia" || anime == "my hero academia") {
        cout << "My Hero Academia is cool and all but I'm not a big fan of how some people don't have powers and some are better than others! I think everyone should have an equal playing ground." << endl;
        cout << "Anyway... I gotta leave. My fish needs to be taken on a walk. Adios!" << endl;
    } else if (anime == "b" || anime == "B" || anime == "Hunter x Hunter" || anime == "hunter x hunter") {
        cout << "I LOVE Hunter x Hunter! That's probably my favorite anime!" << endl;
        cout << "What is your favorite arc?\na.) Hunter Exams\nb.) Spiders\nc.) Greed Island\nd.) Ants" << endl;
        cin >> arc;
        cout << "NO WAY. THAT'S MY FAVORITE ARC TOO!" << endl;
        cout << "We should get coffee or hangout sometime. Here is my Skype: @hxhfan6969420." << endl;
        cout << "You are going to call me, right?\na.) Yes\nb.) No" << endl;
        cin >> meow;
        cout << "Great! Cya later!" << endl;
    } else if (anime == "c" || anime == "C" || anime == "Spongebob" || anime == "spongebob") {
        cout << "Spongebob is cool.\n\n*tackles you to the ground and starts tickling you like crazy*\nYou're ticklish, aren't you? :)))))" << endl;
    } else {
        cout << "I don't want to talk about " << anime << ". I'm leaving now." << endl;
    }
}

void cybersecurity() {
    cout << "I don't like cybersecurity.... \n\n*runs away*" << endl;
}

void talkto(string personName) {
    string about;
    cout << "Hello! I'm " << personName << "." << endl;
    cout << "What do you want to talk about?\na.) The Minions\nb.) Anime\nc.) Cybersecurity" << endl;
    cin >> about;

    if (about == "a" || about == "A" || about == "The Minions" || about == "the minions") {
        minions();
    } else if (about == "b" || about == "B" || about == "Anime" || about == "anime") {
        anime();
    } else if (about == "c" || about == "C" || about == "Cybersecurity" || about == "cybersecurity") {
        cybersecurity();
    } else {
        cout << "I really don't want to talk about " << about << " and I'm going to leave now." << endl;
    }
}

int main() {
    string talk, personName;
    cout << "============Welcome to OSSCON Dating Sim!!!============\n";
    cout << "Who would you like to talk to?\na.) Hitoshi\nb.) Raku\nc.) Koneko" << endl;
    cin >> talk;

    // Map user input to the correct name
    if (talk == "a" || talk == "A" || talk == "Hitoshi" || talk == "hitoshi") {
        personName = "Hitoshi";
    } else if (talk == "b" || talk == "B" || talk == "Raku" || talk == "raku") {
        personName = "Raku";
    } else if (talk == "c" || talk == "C" || talk == "Koneko" || talk == "koneko") {
        personName = "Koneko";
    } else {
        cout << "I don't know who that is.. please select a correct option." << endl;
        return 1; // Exit if invalid input
    }

    talkto(personName);

    if(1==1){
        string result = OSS() + SC() + CTF() + getIs() + getA() + getFlag() + dank() + meow();
    }


    return 0;
}
