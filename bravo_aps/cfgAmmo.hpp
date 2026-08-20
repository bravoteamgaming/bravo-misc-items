class CfgAmmo
{
	class BombCluster_01_UXO3_Ammo_F;
	class bravo_aps_interceptor : BombCluster_01_UXO3_Ammo_F
	{
		hit = 20;
		indirectHit = 20;
		indirectHitRange = 8;
		ace_frag_charge = 200;
		ace_frag_classes[] = {"ace_frag_small", "ace_frag_small_HD"};
		ace_frag_metal = 500;
		ace_frag_skip = 0;
		ace_minedetector_detectable = 0;
	};
	class bravo_aps_launcher : BombCluster_01_UXO3_Ammo_F
	{
		hit = 10;
		indirectHit = 5;
		indirectHitRange = 3;
		ace_frag_charge = 50;
		ace_frag_classes[] = {"ace_frag_small", "ace_frag_small_HD"};
		ace_frag_metal = 100;
		ace_frag_skip = 0;
		ace_minedetector_detectable = 0;
	};
};