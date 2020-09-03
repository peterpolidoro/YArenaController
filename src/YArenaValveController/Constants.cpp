// ----------------------------------------------------------------------------
// Constants.cpp
//
//
// Authors:
// Peter Polidoro peterpolidoro@gmail.com
// ----------------------------------------------------------------------------
#include "Constants.h"


namespace y_arena_valve_controller
{
namespace constants
{
CONSTANT_STRING(device_name,"y_arena_valve_controller");

CONSTANT_STRING(firmware_name,"YArenaValveController");
// Use semantic versioning http://semver.org/
const modular_server::FirmwareInfo firmware_info =
{
  .name_ptr=&firmware_name,
  .version_major=1,
  .version_minor=0,
  .version_patch=0,
};

CONSTANT_STRING(hardware_name,"y_arena_valve_controller");

// Pins

// Units

// Properties
CONSTANT_STRING(initial_valves_setting_property_name,"initialValvesSetting");

// Parameters
CONSTANT_STRING(valves_parameter_name,"valves");

// Functions
CONSTANT_STRING(set_valves_function_name,"setValves");

// Callbacks
CONSTANT_STRING(set_all_valves_off_callback_name,"setAllValvesOff");

// Errors
}
}
