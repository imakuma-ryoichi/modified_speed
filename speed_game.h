
#include <stdio.h>

typedef struct {

  int suit;
  int num;
  WordNum word_num;
  Suit word_suit;
} Card;


typedef struct {

  Card table_card[2];

} Field;


typedef struct {

  Card stock_cards[13 * 2];
  Card hand_cards[4];
  double cooldown_sec;
  int played_cards;
  int played_cards_count;

} Player;

typedef struct {
  Player player[2];
  Field field;
} Game;

typedef enum{

  A = 1,
  J = 11,
  Q = 12,
  K = 13,

} WordNum;

typedef enum{
  HEART,
  DIAMOND,
  SPADE,
  CLUB, 
} Suit;




