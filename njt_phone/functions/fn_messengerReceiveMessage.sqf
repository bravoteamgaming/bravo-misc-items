params ["_sender"];

if (isNil "njt_var_phoneMessages") then {
	njt_var_phoneMessages = [];
};
njt_var_phoneMessages insert [0,[_this]];
njt_var_phoneMessages resize (100 min count njt_var_phoneMessages);

if (_sender != name player) then {
	if ([player, "ACE_Cellphone"] call ace_common_fnc_hasItem) then {
		addCamShake [1, 1.5, 100];
		playSoundUI ["njt_phone\assets\vibrate.ogg", 1];
		playSound3D ["njt_phone\assets\vibrate.ogg", player, false, player modelToWorldVisualWorld (player selectionPosition "spine2"), 2, 1, 50];
	};
};

if (uiNamespace getVariable ["njt_messenger_displayOpen", false]) then {
	false call njt_fnc_messengerLoadList;
};