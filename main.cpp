/******************************************************************************
# Author:           Crystal Price
# Assignment:       Descuson 3 (CS161A)
# Date:             10/1/2026
# Description:      calulate a total price with yes no ancers
# Input:            veacale
#                   number of Aults
#                   number of Seniors
#                   number of Youth
#                   number of Bikes
# Output:           
# Sources:          
#******************************************************************************/
#include <iostream>

int main()
{
    //Variables
    int TotalAdults=0;
    int TotalSinor_Disability=0;
    int TotalYouth=0;
    float TotalCost=0;
    int TotalBike=0;
    bool TotalCars= false;
    
    
    //constants
    float CostPAdult=14.95;
    float CostPSenior_Disability=7.40;
    float CostPYouth=5.55;
    float CostPCar=57.90;
    float CostPBike=4.00;
   //start of program
     std::string intput;
    std::cout<<"Welcome to the Washington State Ferries Fare Calculator!"<<std::endl;
    //enter integers
    std::cout << "Are you riding a vehicle on the Ferry (Y/N): "; // Prompt the user
    std::cin >> intput;          // Read the number into the variable
    if (intput == "y" || intput == "yes" || intput == "Y" || intput == "YES")
    {
        TotalCars= true;
    }
    else if (intput == "N" || intput == "n" || intput == "no" || intput == "No")
    {
        TotalCars= false;
        std::cout << "How many Bikes? ";
        std::cin >> TotalBike; 
        
    }
    
    else;
    {
        std::cout<<"not a valid input we will assume you have NO CAR"<<std::endl;
        TotalCars= false;
        std::cout << "How many Bikes? ";
        std::cin >> TotalBike; 
    }
    
    std::cout << "How many Adults? ";
    std::cin >> TotalAdults; 
    std::cout << "How many Seniors/Disability ? ";
    std::cin >> TotalSinor_Disability; 
    std::cout << "How many Youth? ";
    std::cin >> TotalYouth; 
    //calulashons/ print off camands
    if (TotalCars= true);
    {
        TotalCost=CostPCar+(CostPAdult*(TotalAdults-1))+(TotalSinor_Disability*CostPSenior_Disability)+(TotalYouth*CostPYouth);
        std::cout <<"one Car $"<< CostPCar<< std::endl;
        std::cout <<"Total Adults $"<<CostPAdult* (TotalAdults-1)<< std::endl;
        std::cout <<"Total Seniors/Disability $"<<(TotalSinor_Disability*CostPSenior_Disability)<< std::endl;
        std::cout <<"Total Youth $"<<(TotalYouth*CostPYouth)<< std::endl;
        std::cout <<"Your Total $"<< TotalCost << std::endl;
    }
    else if(TotalCars= false);
    {
        TotalCost=(CostPAdult*TotalAdults)+(TotalSinor_Disability*CostPSenior_Disability)+(TotalYouth*CostPYouth)+(TotalBike*CostPBike);
        std::cout <<"Total Bikes $"<< (TotalBike*CostPBike)<< std::endl;
        std::cout <<"Total Adults $"<<CostPAdult* (TotalAdults-1)<< std::endl;
        std::cout <<"Total Seniors/Disability $"<<(TotalSinor_Disability*CostPSenior_Disability)<< std::endl;
        std::cout <<"Total Youth $"<<(TotalYouth*CostPYouth)<< std::endl;
        std::cout <<"Your Total $"<< TotalCost << std::endl;

    }

    //End program
    return 0;

}
