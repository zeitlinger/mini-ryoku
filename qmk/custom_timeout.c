/* THIS FILE WAS GENERATED!
 *
 * file is generated from README.md using https://github.com/zeitlinger/keyboard/blob/main/generateKeyboard.kt
 */

uint16_t get_combo_term(uint16_t index, combo_t *combo) {
  switch(index) {
    case C_BASE_CKC_X: return 100;
    case C_BASE_KC_ENT: return 20;
    case C_BASE_KC_K: return 80;
    case C_MODC_LEFT_A: return 35;
    case C_MODC_LEFT_C: return 35;
    case C_MODC_LEFT_CA: return 35;
    case C_MODC_LEFT_CS: return 35;
    case C_MODC_LEFT_CSA: return 35;
    case C_MODC_LEFT_S: return 35;
    case C_MODC_LEFT_SA: return 35;
    case C_MODC_RIGHT_A: return 35;
    case C_MODC_RIGHT_C: return 35;
    case C_MODC_RIGHT_CA: return 35;
    case C_MODC_RIGHT_CS: return 35;
    case C_MODC_RIGHT_CSA: return 35;
    case C_MODC_RIGHT_S: return 35;
    case C_MODC_RIGHT_SA: return 35;
    case C_OSM_LEFT_A: return 20;
    case C_OSM_LEFT_C: return 10;
    case C_OSM_LEFT_CA: return 30;
    case C_OSM_LEFT_CS: return 10;
    case C_OSM_LEFT_CSA: return 10;
    case C_OSM_LEFT_S: return 10;
    case C_OSM_LEFT_SA: return 10;
    case C_OSM_RIGHT_A: return 20;
    case C_OSM_RIGHT_C: return 10;
    case C_OSM_RIGHT_CA: return 30;
    case C_OSM_RIGHT_CS: return 10;
    case C_OSM_RIGHT_CSA: return 10;
    case C_OSM_RIGHT_S: return 10;
    case C_OSM_RIGHT_SA: return 10;
    default:
      return COMBO_TERM;
  }
}

