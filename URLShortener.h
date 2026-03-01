#ifndef URLSHORTENER_H
#define URLSHORTENER_H

#include <iostream>
#include <unordered_map>
using namespace std;

class URLShortener {
private:
    unordered_map<string, string> shortToLong;
    unordered_map<string, int> clickCount;
    int counter;

    string generateShortCode();

public:
    URLShortener();
    string shortenURL(string longURL);
    string redirect(string shortCode);
    void displayStats();
};

#endif
