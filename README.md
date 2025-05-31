# # 🚌 Bus Ticket Booking System

A console-based bus ticket booking application developed in C programming language that implements a comprehensive discount system based on user demographics.

## 📋 Overview

This Bus Ticket Booking System is a command-line application that simulates a real-world bus ticket booking scenario. The system features an intelligent discount mechanism that calculates ticket prices based on passenger demographics including gender and age categories.

## ✨ Features

- *Menu-driven Interface*: Easy-to-navigate console interface
- *Multiple Destinations*: Choose from 4 available routes from Yavatmal
- *Dynamic Discount System*: Automatic discount calculation based on gender and age
- *Multiple Ticket Booking*: Book multiple tickets for the same destination
- *Input Validation*: Robust input handling and validation
- *Loop-based Booking*: Continuous booking option using do-while loop

## 🗺 Available Destinations

1. *Yavatmal to Kalamb*
2. *Yavatmal to Deoli*
3. *Yavatmal to Wardha*
4. *Yavatmal to Nagpur*

## 💰 Discount Structure

### Female Passengers
- *All Ages*: 50% discount on ticket price

### Child Passengers (Age 5-15)
- *All Genders*: 75% discount on ticket price

### Male Passengers
- *Age 15-49*: Full price (No discount)
- *Age 50-74*: 50% discount on ticket price
- *Age 75+*: Full price (No discount)

## 🛠 System Requirements

- *Compiler*: GCC or any C compiler
- *Operating System*: Windows, Linux, or macOS
- *Memory*: Minimal (< 1MB)

## 🚀 Installation

1. Clone the repository:
bash
git clone https://github.com/yourusername/bus-ticket-booking-system.git


2. Navigate to the project directory:
bash
cd bus-ticket-booking-system


3. Compile the program:
bash
gcc bus_ticket_system.c -o bus_ticket_system


4. Run the executable:
bash
./bus_ticket_system


## 📖 Usage

1. *Select Destination*: Choose from the available destinations (1-4)
2. *Enter Passenger Details*:
   - Gender (M/F/C for Male/Female/Child)
   - Age
   - Base ticket price
3. *View Calculated Price*: System automatically applies applicable discounts
4. *Continue Booking*: Option to book additional tickets for the same destination
5. *Exit*: Complete the booking process

### Sample Input/Output

***BUS TICKET MACHINE***

Available Destinations:
1. Yavatmal to Kalamb
2. Yavatmal to Deoli
3. Yavatmal to Wardha
4. Yavatmal to Nagpur

Select destination (1-4): 3

Enter passenger details:
Gender (M/F/C): F
Age: 25
Ticket Price: 100

Discount Applied: 50%
Final Price: ₹50

Book another ticket for the same destination? (Y/N): N


## 🏗 Code Structure

The application is structured using fundamental C programming concepts:

- *Switch Statements*: For destination selection and menu navigation
- *Conditional Logic*: If-else statements for discount calculation
- *Loops*: Do-while loop for repeated booking functionality
- *Functions*: Modular code organization
- *Input Validation*: Error handling for user inputs

## 🔧 Key Programming Concepts Demonstrated

- Menu-driven programming
- Conditional statements (if-else, switch-case)
- Loop structures (do-while)
- Input/output operations
- Data validation
- Mathematical calculations

## 🚀 Future Enhancements

- [ ] *Online Payment Integration*: Add payment gateway support
- [ ] *Seat Selection*: Interactive seat map and selection
- [ ] *Booking History*: Store and display previous bookings
- [ ] *Database Integration*: Persistent data storage
- [ ] *GUI Interface*: Graphical user interface using frameworks
- [ ] *Multi-language Support*: Localization features
- [ ] *SMS/Email Notifications*: Booking confirmations
- [ ] *Dynamic Pricing*: Time-based fare calculation

## 🤝 Contributing

Contributions are welcome! Please feel free to submit a Pull Request. For major changes, please open an issue first to discuss what you would like to change.

1. Fork the Project
2. Create your Feature Branch (git checkout -b feature/AmazingFeature)
3. Commit your Changes (git commit -m 'Add some AmazingFeature')
4. Push to the Branch (git push origin feature/AmazingFeature)
5. Open a Pull Request

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 👥 Authors

- *Your Name* - Initial work - [YourGithub](https://github.com/yourusername)

## 🙏 Acknowledgments

- Developed as part of GCOEY programming curriculum
- Thanks to the C programming community for inspiration
- Special thanks to contributors and testers

## 📞 Support

If you have any questions or issues, please open an issue on GitHub or contact the development team.

---

*Tags*: #c-programming #bus-ticket #booking-system #console-application #gcoey
