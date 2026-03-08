params ["_unit", ["_timer", 10]];

private _light = "#lightreflector" createVehicleLocal [0,0,0];
_light attachTo [_unit, [-0.2,0.1,0], "neck", true];
_light setLightConePars [145, 110, 1];
_light setLightColor [1,1,1];
_light setLightAmbient [0,0,0];
_light setLightDayLight true;
_light setLightIntensity 4000;
_light setLightAttenuation [2, 4, 4, 1];
_light setLightUseFlare true;
_light setLightFlareSize 0.5;
_light setLightFlareMaxDistance 300;

sleep _timer;

deleteVehicle _light;