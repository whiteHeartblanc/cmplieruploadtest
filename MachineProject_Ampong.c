
#include <stdio.h>
#include <stdlib.h>
// Dustin Allen Crisologo Ampong s17B
/* Pokemon 1v1 simulator
Cannot used charge if charged
cannot use protect conesecutively, and protect wears off the turn after (protect only good for 1 turn)
same move type and same pokemon type, 1.5 damage
differnt damage per type  */
void pokemon( int Pkmn){ // To use for Pokemon identification for Hp and PP left
switch (Pkmn){ // switch for PKMN which is the Plyr1 or Plyr2 which determines the pokemon
// Pkmn = player chosen pokemon
		case 1:{ 
			printf("Entei "); // IF one It will print Entei
			break;
		}
		case 2:{
			printf("Milotic ");// IF one It will print Milotic
			break;
		}
		case 3:{
			printf("Torterra ");// IF one It will print Torterra
			break;
		}
		case 4:{
		printf ("Pikachu ");// IF one It will print Pikachu
			break;
		}
		case 5:{
			printf("Groudon ");// IF one It will print Groudon
			break;
		}
		case 6:{
			printf("Lapras:");// IF one It will print Lapras
			break;
		}
		case 7:{
			printf("Stunfisk ");// IF one It will print Stunfisk
			break;
		}

	}
 	
}

float fire(int Type){ // it will return the damage multiplier for fire for each other type
	switch (Type){// cases for the opponents  type 
	// Type = pokemon type
		case 1:{
			return 0.5; // if fire it will return a multiplier of 0.5
			break;
		}
		case 2:{
			return 0.5;// if water it will return a multiplier of 0.5
			break;
		}
		case 3:{
			return 2;// if grass it will return a multiplier of 2
			break;
		}
		case 4:{
			return 1;// if electric it will return a multiplier of 1
			break;
		}
		case 5:{
			return 0.5;// if ground it will return a multiplier of 0.5
			break;
		}
		case 6:{
			return 2;// if ice it will return a multiplier of 2
			break;
		}
			default:{ // if neither it will return 1, just in case if the type is 0 it might return 0 and do 0 damage
		return 1;
		break;
	}
	
	}
}
float water(int Type){ // it will return the damage multiplier for water for each other type
	switch (Type){// cases for the opponents  type 
		// Type = pokemon type
		case 1:{
			return 2; // if fire it will return a multiplier of 2
			break;
		}
		case 2:{
			return 0.5;// if water it will return a multiplier of 0.5
			break;
		}
		case 3:{
			return 0.5;// if grass it will return a multiplier of 0.5
			break;
		}
		case 4:{
			return 1;// if electric it will return a multiplier of 1
			break;
		}
		case 5:{
			return 2;// if ground it will return a multiplier of 2
			break;
		}
		case 6:{
			return 1;// if ice it will return a multiplier of 1
			break;
		}
			default:{ // if neither it will return 1, just in case if the type is 0 it might return 0 and do 0 damage
		return 1;
		break;
	}
	
	}
}
float grass(int Type){ // it will return the damage multiplier for grass for each other type
	switch (Type){ // cases for the opponents  type 
		// Type = pokemon type
		case 1:{
			return 0.5; // if fire it will return a multiplier of 0.5
			break;
		}
		case 2:{
			return 2; // if water it will return a multiplier of 2
			break;
		}
		case 3:{
			return 0.5; // if grass it will return a multiplier of 0.5
			break;
		}
		case 4:{
			return 0; // if electric it will return a multiplier of 0
			break;
		}
		case 5:{
			return 2; // if ground it will return a multiplier of 2
			break;
		}
		case 6:{
			return 0; // if ice it will return a multiplier of 0
			break;
		}
			default:{ // if neither it will return 1, just in case if the type is 0 it might return 0 and do 0 damage
		return 1;
		break;
	}
	
	}
}
float electric(int Type){// it will return the damage multiplier for electric for each other type
	switch (Type){// cases for the opponents  type 
		// Type = pokemon type
		case 1:{
			return 1; // if fire it will return a multiplier of 1
			break;
		}
		case 2:{ 
			return 2; // if water it will return a multiplier of 2
			break;
		}
		case 3:{
			return 0.5; // if grass it will return a multiplier of 0.5
			break;
		}
		case 4:{
			return 1; // if electric it will return a multiplier of 1
			break;
		}
		case 5:{
			return 0; // if ground it will return a multiplier of 0
			break;
		}
		case 6:{ 
			return 2; // if ice it will return a multiplier of 2
			break;
		}
			default:{ // if neither it will return 1, just in case if the type is 0 it might return 0 and do 0 damage
		return 1;
		break;
	}
	
	}
}
float ground(int Type){ // it will return the damage multiplier for ground for each other type
	switch (Type){// cases for the opponents  type 
		// Type = pokemon type
		case 1:{
			return 2; // if fire it will return a multiplier of 2
			break;
		}
		case 2:{
			return 0.5; // if water it will return a multiplier of 0.5
			break;
		}
		case 3:{
			return 0.5; // if grass it will return a multiplier of 0.5
			break;
		}
		case 4:{
			return 2; // if electric it will return a multiplier of 2
			break;
		}
		case 5:{
			return 1; // if ground it will return a multiplier of 1
			break;
		}
		case 6:{
			return 0.5; // if ice it will return a multiplier of 0.5
			break;
		}
			default:{ // if neither it will return 1, just in case if the type is 0 it might return 0 and do 0 damage
		return 1;
		break;
	}
	
	}
}
 
