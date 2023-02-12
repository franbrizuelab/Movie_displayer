#include <iostream>
#include <windows.h>
#include "Movies.hpp"
#include "Movie.hpp"
#include <limits>
using namespace std; 

void display_menu();
char selection{};
char select();
Movie set_attributes();
string get_movie_name();
    
int main() {
       Movies my_movies;
do {
        display_menu();
        selection = select();
        switch (selection) {
            case 'D' : {
            my_movies.display();
            break;
            }
            case 'A' : {
            Movie kore = set_attributes();
            my_movies.add_movie(kore); 
            break;
            }
            case 'I' : {
            my_movies.increment_watched(get_movie_name());
            break;
            }
            case 'Q': {
            cout<<"\nSee you later...\n";
            break;
            }
            default : {
            cout<<"\n\nUnvalid option, please try again\n\n";
            }
            
        }
            
    }while (selection != 'Q');
    cout <<"\nBye!"<<endl;
    Sleep(2000);
        return 0;
    }

void display_menu() {
    cout<<"--------------------Welcome to the movie collection displayer--------------------"<<endl;
    cout<<"\n     D) Display list of movies"<<endl;
    cout<<"\n     A) Add a new movie to the list"<<endl;
    cout<<"\n     I) Increment the number of times you watched a movie"<<endl;
    cout<<"\n     Q) Exit the program"<<endl;
    cout<<"---------------------------------------------------------------------------------"<<endl;
    cout<<"\n Press a key to continue"<<endl;
    }
    
char select() {
    cin>>selection;
    char temp = toupper(selection);
    return  temp;
}
   Movie set_attributes() {
    Movie temp{};
    cout<<"\n\n\n\n\n\n"<<endl;
    cout<<"\n\nTo add a movie, please: "<<endl;
    cout<<"\n\nEnter the name of the movie: "<<endl;
    string name{};
    int watched{1};
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, name);
    temp.set_name(name);
    cout<<"Enter the rating of the movie: "<<endl;
    string rating{};
    getline(cin, rating);
    temp.set_rating(rating);
    cout<<"How many times did you watch the movie? Please type: "<<endl;
    cin>>watched;
    temp.set_watched(watched);
    return temp;
    } 
    
 string get_movie_name() {
     cout<<"\nEnter the name of the movie you which you watched one more time: "<<endl;
     string temp{};
     cin.ignore(numeric_limits<streamsize>::max(), '\n');
     getline (cin, temp);
     return temp;
     }