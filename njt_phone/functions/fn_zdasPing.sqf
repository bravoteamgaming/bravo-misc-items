// 76561197966383161 ZAPHOD
// 76561197979457370 JASON

private _ctrl = uiNamespace getVariable ["njt_zdas_readout", controlNull];
private _btnctrl = uiNamespace getVariable ["njt_zdas_pingButton", controlNull];
_btnctrl ctrlEnable false;
private _unit = ["76561197966383161"] call bis_fnc_getunitbyuid;
player playActionNow "SPE_Gesture_Phone";
_ctrl ctrlSetText "* * SEEKING . . .";
private _phone = createSimpleObject ["\A3\structures_f\Items\electronics\mobilephone_old_F.p3d",[0,0,0]];
_phone attachTo [player, [0,0.02,0], "leftHand", true];
_phone setVectorDirAndUp [[0.5,-0.75,1], [1,0,0]];

_phone remoteExec ["njt_fnc_zdasPingSound"];

sleep 10;

if (gestureState player == "SPE_Gesture_Phone") then {
	player playActionNow "SPE_HipFire_empty";
};

if (isNull _ctrl) exitWith {
	deleteVehicle _phone;
};
_btnctrl ctrlEnable true;
if ((isNull _unit) or (_unit == player)) exitWith {
	_ctrl ctrlSetText "* * NO SIGNAL . . .";
	deleteVehicle _phone;
};
private _distance = _unit distance player;
private _dir = round (player getDir _unit);

private _distance2 = [_distance, 10, 1] call bis_fnc_roundNum;
if (_distance2 > 1000) then {
	_distance2 = "> 1000";
};
private _text = format ["Z * RNG %1 * HDG %2", _distance2, _dir];

_ctrl ctrlSetText _text;

sleep 2;
deleteVehicle _phone;