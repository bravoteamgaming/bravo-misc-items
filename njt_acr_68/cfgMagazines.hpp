class cfgMagazines
{
	class UK3CB_ACR_30rnd_556x45;
	class njt_30rnd_68_acr_fmj : UK3CB_ACR_30rnd_556x45
	{
		descriptionShort = "Caliber: 6.8x43 mm FMJ<br />Rounds: 30<br />Used in: Remington ACR 6.8";
		displayName = "6.8 mm 30Rnd ACR FMJ";
		displayNameShort = "FMJ";
		ammo = "njt_bullet_68_spc_fmj";
		initSpeed = 820;
		lastRoundsTracer = 3;
		mass = 9.55;
	};
	class njt_30rnd_68_acr_fmj_tracer_red : njt_30rnd_68_acr_fmj
	{
		descriptionShort = "Caliber: 6.8x43 mm FMJ Tracer (Red)<br />Rounds: 30<br />Used in: Remington ACR 6.8";
		displayName = "6.8 mm 30Rnd ACR FMJ Tracer (Red)";
		displayNameShort = "FMJ Tracer (Red)";
		tracersEvery = 1;
	};
	class njt_30rnd_68_acr_ap : UK3CB_ACR_30rnd_556x45
	{
		descriptionShort = "Caliber: 6.8x43 mm AP<br />Rounds: 30<br />Used in: Remington ACR 6.8";
		displayName = "6.8 mm 30Rnd ACR AP";
		displayNameShort = "AP";
		ammo = "njt_bullet_68_spc_ap";
		initSpeed = 930;
		lastRoundsTracer = 3;
		mass = 9.55;
	};
	class njt_30rnd_68_acr_ap_tracer_red : njt_30rnd_68_acr_ap
	{
		descriptionShort = "Caliber: 6.8x43 mm AP Tracer (Red)<br />Rounds: 30<br />Used in: Remington ACR 6.8";
		displayName = "6.8 mm 30Rnd ACR AP Tracer (Red)";
		displayNameShort = "AP Tracer (Red)";
		tracersEvery = 1;
	};
};

class cfgMagazineWells
{
	class CBA_68SPC_STANAG
	{
		njt_mags[] = {"njt_30rnd_68_acr_fmj", "njt_30rnd_68_acr_fmj_tracer_red","njt_30rnd_68_acr_ap", "njt_30rnd_68_acr_ap_tracer_red"};
	};
	class CBA_68x43_ACR
	{
		njt_mags[] = {"njt_30rnd_68_acr_fmj", "njt_30rnd_68_acr_fmj_tracer_red","njt_30rnd_68_acr_ap", "njt_30rnd_68_acr_ap_tracer_red"};
	};
};