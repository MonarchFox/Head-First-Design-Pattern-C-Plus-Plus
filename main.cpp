#include <iostream>

#include "Chapter_6_The_Command_Pattern/AppliancesCommands.h"
#include "Chapter_6_The_Command_Pattern/ApplianceItems.h"
#include "Chapter_6_The_Command_Pattern/RemoteControl.h"
#include "Chapter_6_The_Command_Pattern/SimpleRemoteControl.h"
using namespace std;


int main()
{
    // Test

    // Case 1
    RemoteControl* remote_control = new RemoteControl();
    Light* light_1 = new Light("living room");
    Light* light_2 = new Light("Bathroom");

    LightOnCommand* light_on_command_1 = new LightOnCommand(light_1);
    LightOnCommand* light_on_command_2 = new LightOnCommand(light_2);

    LightOffCommand* light_off_command_1 = new LightOffCommand(light_1);
    LightOffCommand* light_off_command_2 = new LightOffCommand(light_2);

    remote_control->SetCommand(0, light_on_command_1, light_off_command_1);
    remote_control->SetCommand(1, light_on_command_2, light_off_command_2);

    remote_control->OnButtonPushed(0);
    remote_control->OffButtonPushed(1);

    std::cout << remote_control->ToString();

    return 0;
}
