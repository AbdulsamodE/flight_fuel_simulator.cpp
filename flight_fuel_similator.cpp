#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    string airplaneType, airplaneName, airplaneEngineType, airplaneModel;
    double standardEmptyWeight, payloadWeight, maximumFuelCapacity, airplaneOverallEfficiency, maxFuelFlowRate, airplaneRatedThrust;
    cout << "Aircraft Name: ";
    cin >> airplaneName;
    cout << "Aircraft Model: " ;
    cin >> airplaneModel;
    cout << "Aircraft Type: " ;
    cin >> airplaneType;
    cout << "Aircraft Engine Type: " ;
    cin >> airplaneEngineType;
    cout << "Aircraft Empty Weight (kg): ";
    cin >> standardEmptyWeight;
    cout << "Payload Weight (kg): " ;
    cin >> payloadWeight;
    cout << "Aircraft Maximum Fuel Capacity (kg): " ;
    cin >> maximumFuelCapacity;
    cout << "Aircraft Overall Engine Efficiency: " ;
    cin >> airplaneOverallEfficiency;
    cout << "Maximum Fuel Flow Rate (kg/hr): ";
    cin >> maxFuelFlowRate;
    cout << "Aircraft  Maximum Rated Thrust (kN): " ;
    cin >> airplaneRatedThrust;
    double maxSFC = maxFuelFlowRate / airplaneRatedThrust;
    cout << "Aircraft Maximum SFC: " << maxSFC << " kg/kN/hr\n" ;
    // Factors influencing Flight Fuel Burn
    double throttleSetting, throttleSettingUsedInphase, phaseFuelFlowRate, phaseDistance, flightSpeed,  airVelocity;
    double fuelBurntDuringTaxiPhase, fuelBurntDuringTakeoffPhase, fuelBurntDuringClimbPhase, fuelBurntDuringCruisePhase, fuelBurntDuringDescentPhase, fuelBurntDuringLandingPhase;
    // Taxi Phase Parameters
    cout << "\n~~~Taxi Phase~~~\n" ;
    cout <<"Thrust (% of aircraftMaxThrust): " ;
    cin >> throttleSetting;
    cout <<"Fuel Flow Rate (kg/hr): " ;
    cin >> phaseFuelFlowRate;
    throttleSettingUsedInphase = (throttleSetting / 100) * airplaneRatedThrust;
    double taxiPhaseSFC = phaseFuelFlowRate / throttleSettingUsedInphase;
    cout << "SFC: " << taxiPhaseSFC << " (kg/kN/hr)\n";
    cout << "Mission Segment Distance (km): " ;
    cin >> phaseDistance;
    cout << "Aircraft Speed over Ground (km/hr): " ;
    cin >> flightSpeed;
    cout << "Atmospheric Wind Speed (km): " ;
    cin >> airVelocity;
    if (flightSpeed + airVelocity != 0) {
        fuelBurntDuringTaxiPhase = throttleSettingUsedInphase * taxiPhaseSFC * (phaseDistance / (flightSpeed + airVelocity));
    }
    else {
      fuelBurntDuringTaxiPhase = 0;
    }
    cout << "Fuel Burned in Phase: " << fuelBurntDuringTaxiPhase << " kg\n" ;
    // Takeoff Phase Parameters
    cout << "\n~~~Takeoff Phase~~~\n" ;
    cout <<"Thrust (% of aircraftMaxThrust): " ; 
    cin >> throttleSetting;
    throttleSettingUsedInphase = (throttleSetting / 100) * airplaneRatedThrust;
    cout << "Fuel Flow Rate (kg/hr): ";
    cin >> phaseFuelFlowRate;
    double takeoffPhaseSFC = phaseFuelFlowRate / throttleSettingUsedInphase;
    cout << "SFC: " << takeoffPhaseSFC << " (kg/kN/hr) " ;
    cout << "Mission Segment Distance (km): " ;
    cin >> phaseDistance;
    cout << "Aircraft Speed (km/hr): " ;
    cin >> flightSpeed;
    cout << "Wind Speed (km/hr): " ;
    cin >> airVelocity;
   if (flightSpeed + airVelocity != 0) {
        fuelBurntDuringTakeoffPhase = throttleSettingUsedInphase * takeoffPhaseSFC * (phaseDistance / (flightSpeed + airVelocity));
    }
    else {
        fuelBurntDuringTakeoffPhase = 0;
    }
    cout << "Fuel Burned in Phase: " << fuelBurntDuringTakeoffPhase << " kg\n" ; 
    // Climb Phase Parameters
    cout << "\n~~~Climb Phase~~~\n" ;
    cout <<"Thrust (% of aircraftMaxThrust): " ;
    cin >> throttleSetting;
    throttleSettingUsedInphase = (throttleSetting / 100) * airplaneRatedThrust;
    cout << "Fuel Flow Rate (kg/hr): ";
    cin >> phaseFuelFlowRate;
    double climbPhaseSFC = phaseFuelFlowRate / throttleSettingUsedInphase;
    cout << "SFC: " << climbPhaseSFC << " (kg/kN/hr)\n" ;
    cout << "Mission Segment Distance (km): " ;
    cin >> phaseDistance;
    cout << "Aircraft Speed (km/hr): " ;
    cin >> flightSpeed;
    cout << "Wind Speed (km): " ;
    cin >> airVelocity;
    if (flightSpeed + airVelocity != 0) {
        fuelBurntDuringClimbPhase = throttleSettingUsedInphase * climbPhaseSFC * (phaseDistance / (flightSpeed + airVelocity));
    }
    else {
      fuelBurntDuringClimbPhase = 0;
    }
    cout << "Fuel Burned in Phase: " << fuelBurntDuringClimbPhase << "  kg\n" ;
    // Cruise Phase Parameters
      cout << "\n~~~Cruise Phase~~~\n" ;
    cout <<"Thrust (% of aircraftMaxThrust): " ;
    cin >> throttleSetting;
    throttleSettingUsedInphase = (throttleSetting / 100) * airplaneRatedThrust;
    cout << "Fuel Flow Rate (kg/hr): ";
    cin >> phaseFuelFlowRate;
    double cruisePhaseSFC = phaseFuelFlowRate / throttleSettingUsedInphase;
    cout << "SFC: " << cruisePhaseSFC << " (kg/kN/hr)\n" ;
    cout << "Mission Segment Distance (km): " ;
    cin >> phaseDistance;
    cout << "Aircraft Speed (km/hr): " ;
    cin >> flightSpeed;
    cout << "Wind Speed (km): " ;
    cin >> airVelocity;
      if (flightSpeed + airVelocity != 0) {
        fuelBurntDuringCruisePhase = throttleSettingUsedInphase * cruisePhaseSFC * (phaseDistance / (flightSpeed + airVelocity));
    }
    else {
      fuelBurntDuringCruisePhase = 0;
    }
    cout << "Fuel Burned in Phase: " << fuelBurntDuringCruisePhase << " kg\n" ;
    // Descent Phase Parameters
      cout << "\n~~~Descent Phase~~~\n" ;
    cout <<"Thrust (% of aircraftMaxThrust): " ;
    cin >> throttleSetting;
    throttleSettingUsedInphase = (throttleSetting / 100) * airplaneRatedThrust;
    cout << "Fuel Flow Rate (kg/hr): ";
    cin >> phaseFuelFlowRate;
    double descentPhaseSFC = phaseFuelFlowRate / throttleSettingUsedInphase;
    cout << "SFC: " << descentPhaseSFC << " (kg/kN/hr)\n" ;
    cout << "Mission Segment Distance (km): " ;
    cin >> phaseDistance;
    cout << "Aircraft Speed (km/hr): " ;
    cin >> flightSpeed;
    cout << "Wind Speed (km): " ;
    cin >> airVelocity;
      if (flightSpeed + airVelocity != 0) {
        fuelBurntDuringDescentPhase = throttleSettingUsedInphase * descentPhaseSFC * (phaseDistance / (flightSpeed + airVelocity));
    }
    else {
      fuelBurntDuringDescentPhase = 0;
    }
    cout << "Fuel Burned in Phase: " << fuelBurntDuringDescentPhase << " kg\n" ;
    // Landing Phase Parameters
      cout << "\n~~~Landing Phase~~~\n" ;
    cout <<"Thrust (% of aircraftMaxThrust): " ;
    cin >> throttleSetting;
    throttleSettingUsedInphase = (throttleSetting / 100) * airplaneRatedThrust;
    cout << "Fuel Flow Rate (kg/hr): ";
    cin >> phaseFuelFlowRate;
    double landingPhaseSFC = phaseFuelFlowRate / throttleSettingUsedInphase;
    cout << "SFC: " << landingPhaseSFC << " (kg/kN/hr)\n" ;
    cout << "Mission Segment Distance (km): " ;
    cin >> phaseDistance;
    cout << "Aircraft Speed (km/hr): " ;
    cin >> flightSpeed;
    cout << "Wind Speed (km): " ;
    cin >> airVelocity;
      if (flightSpeed + airVelocity != 0) {
        fuelBurntDuringLandingPhase = throttleSettingUsedInphase * landingPhaseSFC * (phaseDistance / (flightSpeed + airVelocity));
    }
    else {
       fuelBurntDuringLandingPhase = 0;
    }
    cout << "Fuel Burnt in Phase: " << fuelBurntDuringLandingPhase << " kg\n" ;
    // Total Fuel Burnt During Flight
    double totalFuelBurnt = fuelBurntDuringTaxiPhase + fuelBurntDuringTakeoffPhase + fuelBurntDuringClimbPhase + fuelBurntDuringCruisePhase + fuelBurntDuringDescentPhase + fuelBurntDuringLandingPhase;
    cout << "Total Fuel Burnt During Flight: " << totalFuelBurnt << " kg\n" ;
     if (maximumFuelCapacity > totalFuelBurnt) {
        cout << " Sustainable. Leftover Fuel: " << (maximumFuelCapacity - totalFuelBurnt) << " kg\n";
    } else {
        cout << " Red Flag: Fuel Capacity Surpassed by: " << (totalFuelBurnt - maximumFuelCapacity) << " kg\n";
    }
    return 0;
} 


