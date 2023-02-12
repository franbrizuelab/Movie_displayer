#include "Movies.hpp"
#include "Movie.hpp"
#include <iostream>

Movies::Movies()
{
}

Movies::~Movies()
{
}

 bool Movies::add_movie(std::string &name, std::string &rating, int &watched) {
    std::cout<<"You asked to add: "<<name<<"\n";
     for (Movie &movie: movies) {
        if (movie.get_name() == name) {
        std::cout<<"Sorry, that movie is already on the list!\n"<<std::endl;
            return false;
        }
    }
    Movie temp {name, rating, watched};
    movies.push_back(temp);
    std::cout<<name<<" successfully added!"<<std::endl;
    return true;
}

 bool Movies::add_movie(Movie &movie_to_insert) {
    std::cout<<"You asked to add: "<<movie_to_insert.get_name()<<"\n";
     for (Movie &movie: movies) {
        if (movie.get_name() == movie_to_insert.get_name()) {
        std::cout<<"Sorry, that movie is already on the list!\n"<<std::endl;
            return false;
        }
    }
    movies.push_back(movie_to_insert);
    std::cout<<"n\n\n\n\n\n\n\n\n\n\n";
    std::cout<<movie_to_insert.get_name()<<" successfully added!\n"<<std::endl;
    std::cout<<"n\n\n\n\n\n\n\n\n\n\n";
    return true;
}
    
    bool Movies::increment_watched(std::string name) {
    for (Movie &movie: movies) {
        if (movie.get_name() == name) {
            movie.increment_watched();
            std::cout<<name<<" watched one more time\n";
            return true;
        }
    }
    std::cout<<"\n\n\n\n\n\n\n\n\n\n\nSorry, we didn't find that movie in the list, please try again\n\n\n\n\n\n\n\n\n\n\n";
    return false;
}
    
    void Movies::display() const {
    if (movies.size() == 0){
        std::cout<<"Sorry, no movies to display\n"<<std::endl;    
    }else {
        std::cout<<"\n\n\n\n\n\n\n\n\n\n\n";
        std::cout<<"                  List of movies                 ";
        std::cout<<"\n==============================================="<<std::endl;
        for (const Movie &movie: movies)
            movie.display();
        std::cout<<"===============================================\n"<<std::endl;
    }
    
}