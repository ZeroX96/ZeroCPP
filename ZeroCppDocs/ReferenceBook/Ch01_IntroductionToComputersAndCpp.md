# Introduction to Computers and C++

#### Introduction

Welcome to C++, a powerful computer programming language that’s appropriate for technically oriented people with little or no programming experience, and for experienced programmers to use in building substantial information systems. You’re already familiar with the powerful tasks computers perform. 

In this course we will write Programs to control our computers to perform different kinds of tasks. Software(instructions you write) controls hardware(computers). You’ll learn object-oriented programming, today’s key programming methodology. You’ll create many software objects that model things in the real world.  C++ is one of today’s most popular software development languages.

As of 2008 there were more than a billion general-purpose computers in use. Today, various websites say that number is approximately two billion, and according to the real-time tracker at gsmaintelligence.com, there are now more mobile devices than there are people in the world. According to the International Data Corporation (IDC), the number
of mobile Internet users will top two billion in 2016. Smartphone sales surpassed personal computer sales in 2011.

#### Computers and the Internet

These are exciting times in the computer field. Many of the most influential and successful businesses of the last two decades are technology companies, including Apple, IBM, Hewlett Packard, Dell, Intel, Motorola, Cisco, Microsoft, Google, Amazon, Facebook, Twitter, eBay and many more. These companies are major employers of people who study
computer science, computer engineering, information systems or related disciplines. At the time of this writing, Apple was the most valuable company in the world. The Slides provides a few examples of the ways in which computers are improving people’s lives in research, industry and society.

