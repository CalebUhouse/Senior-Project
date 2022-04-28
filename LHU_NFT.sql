

CREATE TABLE Athlete (
 Athlete_ID int(3),
 Gender char (1),
 Ath_Height varchar(5),
 Ath_Weight int(3),
 Sport_ID int(1),
 Picture varchar(max),
 Position varchar(5),

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
Sport_ID int(1),
PPG Float(3,1),
FG Float (3,1),
Rebounds int(3),
Assists int(3),
Steals int(3),
Blocks int(3),


PRIMARY KEY (Sport_ID)

);

CREATE TABLE Football(
Sport_ID int(1),
TDs int(2),
Average Yards Float(3,1)
Tackles int(2),
Interceptions int(2),
Forced_Fumbles int(2),

PRIMARY KEY (Sport_ID)

);

CREATE TABLE Baseball(
Sport_ID int(1),
Batting Average Float (3,3),
Handedness varchar (1),
Runs int(3),
Hits int(3),
RBI int(3),

PRIMARY KEY (Sport_ID)



);

CREATE TABLE Soccer(
Sport_ID int(1),
Goals int(3),
Assists int(3),

PRIMARY KEY(Sport_ID)


);


CREATE TABLE Softball (
Sport_ID int(1),
Batting Avge Float (3,3),
Runs int(3),
Hits int(3),
RBI int(3),

PRIMARY KEY (Sport_ID)

);




