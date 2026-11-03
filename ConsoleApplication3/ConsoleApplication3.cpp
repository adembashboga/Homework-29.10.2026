#include <iostream>
#include <string>

using namespace std;

class Processor 
{
public:
    string model;
    int cores;
    Processor(string m, int c) : model(m), cores(c) {}
};

class Memory 
{
public:
    int capacity_gb;
    string type;
    Memory(int cap, string t) : capacity_gb(cap), type(t) {}
};

class Storage 
{
public:
    int capacity_gb;
    string type;
    Storage(int cap, string t) : capacity_gb(cap), type(t) {}
};

class GPU 
{
public:
    string model;
    int vram_gb;
    GPU(string m, int v) : model(m), vram_gb(v) {}
};

class Display 
{
public:
    float size;
    string resolution;
    Display(float s, string r) : size(s), resolution(r) {}
};

class Battery 
{
public:
    int capacity_wh;
    int health;
    Battery(int cap, int h) : capacity_wh(cap), health(h) {}
};

class Keyboard 
{
public:
    string layout;
    bool backlight;
    Keyboard(string l, bool b) : layout(l), backlight(b) {}
};

class Laptop 
{
private:
    string brand;
    string model;
    Processor cpu;
    Memory ram;
    Storage storage;
    GPU gpu;
    Display display;
    Battery battery;
    Keyboard keyboard;

public:
    Laptop(string b, string m, Processor c, Memory r, Storage s, GPU g, Display d, Battery bat, Keyboard k)
        : brand(b), model(m), cpu(c), ram(r), storage(s), gpu(g), display(d), battery(bat), keyboard(k) {
    }

    void printInfo() {
        cout << "Laptop: " << brand << " " << model << endl;
        cout << " - CPU: " << cpu.model << " (" << cpu.cores << " cores)" << endl;
        cout << " - RAM: " << ram.capacity_gb << "GB " << ram.type << endl;
        cout << " - Storage: " << storage.capacity_gb << "GB " << storage.type << endl;
        cout << " - GPU: " << gpu.model << " (" << gpu.vram_gb << "GB VRAM)" << endl;
        cout << " - Display: " << display.size << "\" (" << display.resolution << ")" << endl;
        cout << " - Battery: " << battery.capacity_wh << "Wh (Health: " << battery.health << "%)" << endl;
        cout << " - Keyboard: " << keyboard.layout << ", Backlight: " << (keyboard.backlight ? "Yes" : "No") << endl;
    }
};

int main() 
{
    Processor cpu("Intel Core i7-13700H", 14);
    Memory ram(16, "DDR5");
    Storage storage(1024, "NVMe SSD");
    GPU gpu("NVIDIA RTX 4060", 8);
    Display display(15.6, "1920x1080");
    Battery battery(70, 100);
    Keyboard keyboard("ANSI / UA", true);

    Laptop myLaptop("ASUS", "ROG Zephyrus", cpu, ram, storage, gpu, display, battery, keyboard);
    myLaptop.printInfo();

    return 0;
}