float ice(int Type){ // it will return the damage multiplier for ice for each other type
	switch (Type){// cases for the opponents  type 
		// Type = pokemon type
		case 1:{
			return 0.5; // if fire it will return a multiplier of 0.5
			break;
		}
		case 2:{
			return 2; // if water it will return a multiplier of 2
			break;
		}
		case 3:{
			return 2; // if grass it will return a multiplier of 2
			break;
		}
		case 4:{
			return 1; // if electric it will return a multiplier of 1
			break;
		}
		case 5:{
			return 2; // if ground  it will return a multiplier of 2
			break;
		}
		case 6:{
			return 1; // if ice it will return a multiplier of 1
			break;
		}
			default:{ // if neither it will return 1, just in case if the type is 0 it might return 0 and do 0 damage
		return 1;
		break;
	}
	
	}
}
void pkmnusedmove(int Pkmn, int move){ // This function is used to display the move done in the previous round
// Pkmn = pokemon of  player, move =  move used by player
	switch (Pkmn){ // switch case for the which pokemon is used
		case 1:{ // if it is pokemone 1 (entei)
			switch (move){ // it will have another switch depending on the move
				case 1:{
					printf("Entei used Fire Blast\n"); // if the move 1 of case 1 for Pkmn , it will print Entei used fire blast
					
					break;
				}
				case 2:{
					printf("Entei used Earthquake\n"); // if the move2 of case 1 for Pkmn , it will print Entei used earhtquake
					
					break;
				}
				case 3:{
					printf("Entei used Protect\n"); // if the move 3 of case 1 for Pkmn , it will print Entei used protect
					
					break;
				}
				case 4:{
					printf("Entei used Charge\n "); // if the move 4 of case 1 for Pkmn , it will print Entei used Charge
					
					break;
				}
				
			
			}
		break;
		}
		
		case 2:{ // if the pokemon is 2(Milotic)
			switch (move){ // it will also have a switch inside depending on the move 
				case 1:{
					printf("Milotic used Scald\n"); // if the move 1 of case 2 for Pkmn , it will print Milotic used Scald
					
					break;
				}
				case 2:{
					printf("Milotic used Ice Beam\n"); // if the move 2 of case 2 for Pkmn , it will print Milotic used Ice Beam
					
					break;
				}
				case 3:{
					printf("Milotic used Protect\n"); // if the move 3 of case 2 for Pkmn , it will print Milotic used protect
					
					break;
				}
				case 4:{
					printf("Milotic used Charge\n");// if the move 4 of case 2 for Pkmn , it will print Milotic used charge
					
					break;
				}
				
			
			}
		break;
		}
		case 3:{ // if the pokemon is 3(Milotic)
			switch (move){
				case 1:{
					printf("Torterra used Dig\n");  // if the move 1 of case 3 for Pkmn it will print torterra used dig
					
					break;
				}
				case 2:{
					printf("Torterra used Leaf Storm\n"); // of move is 2 it will print troterra used leaf storm
					
					break;
				}
				case 3:{
				printf("Torterra used Protect\n"); // if move is 3 it will print torterra used prtect
					
					break;
				}
				case 4:{
					printf("Torterra used Charge\n"); // of move is4 it will print torterra used charge
					
					break;
				}
				
			
			}
		break;
		}
		
		case 4:{ // if Pkmn is 4 it will be pikachu
			switch (move){
				case 1:{
					printf("Pickachu used Thunderbolt\n"); //  if move is 1 it will print pickachu used thunderbolt
					
					break;
				}
				case 2:{
					printf("Pickachu used Dig\n"); // if move is 2, it will print pickachu used dig
					
					break;
				}
				case 3:{
				printf("Pickachu used Protect\n"); // if move is 3 it will print pickachu used protect
					
					break;
				}
				case 4:{
					printf("Pickachu used Charge\n"); // if move is 4 it will print pickachu sed charge
					
					break;
				}
				
			
			}
		break;
		}
		
		case 5:{ // if Pkmn is 3 it will be Groudon
			switch (move){
				case 1:{
					printf("Groudon used Fissure\n");  // if move is 1 it will print groudon used fissure
					
					break;
				}
				case 2:{
					printf("Groudon used Fire Blast\n"); // if move is 2 it will print groudon used fire blast
					
					break;
				}
				case 3:{
				printf("Groudon used Protect\n"); // if move is 3 it will print groudon used protect
					
					break;
				}
				case 4:{
					printf("Groudon used Charge\n"); // if move is 4 it will print groudon used charge
					
					break;
				}
				
			
			}
		break;
		}
		case 6:{ // if Pkmn is 6 it is Lapras
			switch (move){
				case 1:{
					printf("Lapras used Ice Beam\n"); // if move is 1 it will print lapras used ice beam
					
					break;
				}
				case 2:{
				printf("Lapras used Scald\n"); // if move is 2 it will print lapras used SCald
					
					break;
				}
				case 3:{
				printf("Lapras used Protect\n"); // if move is 3 it will print laparsa used prtect
					
					break;
				}
				case 4:{
					printf("Lapras used Charge\n");// if move is 4 it will print lapras used charge
					
					break;
				}
				
			
			}
		break;
		}
		
		case 7:{// if Pkmn is 7 it will be Stunfisk
			switch (move){
				case 1:{
					printf("Stunfisk used Water Gun\n"); // if move is 1 it will print stunfisk usewd water gun
					
					break;
				}
				case 2:{
				printf("Stunfisk used Earthquake\n"); // if move is 2 it will print stunfisk used earthquake
					
					break;
				}
				case 3:{
				printf("Stunfisk used Protect\n"); // if move is 3 it will print stunfisk used protect
					
					break;
				}
				case 4:{
					printf("Stunfisk used Charge\n"); // if move is 4 it will print stunfisk used charge
					
					break;
				}
				
			
			}
		break;
		}
	
	
		}
		
}

