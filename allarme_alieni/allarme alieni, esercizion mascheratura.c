
void main (void)
{
    int const allarme = 11;
    TRISA=0b11111111;
    while {1}
    {
        if ((PORTA & 0b00001111) >=allarme) //mascheratura, tolgo gli ultimi 4 bit
        {
            PORTAbits.RA7=1;
        }else
            PORTAbits.RA7=1;
    }
}