params [["_isAnon", false]];
private _messageBox = uiNamespace getVariable ["njt_messenger_messageBox", controlNull];
private _message = ctrlText _messageBox;
if (_message == "") exitWith{};

private _personControl = uiNamespace getVariable ["njt_messenger_playerList", controlNull];
private _personID = _personControl lbData lbCurSel _personControl;

if (_personID != "0") then {
	private _personUnit = objectFromNetId _personID;
	private _personName = name _personUnit;
	date params ["_yr", "_mn", "_dy"];
	private _mTime = format ["%1-%2-%3 %4", _yr, _mn, _dy, [daytime, "HH:MM"] call bis_fnc_timeToString];

	private _messageComposed = [[name player, "UNKNOWN"] select _isAnon, _personName, _mTime, _message];

	_messageBox ctrlSetText "";

	_messageComposed remoteExec ["njt_fnc_messengerReceiveMessage", [_personUnit, player]];
};

false call njt_fnc_messengerLoadList;