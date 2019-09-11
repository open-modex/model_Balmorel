execute 'mkdir -p "../output/results"';

File objective /..\output\results\objective.csv/;
objective.pc=5;
put objective;
put vobj.l;
putclose;

File memory /..\output\results\memory.csv/;
memory.pc=5;
put memory;
put system.memory, "%system.memory%";
putclose;

File timebuild /..\output\results\timebuild.csv/;
timebuild.pc=5;
put timebuild;
put BALBASE4.resGen;
putclose;

File constraints /..\output\results\constraints.csv/;
constraints.pc=5;
put constraints;
put BALBASE4.numEqu;
putclose;

File variables2 /..\output\results\variables.csv/;
variables2.pc=5;
put variables2;
put BALBASE4.numVar;
putclose;

File production /..\output\results\production.csv/;
production.pc=5;
scalar timeslice;
put production;
put "","";
loop((IR,G),
         put IR.tl;
);
put /;
put "Year", "Time";
loop((IA,G),
         put G.tl;
);
put /;
loop(Y,
         loop((S,T),
                 timeslice = (ord(S)-1)*24+ord(T);
                 put Y.tl,timeslice;
                 loop((IA,G),
                         put VGE_T.l(Y,IA,G,S,T);
                 );
                 put /;
         );
);
putclose;
