#include <iostream>
#include <ctime>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

int ladder(int position) {
if (position == 4) {
    position = 16;
}
if (position == 12) {
    position = 33;
}
if (position == 18) {
    position = 22;
}
if (position == 26) {
    position = 37;
}
if (position == 42) {
    position = 61;
}
if (position == 49) {
    position = 51;
}
if (position == 55) {
    position = 74;
}
if (position == 82) {
    position = 98;
}
if (position == 85) {
    position = 95;
}
if (position == 88) {
    position = 92;
}
return position;
}
int snake(int position) {

if (position == 21) {
    position = 3;
}
if (position == 35) {
    position = 9;
}
if (position == 24) {
    position = 7;
}
if (position == 50) {
    position = 11;
}
if (position == 53) {
    position = 15;
}
if (position == 60) {
    position = 23;
}
if (position == 75) {
    position = 44;
}
if (position == 89) {
    position = 48;
}
if (position == 93) {
    position = 25;
}
if (position == 97) {
    position = 65;
}
if (position == 99) {
    position = 58;
}
return position;
}

int main() {
    int globecount = 0;
    /* std::string line;
    std::ifstream myfile("StatsP1_.txt");
    while (std::getline(myfile, line)) {
        ++globecount;
    return 0;
}
    std::cout << "Current number of trials on file: " << globecount; */
    int men;
    int men2;
    int men3;
    char key_press;
    std::string posdisp;
    std::string posdisp2;
    int p1count = 0;
    int p2count = 0;
    int dice = 0;
    int dice2 = 0;
    int position = 0;
    int position2 = 0;
    while (men != 49 or men != 50 or men != 51) {
        std::cout << "1. Easy \n 2. Hard \n 3. Explain \n";
        key_press=getch();
        men=key_press;

        if (men == 27) {
            exit(0);
        }
        if (men == 51) {
            std::cout << "In 'Easy' any number over 100 will win \n In 'Hard' only exactly 100 will win \n";
}
        else if (men == 49 or men == 50) {
                if (men == 50) {men = 2;}
            break;
        }
        else {
            std::cout << "Please enter 1, 2 or 3\n";
        }
    }
    while (men2 != 49 or men2 != 50) {
        std::cout << "1. Instant \n 2. Slow Display \n";
        key_press=getch();
        men2=key_press;

        if (men2 == 27) {
            exit(0);
        }
        if (men2 == 49 or men2 == 50) {
            break;
        }
        else {
            std::cout << "Please enter 1, 2\n";
        }
    }
    while (men3 != 49 or men3 != 50) {
            std::cout << "1. 1 Player \n 2. 2 Player \n";
    key_press=getch();
    men3=key_press;
        if (men3 == 27) {
            exit(0);
        }
        if (men3 != 49 or men3 != 50) {
            break;
        }
    }
    int x = 0;
    int numtry;
    std::cout << "How many trials? \n";
    std::cin >> numtry;
    while (x < numtry) {
    int p1count = 0;
    int p2count = 0;
    int dice = 0;
    int dice2 = 0;
    int position = 0;
    int position2 = 0;
    srand( time( NULL ) - (rand()%1000)+2);
    std::cout << "Player2's turn \n";
while (men3 == 50) {
        p2count++;
    dice2 = (rand()%6)+1;
    if (men == 2) {
  if (position2 + dice2 <= 100){
  position2 += dice2;
  }
  else {
    std::cout << "Roll is over 100 \n";
    continue;
  }
}
else {
    position2 += dice2;
}

    int postest2 = position2;
  posdisp2 = std::to_string(position2);
  position2 = ladder(position2);
    position2 = snake(position2);
  if (position2 != postest2) {
    std::string postemp2 = std::to_string(position2);
    posdisp2 += "->";
    posdisp2 += postemp2;
    std::cout << posdisp2 << "\n";
  }
  else {
  std::cout << position2 << "\n";
  }
  if (men2 == 50) {
        _sleep(150);
  }
  if (position2 >= 100) {
    break;
  }
}
std::cout << "Player 1's turn \n";
  srand( time( NULL ) - (rand()%1000)+2);
while (position < 100) {
        p1count++;
     dice = (rand()%6)+1;

  if (men == 2) {
  if (position + dice <= 100){
  position = position + dice;
  }
  else {
    std::cout << "Roll is over 100 \n";
    continue;
  }
  }
  else {
    position = position + dice;
  }

  int postest = position;
  posdisp = std::to_string(position);
  position = ladder(position);
  position = snake(position);
  if (position != postest) {
    std::string postemp = std::to_string(position);
    posdisp += "->";
    posdisp += postemp;
    std::cout << posdisp << "\n";
  }
  else {
  std::cout << position << "\n";
  }
  if (men2 == 50) {
        _sleep(150);
  }
  if (men == 1 and position > 100) {
    break;
  }
if (men == 2 and position == 100) {
    break;
}
}
std::ofstream file1;
std::ofstream file2;
file1.open ("StatsP1_.txt", std::ios_base::app);
file2.open ("StatsP2_.txt", std::ios_base::app);
std::cout << "Player1's number of rolls:" << p1count << "\n";
file1 << p1count << "\n";
file2 << p2count << "\n";
globecount++;
std::cout << "Current trial: " << globecount << "\n";
x++;
}
if (men3 == 50) {
    std::cout << "Player2's number of rolls:" << p2count << "\n \n ";
    if (p2count < p1count) {
        std::cout << "Player2 wins \n";
    }
    else {
        std::cout << "Player1 wins \n";
    }
}
else {
std::cout << "You Win \n";
return 0;
}
}
