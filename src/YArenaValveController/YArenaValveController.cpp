// ----------------------------------------------------------------------------
// YArenaValveController.cpp
//
//
// Authors:
// Peter Polidoro peterpolidoro@gmail.com
// ----------------------------------------------------------------------------
#include "../YArenaValveController.h"


using namespace y_arena_valve_controller;

YArenaValveController::YArenaValveController()
{
}

void YArenaValveController::setup()
{
  // Parent Setup
  ModularDeviceBase::setup();

  // Reset Watchdog
  resetWatchdog();

  // Variable Setup

  // Set Device ID
  modular_server_.setDeviceName(constants::device_name);

  // Add Hardware

  // Pins

  // Add Firmware
  modular_server_.addFirmware(constants::firmware_info,
    properties_,
    parameters_,
    functions_,
    callbacks_);

  // Properties

  // Parameters

  // Functions

  // Callbacks
}