| Name                      | Description                                                  |
| ------------------------- | ------------------------------------------------------------ |
| Electronic health records | These might include a patient's medical history, prescriptions, immunizations, lab results, allergies, insurance information and more. Making this information available to health care providers across a secure network improves patient care, reduces the probability of error and increases overall efficiency of the health-care system, helping control costs. |
| Human Genome Project      | The Human Genome Project was founded to identify and analyze the 20,000+  genes in human DNA. The project used computer programs to analyze complex genetic data, determine the sequences of the billions of chemical base pairs that make up human DNA and store the information in databases which have been made available over the Internet to researchers in many fields. |
| AMBER Alert               | The AMBER (America’s Missing: Broadcast Emergency Response) Alert System is used to find abducted children. Law enforcement notifies TV and radio broadcasters and state transportation officials, who then broadcast alerts on TV, radio, computerized highway signs, the Internet and wireless devices. AMBER Alert recently partnered with Facebook, whose users can “Like” AMBER Alert pages by location to receive alerts in their news feeds. |
| World Community Grid      | People worldwide can donate their unused computer processing power by installing a free secure software program that allows the World Community Grid (http://www.worldcommunitygrid.org) to harness unused capacity. This computing power, accessed over the Internet, is used in place of expensive supercomputers to conduct scientific research projects that are making a difference—providing clean water to third-world countries, fighting cancer, growing more nutritious rice for regions fighting hunger and more. |

#### Hardware and Software

Computers can perform calculations and make logical decisions phenomenally faster than human beings can. Many of today’s personal computers can perform billions of calculations in one second—more than a human can perform in a lifetime. Super computers are already performing thousands of trillions (quadrillions)of instructions per second! China’s
National University of Defense Technology’s Tianhe-2 supercomputer can perform over 33 quadrillion calculations per second (33.86 petaflops)! To put that in perspective, the Tianhe-2 supercomputer can perform in one second about 3 million calculations for every person on the planet!And supercomputing “upper limits” are growing quickly.

Computers process data under the control of sequences of instructions called computer programs. These programs guide the computer through ordered actions specified by people called computer programmers. The programs that run on a computer are referred to as software. here you’ll learn a key programming methodology that’s enhancing
programmer productivity, thereby reducing software development costs—object-oriented programming.

A computer consists of various devices referred to as hardware (e.g., the keyboard, screen, mouse, hard disks, memory, DVD drives and processing units). Computing costs are dropping dramatically, owing to rapid developments in hardware and software technologies. Computers that might have filled large rooms and cost millions of dollars decades
ago are now inscribed on silicon chips smaller than a fingernail, costing perhaps a few dollars each. Ironically, silicon is one of the most abundant materials on Earth—it’s an ingredient in common sand. Silicon-chip technology has made computing so economical that computers have become a commodity. 

#### Computer Organization

Regardless of differences in physicalappearance, computers can be envisioned as divided
into various logical units or sections

|          Logical unit          |                         Description                          |
| :----------------------------: | :----------------------------------------------------------: |
|           Input unit           | This “receiving” section obtains information (data and computer programs) from input devices and places it at the disposal of the other units for processing. Most user input is entered into computers through keyboards, touch screens and mouse devices. Other forms of input include receiving voice commands, scanning images and barcodes, reading from secondary storage devices (such as hard drives, DVD drives, Blu-ray Disc™ drives and USB flash drives—also called “thumb drives” or “memory sticks”), receiving video from a webcam and having your computer receive information from the Internet (such as when you stream videos from YouTube® or download e-books from Amazon). Newer forms of input include position data from a GPS device, and motion and orientation information from an accelerometer(a device that responds to up/down, left/right and forward/backward acceleration) in a smartphone or game controller (such as Microsoft®Kinect®for Xbox®, Wii™ Remote and Sony® PlayStation® Move). |
|          Output unit           | This “shipping” section takes information the computer has processed and places it on various output devices to make it available for use outside the computer. Most information that’s output from computers today is displayed on screens(including touch screens), printed on paper (“going green” discourages this),played as audio or video on PCs and media players (such as Apple’s iPods) and giant screens in sports stadiums, transmitted over the Internet or used to control other devices, such as robots and “intelligent” appliances. Information is also commonly output to secondary storage devices, such as hard drives, DVD drives and USB flash drives. Popular recent forms of output are smartphone and game controller vibration, and virtual reality devices like Oculus Rift. |
|          Memory unit           | This rapid-access, relatively low-capacity “warehouse” section retains information that has been entered through the input unit, making it immediately available for processing when needed. The memory unit also retains processed information until it can be placed on output devices by the output unit. Information in the memory unit is volatile—it’s typically lost when the computer’s power is turned-off. The memory unit is often called either memory, primary memory or RAM (Random Access Memory). Main memories on desktop and notebook computers contain as much as 128 GB of RAM, though 2 to 16 GB is most common. GB stands for gigabytes; a gigabyte is approximately one billion bytes. A byte is eight bits. A bit is either a 0or a 1. |
| Arithmetic and logic unit(ALU) | This “manufacturing” section performs calculations, such as addition, subtraction, multiplication and division. It also contains the decision mechanisms that allow the computer, for example, to compare two items from the memory unit to determine whether they’re equal. In today’s systems, the ALU is implemented as part of the next logical unit, the CPU. |
| Central processing unit (CPU)  | This “administrative” section coordinates and supervises the operation of the other sections. The CPU tells the input unit when information should be read into the memory unit, tells the ALU when information from the memory unit should be used in calculations and tells the output unit when to send information from the memory unit to certain output devices. Many of today’s computers have multiple CPUs and, hence, can perform many operations simultaneously. A multi-core processor implements multiple processors on a single integrated-circuit chip—a dual-core processor has two CPUs, a quad-core processor has four and an octa-core processor has eight. Today’s desktop computers have processors that can execute billions of instructions per second. To take full advantage of multicore architecture you need to write multithreaded applications. |
|     Secondary storage unit     | This is the long-term, high-capacity “warehousing” section. Programs or data not actively being used by the other units normally are placed on secondary storage devices (e.g., your hard drive) until they’re again needed, possibly hours, days,months or even years later. Information on secondary storage devices is persistent—it’s preserved even when the computer’s power is turned off. Secondary storage information takes much longer to access than information in primary memory, but its cost per unit is much less. Examples of secondary storage devices include hard drives, DVD drives and USB flash drives, some of which can holdover 2 TB (TB stands for terabytes; a terabyte is approximately one trillion bytes).Typical hard drives on desktop and notebook computers hold up to 2 TB, and some desktop hard drives can hold up to 6 TB. |

#### Data Hierarchy

Data items processed by computers form a data hierarchy that becomes larger and more complex in structure as we progress from the simplest data items (called “bits”) to richer ones, such as characters and fields. 

**Bits:** The smallest data item in a computer can assume the value **0** or the value **1**. It’s called a bit(short for “binary digit”—a digit that can assume one of two values). Remarkably, the impressive functions performed by computers involve only the simplest manipulations of 0s and 1s—examining a bit’s value, setting a bit’s value and reversing a bit’s value (from 1to  0or from 0to 1).

**Characters:** It’s tedious for people to work with data in the low-level form of bits. Instead, they prefer to work with decimal digits(0–9), letters(A–Z and a–z), and special symbols(e.g., $, @, %, &, *, (, ), –, +, ", :, ? and /). Digits, letters and special symbols are known as characters. The computer’s character set is the set of all the characters used to write programs and represent data items. Computers process only 1s and 0s, so a computer’s character set represents every character as a pattern of 1s and 0s. C++ supports various character sets (including Unicode®), with some requiring more than one byte per character. Unicode supports many of the world’s languages. See more information on the ASCII (American Standard Code for Information Interchange)character set—the popular subset of Unicode that represents uppercase and lowercase letters, digits and some common special characters. 

**Fields:** Just as characters are composed of bits, fields are composed of characters or bytes. A field is a group of characters or bytes that conveys meaning. For example, a field consisting of uppercase and lowercase letters can be used to represent a person’s name, and a field consisting of decimal digits could represent a person’s age.

**Records:** Several related fields can be used to compose a record. In a payroll system, for example, the record for an employee might consist of the following fields (possible types for these fields are shown in parentheses):
• Employee identification number (a whole number)
• Name (a string of characters)
• Address (a string of characters)
• Hourly pay rate (a number with a decimal point)
• Year-to-date earnings (a number with a decimal point)
• Amount of taxes withheld (a number with a decimal point).
Thus, a record is a group of related fields. In the preceding example, all the fields belong to the same employee. A company might have many employees and a payroll record for each. 

**Files:**
A file is a group of related records. [Note: More generally, a file contains arbitrary data in arbitrary formats. In some operating systems, a file is viewed simply as a sequence of bytes—any organization of the bytes in a file, such as organizing the data into records, is a view created by the application programmer.] It’s not unusual for an organization to have many files, some containing billions, or even trillions, of characters of information. 

**Database:**
A database is a collection of data organized for easy access and manipulation. The most popular model is the relational database, in which data is stored in simple tables. A table includes records and fields. For example, a table of students might include first name, last name, major, year, student ID number and grade-point-average fields. The data for each
student is a record, and the individual pieces of information in each record are the fields. You can search, sort and otherwise manipulate the data based on its relationship to multiple tables or databases. For example, a university might use data from the student database in combination with data from databases of courses, on-campus housing,meal plans, etc.

**Big Data:**
The amount of data being produced worldwide is enormous and growing quickly. According to IBM, approximately 2.5 quintillion bytes (2.5 exabytes) of data are created daily and according to Salesforce.com, 90% of the world’s data was created in just the past 12 months! According to an IDC study, the global data supply will reach 40 zettabytes(equal
to 40 trillion gigabytes) annually by 2020.  Slides shows some common byte measurements. Big data applications deal with massive amounts of data and this field is growing quickly, creating lots of opportunity for software developers. According to a study by Gartner Group, over 4 million IT jobs globally were expected to support big data in 2015.

#### Machine Languages, Assembly Languages and High Level Languages

Programmers write instructions in various programming languages, some directly understandable by computers and others requiring intermediate translation steps. 

**Machine Languages:** Any computer can directly understand only its own machine language(also called machine code), defined by its hardware architecture. Machine languages generally consist of numbers (ultimately reduced to1s and 0s). Such languages are cumbersome for humans.

**Assembly Languages**
Programming in machine language was simply too slow and tedious for most programmers. Instead, they began using English-like abbreviations to represent elementary operations. These abbreviations formed the basis of assembly languages. Translator programs called assemblers were developed to convert assembly-language programs to machine language. Although assembly-language code is clearer to humans, it’s incomprehensible to computers until translated to machine language.

**High-Level Languages:** To speed up the programming process further, high-level languages were developed in
which single statements could be written to accomplish substantial tasks. High-level languages, such as C, C++, Java, C#, Swift and Visual Basic, allow you to write instructions that look more like everyday English and contain commonly used mathematical notations. Translator programs called compilers convert high-level language programs into machine
language.  The process of compiling a large high-level language program into machine language can take a considerable amount of computer time. Interpreter programs were developed to execute high-level language programs directly (without the need for compilation), although more slowly than compiled programs. **Scripting languages** such as the popular web languages JavaScript and PHP are processed by interpreters. 

#### Introduction to Object Technology

Building software quickly, correctly and economically remains an elusive goal at a time when demands for new and more powerful software are soaring. Objects, or more precisely, the classes objects come from, are essentially reusable software components. There are date objects, time objects, audio objects, video objects, automobile objects, people objects, etc. Almost any noun can be reasonably represented as a software object in terms of attributes(e.g., name, color and size) and behaviors(e.g., calculating, moving and communicating). Software developers have discovered that using a modular, object-oriented design-and-implementation approach can make software development groups much more productive than was possible with earlier techniques—object oriented programs are often easier to understand, correct and modify.
**The Automobile as an Object**
Let’s begin with a simple analogy. Suppose you want to drive a car and make it go faster by pressing its accelerator pedal. What must happen before you can do this? Well, before you can drive a car, someone has to design it. A car typically begins as engineering drawings,similar to the blueprints that describe the design of a house. These drawings include the design for an accelerator pedal. The pedal hides from the driver the complex mechanisms that actually make the car go faster, just as the brake pedal hides the mechanisms that slow the car, and the steering wheel hides the mechanisms that turn the car. This enables people with little or no knowledge of how engines, braking and steering mechanisms work to drive a car easily.
Before you can drive a car, it must be built from the engineering drawings that describe it. A completed car has an actual accelerator pedal to make the car go faster, but even that’s not enough—the car won’t accelerate on its own (hopefully!), so the driver must press the pedal to accelerate the car. 

**Functions, Member Functions and Classes**
Let’s use our car example to introduce some key object-oriented programming concepts. Performing a task in a program requires a function. The function houses the program statements that actually perform its task. It hides these statements from its user, just as the accelerator pedal of a car hides from the driver the mechanisms of making the car go faster.
In C++, we often create a program unit called a class to house the set of functions that perform the class’s tasks—these are known as the class’s member functions. For example, a class that represents a bank account might contain a member function to deposit money to an account, another to withdraw money from an account and a third to query what the account’s current balance is. A class is similar to a car’s engineering drawings, which house the design of an accelerator pedal, brake pedal, steering wheel, and so on. 

**Instantiation** 
Just as someone has to build a car from its engineering drawings before you can actually drive a car, you must build an object from a class before a program can perform the tasks that the class’s member functions define. The process of doing this is called instantiation. An object is then referred to as an instance of its class. 

**Reuse**
Just as a car’s engineering drawings can be reused many times to build many cars, you can reuse a class many times to build many objects. Reuse of existing classes when building new classes and programs saves time and effort. Reuse also helps you build more reliable and effective systems, because existing classes and components often have gone through extensive testing, debugging and performance tuning. Just as the notion of interchangeable parts was crucial to the Industrial Revolution, reusable classes are crucial to the software revolution that has been spurred by object technology.

**Messages and Member-Function Calls**
When you drive a car, pressing its gas pedal sends a message to the car to perform a task that is, to go faster. Similarly, you send messages to an object. Each message is implemented as a member-function call that tells a member function of the object to perform its task. For example, a program might call a particular bank-account object’s deposit member function to increase the account’s balance. 

**Attributes and Data Members**
A car, besides having capabilities to accomplish tasks, also has attributes, such as its color, its number of doors, the amount of gas in its tank, its current speed and its record of total miles driven (its odometer reading). Like its capabilities, the car’s attributes are represented as part of its design in its engineering diagrams (which, for example, include an odometer and a fuel gauge). As you drive an actual car, these attributes are carried along with the car. Every car maintains its own attributes. For example, each car knows how much gas is in its own gas tank, but not how much is in the tanks of other cars.
<u>An object</u>, similarly, has attributes that it carries along as it’s used in a program. These attributes are specified as part of the object’s class. For example, a bank-account object has a balance attribute that represents the amount of money in the account. Each bank account object knows the balance in the account it represents, but not the balances of the other accounts in the bank. Attributes are specified by the class’s data members.

**Encapsulation**
Classes encapsulate(i.e., wrap) attributes and member functions into objects created from those classes—an object’s attributes and member functions are intimately related. Objects may communicate with one another, but they’re normally not allowed to know how other objects are implemented—implementation details are hidden within the objects themselves. This information hiding, as we’ll see, is crucial to good software engineering. 

**Inheritance**
A new class of objects can be created quickly and conveniently by inheritance—the new class absorbs the characteristics of an existing class, possibly customizing them and adding unique characteristics of its own. In our car analogy, an object of class “convertible” certainly is an object of the more general class “automobile,” but more specifically, the roof can be raised or lowered. 

**Object-Oriented Analysis and Design (OOAD)**
Soon you’ll be writing programs in C++. How will you create the code (i.e., the program instructions) for your programs? Perhaps, like many programmers, you’ll simply turn on your computer and start typing. This approach may work for small programs (like the ones we present in the early chapters of the book), but what if you were asked to create a software system to control thousands of automated teller machines for a major bank? Or suppose you were asked to work on a team of thousands of software developers building the next generation of the U.S. air traffic control system? For projects so large and complex, you should not simply sit down and start writing programs.
<u>To create</u> the best solutions, you should follow a detailed analysis process for determining your project’s requirements (i.e., defining what the system is supposed to do) and developing a design that satisfies them (i.e., deciding how the system should do it). Ideally, you’d go through this process and carefully review the design (and have your design reviewed by other software professionals) before writing any code. If this process involves analyzing and designing your system from an object-oriented point of view, it’s called an object-oriented analysis and design (OOAD) process. Languages like C++ are object oriented. Programming in such a language, called object-oriented programming (OOP), allows you to implement an object-oriented design as a working system. 

**The UML (Unified Modeling Language)**
Although many different OOAD processes exist, a single graphical language for communicating the results of any OOAD process has come into wide use. This language, known as the Unified Modeling Language (UML), is now the most widely used graphical scheme for modeling object-oriented systems.

#### Operating Systems

Operating systems are software systems that make using computers more convenient for users, application developers and system administrators. They provide services that allow each application to execute safely, efficiently and concurrently(i.e., in parallel) with other applications. The software that contains the core components of the operating system is called the kernel. Popular desktop operating systems include Linux, Windows and OS X.

#### Some Key Software Development Terminology

| Technology                     | Description                                                  |
| ------------------------------ | ------------------------------------------------------------ |
| Agile softwaredevelopment      | Agile software development is a set of methodologies that try to get software implemented faster and using fewer resources. Check out the Agile Alliance(www.agilealliance.org) and the Agile Manifesto(www.agilemanifesto.org). |
| Refactoring                    | Refactoring involves reworking programs to make them clearer and easier to maintain while preserving their correctness and functionality. It’s widely employed with agile development methodologies. Many IDEs contain built-in refactoring tools to do major portions of the reworking automatically. |
| Design patterns                | Design patterns are proven architectures for constructing flexible and maintainable object-oriented software. The field of design patterns tries to enumerate those recurring patterns, encouraging software designers to reuse them to develop better quality software using less time, money and effort. |
| LAMP                           | LAMP is an acronym for the open-source technologies that many developers use to build web applications inexpensively—it stands for Linux, Apache,MySQLand PHP(or Perlor Python—two otherpopular scripting languages). MySQL is an opensource database-management system. PHP is a popular open-source server-side “scripting” languagefor developing web applications. Apache is the mostpopular web server software. The equivalent forWindows development is WAMP—Windows,Apache, MySQL and PHP. |
| Software as a Service(SaaS)    | Software has generally been viewed as a product;most software still is offered this way. If you want to run an application, you buy a software package from a software vendor—often a CD, DVD or web download. You then install that software on your computer and run it as needed. As new versions appear, you upgrade your software, often at considerable cost in time and money. This process can become cumbersome for organizations that must maintain tens of thousands of systems on a diverse array of computer equipment. With Software as a Service (SaaS), the software runs on servers elsewhere on the Internet. When that server is updated,all clients worldwide see the new capabilities—no local installation is needed. You access the service through a browser. Browsers are quite portable, so you can run the same applications on a wide variety of computers from anywhere in the world. Salesforce.com, Google, Microsoft and many other companies offer SaaS. |
| Platform as a Service(PaaS)    | Platform as a Service (PaaS)provides a computing platform for developing and running applications as a service over the web, rather than installing the tools on your computer. Some PaaS providers are Google App Engine, Amazon EC2 and Windows Azure™. |
| Cloud computing                | SaaS and PaaS are examples of cloud computing. You can use software and data stored in the“cloud”—i.e., accessed on remote computers (or servers) via the Internet and available on demand—rather than having it stored locally on your desktop,notebook computer or mobile device. This allows you to increase or decrease computing resources to meet your needs at any given time, which is more cost effective than purchasing hardware to provide enough storage and processing power to meet occasional peak demands. Cloud computing also saves money by shifting to the service provider the burden of managing these apps(such as installing and upgrading the software, security, backups and disaster recovery). |
| Software Development Kit (SDK) | Software Development Kits (SDKs)include the tools and documentation developers use to program applications. |

------

# Done Ch_00....الحمد لله دائما وأبداً

















