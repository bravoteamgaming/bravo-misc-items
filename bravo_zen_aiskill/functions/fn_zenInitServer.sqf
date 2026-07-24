if !isServer exitWith{};
private _data = [true];
for "_i" from 0 to 11 do {
	private _value = [format ["bravo_zen_aiSkill%1", _i], "server"] call CBA_settings_fnc_get;
	_data pushback _value;
};
zen_ai_skills = _data;
publicVariable "zen_ai_skills";