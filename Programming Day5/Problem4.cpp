#include <iostream>
using namespace std;
int main() {
    int day, month;
    cout << "Enter date of birth: ";
    cin >> day;
    cout << "Enter month of birth (1-12): ";
    cin >> month;

    string sign,symbol;

    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)){
        sign = "Aries";
        symbol = "The Ram";
    }
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)){
        sign = "Taurus";
        symbol = "The Bull";
    }
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)){
        sign = "Gemini";
        symbol = "The Twins";
    }
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)){
        sign = "Cancer";
        symbol = "The Crab";
    }
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)){
        sign = "Leo";
        symbol = "The Lion";
    }
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)){
        sign = "Virgo";
        symbol = "The Virgin";
    }
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)){
        sign = "Libra";
        symbol = "The Scales";
    }
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)){
        sign = "Scorpio";
        symbol = "The Scorpion";
    }
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)){
        sign = "Sagittarius";
        symbol = "The Archer";
    }
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)){
        sign = "Capricorn";
        symbol = "The Goat";
    }
    else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)){
        sign = "Aquarius";
        symbol = "The Water Bearer";
    }
    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)){
        sign = "Pisces";
        symbol = "The Fishes";
    }
    else
        sign = "Invalid date";

    cout << "Your Zodiac Sign is: " << sign << endl;

    return 0;
}