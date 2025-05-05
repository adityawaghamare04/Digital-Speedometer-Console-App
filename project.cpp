#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

class Vehicle {
private:
    int speed;
    int maxSpeed;
    ofstream logFile;

public:
    Vehicle() : speed(0), maxSpeed(0) {
        logFile.open("speed_log.txt", ios::app);
        if (!logFile) {
            cerr << "Error opening log file!\n";
        }
    }

    ~Vehicle() {
        if (logFile.is_open()) {
            logFile.close();
        }
    }

    void increaseSpeed(int value) {
        speed += value;
        if (speed > maxSpeed) maxSpeed = speed;
        logSpeed();
        checkLimit();
        cout << "Current Speed: " << speed << " km/h\n";
    }

    void decreaseSpeed(int value) {
        speed -= value;
        if (speed < 0) speed = 0;
        logSpeed();
        cout << "Current Speed: " << speed << " km/h\n";
    }

    void showStatus() {
        cout << "Current Speed: " << speed << " km/h\n";
        cout << "Max Speed Reached: " << maxSpeed << " km/h\n";
    }

private:
    void checkLimit() {
        if (speed > 80) {
            cout << "⚠️  Warning: Overspeeding!\n";
        }
    }

    void logSpeed() {
        if (logFile.is_open()) {
            logFile << "Speed: " << speed << " km/h\n";
        }
    }
};

void showMenu() {
    cout << "\n--- Digital Speedometer ---\n";
    cout << "1. Increase Speed (+10 km/h)\n";
    cout << "2. Decrease Speed (-10 km/h)\n";
    cout << "3. Show Speed Status\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    Vehicle car;
    int choice;

    while (true) {
        showMenu();
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        switch (choice) {
        case 1:
            car.increaseSpeed(10);
            break;
        case 2:
            car.decreaseSpeed(10);
            break;
        case 3:
            car.showStatus();
            break;
        case 4:
            cout << "Exiting...\n";
            return 0;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