float Battle(float Bp, int P1Tp1, int P1Tp2, int P2Tp1, int P2Tp2, int MTP){  // It will calculated the damage
// BP = batle points, 
//P1TP1/ P1tp2= player pokemon type, 
//P2Tp1, P2Tp2 = Pokemon type of enemy
// MTP= move type
	float Damage; 
	if (MTP == P1Tp1 || P1Tp2 == MTP){ // If the attack type is the same as to one of the types of the pokemon 
				
	
	Bp = Bp * 1.5;  //it will do x 1.5 more damage if not the battle points stay the same
}

	switch (MTP){ 
	case 1:{ // if the move type is 1 it will be fire and it will use the fire multiplier
	Damage= Bp * fire(P2Tp1) * fire(P2Tp2); // Bp will multiply the fire return based from the pokemon type of the opponent which has 2
	return Damage;  // it will return the output / Damage
	}	
		case 2:{ // move type is water
	Damage= Bp * water(P2Tp1) * water(P2Tp2); // Bp will be multiply return from water
	return Damage; // return damage
	}	
		case 3:{ // move type is grass
	Damage= Bp * grass(P2Tp1) * grass(P2Tp2); // Bp will  be multiply the return from grass depedning on opponent type
	return Damage; // return damage/ output
	}	
		case 4:{ // move type is electric
	Damage= Bp * electric(P2Tp1) * electric(P2Tp2); // Bp will  be multiply the return from electric 2types
	return Damage;
	}	 
		case 5:{// move type is ground
	Damage= Bp * ground(P2Tp1) * ground(P2Tp2); // Bp will be multiply the return from electric 2 types
	return Damage;
	}	
		case 6:{ // move type is ice
	Damage= Bp * ice(P2Tp1) * ice(P2Tp2); // will multiply the Bp to the return from ice from the oppenetin type which is 2
	return Damage;
	}	

	}

}
void movelist(int pkmn, int bp1, int bp2, int pp1, int pp2, int pp3, int pp4){// This displays the move list of the pokemon
	// pkmn = player pokemon
	// bp1 bp2 == battle points for the 2 uniquemoves
	// pp1 - pp4 = the ppower poiints of the pokemon moves
	switch (pkmn){ 
	case 1:{// if pokemon is 1 it is entei and will print These: (and will show the current PP and Current Bp
		
	
		printf("Entei's Movies are: \n");
		printf("1-Fire Blast (%d BP, %d PP)					3-Protect (%d PP)", bp1, pp1, pp3); 
		printf("\n");
		printf("2-Earthquake (%d BP, %d PP)					4-Charge (%d PP)", bp2, pp2, pp4);
		printf("\n");
		break;
	}
	case 2:{ // if pokemon is 1 it is Milotic and will print These: (and will show the current pp and current BP
		
	
		printf("Milotic's Movies are: \n");
		printf("1-Scald (%d BP, %d PP)						3-Protect (%d PP)", bp1, pp1, pp3);
			printf("\n");
		printf("2-Ice Beam (%d BP, %d PP)					4-Charge (%d PP)", bp2, pp2, pp4);
		printf("\n");
		break;
	}
	case 3:{ // if pokemon is 1 it is Troterra and will print These: (and will show the current pp and current BP
		
	
		printf("Torterra's Movies are: \n");
		printf("1-Dig (%d BP, %d PP)							3-Protect (%d PP)", bp1, pp1, pp3);
			printf("\n");
		printf("2-Leaf Storm (%d BP, %d PP)						4-Charge (%d PP)", bp2, pp2, pp4);
		printf("\n");
		break;
	}
	
	case 4:{ // if pokemon is 1 it is Pickachu and will print These: (and will show the current pp and current BP
		
	
		printf("Pikachu's Movies are: \n");
		printf("1-Thunderbolt (%d BP, %d PP)						3-Protect (%d PP)", bp1, pp1, pp3);
			printf("\n");
		printf("2-Dig (%d BP, %d PP)							4-Charge (%d PP)", bp2, pp2, pp4);
		printf("\n");
		break;
	} 
	case 5:{ // if pokemon is 1 it is Groudon and will print These: (and will show the current pp and current BP
		
	
		printf("Groudon's Movies are: \n");
		printf("1-Fissure (%d BP, %d PP)							3-Protect (%d PP)", bp1, pp1, pp3);
			printf("\n");
		printf("2-Fire Blast (%d BP, %d PP)						4-Charge (%d PP)", bp2, pp2, pp4);
		printf("\n");
		break;
	}
	
	case 6:{ // if pokemon is 1 it is Lapras and will print These: (and will show the current pp and current BP
		
	
		printf("Lapras's Movies are: \n");
		printf("1-Ice Beam (%d BP, %d PP)					3-Protect (%d PP)", bp1, pp1, pp3);
			printf("\n");
		printf("2-Scald (%d BP, %d PP)						4-Charge (%d PP)", bp2, pp2, pp4);
		printf("\n");
		break;
	}
	
	case 7:{ // if pokemon is 1 it is Stunfisk and will print These: (and will show the current pp and current BP
		
	
		printf("Stunfisk's Movies are: \n");
		printf("1-Watergun (%d BP, %d PP)					3-Protect (%d PP)", bp1, pp1, pp3);
			printf("\n");
		printf("2-Earthquake (%d BP, %d PP)					4-Charge (%d PP)", bp2, pp2, pp4);
		printf("\n");
		break;
	}
}
}

