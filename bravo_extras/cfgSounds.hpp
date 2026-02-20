class cfgSounds
{
	sounds[] = {};
	
	class bravo_saxbomb_sound
	{
		name = "Sax Bomb";
		sound[] = { "\bravo_extras\assets\saxbomb.ogg", 5, 1, 100 };
		titles[] = {};
	};
	
	class bravo_randomnade_sound
	{
		name = "Tarzan";
		sound[] = { "\bravo_extras\assets\tarzan.ogg", 5, 1, 100 };
		titles[] = {};
	};
	
	class bravo_fart3_sound
	{
		name = "Fart3";
		sound[] = { "\bravo_extras\assets\fart3.ogg", 5, 1, 100 };
		titles[] = {};
	};
	class bravo_cashkaching_sound
	{
		name = "Cash Kaching";
		sound[] = { "\bravo_extras\assets\cashkaching.ogg", 5, 1, 100 };
		titles[] = {};
	};
};

class cfgSoundSets
{
	class GrenadeHe_Exp_SoundSet;
	class bravo_soundset_fart3 : GrenadeHe_Exp_SoundSet
	{
		soundShaders[] = {"bravo_soundshader_fart3"};
	};
	class bravo_soundset_cashkaching : GrenadeHe_Exp_SoundSet
	{
		soundShaders[] = {"bravo_soundshader_cashkaching"};
	};
};

class cfgSoundShaders
{
	class GrenadeHe_midExp_SoundShader;
	class bravo_soundshader_fart3 : GrenadeHe_midExp_SoundShader
	{
		rangeCurve[] = {{0,1},{100,1},{500,0.1},{2200,0}};
		samples[] = {{"\bravo_extras\assets\fart3.ogg",1}};
	};
	class bravo_soundshader_cashkaching : GrenadeHe_midExp_SoundShader
	{
		rangeCurve[] = {{0,1},{100,0.1},{500,0},{2200,0}};
		samples[] = {{"\bravo_extras\assets\cashkaching.ogg",1}};
	};
};