#include "URLShortener.h"

int main() {
    URLShortener shortener;
    int choice;
    string longURL, shortCode;

    do {
        cout << "\n--- URL Shortener ---\n";
        cout << "1. Shorten URL\n";
        cout << "2. Redirect URL\n";
        cout << "3. View Statistics\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Long URL: ";
            cin >> longURL;
            cout << "Short URL Code: "
                 << shortener.shortenURL(longURL) << endl;
            break;

        case 2:
            cout << "Enter Short Code: ";
            cin >> shortCode;
            cout << "Redirecting to: "
                 << shortener.redirect(shortCode) << endl;
            break;

        case 3:
            shortener.displayStats();
            break;

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
