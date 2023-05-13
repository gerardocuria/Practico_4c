typedef struct digital_output_s * digital_output_t;


digital_input_t DigitalInputCreate(uint8_t port,uint8_t pin,bool inverted);


bool DigitalInputGetState(digital_input_t input);

bool DigitalInputHasChanged(digital_input_t input);

bool DigitalInputHasActivated(digital_input_t input);

bool DigitalInputHasDesactivated(digital_input_t input);




digital_output_t DigitalOutputCreate(uint8_t port,uint8_t pin);


void DigitalOutputActivate(digital_output_t output);


void DigitalOutputDeactivate(digital_output_t output);


void DigitalOutputToggle(digital_output_t output);

