params ["_unit"];

private _oldDamageState = isDamageAllowed _unit;
_unit allowDamage false;
private _randomStage1 = [
	random [-1, selectRandom [0.5,-0.5], 1],
	random [-1, selectRandom [0.5,-0.5], 1]
];
private _randomStage2 = [selectRandom _randomStage1, selectRandom _randomStage1, 0.5];
_unit addForce [_randomStage2 vectorMultiply 4000, [0,0,1], false];
sleep 10;
_unit allowDamage _oldDamageState;