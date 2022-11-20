#include <iostream>
#include <string> 
#include <unistd.h>

using namespace std; 

class Team 
{
  private:
    int score; 
    bool homeStatus; 
    string teamName; 
    int timeoutCount; 
    string coachName;
    string homeCity;
  public:
      Team() 
      {
        score = 0; 
        homeStatus = false; 
        teamName = "DefaultTeamName"; 
        timeoutCount = 0; 
        coachName = "DefaultCoachName"; 
        homeCity = "DefaultHomeCity";
      }
      void setScore(int s) { score = s; }
      void setHomeStatus(bool hs) { homeStatus = hs; }
      void setTeamName(string n) { teamName = n; }
      void setTimeoutCount(int sTC) { timeoutCount = sTC; }
      void setCoachName(string sCN) { coachName = sCN; }
      void setHomeCity (string sHC) { homeCity = sHC; }
      int getScore() const { return score; }
      bool getHomeStatus() const { return homeStatus; }
      string getTeamName() const { return teamName; }
      int getTimeoutCount() const { return timeoutCount; }
      string getCoachName() const { return coachName; }
      string getHomeCity() const { return homeCity;}
};

class Scoreboard
{
  private:
    int half; 
    Team home; 
    Team visitor; 
  public: 
    Scoreboard()
    {
      half = 0; 
    }  
    void setHalf(int h) { half = h; }
    void setHome(Team hSet) { home = hSet; }
    void setVisitor(Team vSet) { visitor = vSet; }
    int getHalf() const { return half; }
    Team getHome() const { return home; }
    Team getVisitor() const { return visitor; }
    void showScoreboard()
    {
      string color = ""; 
      string reset = "\x1b[0m";
      color = "\x1b[32;4m";  
      string score = "\x1b[36;1m";  
      string score2 = "\x1b[37;1m";
      cout << color << "Football Scoreboard" << reset << endl; 
      cout << home.getTeamName() << "\t\t" << visitor.getTeamName() << endl; 
      cout << "\t" << score << home.getScore() << "\t" << home.getTimeoutCount() << reset << "\t\t\t\t\t\t" << score2 << visitor.getScore() << "\t" << visitor.getTimeoutCount() << endl; 
      cout << score << home.getCoachName() << reset << "\t\t" << score2 << visitor.getCoachName() << endl; 
      cout << score << home.getHomeCity() << reset << "\t\t" << score2 << visitor.getHomeCity() << endl;
      for(int i = 0; i < 47; i++) { cout << "*"; } cout << endl;
      
       cout << "Home> \t"; 
       if(home.getHomeStatus() == true)
       {
         cout << "Team 1: " << home.getTeamName() << "*"; 
       }
       else if(visitor.getHomeStatus() == true)
       {
         cout << "Team 2: " << visitor.getTeamName() << "*"; 
       }
       else
       {
         cout << "Error: "; 
       }
       
       cout  << endl; 
    }
};