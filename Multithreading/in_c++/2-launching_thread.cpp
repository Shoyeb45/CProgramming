# include<iostream>
# include<thread>
# include<string>
# include<system_error>

using namespace std;

class BackgroundTask {
public:
    void operator()(string_view name) const {
        cout << "Hello " << name << "\n";
    }
};  

int launch_my_thread() {
    try {
        BackgroundTask task;

        std::thread my_thread(task, "Shoyeb");
    } catch(system_error const& err) {
        cout << err.what() << "\n";
        return -1;
    }
    return 0;
}

int main() {
    try {
        launch_my_thread();
        
    } catch(system_error const& err) {
        cerr << err.what() << "\n";
        return -1;
    }

    return 0;
}