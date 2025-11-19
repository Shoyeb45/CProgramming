# include<iostream>
# include<thread>
# include<chrono>
# include<system_error>

using namespace std;


void task1() {
    cout << "Thread 1 is running, ID: " << this_thread::get_id() << "\n";
}

void task2() {
    cout << "Thread 2 is running, ID: " << this_thread::get_id() << "\n";
}

int main() {
    try {
        thread thr1(task1);
        thread thr2(task2);
    
        cout << "thr1 id: " << thr1.get_id() << "\n";
        cout << "thr2 id: " << thr2.get_id() << "\n";

        thr1.join();
        cout << "thr1 joined.\n"; 

        thr2.detach();
        cout << "thr2 detached.\n";

        cout << "Main thread sleeping for 1 second...\n";
        this_thread::sleep_for(chrono::seconds(1));
        cout << "Main thread awake.\n";
        return 0;
    } catch (system_error const& err) {
        cerr << err.what() << "\n";
        return -1;
    }
}