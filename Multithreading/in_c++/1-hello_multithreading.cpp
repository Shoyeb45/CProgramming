#include<iostream>
#include<system_error>
#include<thread>

using namespace std;
class BackgroundTask {
public:

    void operator()() const {
        cout << "Hello Multithreading world.\n";
    }
};

int main() {
    try {
        BackgroundTask task;
        thread my_thread(task);

        my_thread.join();
    } catch(system_error const& err) {
        std::cerr << err.what() << '\n';
        return -1;
    }
}