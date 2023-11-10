#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to display the to-do list
void displayTasks(const vector<string>& tasks) {
    cout << "To-Do List:" << endl;
    for (int i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}

int main() {
    vector<string> tasks;

    while (true) {
        cout << "Designed by MIT."<< endl;
        cout << "Options:" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. List Tasks" << endl;
        cout << "3. Remove Task" << endl;
        cout << "4. Quit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string task;
                cout << "Enter the task: ";
                cin.ignore(); // Clear the newline character from the buffer.
                getline(cin, task);
                tasks.push_back(task);
                cout << "Task added." << endl;
                break;
            }
            case 2: {
                displayTasks(tasks);
                break;
            }
            case 3: {
                displayTasks(tasks);
                int taskIndex;
                cout << "Enter the task number to remove: ";
                cin >> taskIndex;
                if (taskIndex >= 1 && taskIndex <= tasks.size()) {
                    tasks.erase(tasks.begin() + taskIndex - 1);
                    cout << "Task removed." << endl;
                } else {
                    cout << "Invalid task number." << endl;
                }
                break;
            }
            case 4: {
                cout << "Goodbye!" << endl;
                return 0;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    }

    return 0;
}
