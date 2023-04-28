typedef struct digital_output_s * digital_output_t;





digital_output_t DigitalOutputCreate(uint8_t port,uint8_t pin);



void DigitalOutputActivate(digital_output_t output);


void DigitalOutputDeactivate(digital_output_t output);


void DigitalOutputToggle(digital_output_t output);

