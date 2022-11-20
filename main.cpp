//Kenneth V. Pascua
//COSC 1437-58001 - Nov 19 2022
//Dr. T

#include <iostream>
#include <string> 
#include <unistd.h>
#include "Input_Validation_Extended.h"
#include "classes.h"

using namespace std; 


int main() 
{
  Scoreboard s;
  Team tOne;
  Team tTwo; 
  
  string newTeamName = ""; 
  string userChoice = ""; 
  string newCoachName = ""; 
  string newHomeCity = "";
  int homeTeamQuestion = 0; 
  int newScore = 0; 
  int newTimeoutCount = 0;

  tOne.setHomeStatus(true); 

  s.setHome(tOne); 
  s.setVisitor(tTwo); 

  do 
  {
      system("clear");
      s.showScoreboard(); 
      
      cout << "A = Update Home Team Name" << endl; 
      cout << "B = Update Home Team Score" << endl; 
      cout << "C = Update Home Team Timeouts Taken" << endl;
      cout << "D = Update Home Team Home City" << endl;
      cout << "E = Update Home Team Team Coach" << endl;
      cout << "F = Update Home Status" << endl; 
      cout << "G = Update Visitor Team Name" << endl; 
      cout << "H = Update Visitor Team Score" << endl; 
      cout << "I = Update Visitor Team Timeouts Taken" << endl;
      cout << "J = Update Visitor Team Home City" << endl;
      cout << "K = Update Visitor Team Team Coach" << endl;
      cout << "X = Exit" << endl;
      cout << "> "; 
      cin >> userChoice; 

      if(userChoice == "A" || userChoice == "a")
      {
        
        cout << "****Update Home Team Score module*** " << endl; 
        cout << "\nPlease enter a new name for the home team: ";
        cin >> newTeamName; 
        
        tOne.setTeamName(newTeamName); 
      }
      else if(userChoice == "B" || userChoice == "b")
      {
        cout << "\nUpdate Home Score Module****" << endl; 
        cout << "\nPlease enter a new score for the home team: "; 
        cin >> newScore; 
        tOne.setScore(newScore);          
      }
      else if(userChoice == "C" || userChoice == "c")
      {
        cout << "\nUpdate Home Timeouts Module****" << endl;
        cout << "\nPlease enter how many timeouts the home team has taken: ";
        cin >> newTimeoutCount;
        tOne.setTimeoutCount(newTimeoutCount);
      }
      else if (userChoice == "D" || userChoice == "d")
      {
        cout << "\nUpdate Home Home City Module****" << endl;
        cout << "\nPlease enter the home team's city name: ";
        cin >> newHomeCity;
        tOne.setHomeCity(newHomeCity);
      }
      else if(userChoice == "E" || userChoice == "e")
      {
          cout << "\nUpdate Home Coach Module****" << endl; 
          cout << "\nPlease enter the home coach name: "; 
          cin >> newCoachName; 
          tOne.setCoachName(newCoachName); 
      }
      else if(userChoice == "F" || userChoice == "f")
      {
        cout << "\nUpdate Home Status Module****" << endl; 
        cout << "\nWho is the home team: 1 = T1, 2=T2: ";  
        homeTeamQuestion = validateInt(homeTeamQuestion); 
       
        if(homeTeamQuestion == 1)
        {
          tOne.setHomeStatus(true); 
          tTwo.setHomeStatus(false); 
        }
        else if(homeTeamQuestion == 2)
        {
          tOne.setHomeStatus(false); 
          tTwo.setHomeStatus(true);
        }
        else
        {
          cout << "\nInvalid Input!" << endl;
          sleep(2); 
        }
      }
      else if(userChoice == "G" || userChoice == "g")
      {
        
        cout << "****Update Visitor Team Score module*** " << endl; 
        cout << "\nPlease enter a new name for the visitor team: ";
        cin >> newTeamName; 
        
        tTwo.setTeamName(newTeamName); 
      }
      else if(userChoice == "H" || userChoice == "h")
      {
        cout << "\nUpdate Visitor Score Module****" << endl; 
        cout << "\nPlease enter a new score for the visitor team: "; 
        cin >> newScore; 
        tTwo.setScore(newScore);          
      }
      else if(userChoice == "I" || userChoice == "i")
      {
        cout << "\nUpdate Visitor Timeouts Module****" << endl;
        cout << "\nPlease enter how many timeouts the visitor team has taken: ";
        cin >> newTimeoutCount;
        tTwo.setTimeoutCount(newTimeoutCount);
      }
      else if (userChoice == "J" || userChoice == "j")
      {
        cout << "\nUpdate Visitor Home City Module****" << endl;
        cout << "\nPlease enter the visitor team's city name: ";
        cin >> newHomeCity;
        tTwo.setHomeCity(newHomeCity);
      }
      else if(userChoice == "K" || userChoice == "k")
      {
          cout << "\nUpdate Visitor Coach Module****" << endl; 
          cout << "\nPlease enter the visitor coach name: "; 
          cin >> newCoachName; 
          tTwo.setCoachName(newCoachName); 
      }
      else if(userChoice == "X" || userChoice == "x")
      {
        cout << "Exit chosen." << endl; 
      }
      else 
      {
        cout << "\nInvalid input." << endl; 
        sleep(2); 
      }

      s.setHome(tOne); 
      s.setVisitor(tTwo); 
  
  }while(userChoice != "X" && userChoice != "x");


  return 0; 
}