

CREATE TABLE Athlete (
 Athlete_ID int,
 Gender varchar (1),
 Heights int,
 Weight int,
 Sport_ID int,
 Picture VARBINARY(max),
 Postion varchar(5),

PRIMARY KEY (Athlete_ID),
FOREIGN KEY (Sport_ID)
);


CREATE TABLE Stats (

Athlete_ID int,
Sport_ID int,
PRIMARY KEY(Athlete_ID,Sport_ID),
FOREIGN KEY (Athlete_ID,Sport_ID)
);

CREATE TABLE Basketball (
Sport_ID int,
PPG Float(2,1),
FG Float (3,1),
Rebounds int,
Assists int,
Steals int,
Blocks int,


PRIMARY KEY (Sport_ID)

);

CREATE TABLE Football(
Sport_ID int,
TDs int,
Average Yards Float(3,1)
Tackles int,
Interceptions int,
Forced Fumbles int,

PRIMARY KEY (Sport_ID)

);

CREATE TABLE Baseball(
Sport_ID int,
Batting Average Float (1,3),
Handedness varchar (1),
Runs int,
Hits int,
RBI int,

PRIMARY KEY (Sport_ID)



);

CREATE TABLE Soccer(
Sport_ID int,
Goals int,
Assists int,

PRIMARY KEY(Sport_ID)


);


CREATE TABLE Softball (
Sport_ID int,
Batting Avge Float (1,3),
Runs int,
Hits int,
RBI int,

PRIMARY KEY (Sport_ID)

);




