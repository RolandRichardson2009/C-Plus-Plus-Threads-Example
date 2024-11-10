#include <iostream>
#include <thread>
using namespace std;
static bool s_Finished = false;//bool for controlling when thread stops
class Character {
public:

    void printVideo()//Function that plays the animation
    {
        using namespace std::literals::chrono_literals;
        while (!s_Finished)
        {
            std::cout << "Press enter to quit.\n";
            std::cout << "----------------------------------------\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|   <O>                                |\n";
            std::cout << "|  --+--                               |\n";
            std::cout << "|    ^                                 |\n";
            std::cout << "|   / \\                                |\n";
            std::cout << "----------------------------------------\n";
            std::this_thread::sleep_for(0.05s);
            system("cls");

            std::cout << "Press enter to quit.\n";
            std::cout << "----------------------------------------\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|   \\<O>                               |\n";
            std::cout << "|    \\+\\                               |\n";
            std::cout << "|     ^ \\                              |\n";
            std::cout << "|    /|                                |\n";
            std::cout << "----------------------------------------\n";
            std::this_thread::sleep_for(0.05s);
            system("cls");

            std::cout << "Press enter to quit.\n";
            std::cout << "----------------------------------------\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|     <O>                              |\n";
            std::cout << "|    --+--                             |\n";
            std::cout << "|      ^                               |\n";
            std::cout << "|      |\\                              |\n";
            std::cout << "----------------------------------------\n";
            std::this_thread::sleep_for(0.05s);
            system("cls");

            std::cout << "Press enter to quit.\n";
            std::cout << "----------------------------------------\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|     \\<O>                             |\n";
            std::cout << "|      \\+\\                             |\n";
            std::cout << "|       ^ \\                            |\n";
            std::cout << "|      /|                              |\n";
            std::cout << "----------------------------------------\n";
            std::this_thread::sleep_for(0.05s);
            system("cls");

            std::cout << "Press enter to quit.\n";
            std::cout << "----------------------------------------\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|        <O>                           |\n";
            std::cout << "|       --+--                          |\n";
            std::cout << "|         ^                            |\n";
            std::cout << "|         |\\                           |\n";
            std::cout << "----------------------------------------\n";
            std::this_thread::sleep_for(0.05s);
            system("cls");

            std::cout << "Press enter to quit.\n";
            std::cout << "----------------------------------------\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|                                      |\n";
            std::cout << "|          \\<O>                        |\n";
            std::cout << "|           \\+\\                        |\n";
            std::cout << "|            ^ \\                       |\n";
            std::cout << "|           /|                         |\n";
            std::cout << "----------------------------------------\n";
            std::this_thread::sleep_for(0.05s);
            system("cls");
        }
    }
};
int main()
{
    Character playerVar;
    //Create and execute thread
    std::thread thread1Var(&Character::printVideo, &playerVar);
    cin.get();//Wait for enter to be pressed
    s_Finished = true;//set bool to stop thread
    thread1Var.join();//handle thread
    cout << "Thanks for watching! " << endl;
    return 0;
}