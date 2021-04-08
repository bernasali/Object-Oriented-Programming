#pragma once

#include <iostream>
#include<cstring>



class Film {
private:
    char* companyName;
    char* directorName;
    int rewards;

    void copy(const Film& other);

public:
    Film();
    Film(const Film& other);
    Film& operator=(const Film& other);
    ~Film();

    void setCompanyName(const char* _companyName);
    char* getCompanyName();

    void setDirectorName(const char* _directorName);
    char* getDirectorName()const;

    void setRewards(int _rewards);
    int getRewards() const;


    void print();
};



