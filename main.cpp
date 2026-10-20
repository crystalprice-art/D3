/******************************************************************************
# Author:           Crystal Price
# Assignment:       Midterm (CS161A)
# Date:             10/1/2026
# Description:      Play rock paper sisors
# Input:            Your play
#                   
# Output:           Who wins 
# Sources:          
#******************************************************************************/
#include <iostream>
int main()
{
    //Constnts
    int Rock=0;
    int Papper=1;
    int Sisors=2;
    //Varibles
    std::string YourPlay;
    int NumberPlay=0;
    int Computer=0;


    
   //start of program
    std::string intput;
    std::cout<<"Welcome to Rock! Paper! Sisors!"<<std::endl<<std::endl;

    //plyaer of the game
    std::cout<<"Rock!"<<std::endl;
    std::cout<<"Paper!"<<std::endl;
    std::cout<<"Sisors!"<<std::endl;
    std::cout << "Shoot! enter (R,P,S): "; 
    std::cin >> YourPlay; 
    //computers pick    
    //Computer randoly pick form line

    //make your play an number
    if (YourPlay == "R" || YourPlay == "Rock" || YourPlay == "r" || YourPlay == "rock")//check if i can do a starts with camand
    {
        NumberPlay=Rock;
    }
    else if (YourPlay == "p" || YourPlay == "paper" || YourPlay == "P" || YourPlay == "Paper")//check if i can do a starts with camand
    {
        NumberPlay=Papper;  
    }
    else if (YourPlay == "s" || YourPlay == "sisors" || YourPlay == "S" || YourPlay == "Sisors")//check if i can do a starts with camand
    {
        NumberPlay=Sisors;  
    }
    else
    {
        std::cout<<"this is a rock parer sisors game You input dus not mach the opshons given. Plesas try agen latter"<<std::endl;
        return 0;
    }
    if(NumberPlay==Computer)
    {
         std::cout<<"Its a Tiy!"<<std::endl;
    }
    else if(NumberPlay=Rock & Computer=Papper || NumberPlay=Papper & Computer= Sisors || NumberPlay=Sisors & Computer=Rock)
    {
        std::cout<<"sorry you loose"<<std::endl;
    
    }
    else
    {
        std::cout<<"you win!"<<std::endl;
    }
    //End program
    return 0;

}
