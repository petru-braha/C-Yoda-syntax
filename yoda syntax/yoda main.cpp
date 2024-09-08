#include <iostream>
#include <fstream>
#include <sstream>
#include <array>

#include <chrono>
#include <thread>

using std::cout;
using std::cerr;
using std::ifstream;
using std::istringstream;
using std::array;
using std::string;

// errors


const size_t BUFFER_SIZE = 1024;

bool empty_file(const char* file_name)
{
    int length;
    ifstream file(file_name); 
    if (!file.is_open())
    {
        cerr << "error - file: can not open.\n";
        exit(EXIT_FAILURE);
    }

    file.seekg(file._Seekbeg, std::ios::end);
    length = file.tellg(); 
    file.close();

    return length == 0;
}

void start_up()
{
    if (empty_file("content.txt"))
    {
        std::cout << "please paste your code in the \"paste your code here.txt\".\n"
            << "do all the adjustments needed before saving the file.\n"
            << "saving it will make the program run.\n\n";

        using namespace std::this_thread;
        using namespace std::chrono;
        sleep_for(seconds(3));
    }

    while (empty_file("content.txt")); // wait for the user to paste content
    system("cls");
}

void opearator_tweak(array<char, BUFFER_SIZE>& arr)
{
    size_t index = 0;
    while (index < BUFFER_SIZE)
    {
        
    }

}

int main()
{
    start_up();

    ifstream file("content.txt");
    if (!file.is_open()) 
    {
        cerr << "error - file: can not open.\n";
        exit(EXIT_FAILURE);
    }
    
    size_t frequency = 0;
    array<char, BUFFER_SIZE> buffer;
    istringstream string_parser;
    
    // main loop
    while (file.read(buffer.data(), buffer.size()))
    {
        // reading
        size_t bytes_read = file.gcount();
        string_parser.str(string(buffer.data(), bytes_read));
        string_parser.clear();

        // modifying
        //opearator_tweak(buffer);
        
        // printing
        string line;
        while (getline(string_parser, line))
            cout << line << '\n';
    }
    
    // last check
    size_t bytes_read = file.gcount();
    if (bytes_read > 0) {
        string last_chunk(buffer.data(), bytes_read);
        cout << last_chunk;
    }
    
    file.close();
    return 0;
}


/*
* 
* #define 
const 
  ()
=
wfin >> chunck

ptr = strchr(chunk, "=");
if((ptr -1 ) invalid)
    exception
else if valid
    if(ptr - 1 == !) 
        check first parameter

if(ptr - 1 == =)
else

write to file
*/
