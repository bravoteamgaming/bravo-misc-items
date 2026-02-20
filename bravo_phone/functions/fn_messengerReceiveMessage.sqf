params ["_sender"];

if (isNil "bravo_var_phoneMessages") then {
	bravo_var_phoneMessages = [];
};
bravo_var_phoneMessages insert [0,[_this]];
bravo_var_phoneMessages resize (100 min count bravo_var_phoneMessages);

if (_sender != name player) then {
	if ([player, "ACE_Cellphone"] call ace_common_fnc_hasItem) then {
		addCamShake [1, 1.5, 100];
		playSoundUI ["bravo_phone\assets\vibrate.ogg", 1];
		playSound3D ["bravo_phone\assets\vibrate.ogg", player, false, player modelToWorldVisualWorld (player selectionPosition "spine2"), 2, 1, 50];
	};
};

if (uiNamespace getVariable ["bravo_messenger_displayOpen", false]) then {
	false call bravo_fnc_messengerLoadList;
};