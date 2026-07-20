#include <iostream>
#include <vector>
#include <limits>

// Enums make the code readable and type-safe
enum class CellState {
    Water,
    Ship,
    Hit,
    Miss
};

class BattleshipGame {
private:
    static constexpr int BOARD_SIZE = 4;
    static constexpr int TOTAL_SHIPS = 5;
    
    std::vector<std::vector<CellState>> grid;
    int hits;
    int turns;

    // Helper method to print the player's radar
    void displayBoard() const {
        std::cout << "\n  0 1 2 3\n";
        for (int row = 0; row < BOARD_SIZE; ++row) {
            std::cout << row << " ";
            for (int col = 0; col < BOARD_SIZE; ++col) {
                if (grid[row][col] == CellState::Hit) {
                    std::cout << "X ";
                } else if (grid[row][col] == CellState::Miss) {
                    std::cout << "O ";
                } else {
                    std::cout << "~ "; // Hides un-hit ships and water
                }
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }

    // Helper method for robust input validation
    int getValidCoordinate(const std::string& prompt) const {
        int coord;
        while (true) {
            std::cout << prompt;
            if (std::cin >> coord && coord >= 0 && coord < BOARD_SIZE) {
                return coord; // Valid input
            }
            
            // Clear the error state and empty the input buffer
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a number between 0 and " 
                      << (BOARD_SIZE - 1) << ".\n";
        }
    }

public:
    // Constructor initializes the game state
    BattleshipGame() : hits(0), turns(0) {
        // Initialize the 4x4 grid with water
        grid = std::vector<std::vector<CellState>>(BOARD_SIZE, std::vector<CellState>(BOARD_SIZE, CellState::Water));
        
        // Manually place the ships (matching your original design)
        grid[0][1] = CellState::Ship;
        grid[0][2] = CellState::Ship;
        grid[2][2] = CellState::Ship;
        grid[3][0] = CellState::Ship;
        grid[3][3] = CellState::Ship;
    }

    // Main game loop
    void play() {
        std::cout << "=== Welcome to Battleship ===\n";

        while (hits < TOTAL_SHIPS) {
            displayBoard();
            
            std::cout << "Turn: " << (turns + 1) << " | Hits: " << hits << "/" << TOTAL_SHIPS << "\n";
            int row = getValidCoordinate("Enter row (0-3): ");
            int col = getValidCoordinate("Enter column (0-3): ");

            CellState target = grid[row][col];

            if (target == CellState::Ship) {
                std::cout << "\n*** HIT! ***\n";
                grid[row][col] = CellState::Hit;
                hits++;
            } else if (target == CellState::Water) {
                std::cout << "\n*** MISS! ***\n";
                grid[row][col] = CellState::Miss;
            } else {
                std::cout << "\nYou already fired at those coordinates! Try somewhere else.\n";
            }

            turns++;
        }

        displayBoard();
        std::cout << "Victory! You have sunk all the ships in " << turns << " turns.\n";
    }
};

int main() {
    // Instantiate and run the game
    BattleshipGame game;
    game.play();

    return 0;
}