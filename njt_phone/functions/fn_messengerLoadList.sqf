params [["_doPersonList", true]];
private _listControl = uiNamespace getVariable ["njt_messenger_messageList", controlNull];
private _personControl = uiNamespace getVariable ["njt_messenger_playerList", controlNull];
private _messages = missionNamespace getVariable ["njt_var_phoneMessages", []];

if _doPersonList then {
	lbClear _personControl;
	private _players = (allPlayers select {[_x, "ACE_Cellphone"] call ace_common_fnc_hasItem}) - [player];
	if ((count _players) > 0) then {
		{
			private _index = _personControl lbAdd name _x;
			_personControl lbSetData [_index, netId _x];
		} forEach _players;
	} else {
		_personControl lbAdd "No contacts.";
		_personControl lbSetData [0, "0"];
	};
	_personControl lbSetCurSel 0;
};
if (isNull _listControl) exitWith{};
if ((count _messages) > 0) then {
	private _stringTotal = "";
	{
		_x params ["_sender", "_receiver", "_mtime", "_message"];
		private _senderText = "";
		if (_sender == name player) then {
			_senderText = format ["to %1 >", _receiver];
		} else {
			_senderText = _sender + ": ";
		};
		_stringTotal = formatText ["%1 %2 %3 %4%5", _stringTotal, _mtime, _senderText, _message, lineBreak];
	} forEachReversed _messages;

	_listControl ctrlSetStructuredText _stringTotal;
	_listControl ctrlSetPositionH ctrlTextHeight _listControl;
	_listControl ctrlCommit 0;
	(uiNamespace getVariable ["njt_messenger_messageListGroup", controlNull]) ctrlSetScrollValues [1, 0];
	
};

ctrlSetFocus (uiNamespace getVariable ["njt_messenger_messageBox", controlNull]);