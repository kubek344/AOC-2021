#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	fstream input;
	input.open("input.txt");
	string command;
	int depth = 0, forward = 0, aim = 0;
	while (getline(input, command))
	{
		if (command.substr(0, command.find(" ")) == "up")
		{
			aim = aim - stoi(command.substr(command.length() - 1, command.find(" ")));
		}
		else if (command.substr(0, command.find(" ")) == "forward")
		{
			forward = forward + stoi(command.substr(command.length() - 1, command.find(" ")));
			depth = depth + aim * stoi(command.substr(command.length() - 1, command.find(" ")));
		}
		else if (command.substr(0, command.find(" ")) == "down")
		{
			aim = aim + stoi(command.substr(command.length() - 1, command.find(" ")));
		}
	}
	cout << "your answer is " << depth * forward;
}

