/* write code as switch statement
*/

#include <stdin.h>
#include <stdlib.h>

/* original code
*  int val = 0;
*  if (card_name[0] == 'K') {
*    val = 10;
*  } else if (card_name[0] == 'Q') {
*    val = 10;
*  } else if (card_name[0] == 'J') {
*    val = 10;
*  } else if (card_name[0] == 'A') {
*    val = 11;
*  } else {
*    val = atoi(card_name);
*  }
*/

int val = 0;
switch(card_name[0] {
  case 'K':
  case 'Q':
  case 'J':
    val = 10;
    break;
  case 'A':
    val = 11;
    break;
  default:
    val = atoi(card_name);
}
