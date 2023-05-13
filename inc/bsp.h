#include "digital.h"

#ifdef __cplusplus
extern "C"{
#endif


typedef struct board_s {
    digital_output_t led_azul;
    digital_output_t led_rojo;
    digital_output_t led_amarillo;
    digital_output_t led_verde;

    digital_input_t boton_prueba;
    digital_input_t boton_cambiar;
    digital_input_t boton_prender;
    digital_input_t boton_apagar;
    
} const * const board_t

board_t BoardCreate(void);

#idef __cplusplus
}
#endif
#endif