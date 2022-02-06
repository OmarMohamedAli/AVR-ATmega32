
#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

#define PORTA    (*(volatile u8*)0X3B)
#define PORTB    (*(volatile u8*)0X38)
#define PORTC    (*(volatile u8*)0X35)
#define PORTD    (*(volatile u8*)0X32)

#define DDRA     (*(volatile u8*)0X3A)
#define DDRB     (*(volatile u8*)0X37)
#define DDRC     (*(volatile u8*)0X34)
#define DDRD     (*(volatile u8*)0X31)

#define PINA     (*(volatile u8*)0X39)
#define PINB     (*(volatile u8*)0X36)
#define PINC     (*(volatile u8*)0X33)
#define PIND     (*(volatile u8*)0X30)

typedef enum{INPUT=0, OUTPUT}Pin_Mode_t;
typedef enum{LOW=0 , HIGH}Pin_State_t;
typedef enum{FLOAT=0, PULL_UP}Input_Pin_Mode_t;
enum PORTS{A=1 , B, C, D};

#define PA0   10
#define PA1   11
#define PA2   12
#define PA3   13
#define PA4   14
#define PA5   15
#define PA6   16
#define PA7   17


#define PB0   20
#define PB1   21
#define PB2   22
#define PB3   23
#define PB4   24
#define PB5   25
#define PB6   26
#define PB7   27

#define PC0   30
#define PC1   31
#define PC2   32
#define PC3   33
#define PC4   34
#define PC5   35
#define PC6   36
#define PC7   37

#define PD0   40
#define PD1   41
#define PD2   42
#define PD3   43
#define PD4   44
#define PD5   45
#define PD6   46
#define PD7   47

#endif /* DIO_PRIVATE_H_ */