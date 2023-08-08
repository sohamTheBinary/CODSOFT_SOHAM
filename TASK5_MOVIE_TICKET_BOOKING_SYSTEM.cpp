#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int NUM_ROWS = 5;
const int NUM_COLS = 10;
const double TICKET_PRICE = 10.0;

class MovieBookingSystem {
private:
    vector<vector<bool>> seatAvailability;

public:
    MovieBookingSystem() : seatAvailability(NUM_ROWS, vector<bool>(NUM_COLS, true)) {}

    void displaySeats() {
        for (int row = 0; row < NUM_ROWS; ++row) {
            for (int col = 0; col < NUM_COLS; ++col) {
                char status = seatAvailability[row][col] ? 'O' : 'X';
                cout << status << " ";
            }
            cout << endl;
        }
    }

    bool isSeatAvailable(int row, int col) {
        return seatAvailability[row][col];
    }

    void bookSeat(int row, int col) {
        if (isSeatAvailable(row, col)) {
            seatAvailability[row][col] = false;
            cout << "Seat booked successfully!" << endl;
        } else {
            cout << "Seat is already booked." << endl;
        }
    }
};

int main() {
    MovieBookingSystem movieBookingSystem;
    int choice;

    do {
        cout << "Movie Ticket Booking System" << endl;
        cout << "1. Display available seats" << endl;
        cout << "2. Book a seat" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Available Seats:" <<endl;
                movieBookingSystem.displaySeats();
                break;
            case 2: {
                int row, col;
                cout << "Enter row and column (e.g., 1 3): ";
                cin >> row >> col;

                if (row >= 0 && row < NUM_ROWS && col >= 0 && col < NUM_COLS) {
                    if (movieBookingSystem.isSeatAvailable(row, col)) {
                        movieBookingSystem.bookSeat(row, col);
                    } else {
                        cout << "Selected seat is not available." << endl;
                    }
                } else {
                    cout << "Invalid row or column." << endl;
                }
                break;
            }
            case 3:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 3);

    return 0;
}
