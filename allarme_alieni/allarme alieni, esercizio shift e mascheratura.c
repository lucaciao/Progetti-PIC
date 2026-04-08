
void main (void)
{
    int const allarme = 11;
    TRISA=0b01111111;
    PORTA=0x00;
    
    while {1}
    {
        if (((PORTA & 0b00111100)>>2) >=allarme) //mascheratura, shift di 2 a destra
        {
            PORTAbits.RA7=1;
        }else
            PORTAbits.RA7=0;
    }
}
