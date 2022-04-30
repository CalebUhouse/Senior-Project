

CREATE TABLE Athlete (
 Athlete_ID int(3),
 Ath_Name varchar(50),
 Gender char (1),
 Ath_Height varchar(5),
 Ath_Weight int(3),
 Sport_ID int(1),
 Picture varchar(max),
 Position varchar(25),

PRIMARY KEY (Athlete_ID),
FOREIGN KEY (Sport_ID)
);


CREATE TABLE Stats (

Athlete_ID int(3),
Sport_ID int(1),
PRIMARY KEY(Athlete_ID,Sport_ID),
FOREIGN KEY (Athlete_ID,Sport_ID)
);

CREATE TABLE Basketball (
Athlete_ID int(3),
FG Float (4,3),
PPG Float(3,1),
Rebounds int(3),
Assists int(3),
Steals int(3),
Blocks int(3),
Sport_ID int(1)


PRIMARY KEY (Sport_ID)

);

CREATE TABLE Football(
Athlete_ID int(3),
Total_Yards int(5),
TDs int(2),
Tackles int(3),
Interceptions int(3),
Forced_Fumbles int(3),
Sport_ID int(1)

PRIMARY KEY (Sport_ID)

);

CREATE TABLE Baseball(
Athlete_ID int(3),
Batting Average Float (4,3),
Handedness varchar (1),
Runs int(3),
Hits int(3),
RBI int(3),
Sport_ID int(1)

PRIMARY KEY (Sport_ID)



);

CREATE TABLE Soccer(
Athlete_ID int(3),
Goals int(3),
Assists int(3),
Sport_ID int(1)

PRIMARY KEY(Sport_ID)


);


CREATE TABLE Softball (
Athlete_ID int(3),
Batting Avge Float (4,3),
Runs int(3),
Hits int(3),
RBI int(3),
Sport_ID int(1)

PRIMARY KEY (Sport_ID)

);




