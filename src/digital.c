struct  digital_output_s {
    uint8_t port;
    uint_t pin;
};







digital_output_t DigitalOutputCreate(uint8_t port,uint8_t pin){
    static struct digital_output_s output;

    output.port = port;
    output.pin = pin;
    Chip_GPIO_SetPinState(LPC_GPIO_PORT, output.port, output.pin, false);
    Chip_GPIO_SetPinDIR(LPC_GPIO_PORT, output.port, output.pin, true);

    return &output;
}






void DigitalOutputToggle(digital_output_t output){
    Chip_GPIO_SetPinToggle(LPC_GPIO_PORT, output->port, output->pin);


}

