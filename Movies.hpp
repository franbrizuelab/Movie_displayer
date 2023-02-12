#ifndef MOVIES_HPP
#define MOVIES_HPP
#include <vector>
#include <string>
#include "movie.hpp"

class Movies
{
private:
    std::vector<Movie> movies;
    
public:
    Movies();
    ~Movies();
    bool add_movie(std::string &name, std::string &rating, int &watched); 
    
    bool add_movie(Movie &movie_to_insert);

    
    bool increment_watched(std::string name); 
    
    void display() const; 
 
};

#endif // MOVIES_HPP
