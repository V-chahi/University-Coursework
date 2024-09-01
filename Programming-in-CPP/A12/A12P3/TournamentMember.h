/*
CH-230-A
A12_P3.c
m.chahi@jacobs-university.de
*/


#include <string>
#include <cstring>

class TournamentMember {

    private:

        char fname[36];
        char lname[36];
        char dob[11];
        char role[15];
        int rank;
        static std::string location;

    public:

        TournamentMember(char[], char[], char[], char[], int);
        TournamentMember();                         
        TournamentMember(const TournamentMember&);  
        ~TournamentMember();  
        
             
        void setFname(char c[]) {  
            strcpy(fname, c);
        }                     
        void setLname(char c[]) {
            strcpy(lname, c);
        }
        void setDob(char c[]) {
            strcpy(dob, c);
        }   
        void setRole(char c[]) {
            strcpy(role, c);
        }  
        void setRank(int a) {
            rank = a;
        }  
        static void setLocation(std::string& l){      
            location = l;
        }


        const char * getFname() const{
            return fname;
        }       
        const char * getLname() const{
            return lname;
        }
        const char * getDob() const{
            return dob;
        }
        const char * getRole() const{
            return role;
        }
        int getRank() const{
            return rank;
        }

        std::string getLocation() const{
            return location;
        }

        void print() const;                         
};


class Player : public TournamentMember {
    private:
        int number;
        char position[36];
        int goals;
        char foot[14];
    public:
        Player(char[], char[], char[], char[], int, int, char[], 
        int, char[]);                
        Player();                    
        Player(const Player&);       
        ~Player();                  

        void setNumber(int n) {    
            number = n; 
        }
        void setPosition(char c[]) {    
            strcpy(position, c);
        }
        void setFoot(char c[]) {    
            strcpy(foot, c);
        }


        int getNumber() const {
            return number;
        } 
        const char * getPosition() const {
            return position;
        } 
        const char * getFoot() const {
            return foot;
        }   
        int getGoals() const {
            return goals;
        }       

        void printPlayer() const;

        void incGoals();                    
};