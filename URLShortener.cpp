#include "URLShortener.h"
#include <sstream>

URLShortener::URLShortener() {
    counter = 1;
}

string URLShortener::generateShortCode() {
    stringstream ss;
    ss << "u" << counter++;
    return ss.str();
}

string URLShortener::shortenURL(string longURL) {
    string shortCode = generateShortCode();
    shortToLong[shortCode] = longURL;
    clickCount[shortCode] = 0;
    return shortCode;
}

string URLShortener::redirect(string shortCode) {
    if (shortToLong.find(shortCode) != shortToLong.end()) {
        clickCount[shortCode]++;
        return shortToLong[shortCode];
    }
    return "Invalid Short URL!";
}

void URLShortener::displayStats() {
    cout << "\n--- URL Statistics ---\n";
    for (auto &pair : shortToLong) {
        cout << "Short URL: " << pair.first
             << " | Original: " << pair.second
             << " | Clicks: " << clickCount[pair.first] << endl;
    }
}
