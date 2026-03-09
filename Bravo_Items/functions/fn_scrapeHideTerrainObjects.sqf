private _array = [];
private _items = ((all3DenEntities select 3) select {((_x get3denAttribute "ItemClass") select 0) in ["ModuleHideTerrainObjects_F"]});
{

	private _area = (_x get3denAttribute "size2")#0;
	_area = [_area#0, _area#1];
	private _pos = (_x get3denAttribute "Position")#0;
	private _dir = (_x get3denAttribute "rotation")#0#2;
	private _filter = (_x get3denAttribute "#filter")#0;
	_array pushback [_pos, _area, _filter, _dir];
} forEach _items;

copyToClipboard str _array;