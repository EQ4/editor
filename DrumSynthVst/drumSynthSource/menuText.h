/*
	=========================================================
				Copyright 2013 Julian Schmidt

	This file is part of the Sonic Potions Drumsynth Editor
	=========================================================

    The Sonic Potions Drumsynth Editor is free software: you 
	can redistribute it and/or modify it under the terms of 
	the GNU General Public License as published by the Free 
	Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    The Sonic Potions Drumsynth Editor is distributed in the
	hope that it will be useful, but WITHOUT ANY WARRANTY; 
	without even the implied warranty of MERCHANTABILITY or 
	FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General 
	Public License for more details.

    You should have received a copy of the GNU General 
	Public License along with the Sonic Potions Drumsynth 
	Editor. If not, see <http://www.gnu.org/licenses/>.
	=========================================================
 */


#ifndef MENUTEXT_H_
#define MENUTEXT_H_

#define PROGMEM

//-----------------------------------------------------------------
#define MENU_FILTER			1
#define MENU_WAVEFORM		2
#define MENU_AUDIO_OUT		3
#define MENU_ROLL_RATES		4
#define MENU_SYNC_RATES		5
#define MENU_LFO_WAVES		6
#define MENU_RETRIGGER		7
#define MENU_NEXT_PATTERN	8
#define MENU_SEQ_QUANT		9
//-----------------------------------------------------------------
const char quantisationNames[][4] PROGMEM  = 
{
	{5},		//number of entries
	{"off"},
	{"8"},
	{"16"},
	{"32"},
	{"64"},
};
//-----------------------------------------------------------------
const char nextPatternNames[][4] PROGMEM  = 
{
	{15},		//number of entries
	{"p1"},
	{"p2"},
	{"p3"},
	{"p4"},
	{"p5"},
	{"p6"},
	{"p7"},
	{"p8"},
	{"r2"},
	{"r3"},
	{"r4"},
	{"r5"},
	{"r6"},
	{"r7"},
	{"r8"},
};
//-----------------------------------------------------------------
const char retriggerNames[][4] PROGMEM  = 
{
	{7},		//number of entries
	{"off"},
	{"v1"},
	{"v2"},
	{"v3"},
	{"v4"},
	{"v5"},
	{"v6"},
};
//-----------------------------------------------------------------
const char lfoWaveNames[][4] PROGMEM  = 
{
	{8},		//number of entries
	{"sin"},
	{"tri"},
	{"sup"},
	{"sdn"},
	{"sqr"},
	{"rnd"},
	{"xup"},
	{"xdn"},
};
//-----------------------------------------------------------------
const char rollRateNames[][4] PROGMEM  = 
{
	{14},		//number of entries
	{"One"},		
	{"1/1"},		
	{"1/2"},		
	{"1/3"},		
	{"1/4"},		
	{"1/6"},		
	{"1/8"},		
	{"12"},		
	{"16"},		
	{"24"},		
	{"32"},		
	{"48"},		
	{"64"},		
	{"128"},
};
//-----------------------------------------------------------------
	const char syncRateNames[][4] PROGMEM  = 
{
	{12},		//number of entries
	{"off"},
	{"4/1"},
	{"2/1"},
	{"1/1"},
	{"1/2"},
	{"1/3"},
	{"1/4"},
	{"1/6"},
	{"1/8"},
	{"12"},
	{"16"},
	{"32"},
};
//-----------------------------------------------------------------
const char waveformNames[][4] PROGMEM  = 
{
	{6},		//number of entries
	{"Sin"}	,
	{"Tri"}	,
	{"Saw"}	,
	{"Rec"}	,
	{"Noi"}	,
	{"Cym"}	,
};
//-----------------------------------------------------------------
const char outputNames[][7] PROGMEM  = 
{
	{6},		//number of entries
	{"St1"}	,	//Stereo Out DAC 1
	{"St2"}	,	//Stereo Out DAC 2
	{"L1"}	,	//Mono Out Left DAC 1
	{"R1"}	,	//Mono Out Right DAC 1
	{"L2"}	,	//Mono Out Left DAC 2
	{"R2"}	,	//Mono Out Right DAC 2
};
//-----------------------------------------------------------------
const char filterTypes[][7] PROGMEM  = 
{
	{6},		//number of entries
	{"LP"}	,	//1 - 001
	{"HP"}	,	//2 - 010
	{"BP"}	,	//3 - 011
	{"UBP"}	,	//4 - 100
	{"Not"}	,	//5 - 101
	{"Pek"}	,	//6 - 110
	//{"All"}	,	//7 - 111
};
//-----------------------------------------------------------------
const char shortNames[][4] PROGMEM  = 
{
	{""},
	{"coa"},
	{"fin"},
	{"att"},
	{"dec"},
	{"eg2"},
	{"mod"},
	{"amt"},
	{"frq"},
	{"drv"},
	{"vol"},
	{"pan"},
	{"noi"},
	{"rpt"},
	{"mix"},	
	{"res"},
	{"typ"},
	{"f1"},
	{"f2"},
	{"g1"},
	{"g2"},
	{"wav"},
	{"dst"},
	{"snc"},
	{"rtg"},
	{"off"},
	{"voi"},
	{"slp"},
	{"d1"},		
	{"d2"},
	{"eqg"},
	{"eqf"},
#if USE_CODEC_EQ
	{"eq "},
	{"lim"},
	{"rel"},
	{"max"},
	{"min"},
#endif
	{"rol"},
	{"mrp"},	
	{"nte"},
	{"prb"},
	{"stp"},
	{"len"},
	{"bpm"},
	{"ch "},
	{"out"},
	{"sr"},
	{"nxt"},
	{"mod"},
	{"vel"},
	{"fet"},
	{"flw"},
	{"qnt"},
	{"trk"},
	{"val"},
	{"shu"},
		
	
};
//-----------------------------------------------------------------
const char catNames[][16] PROGMEM = 
{
	{""},
	{"Oscillator"},
	{"Velocity EG"},
	{"Mod EG"},
	{"Pitch Mod"},
	{"FM"},
	{"Voice"},
	{"Noise"},
	{"Noise/Osc"},
	{"Filter"},
	{"Mod. Osc."},
	{"LFO"},
	{"Transient"},
	{"EQ"},
#if USE_CODEC_EQ		
	{"Limiter"},
#endif
	{"Pattern"},
	{"Sound"},
	{"Step"},
	{"Euklid"},		
	{"Global"},	
	{"Velocity"},
	{"Parameter"},
	{"Sequencer"},
};
//-----------------------------------------------------------------
const char longNames[][16] PROGMEM = 
{
	{""},
	{"Coarse"},
	{"Fine"},
	{"Attack"},
	{"Decay"},
	{"Amount"},
	{"Frequency"},
	{"Overdrive"},
	{"Volume"},
	{"Panning"},
	{"Mix"},
	{"Repeat Count"},
	{"Resonance"},
	{"Type"},
	{"Gain"},
	{"Waveform"},
	{"Dest. Param."},
	{"Clock Sync"},
	{"Retrigger"},
	{"Offset"},		
	{"Dest. Voice"},
	{"Slope"},
	{"Decay Closed"},
	{"Decay Open"},
#if USE_CODEC_EQ		
	{"Enable"},
	{"Release"},
	{"Threshold max"},
	{"Threshold min"},
#endif		
	{"Roll Rate"},
	{"Morph"},
	{"Note"},
	{"Probability"},
	{"Number"},
	{"Length"},
	{"Steps"},
	{"Tempo"},
	{"Audio Out"},
	{"MIDI Channel"},
	{"Sample Rate"},
	{"Next Pattern"},
	{"Phase"},
	{"Mode"},
	{"Velocity mod."},		
	{"Fetch"},	
	{"Follow"},	
	{"Quantisation"},
	{"Autom. Track"},
	{"Autom. Dest."},
	{"Autom. Value"},
	{"Shuffle"},
};


#endif /* MENUTEXT_H_ */