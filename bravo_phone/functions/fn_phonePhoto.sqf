missionNamespace setVariable ["bravo_var_phoneInUse",true];

waitUntil {!(((weaponState player) select 6) > 0)};

private _phone = createSimpleObject ["\A3\structures_f\Items\electronics\mobilephone_old_F.p3d",[0,0,0]];
_phone attachTo [player, [0,0.02,0], "leftHand", true];
_phone setVectorDirAndUp [[0.5,-0.75,1], [1,0,0]];

player playActionNow "acre_sys_gestures_helmet_noADS";

sleep 0.3;

[player, 0.2] remoteExec ["bravo_fnc_phoneFlashlightLocal"];
playSound3D ["\a3\Missions_F_Oldman\Data\sound\Phone\Camera\Phone_Camera_01.wss", player, false, player modelToWorldVisualWorld (player selectionPosition "neck"), 2, 1, 50];
sleep 0.1;

screenshot "";

if (gestureState player == "acre_sys_gestures_helmet_noADS") then {
	player playActionNow "acre_sys_gestures_stop";
};

deleteVehicle _phone;
missionNamespace setVariable ["bravo_var_phoneInUse",false];