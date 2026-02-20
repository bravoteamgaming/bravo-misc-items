class cfgSounds
{
	sounds[] = {};
	
	class njt_saxbomb_sound
	{
		name = "Sax Bomb";
		sound[] = { "\njt_extras\assets\saxbomb.ogg", 5, 1, 100 };
		titles[] = {};
	};
	
	class njt_randomnade_sound
	{
		name = "Tarzan";
		sound[] = { "\njt_extras\assets\tarzan.ogg", 5, 1, 100 };
		titles[] = {};
	};
	
	class njt_fart3_sound
	{
		name = "Fart3";
		sound[] = { "\njt_extras\assets\fart3.ogg", 5, 1, 100 };
		titles[] = {};
	};
	class njt_cashkaching_sound
	{
		name = "Cash Kaching";
		sound[] = { "\njt_extras\assets\cashkaching.ogg", 5, 1, 100 };
		titles[] = {};
	};
};

class cfgSoundSets
{
	class GrenadeHe_Exp_SoundSet;
	class njt_soundset_fart3 : GrenadeHe_Exp_SoundSet
	{
		soundShaders[] = {"njt_soundshader_fart3"};
	};
	class njt_soundset_cashkaching : GrenadeHe_Exp_SoundSet
	{
		soundShaders[] = {"njt_soundshader_cashkaching"};
	};
};

class cfgSoundShaders
{
	class GrenadeHe_midExp_SoundShader;
	class njt_soundshader_fart3 : GrenadeHe_midExp_SoundShader
	{
		rangeCurve[] = {{0,1},{100,1},{500,0.1},{2200,0}};
		samples[] = {{"\njt_extras\assets\fart3.ogg",1}};
	};
	class njt_soundshader_cashkaching : GrenadeHe_midExp_SoundShader
	{
		rangeCurve[] = {{0,1},{100,0.1},{500,0},{2200,0}};
		samples[] = {{"\njt_extras\assets\cashkaching.ogg",1}};
	};
};