int PP(int move, int PP1,int PP2,int PP3,int PP4, int charge, int protect, int pkmn){ 
// This determines if the player can use the move, based on the PP 0 pp = cannot used move
// also player cannopt used charge and protect consecutively so this will also check
// move = player chose move
// PP1- PP4= Power points of  the player's move 
// charge / protect = charge and protect status
// pkmn = playter pokemon
	
switch (move){

case 1:{ //  move 1 of the player
	if (PP1<=0){ // if the moves PP is 0 (pp1) it will return 0, and print that the move has no more PP
		printf("This move have no more PP\n");
		return 0;		
	}
	else if (PP1>0){ // if the Pp1 is greater than 0 it will return 1, player can use move
		return 1;}
				
	break;
}	
case 2:{// move 2 of the player
	if (PP2<=0){ // if the moves PP is 0 (pp2) it will return 0, and print that the move has no more PP
		printf("This move have no more PP\n");
		return 0;		
	}
	else if (PP2>0){ // if the Pp2 is greater than 0 it will return 1, playter can use move 
		return 1;}
				
	break;
}	

case 3:{ // move 3 or protect
	if ( protect == 1){ // if protect is = 1 the plater cannot use it again because that means the player just used protect last move
	pokemon(pkmn);	printf(" already used Protect\n");//it will print this and return 0
		return 0;
	}
	else{ // if protect is not equal to one that means he can use it now depending on the pp left
	
	if (PP3<=0){ // if the Pp is less than and equal 0 it will print the one below and reutnr 0 
		printf("This move have no more PP\n");
		return 0;		
	}
	else if (PP3>0){ // if it is greater than 0 it will return 1 and player can use move
		return 1;}
			}
	break;
}	

case 4:{ // move 4 or charge
		if (charge ==1){ // If charge is 1, the player cannot use it 
		 pokemon(pkmn); printf(" already used Charge\n");//it will print this and retunr 0
		return 0;
	}
	else { //charge is not equal to 1 but is 0 it will be depenedant on the PP
	if (PP4<=0){ // pp is equal or less than 0 return 0 and player cannot use this move
		printf("This move have no more PP\n");
		return 0;		
	}
	else if (PP4>0){ // pp is greater than 0 plater can use move and returns 1
		return 1;}
	}
				
	break;
	
}


default :{
	printf("Invalid move, Please pick from the moves above by selecting the appropriate number\n");
	// if the move scanned is neither from 1-4
	// it wil say the one on top and player mus reselect a move, it will retunr 0
	return 0;
	break;
}	
	
	}
		
}
int main() {
int Plyr1, Mhp1, Chp1, P1Tp1, P1Tp2, P1pp1, P1pp2, P1pp3, P1pp4, P1Bp1, P1Bp2, P1Mtp1, P1Mtp2, Prtct1, Chrg1;
// Plyr1= Pokemon of player 1 //// Mhp1= Max hp of player 1, Chp1 = Current Hp of player 1
//  P1TP1/2 = Player 1 pokeon type 1 and 2
// P1pp2 - P1pp4 = Power points of Pokemon of Player 1 pokemon of moves 1 -4
// P1bp1/2 = Battle points of the unqive attack moves of player 1
// P1Mtp1/2= Unqive move types ///////// Prtct1 and charge = Protect and charge status of 1
int Plyr2, Mhp2, Chp2, P2Tp1, P2Tp2, P2pp1, P2pp2, P2pp3, P2pp4, P2Bp1, P2Bp2, P2Mtp1, P2Mtp2, Prtct2, Chrg2;
// Plyr2= Pokemon of player 2 //// Mhp2= Max hp of player 2, Chp2 = Current Hp of player 2
//  P2TP1/2 = Player 2 pokeon type 1 and 2
// P2pp2 - P2pp4 = Power points of Pokemon of Player 2 pokemon of moves 1 -4
// P2Bp1/2 = Battle points of the unqive attack moves of player 2
// P2Mtp1/2= Unqive move types ///////// Prtct1 and charge = Protect and charge status of 2
float damage;
// damage = damage calculation (in Float due to the return damages that have been mutipled by0.5 or 1.5 and such

char notnumber;
// notnumber== helps take in characters to not create an error or forever loop in the game
int yn, move, rusure1;
// yn for main menu change pokemon
// move= move of the pokemon both player 1 and 2
// rusure 1 = help determine if the player want to do the move 
Chrg1=0;
Chrg2=0;
Prtct1=0;
Prtct2=0;
// everything is 0 just incase

	printf("\n\n\n\n\n\n\n\n\n\n"); // print  new lines to give space, Menu is at bottom of console
	printf("\n\n\n\n\n\n\n\n\n");
	printf("\n\n\n\n\n\n\n\n\n");
	printf("\n\n\n\n\n\n\n\n\n");
	printf("\n\n\n\n\n\n\n\n\n");
	printf("\n\n\n\n\n\n\n\n\n");
// For Move type and Pokemon types:
// 1- fire, 2 - water, 3- grass, 4 - electric , 5- ground, 6- ice, 0 = no type
damage=0;// damage is 0 just in case 
printf("•_•          					POKEMON 1v1 BATTLE SIMULATOR        					•_•");
	printf("\n\n\n\n");
	printf("Pokemon: \n");
	printf("1 - Entei \n");
	printf("2 - Milotic \n"); 
	printf("3 - Torterra \n");
	printf("4 - Pikachu \n");
	printf("5 - Groudon \n");
	printf("6 - Lapras \n");
	printf("7 - Stunfisk \n\n\n\n");
	// menu
	do {  // will let player 1 pick from 1-7 if not from 1-7 do while loop repeats conditions Plyr1 >0 && Plyr<=7
	printf("Player 1 Please Select a Pokemon:");
	scanf("%d", &Plyr1); // scans what pokemon from the list 1-7, only 1
	scanf("%c", &notnumber); // to accepet characters or letters to not cause errors, Plyr1 default 0;
	
	
	switch (Plyr1){
		case 1:{ // if 1 player one is entei with correspoding 
		//Max and current hp types, power points battle points and Move types
			printf("\nPlayer 1 has chosen Entei!\n");
				Mhp1 = 150;
				Chp1 = 150;
				P1Tp1 = 1;
				P1Tp2 = 0;
				P1pp1 = 5;
				P1pp2 = 5;
				P1pp3 = 5;
				P1pp4 = 5;
				P1Bp1 = 30;
				P1Bp2 = 30;
				P1Mtp1 = 1;
				P1Mtp2 = 5;
			break;
		}
		case 2:{// if 1 player one is Milotic with correspoding 
		//Max and current hp types, power points battle points and Move types
			printf("\nPlayer 1 has chosen Milotic!\n");
				Mhp1 = 200;
				Chp1 = 200;
				P1Tp1 = 2;
				P1Tp2 = 0;
				P1pp1 = 7;
				P1pp2 = 7;
				P1pp3 = 5;
				P1pp4 = 5;
				P1Bp1 = 20;
				P1Bp2 = 20;
				P1Mtp1 = 2;
				P1Mtp2 = 6;
				
			break;
		}
		case 3:{// if 1 player one is Torterra with correspoding 
		//Max and current hp types, power points battle points and Move types
			printf("\nPlayer 1 has chosen Torterra!\n");
				Mhp1 = 220;
				Chp1 = 220;
				P1Tp1 = 3;
				P1Tp2 = 5;
				P1pp1 = 7;
				P1pp2 = 5;
				P1pp3 = 5;
				P1pp4 = 5;
				P1Bp1 = 20;
				P1Bp2 = 40;
				P1Mtp1 = 5;
				P1Mtp2 = 3;
			break;
		}
		case 4:{ // if 1 player one is Pickachu with correspoding 
		//Max and current hp types, power points battle points and Move types
			printf("\nPlayer 1 has chosen Pikachu!\n");
				Mhp1 = 120;
				Chp1 = 120;
				P1Tp1 = 4;
				P1Tp2 = 0;
				P1pp1 = 10;
				P1pp2 = 7;
				P1pp3 = 5;
				P1pp4 = 5;
				P1Bp1 = 10;
				P1Bp2 = 20;
				P1Mtp1 = 4;
				P1Mtp2 = 5;
			break;
		}
		case 5:{ // if 1 player one is Groudon with correspoding 
		//Max and current hp types, power points battle points and Move types
			printf("\nPlayer 1 has chosen Groudon!\n");
				Mhp1 =150;
				Chp1 = 150;
				P1Tp1 = 5;
				P1Tp2 = 0;
				P1pp1 = 5;
				P1pp2 = 5;
				P1pp3 = 5;
				P1pp4 = 5;
				P1Bp1 = 40;
				P1Bp2 = 30;
				P1Mtp1 = 5;
				P1Mtp2 = 1;
			break;
		}
		case 6:{ // if 1 player one is Lapras with correspoding 
		//Max and current hp types, power points battle points and Move types
			printf("\nPlayer 1 has chosen Lapras!\n");
			Mhp1 = 190;
				Chp1 = 190;
				P1Tp1 = 6;
				P1Tp2 = 2;
				P1pp1 = 7;
				P1pp2 = 7;
				P1pp3 = 5;
				P1pp4 = 5;
				P1Bp1 = 20;
				P1Bp2 = 20;
				P1Mtp1 = 6;
				P1Mtp2 = 2;
			break;
		}
		case 7:{
			// if 1 player one is Stunfisk  with correspoding 
		//Max and current hp types, power points battle points and Move types
			printf("\nPlayer 1 has chosen Stunfisk!\n");
				Mhp1 = 130;
				Chp1 = 130;
				P1Tp1 = 5;
				P1Tp2 = 4;
				P1pp1 = 10;
				P1pp2 = 5;
				P1pp3 = 5;
				P1pp4 = 5;
				P1Bp1 = 10;
				P1Bp2 = 30;
				P1Mtp1 = 2;
				P1Mtp2 = 5;
			break;
		}
		default:{// if it is not from 1-7 it will say to chose another pokemon 
			printf("Please Enter a Valid pokemon from the List by typing the corresponding number\n");
			break;
		}
	}
	}while(Plyr1 <= 0 || Plyr1 >7); // conditions if not met do while loop repeats
	
	movelist(Plyr1, P1Bp1, P1Bp2, P1pp1, P1pp2, P1pp3, P1pp4);// Display the move list of the pokemon

	
	do {// will let player 1 pick from 1-7 if not from 1-7 do while loop repeats conditions Plyr2 >0 && Plyr2<=7
	printf("\n\nPlayer 2 Please Select a Pokemon:");
	scanf("%d", &Plyr2);// scans waht pokemon player 2 will pick
	scanf("%c", &notnumber);// for junk value of char
	
	
	switch (Plyr2){
		case 1:{// if 1 player 2 is entei with correspoding 
		//Max and current hp types, power points battle points and Move types
			printf("\nPlayer 2 has chosen Entei!\n");
				Mhp2 = 150;
				Chp2 = 150;
				P2Tp1 = 1;
				P2Tp2 = 0;
				P2pp1 = 5;
				P2pp2 = 5;
				P2pp3 = 5;
				P2pp4 = 5;
				P2Bp1 = 30;
				P2Bp2 = 30;
				P2Mtp1 = 1;
				P2Mtp2 = 5;
			break;
		}
		case 2:{
			// if 1 player 2 is Milotic with correspoding 
		//Max and current hp types, power points battle points and Move types
			printf("\nPlayer 2 has chosen Milotic!\n");
				Mhp2 = 200;
				Chp2 = 200;
				P2Tp1 = 2;
				P2Tp2 = 0;
				P2pp1 = 7;
				P2pp2 = 7;
				P2pp3 = 5;
				P2pp4 = 5;
				P2Bp1 = 20;
				P2Bp2 = 20;
				P2Mtp1 = 2;
				P2Mtp2 = 6;
			break;
		}
		case 3:{// if 1 player 2 is Torterra with correspoding 
		//Max and current hp types, power points battle points and Move types
			printf("\nPlayer 2 has chosen Torterra!\n");
				Mhp2 = 220;
				Chp2 = 220;
				P2Tp1 = 3;
				P2Tp2 = 5;
				P2pp1 = 7;
				P2pp2 = 5;
				P2pp3 = 5;
				P2pp4 = 5;
				P2Bp1 = 20;
				P2Bp2 = 40;
				P2Mtp1 = 5;
				P2Mtp2 = 3;
			break;
		}
		case 4:{// if 1 player 2 is Pickachu with correspoding 
		//Max and current hp types, power points battle points and Move types
			printf("\nPlayer 2 has chosen Pikachu!\n");
				Mhp2 = 120;
				Chp2 = 120;
				P2Tp1 = 4;
				P2Tp2 = 0;
				P2pp1 = 10;
				P2pp2 = 7;
				P2pp3 = 5;
				P2pp4 = 5;
				P2Bp1 = 10;
				P2Bp2 = 20;
				P2Mtp1 = 4;
				P2Mtp2 = 5;
			break;
		}
		case 5:{// if 1 player 2 is Groudon with correspoding 
		//Max and current hp types, power points battle points and Move types
			printf("\nPlayer 2 has chosen Groudon!\n");
				Mhp2 =150;
				Chp2 = 150;
				P2Tp1 = 5;
				P2Tp2 = 0;
				P2pp1 = 5;
				P2pp2 = 5;
				P2pp3 = 5;
				P2pp4 = 5;
				P2Bp1 = 40;
				P2Bp2 = 30;
				P2Mtp1 = 5;
				P2Mtp2 = 1;
			break;
		}
		case 6:{// if 1 player 2 is Lapras with correspoding 
		//Max and current hp types, power points battle points and Move types
			printf("\nPlayer 2 has chosen Lapras!\n");
				Mhp2 = 190;
				Chp2 = 190;
				P2Tp1 = 6;
				P2Tp2 = 2;
				P2pp1 = 7;
				P2pp2 = 7;
				P2pp3 = 5;
				P2pp4 = 5;
				P2Bp1 = 20;
				P2Bp2 = 20;
				P2Mtp1 = 6;
				P2Mtp2 = 2;
			break;
		}
		case 7:{// if 1 player 2 is Stunfisk with correspoding 
		//Max and current hp types, power points battle points and Move types
			printf("\nPlayer 2 has chosen Stunfisk!\n");
				Mhp2 = 130;
				Chp2 = 130;
				P2Tp1 = 5;
				P2Tp2 = 4;
				P2pp1 = 10;
				P2pp2 = 5;
				P2pp3 = 5;
				P2pp4 = 5;
				P2Bp1 = 10;
				P2Bp2 = 30;
				P2Mtp1 = 2;
				P2Mtp2 = 5;
			break;
		}
		default:{// if not any of the numbers it is invalid
			printf("Please Enter a Valid pokemon from the List by typing the corresponding number\n");
			break;
		}
	}
	
	}while(Plyr2 <= 0 || Plyr2 >7);// conditions if not met repeat
		movelist(Plyr2, P2Bp1, P2Bp2, P2pp1, P2pp2, P2pp3, P2pp4);
		// shows move list for playter 2
do{// Ask for a chance to change pokemon 
	
printf("\n\nAre you ready to fight? \n 1- No, Change Pokemon 		2 - Yes, Begin Battle\n:");
scanf("%d", &yn); // scans yes or no 
scanf("%c", &notnumber);// char junk value getter
if (yn == 1){  // if 1 which is no, resets all values just in case
// main is called again and goes back to menu
				Plyr1=0;
				Mhp1 = 0;
				Chp1 = 0;
				P1Tp1 = 0;
				P1Tp2 = 0;
				P1pp1 = 0;
				P1pp2 = 0;
				P1pp3 = 0;
				P1pp4 = 0;
				P1Bp1 = 0;
				P1Bp2 = 0;
				P1Mtp1 = 0;
				P1Mtp2 = 0;
				Plyr2=0;
				Mhp2 = 0;
				Chp2 = 0;
				P2Tp1 = 0;
				P2Tp2 = 0;
				P2pp1 = 0;
				P2pp2 = 0;
				P2pp3 = 0;
				P2pp4 = 0;
				P2Bp1 = 0;
				P2Bp2 = 0;
				P2Mtp1 = 0;
				P2Mtp2 = 0;
			
				main();
				
				
}
else 
printf("Place a valid number\n");
}while(yn!=1 && yn!=2); // if yn is not 1 or 2 it will ask to pick a number again

 
int lding; // loading screen before battle
lding =0; // lding is 0
do{
		
	printf("10100100           01100000000010101010110       101010101101");// displasys this
	lding++; // lding increments by 1 
}while (lding < 400); // prints the 010110 until lding is more than 500

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"); // new lines(spaces)


do {// does the battle while player 1 and Player 2 is Hp is more than 0, if either one is 0 stops the loop
	damage=0; // damage is 0 just in case

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\n\n\n");// new line
	pokemon(Plyr1);// displays pokemon based on Plyr1 number
	printf("%d / %d\n", Chp1, Mhp1); // dispalyts Current and max hp  for plfayer 1
	pokemon(Plyr2); // dispalys pokemon based on player 2 pokemon
	printf("%d / %d \n", Chp2, Mhp2); // displays current and max hp for player 2
	printf("**********************************************************************\n\n\n");// design
	
		movelist(Plyr1, P1Bp1, P1Bp2, P1pp1, P1pp2, P1pp3, P1pp4);// shows move list
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");// MORE new lines a lot of spaces
				if (P2pp1 == 0 &&P2pp2 == 0 &&P2pp3 == 0 &&P2pp4 == 0 ){ // if Player 2 has no pp left
	// it shows this on the move log
		pokemon(Plyr2); 
		printf("Has no more PP left on Any moves, ");
		pokemon(Plyr2);
		printf(" Takes 5 damage while ");
		pokemon(Plyr1);
		printf("Takes 10 damage\n");	
	}

	else if (move !=0){ // if move is not equal to 0 it will display the move and player2 pokemon
		pkmnusedmove(Plyr2,move);// basically what the opponent used
	}
	if (P1pp1 == 0 && P1pp2 == 0 && P1pp3 == 0 && P1pp4 == 0 ){ 
	// if the All PP is 0 the pokemon takes 5 damage while opponent takes 10
		pokemon(Plyr1);
		printf("Has no more PP left on Any moves, ");
		pokemon(Plyr1);
		printf(" Takes 5 damage while ");
		pokemon(Plyr2);
		printf("Takes 10 damage\n");	
		
		Chp1= Chp1 -5;
		Chp2= Chp2 -10;
	printf("Press enter to continue\n"); // To show Player 1 no more pp and to continue 
		scanf("%c", &notnumber); // need two because 1 will take in the enter of player 2, eg. plaer types 2 and enter, ebter is still in buffer
	scanf("%c", &notnumber);// fist scan basically takes it
	}
	
	else {// if all pp is not 0, basicaly if any of the pp is 1 up
	

	do{ // does the scaning of move if the return is 1 AND rusure(if player is sure of move ) is equal to 2which is yes
	move = 0; // makes move 0 again just in case
		do{
			printf("Player 1 Select a move:");
			scanf("%d", &move);
			scanf("%c", &notnumber);		// char junk getter
		}while(PP(move, P1pp1, P1pp2, P1pp3, P1pp4, Chrg1, Prtct1, Plyr1) == 0); 
		// if return is 0 means no pp left or charre and protect already used
		// if return is 1, passes do while loop and proceeds, pp is not 0 and charge and protect not yet used 
	do{
// if the player does not pick 1 or 2 it will keep repeating the question if he is alright with his move
	rusure1=0; // reset value 
	printf("Are you sure?\n");
	printf("1- No			2-Yes\n");
	scanf("%d", &rusure1);
	scanf("%c", &notnumber);
		}while (rusure1!=1 && rusure1!=2);
					
}while(rusure1==1); // if rusure is 2 which is yes passes the loop if it is 1 it will rpeat 
// 						and ask for the player to place another move or the same one

printf("\n\n\n\n\n\n\n\n\n\n\n");// more newlines
	
	if (move==1){ // after the validty of pp , it will go to damge, if move is 1 it will use 
	// BP1 and P1pp1
			
				damage= Battle(P1Bp1, P1Tp1, P1Tp2, P2Tp1, P2Tp2, P1Mtp1);// send this to calcualte damage, gets return from functiion battle
				P1pp1= P1pp1-1;// PP fior nmove one is -1 by 1
				if (Chrg1>0){ // if chrg is 1
				
				Chrg1=0; // Charge is reset and Bp is set to normal
				P1Bp1=P1Bp1/2;
				P1Bp2=P1Bp2/2;
			}
				if (Prtct2>0){// if the enemy player has protect one P1 does no damage
					damage=0;
					
				}
	
		}
	else if (move==2){
		// after the validty of pp , it will go to damge, if move is 2 it will use 
	// BP2 and P1pp2
			damage= Battle(P1Bp2, P1Tp1, P1Tp2, P2Tp1, P2Tp2,  P1Mtp2);  // damge is equal to  return from functiion battle
					P1pp2= P1pp2-1; // PP - 1
				if (Chrg1>0){ // if charge is 0 charge is reset and BPs are reset
				Chrg1=0;
				P1Bp1=P1Bp1/2;
				P1Bp2=P1Bp2/2;
			}
			
		
				if (Prtct2>0){ // if enemy protect is 1 or up damage is 0
					damage=0;
				}

}
	
		else if (move==3){ // if move 3, plyr 1 uses protect
			Prtct1 = 2; // protect euqals 2,  because protect cannotn be used consecutivley and has no effect on the turn after
			P1pp3= P1pp3-1; // pp - 1
		}
		else if (move==4){ // if player uses 4, uses charge
			P1Bp1= P1Bp1 *2;// doubles both BP1 and Bp2
			P1Bp2= P1Bp2 *2;
			Chrg1=1; // charge is equal to 1
			P1pp4= P1pp4-1; // pp -1
			
		}
		
		Chp2= Chp2-damage; // Chp2 is minused based on damage
		Prtct1= Prtct1-1; // Prtct is -1 because protect cannotn be used consecutivley and has no effect on the turn after
		// this turn -1 next turn cannot be used because its still 1, and the next turn prtct will be 0 and enemy can damage now even if
		// he didn t use damage spell last round
		//*/
}
if (Chp2<=0 || Chp1<=1){ // do while loop will end if Chp2 is 0 or less than, Problem is that
// when Chp2 is 0 the loop will not end YET because it CHp2 turn is stil before the Do while verifies, 
// do while loop will end after Chp2 is but wihtoput this break player 2 wil still have 1 turn even if hp is 0 or negative
// and if player 1 dies before turn ends due to loss of pp -5 to self and -10 to enemy it will end
	break;
}
damage=0; // damge ios 0 just in case

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
printf("\n\n\n");// newlin
pokemon(Plyr1); // player 1 pokemon
	printf("%d / %d\n", Chp1, Mhp1); // max and current hp,
	pokemon(Plyr2); // player 2 pokemon 
	printf("%d / %d \n", Chp2, Mhp2);// max and current h[p
		printf("**********************************************************************\n\n\n");// design 
	
	
		movelist(Plyr2, P2Bp1, P2Bp2, P2pp1, P2pp2, P2pp3, P2pp4);// palyer 2 move list
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");// spaces
		if (P1pp1 == 0 && P1pp2 == 0 && P1pp3 == 0 && P1pp4 == 0 ){ 
	// if enemy pokemon has no more Pp, it shows this for move used in previous turn
		pokemon(Plyr1);
		printf("Has no more PP left on Any moves, ");
		pokemon(Plyr1);
		printf(" Takes 5 damage while ");
		pokemon(Plyr2);
		printf("Takes 10 damage\n");	
}
	else  if (move !=0){ // if move is not equal to 0  shows moves
		pkmnusedmove(Plyr1,move);
	}
	if (P2pp1 == 0 &&P2pp2 == 0 &&P2pp3 == 0 &&P2pp4 == 0 ){ // if Player 2 has no pp left
	// -5 to player 2, -10 to player 1
		pokemon(Plyr2); 
		printf("Has no more PP left on Any moves, ");
		pokemon(Plyr2);
		printf(" Takes 5 damage while ");
		pokemon(Plyr1);
		printf("Takes 10 damage\n");	
		
		Chp2= Chp2 -5;
		Chp1= Chp1 -10;
		printf("Press enter to continue\n");
			scanf("%c", &notnumber); // two 1 for "enter"  junk 1 for actual enter
		scanf("%c", &notnumber);
		
	}
	
	else{ // if pp is greater than 0 in any of them
	
		
	do{ // does loop until the move has enough pp and player has selected yes or 2 if they want the move 
	move = 0; // makes move 0 again just in case
		do{ // picks a move
			printf("Player 2 Select a move:");
			scanf("%d", &move);
			scanf("%c", &notnumber); // char get junk
		}while(PP(move, P2pp1, P2pp2, P2pp3, P2pp4, Chrg2, Prtct2, Plyr2) == 0); // continues if chosen move has no pp
		// return1 = move has pp or charge and protect not yet used passes do loop[ 
		
	do{ // verifys the pick
rusure1=0; //reset value
	printf("Are you sure?\n");
	printf("1- No			2-Yes\n");
	scanf("%d", &rusure1);
	scanf("%c", &notnumber);
		}while (rusure1!=1 && rusure1!=2); // does loop until player picks 1 or 2 
					
}while(rusure1==1);// if player picks 1 it repeats if player picks 2 it passes loop 
			
	printf("\n\n\n\n\n\n\n\n\n\n\n"); // spaces
	
if (move==1){// move 1 of player 2
// uses bp 1 and pp1 and move tpy 1 
			damage= Battle(P2Bp1, P2Tp1, P2Tp2, P1Tp1, P1Tp2, P2Mtp1); //  damage = return of battle fucntion
				// player 2 types first due to function parameters
			P2pp1= P2pp1-1;// pp - 1
			if (Chrg2>0){ // if charg2 is greater than 0 it reests charge and bp
			
				Chrg2=0;
				P2Bp1=P2Bp1/2;
				P2Bp2=P2Bp2/2;
			}
				if (Prtct1>0){ // if player 1 protect is 1 or 2, or up damge - 0
					damage=0;
				}
		}
		else if (move==2){ // move 2 of player 2  
		// uses bp2 and pp2 and move type 2
			damage= Battle(P2Bp2, P2Tp1, P2Tp2, P1Tp1, P1Tp2, P2Mtp2);// damge = reutrn of battle function
			// player 2 types first due to function parameters
			P2pp2= P2pp2-1; // pp -1 
			if (Chrg2>0){ // charge is 1 resests charge and BPs
				Chrg2=0;
				P2Bp1=P2Bp1/2;
				P2Bp2=P2Bp2/2;
			}
				if (Prtct1>0){ // if protect is 1 or 2 or up damge is 0
					damage=0;
				}
		}
		else if (move==3){ // uses protect
			Prtct2 = 2; // pritect is 2 due to the -1 decrementy every after turn only be used
			// once every after turn (bascialy not conesecutive) protect is gone the turn after
			P2pp3= P2pp3-1;// pp -1
		}
		else if (move==4){ // uses charge, Bps is doubled
			
			P2Bp1= P2Bp1 *2;
			P2Bp2= P2Bp2 *2;
			Chrg2=1; // charge is equal to 1
			P2pp4= P2pp4-1; // - pp
		}
		
		Chp1= Chp1-damage; // player 1 curent hp - damgae
		Prtct2= Prtct2-1; // protect decremnts by 1
	
}
	
} while (Chp1> 0 && Chp2>0); // condtions for do while loop, Chp1 and CHp2 are greater than to 0 
//if equal or less than 0 stops
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

if (Chp1<=0 && Chp2>0 ){ // if CHp1 is less than equal to or less than 0, and is less than player 2 Player 2 wins
	Chp1=Chp1*0; // multiplys by 0 if health is negative 
	pokemon(Plyr1);
	printf("%d / %d\n", Chp1, Mhp1);
	pokemon(Plyr2);
	printf("%d / %d \n", Chp2, Mhp1);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	
if (damage!=0 ){ // only shows move if died by move if not does not show
	pkmnusedmove(Plyr2,move);
}
	printf("\nPlayer 2 Wins!!!");
	
}
else if (Chp2 <=0 && Chp1>0){// if CHp2 is less than equal to or less than 0,  and is less than player 1 Player 1 wins
	Chp2=Chp2*0; // multiplys by 0 if health is negative to make  sure its 0 
	pokemon(Plyr1);
	printf("%d / %d\n", Chp1, Mhp1);
	pokemon(Plyr2);
	printf("%d / %d \n", Chp2, Mhp1);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

if (damage!=0){ // only shows move if died by move if not does not show

	pkmnusedmove(Plyr1,move);
}
	printf("\nPlayer 1 Wins!!!");	
}
else if (Chp2<=0 && Chp1<=0){// if both are 0 its a tie
	Chp1=Chp1*0;
Chp2=Chp2*0; // multiplys by 0 if health is negative to make  sure its 0 
	pokemon(Plyr1);
	printf("%d / %d\n", Chp1, Mhp1);
	pokemon(Plyr2);
	printf("%d / %d \n", Chp2, Mhp1);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("Its a draw!!");
}

do{
	yn=0; // reset yn
// ask if you want to play againb
printf("\n\n\n Do you wish to fight again? \n 1- No		2 and above- Yes\n:");
scanf("%d", &yn);// scans
scanf("%c", &notnumber);// junk cahr
if (yn == 2 ){// resets player stats and calls main again
				Plyr1=0;
				Mhp1 = 0;
				Chp1 = 0;
				P1Tp1 = 0;
				P1Tp2 = 0;
				P1pp1 = 0;
				P1pp2 = 0;
				P1pp3 = 0;
				P1pp4 = 0;
				P1Bp1 = 0;
				P1Bp2 = 0;
				P1Mtp1 = 0;
				P1Mtp2 = 0;
				Plyr2=0;
				Mhp2 = 0;
				Chp2 = 0;
				P2Tp1 = 0;
				P2Tp2 = 0;
				P2pp1 = 0;
				P2pp2 = 0;
				P2pp3 = 0;
				P2pp4 = 0;
				P2Bp1 = 0;
				P2Bp2 = 0;
				P2Mtp1 = 0;
				P2Mtp2 = 0;
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				main();
				
				
}

else if (yn ==1){ // no it ends and prints thanks

printf("\n\n\n\n\n\n\n\n\n\n\n\n");
printf("\n\n\n\n\n\n\n\n\n\n\n\n");
printf("\n\n\n\n\n\n\n\n\n\n\n\n");
printf("\n\n\n\n\n\n\n\n\n\n\n\n");
printf("						Thanks For playing!!										");

		scanf("%c", &notnumber);
		
exit;
}
else 
printf("Place a valid number\n"); // if not tell player that it is invalid number
}while(yn!=1 && yn!=2); // conditions not met repeats loop
	return 0;
	


}


