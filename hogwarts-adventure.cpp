// This game fulfills Codecademy's requirements for the Text Adventure Project. In it, the player decides which
// way to go when deciding for an adventure in Hogwarts.
// Created by Nuara Costa


#include <iostream>


int main (){

    std::cout << "Welcome to the 'Hogwarts Adventure! " << std::endl;
    std::cout << "Choose from the following options: " << std::endl;

    //options
    char player_choice1;
    std::cout << "a) Play the game." << std::endl << "q) Quit " << std::endl;
    std::cin >> player_choice1;

    while (player_choice1 != 'q') {

        char player_choice2;


        for (int i = 0; i < 3 && player_choice2 != '1' && player_choice2 != '2' && player_choice2 != '3' && player_choice2 != '4'; i++){
            std::cout << "You just got your Hogwarts letter. You have found out you're a wizard! You hop on the Hogwarts Express, " << std::endl;
            std::cout << "Sail through the lake and finally get to the castle. You're welcomed in the Great Hall for the Sorting Cerimony. " << std::endl;
            std::cout << "Time to be sorted into one of the four Houses: Gryffindor, Slytherin, Hufflepuff or Ravenclaw. " << std::endl;
            std::cout << "Pick a number: " << std::endl;
            std::cout << "1, 2, 3, or 4 " << std::endl;
            std::cin >> player_choice2;
        }

        switch (player_choice2) {

            case '1':
                std::cout << "You're a Gryffindor! " << std::endl;
                break;

            case '2':
                std::cout << "You're a Ravenclaw! " << std::endl;
                break;

            case '3':
                std::cout << "You're a Slytherin! " << std::endl;
                break;

            case '4':
                std::cout << "You're a Hufflepuff! " << std::endl;
                break;

            default:
                std::cout << "Sorry, you haven't entered a valid choice. " << std::endl;
                std::cout << "Goodbye! " << std::endl;
                return 0;
        }

        std::cout << "Now that you have been selected to your house, you can go to your common room. " << std::endl;
        std::cout << "You met your best friend and are ready to start your Hogwarts adventure! During the trip on the train, "
                     "you heard about how well your dad did in Quidditch and decided to check that trophy room tonight! " << std::endl;
        std::cout << "Your friend is up for the task and you both decide to go out when everyone is asleep. " << std::endl;
        std::cout << "What you were not expecting is that Peeves, the poltergeist was in your corridor before you both left. " << std::endl;
        std::cout << "What are you going to do now? " << std::endl;
        char player_choice3;

        for (int i = 0; i < 3 && player_choice3 != 'a' && player_choice3 != 'b'; i++) {
            std::cout << "Enter 'a' if you decide to go back to the common room. " << std::endl;
            std::cout << "Enter 'b' if you decide to go through the corridor. " << std::endl;
            std::cin >> player_choice3;
        }

        if (player_choice3 != 'a' && player_choice3 != 'b'){
            std::cout << "That's not a valid option. You got expelled. " << std::endl;
            std::cout << "Goodbye! " << std::endl;
        } else if (player_choice3 == 'a'){
            std::cout << "You turn back to the common room. As soon as you do so, you run into the prefect. He asks you why"
                         "are you not in your beds. " << std::endl;
            std::cout << "You give him some lame excuse about looking for a bathroom but he catches you in your lie. "
                         "He takes 50 points off each of you and send you to detention the next day. " << std::endl;
            return 0;
        } else {
            std::cout << "You get to Peeves, who then sends you through a secret trapdoor. " << std::endl;
            std::cout << "Through the trapdoor, you fall into another corridor where you meet a professor. He asks why are you both out of bed" << std::endl;
            std::cout << "You tell him the truth. You wanted to see your dad's trophy in the trophy room. He believes you and tell you to look for it tomorrow morning" << std::endl;
        }

        char player_choice4;

        for (int i = 0; i <3 && player_choice4 != 'a' && player_choice4 != 'b'; i++) {
            std::cout << "Enter 'a' if you decide to not go back to bed after the professor leaves. " << std::endl;
            std::cout << "Enter 'b' if you decide to go back to bed when the professor leaves. " << std::endl;
            std::cin >> player_choice4;
        }

        if (player_choice4 != 'a' && player_choice4 != 'b'){
            std::cout << "Sorry, not a valid choice. " << std::endl;
            std::cout << "Goodbye. " << std::endl;
        } else if (player_choice4 == 'a') {
            std::cout << "You both pretend to go into the common room and leave as soon as the professor leaves. " << std::endl;
            std::cout << "Then, you go down the opposite corridor and find yourself behind Mr. Filch's cat, Mrs. Norris." << std::endl;
            std::cout << "She turns to face you and you feel that you have about 2 minutes before Filch appears. You can hear his footsteps at a distance. " << std::endl;
            std::cout << "You enter a broom cupboard. " << std::endl;
        } else {
            std::cout << "You enter the common room and run into the prefect. He tells you both to go to bed and not cause any more trouble. " << std::endl;
            std::cout << "You accept your fate and go back to bed. " << std::endl;
        }

        std::cout << "At this point, you realize it's not the best choice to go about the castle on your own at night, especially if you barely know it. " << std::endl;
        std::cout << "So you decide to keep your mischiefs to yourself for now and go back to them when better prepared. " << std::endl;

        return 0;
    }
    std::cout << "Thank you for playing 'Hogwarts Adventure' ";

    }


