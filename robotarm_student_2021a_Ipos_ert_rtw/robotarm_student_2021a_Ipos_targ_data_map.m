  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 5;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (robotarm_student_2021a_Ipos_P)
    ;%
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_P.DiscreteDerivative_ICPrevScaled
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% robotarm_student_2021a_Ipos_P.DiscreteDerivative_ICPrevScal_e
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% robotarm_student_2021a_Ipos_P.DiscreteDerivative_ICPrevScal_h
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% robotarm_student_2021a_Ipos_P.CompareToConstant_const
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% robotarm_student_2021a_Ipos_P.DetectChange_vinit
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_P.CompareToConstant1_const
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 303;
      section.data(303)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_P.Delays_Y0
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
	  ;% robotarm_student_2021a_Ipos_P.RobotV_Y0
	  section.data(2).logicalSrcIdx = 7;
	  section.data(2).dtTransOffset = 1;
	
	  ;% robotarm_student_2021a_Ipos_P.ConveyorV_Y0
	  section.data(3).logicalSrcIdx = 8;
	  section.data(3).dtTransOffset = 2;
	
	  ;% robotarm_student_2021a_Ipos_P.VacuumV_Y0
	  section.data(4).logicalSrcIdx = 9;
	  section.data(4).dtTransOffset = 3;
	
	  ;% robotarm_student_2021a_Ipos_P.Objectdetectionmatrix_Value
	  section.data(5).logicalSrcIdx = 10;
	  section.data(5).dtTransOffset = 4;
	
	  ;% robotarm_student_2021a_Ipos_P.Object_Value
	  section.data(6).logicalSrcIdx = 11;
	  section.data(6).dtTransOffset = 16;
	
	  ;% robotarm_student_2021a_Ipos_P.Constant_Value
	  section.data(7).logicalSrcIdx = 12;
	  section.data(7).dtTransOffset = 17;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain1_Gain
	  section.data(8).logicalSrcIdx = 13;
	  section.data(8).dtTransOffset = 18;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag2_P1_Size
	  section.data(9).logicalSrcIdx = 14;
	  section.data(9).dtTransOffset = 19;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag2_P1
	  section.data(10).logicalSrcIdx = 15;
	  section.data(10).dtTransOffset = 21;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag2_P2_Size
	  section.data(11).logicalSrcIdx = 16;
	  section.data(11).dtTransOffset = 22;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag2_P2
	  section.data(12).logicalSrcIdx = 17;
	  section.data(12).dtTransOffset = 24;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag2_P3_Size
	  section.data(13).logicalSrcIdx = 18;
	  section.data(13).dtTransOffset = 25;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag2_P3
	  section.data(14).logicalSrcIdx = 19;
	  section.data(14).dtTransOffset = 27;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator3_P1_Size
	  section.data(15).logicalSrcIdx = 20;
	  section.data(15).dtTransOffset = 28;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator3_P1
	  section.data(16).logicalSrcIdx = 21;
	  section.data(16).dtTransOffset = 30;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator3_P2_Size
	  section.data(17).logicalSrcIdx = 22;
	  section.data(17).dtTransOffset = 31;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator3_P2
	  section.data(18).logicalSrcIdx = 23;
	  section.data(18).dtTransOffset = 33;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size
	  section.data(19).logicalSrcIdx = 24;
	  section.data(19).dtTransOffset = 34;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P1
	  section.data(20).logicalSrcIdx = 25;
	  section.data(20).dtTransOffset = 36;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size
	  section.data(21).logicalSrcIdx = 26;
	  section.data(21).dtTransOffset = 37;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P2
	  section.data(22).logicalSrcIdx = 27;
	  section.data(22).dtTransOffset = 39;
	
	  ;% robotarm_student_2021a_Ipos_P.Discreteintegrator_gainval
	  section.data(23).logicalSrcIdx = 28;
	  section.data(23).dtTransOffset = 40;
	
	  ;% robotarm_student_2021a_Ipos_P.Discreteintegrator_IC
	  section.data(24).logicalSrcIdx = 29;
	  section.data(24).dtTransOffset = 41;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain1_Gain_g
	  section.data(25).logicalSrcIdx = 30;
	  section.data(25).dtTransOffset = 42;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator3_P1_Size_d
	  section.data(26).logicalSrcIdx = 31;
	  section.data(26).dtTransOffset = 43;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator3_P1_k
	  section.data(27).logicalSrcIdx = 32;
	  section.data(27).dtTransOffset = 45;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator3_P2_Size_c
	  section.data(28).logicalSrcIdx = 33;
	  section.data(28).dtTransOffset = 46;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator3_P2_g
	  section.data(29).logicalSrcIdx = 34;
	  section.data(29).dtTransOffset = 48;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size_l
	  section.data(30).logicalSrcIdx = 35;
	  section.data(30).dtTransOffset = 49;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_o
	  section.data(31).logicalSrcIdx = 36;
	  section.data(31).dtTransOffset = 51;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size_o
	  section.data(32).logicalSrcIdx = 37;
	  section.data(32).dtTransOffset = 52;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_d
	  section.data(33).logicalSrcIdx = 38;
	  section.data(33).dtTransOffset = 54;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P1_Size
	  section.data(34).logicalSrcIdx = 39;
	  section.data(34).dtTransOffset = 55;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P1
	  section.data(35).logicalSrcIdx = 40;
	  section.data(35).dtTransOffset = 57;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P2_Size
	  section.data(36).logicalSrcIdx = 41;
	  section.data(36).dtTransOffset = 58;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P2
	  section.data(37).logicalSrcIdx = 42;
	  section.data(37).dtTransOffset = 60;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P3_Size
	  section.data(38).logicalSrcIdx = 43;
	  section.data(38).dtTransOffset = 61;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P3
	  section.data(39).logicalSrcIdx = 44;
	  section.data(39).dtTransOffset = 63;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain1_Gain_p
	  section.data(40).logicalSrcIdx = 45;
	  section.data(40).dtTransOffset = 64;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P1_Size
	  section.data(41).logicalSrcIdx = 46;
	  section.data(41).dtTransOffset = 65;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P1
	  section.data(42).logicalSrcIdx = 47;
	  section.data(42).dtTransOffset = 67;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P2_Size
	  section.data(43).logicalSrcIdx = 48;
	  section.data(43).dtTransOffset = 68;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P2
	  section.data(44).logicalSrcIdx = 49;
	  section.data(44).dtTransOffset = 70;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P3_Size
	  section.data(45).logicalSrcIdx = 50;
	  section.data(45).dtTransOffset = 71;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P3
	  section.data(46).logicalSrcIdx = 51;
	  section.data(46).dtTransOffset = 73;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P1_Size
	  section.data(47).logicalSrcIdx = 52;
	  section.data(47).dtTransOffset = 74;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P1
	  section.data(48).logicalSrcIdx = 53;
	  section.data(48).dtTransOffset = 76;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P2_Size
	  section.data(49).logicalSrcIdx = 54;
	  section.data(49).dtTransOffset = 77;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P2
	  section.data(50).logicalSrcIdx = 55;
	  section.data(50).dtTransOffset = 79;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P3_Size
	  section.data(51).logicalSrcIdx = 56;
	  section.data(51).dtTransOffset = 80;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P3
	  section.data(52).logicalSrcIdx = 57;
	  section.data(52).dtTransOffset = 82;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain1_Gain_a
	  section.data(53).logicalSrcIdx = 58;
	  section.data(53).dtTransOffset = 83;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P1_Size_k
	  section.data(54).logicalSrcIdx = 59;
	  section.data(54).dtTransOffset = 84;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P1_e
	  section.data(55).logicalSrcIdx = 60;
	  section.data(55).dtTransOffset = 86;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P2_Size_l
	  section.data(56).logicalSrcIdx = 61;
	  section.data(56).dtTransOffset = 87;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P2_c
	  section.data(57).logicalSrcIdx = 62;
	  section.data(57).dtTransOffset = 89;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P3_Size_e
	  section.data(58).logicalSrcIdx = 63;
	  section.data(58).dtTransOffset = 90;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P3_l
	  section.data(59).logicalSrcIdx = 64;
	  section.data(59).dtTransOffset = 92;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P1_Size_f
	  section.data(60).logicalSrcIdx = 65;
	  section.data(60).dtTransOffset = 93;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P1_p
	  section.data(61).logicalSrcIdx = 66;
	  section.data(61).dtTransOffset = 95;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P2_Size_n
	  section.data(62).logicalSrcIdx = 67;
	  section.data(62).dtTransOffset = 96;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P2_g
	  section.data(63).logicalSrcIdx = 68;
	  section.data(63).dtTransOffset = 98;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P3_Size_j
	  section.data(64).logicalSrcIdx = 69;
	  section.data(64).dtTransOffset = 99;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P3_f
	  section.data(65).logicalSrcIdx = 70;
	  section.data(65).dtTransOffset = 101;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain1_Gain_h
	  section.data(66).logicalSrcIdx = 71;
	  section.data(66).dtTransOffset = 102;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P1_Size_f
	  section.data(67).logicalSrcIdx = 72;
	  section.data(67).dtTransOffset = 103;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P1_n
	  section.data(68).logicalSrcIdx = 73;
	  section.data(68).dtTransOffset = 105;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P2_Size_k
	  section.data(69).logicalSrcIdx = 74;
	  section.data(69).dtTransOffset = 106;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P2_h
	  section.data(70).logicalSrcIdx = 75;
	  section.data(70).dtTransOffset = 108;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P3_Size_l
	  section.data(71).logicalSrcIdx = 76;
	  section.data(71).dtTransOffset = 109;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P3_f
	  section.data(72).logicalSrcIdx = 77;
	  section.data(72).dtTransOffset = 111;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P1_Size_d
	  section.data(73).logicalSrcIdx = 78;
	  section.data(73).dtTransOffset = 112;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P1_l
	  section.data(74).logicalSrcIdx = 79;
	  section.data(74).dtTransOffset = 114;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P2_Size_i
	  section.data(75).logicalSrcIdx = 80;
	  section.data(75).dtTransOffset = 115;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P2_j
	  section.data(76).logicalSrcIdx = 81;
	  section.data(76).dtTransOffset = 117;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P3_Size_d
	  section.data(77).logicalSrcIdx = 82;
	  section.data(77).dtTransOffset = 118;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P3_k
	  section.data(78).logicalSrcIdx = 83;
	  section.data(78).dtTransOffset = 120;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain1_Gain_i
	  section.data(79).logicalSrcIdx = 84;
	  section.data(79).dtTransOffset = 121;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P1_Size_l
	  section.data(80).logicalSrcIdx = 85;
	  section.data(80).dtTransOffset = 122;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P1_a
	  section.data(81).logicalSrcIdx = 86;
	  section.data(81).dtTransOffset = 124;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P2_Size_n
	  section.data(82).logicalSrcIdx = 87;
	  section.data(82).dtTransOffset = 125;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P2_g
	  section.data(83).logicalSrcIdx = 88;
	  section.data(83).dtTransOffset = 127;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P3_Size_o
	  section.data(84).logicalSrcIdx = 89;
	  section.data(84).dtTransOffset = 128;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd2_P3_c
	  section.data(85).logicalSrcIdx = 90;
	  section.data(85).dtTransOffset = 130;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P1_Size_g
	  section.data(86).logicalSrcIdx = 91;
	  section.data(86).dtTransOffset = 131;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P1_b
	  section.data(87).logicalSrcIdx = 92;
	  section.data(87).dtTransOffset = 133;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P2_Size_d
	  section.data(88).logicalSrcIdx = 93;
	  section.data(88).dtTransOffset = 134;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P2_k
	  section.data(89).logicalSrcIdx = 94;
	  section.data(89).dtTransOffset = 136;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P3_Size_f
	  section.data(90).logicalSrcIdx = 95;
	  section.data(90).dtTransOffset = 137;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag3_P3_j
	  section.data(91).logicalSrcIdx = 96;
	  section.data(91).dtTransOffset = 139;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain1_Gain_e
	  section.data(92).logicalSrcIdx = 97;
	  section.data(92).dtTransOffset = 140;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag2_P1_Size_i
	  section.data(93).logicalSrcIdx = 98;
	  section.data(93).dtTransOffset = 141;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag2_P1_b
	  section.data(94).logicalSrcIdx = 99;
	  section.data(94).dtTransOffset = 143;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag2_P2_Size_l
	  section.data(95).logicalSrcIdx = 100;
	  section.data(95).dtTransOffset = 144;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag2_P2_l
	  section.data(96).logicalSrcIdx = 101;
	  section.data(96).dtTransOffset = 146;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag2_P3_Size_g
	  section.data(97).logicalSrcIdx = 102;
	  section.data(97).dtTransOffset = 147;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag2_P3_h
	  section.data(98).logicalSrcIdx = 103;
	  section.data(98).dtTransOffset = 149;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator3_P1_Size_b
	  section.data(99).logicalSrcIdx = 104;
	  section.data(99).dtTransOffset = 150;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator3_P1_j
	  section.data(100).logicalSrcIdx = 105;
	  section.data(100).dtTransOffset = 152;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator3_P2_Size_c3
	  section.data(101).logicalSrcIdx = 106;
	  section.data(101).dtTransOffset = 153;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator3_P2_b
	  section.data(102).logicalSrcIdx = 107;
	  section.data(102).dtTransOffset = 155;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctnotch4_P1_Size
	  section.data(103).logicalSrcIdx = 108;
	  section.data(103).dtTransOffset = 156;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctnotch4_P1
	  section.data(104).logicalSrcIdx = 109;
	  section.data(104).dtTransOffset = 158;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctnotch4_P2_Size
	  section.data(105).logicalSrcIdx = 110;
	  section.data(105).dtTransOffset = 159;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctnotch4_P2
	  section.data(106).logicalSrcIdx = 111;
	  section.data(106).dtTransOffset = 161;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctnotch4_P3_Size
	  section.data(107).logicalSrcIdx = 112;
	  section.data(107).dtTransOffset = 162;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctnotch4_P3
	  section.data(108).logicalSrcIdx = 113;
	  section.data(108).dtTransOffset = 164;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctnotch4_P4_Size
	  section.data(109).logicalSrcIdx = 114;
	  section.data(109).dtTransOffset = 165;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctnotch4_P4
	  section.data(110).logicalSrcIdx = 115;
	  section.data(110).dtTransOffset = 167;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctnotch4_P5_Size
	  section.data(111).logicalSrcIdx = 116;
	  section.data(111).dtTransOffset = 168;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctnotch4_P5
	  section.data(112).logicalSrcIdx = 117;
	  section.data(112).dtTransOffset = 170;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd5_P1_Size
	  section.data(113).logicalSrcIdx = 118;
	  section.data(113).dtTransOffset = 171;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd5_P1
	  section.data(114).logicalSrcIdx = 119;
	  section.data(114).dtTransOffset = 173;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd5_P2_Size
	  section.data(115).logicalSrcIdx = 120;
	  section.data(115).dtTransOffset = 174;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd5_P2
	  section.data(116).logicalSrcIdx = 121;
	  section.data(116).dtTransOffset = 176;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd5_P3_Size
	  section.data(117).logicalSrcIdx = 122;
	  section.data(117).dtTransOffset = 177;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctpd5_P3
	  section.data(118).logicalSrcIdx = 123;
	  section.data(118).dtTransOffset = 179;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain7_Gain
	  section.data(119).logicalSrcIdx = 124;
	  section.data(119).dtTransOffset = 180;
	
	  ;% robotarm_student_2021a_Ipos_P.Plot_Value
	  section.data(120).logicalSrcIdx = 125;
	  section.data(120).dtTransOffset = 181;
	
	  ;% robotarm_student_2021a_Ipos_P.Stop_Value
	  section.data(121).logicalSrcIdx = 126;
	  section.data(121).dtTransOffset = 182;
	
	  ;% robotarm_student_2021a_Ipos_P.ReferenceVacuumbar_Value
	  section.data(122).logicalSrcIdx = 127;
	  section.data(122).dtTransOffset = 183;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain1_Gain_b
	  section.data(123).logicalSrcIdx = 128;
	  section.data(123).dtTransOffset = 184;
	
	  ;% robotarm_student_2021a_Ipos_P.Conveyorspeedmms_Value
	  section.data(124).logicalSrcIdx = 129;
	  section.data(124).dtTransOffset = 185;
	
	  ;% robotarm_student_2021a_Ipos_P.Saturation_UpperSat
	  section.data(125).logicalSrcIdx = 130;
	  section.data(125).dtTransOffset = 186;
	
	  ;% robotarm_student_2021a_Ipos_P.Saturation_LowerSat
	  section.data(126).logicalSrcIdx = 131;
	  section.data(126).dtTransOffset = 187;
	
	  ;% robotarm_student_2021a_Ipos_P.HomingRunningSwitch2_Threshold
	  section.data(127).logicalSrcIdx = 132;
	  section.data(127).dtTransOffset = 188;
	
	  ;% robotarm_student_2021a_Ipos_P.HomingRunningSwitch1_Threshold
	  section.data(128).logicalSrcIdx = 133;
	  section.data(128).dtTransOffset = 189;
	
	  ;% robotarm_student_2021a_Ipos_P.HomingRunningSwitch_Threshold
	  section.data(129).logicalSrcIdx = 134;
	  section.data(129).dtTransOffset = 190;
	
	  ;% robotarm_student_2021a_Ipos_P.HomingRunningSwitch_Threshold_j
	  section.data(130).logicalSrcIdx = 135;
	  section.data(130).dtTransOffset = 191;
	
	  ;% robotarm_student_2021a_Ipos_P.HomingRunningSwitch_Threshold_d
	  section.data(131).logicalSrcIdx = 136;
	  section.data(131).dtTransOffset = 192;
	
	  ;% robotarm_student_2021a_Ipos_P.SFunction_P1_Size
	  section.data(132).logicalSrcIdx = 137;
	  section.data(132).dtTransOffset = 193;
	
	  ;% robotarm_student_2021a_Ipos_P.SFunction_P1
	  section.data(133).logicalSrcIdx = 138;
	  section.data(133).dtTransOffset = 195;
	
	  ;% robotarm_student_2021a_Ipos_P.SFunction_P2_Size
	  section.data(134).logicalSrcIdx = 139;
	  section.data(134).dtTransOffset = 196;
	
	  ;% robotarm_student_2021a_Ipos_P.SFunction_P2
	  section.data(135).logicalSrcIdx = 140;
	  section.data(135).dtTransOffset = 198;
	
	  ;% robotarm_student_2021a_Ipos_P.ec_Ipos_P1_Size
	  section.data(136).logicalSrcIdx = 141;
	  section.data(136).dtTransOffset = 199;
	
	  ;% robotarm_student_2021a_Ipos_P.ec_Ipos_P1
	  section.data(137).logicalSrcIdx = 142;
	  section.data(137).dtTransOffset = 201;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain_Gain
	  section.data(138).logicalSrcIdx = 143;
	  section.data(138).dtTransOffset = 202;
	
	  ;% robotarm_student_2021a_Ipos_P.Constant1_Value
	  section.data(139).logicalSrcIdx = 144;
	  section.data(139).dtTransOffset = 203;
	
	  ;% robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainval
	  section.data(140).logicalSrcIdx = 145;
	  section.data(140).dtTransOffset = 204;
	
	  ;% robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainva_i
	  section.data(141).logicalSrcIdx = 146;
	  section.data(141).dtTransOffset = 205;
	
	  ;% robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_IC
	  section.data(142).logicalSrcIdx = 147;
	  section.data(142).dtTransOffset = 206;
	
	  ;% robotarm_student_2021a_Ipos_P.Constant_Value_i
	  section.data(143).logicalSrcIdx = 148;
	  section.data(143).dtTransOffset = 207;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain1_Gain_g2
	  section.data(144).logicalSrcIdx = 149;
	  section.data(144).dtTransOffset = 208;
	
	  ;% robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainva_h
	  section.data(145).logicalSrcIdx = 150;
	  section.data(145).dtTransOffset = 209;
	
	  ;% robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_IC_c
	  section.data(146).logicalSrcIdx = 151;
	  section.data(146).dtTransOffset = 210;
	
	  ;% robotarm_student_2021a_Ipos_P.Constant1_Value_a
	  section.data(147).logicalSrcIdx = 152;
	  section.data(147).dtTransOffset = 211;
	
	  ;% robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainva_j
	  section.data(148).logicalSrcIdx = 153;
	  section.data(148).dtTransOffset = 212;
	
	  ;% robotarm_student_2021a_Ipos_P.Constant_Value_f
	  section.data(149).logicalSrcIdx = 154;
	  section.data(149).dtTransOffset = 213;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain2_Gain
	  section.data(150).logicalSrcIdx = 155;
	  section.data(150).dtTransOffset = 214;
	
	  ;% robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainva_o
	  section.data(151).logicalSrcIdx = 156;
	  section.data(151).dtTransOffset = 215;
	
	  ;% robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_IC_o
	  section.data(152).logicalSrcIdx = 157;
	  section.data(152).dtTransOffset = 216;
	
	  ;% robotarm_student_2021a_Ipos_P.Constant1_Value_e
	  section.data(153).logicalSrcIdx = 158;
	  section.data(153).dtTransOffset = 217;
	
	  ;% robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainva_n
	  section.data(154).logicalSrcIdx = 159;
	  section.data(154).dtTransOffset = 218;
	
	  ;% robotarm_student_2021a_Ipos_P.Constant_Value_o
	  section.data(155).logicalSrcIdx = 160;
	  section.data(155).dtTransOffset = 219;
	
	  ;% robotarm_student_2021a_Ipos_P.UnitDelay_InitialCondition
	  section.data(156).logicalSrcIdx = 161;
	  section.data(156).dtTransOffset = 220;
	
	  ;% robotarm_student_2021a_Ipos_P.set_robot_calibration_r_Value
	  section.data(157).logicalSrcIdx = 162;
	  section.data(157).dtTransOffset = 221;
	
	  ;% robotarm_student_2021a_Ipos_P.set_robot_calibration_x_Value
	  section.data(158).logicalSrcIdx = 163;
	  section.data(158).dtTransOffset = 222;
	
	  ;% robotarm_student_2021a_Ipos_P.set_robot_calibration_z_Value
	  section.data(159).logicalSrcIdx = 164;
	  section.data(159).dtTransOffset = 223;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain_Gain_m
	  section.data(160).logicalSrcIdx = 165;
	  section.data(160).dtTransOffset = 224;
	
	  ;% robotarm_student_2021a_Ipos_P.Constant_Value_m
	  section.data(161).logicalSrcIdx = 166;
	  section.data(161).dtTransOffset = 225;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain3_Gain
	  section.data(162).logicalSrcIdx = 167;
	  section.data(162).dtTransOffset = 226;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain4_Gain
	  section.data(163).logicalSrcIdx = 168;
	  section.data(163).dtTransOffset = 227;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain5_Gain
	  section.data(164).logicalSrcIdx = 169;
	  section.data(164).dtTransOffset = 228;
	
	  ;% robotarm_student_2021a_Ipos_P.UnitDelay1_InitialCondition
	  section.data(165).logicalSrcIdx = 170;
	  section.data(165).dtTransOffset = 229;
	
	  ;% robotarm_student_2021a_Ipos_P.HomingRunningSwitch_Threshold_l
	  section.data(166).logicalSrcIdx = 171;
	  section.data(166).dtTransOffset = 230;
	
	  ;% robotarm_student_2021a_Ipos_P.ResetEncoderR_P1_Size
	  section.data(167).logicalSrcIdx = 172;
	  section.data(167).dtTransOffset = 231;
	
	  ;% robotarm_student_2021a_Ipos_P.ResetEncoderR_P1
	  section.data(168).logicalSrcIdx = 173;
	  section.data(168).dtTransOffset = 233;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain_Gain_h
	  section.data(169).logicalSrcIdx = 174;
	  section.data(169).dtTransOffset = 234;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator_P1_Size
	  section.data(170).logicalSrcIdx = 175;
	  section.data(170).dtTransOffset = 235;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator_P1
	  section.data(171).logicalSrcIdx = 176;
	  section.data(171).dtTransOffset = 237;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator_P2_Size
	  section.data(172).logicalSrcIdx = 177;
	  section.data(172).dtTransOffset = 238;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator_P2
	  section.data(173).logicalSrcIdx = 178;
	  section.data(173).dtTransOffset = 240;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P1_Size_m
	  section.data(174).logicalSrcIdx = 179;
	  section.data(174).dtTransOffset = 241;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P1_g
	  section.data(175).logicalSrcIdx = 180;
	  section.data(175).dtTransOffset = 243;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P2_Size_p
	  section.data(176).logicalSrcIdx = 181;
	  section.data(176).dtTransOffset = 244;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P2_g
	  section.data(177).logicalSrcIdx = 182;
	  section.data(177).dtTransOffset = 246;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P3_Size_h
	  section.data(178).logicalSrcIdx = 183;
	  section.data(178).dtTransOffset = 247;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P3_e
	  section.data(179).logicalSrcIdx = 184;
	  section.data(179).dtTransOffset = 249;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size_m
	  section.data(180).logicalSrcIdx = 185;
	  section.data(180).dtTransOffset = 250;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_e
	  section.data(181).logicalSrcIdx = 186;
	  section.data(181).dtTransOffset = 252;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size_os
	  section.data(182).logicalSrcIdx = 187;
	  section.data(182).dtTransOffset = 253;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_a
	  section.data(183).logicalSrcIdx = 188;
	  section.data(183).dtTransOffset = 255;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain_Gain_c
	  section.data(184).logicalSrcIdx = 189;
	  section.data(184).dtTransOffset = 256;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P1_Size_c
	  section.data(185).logicalSrcIdx = 190;
	  section.data(185).dtTransOffset = 257;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P1_e
	  section.data(186).logicalSrcIdx = 191;
	  section.data(186).dtTransOffset = 259;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P2_Size_k
	  section.data(187).logicalSrcIdx = 192;
	  section.data(187).dtTransOffset = 260;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P2_b
	  section.data(188).logicalSrcIdx = 193;
	  section.data(188).dtTransOffset = 262;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P3_Size_hn
	  section.data(189).logicalSrcIdx = 194;
	  section.data(189).dtTransOffset = 263;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P3_g
	  section.data(190).logicalSrcIdx = 195;
	  section.data(190).dtTransOffset = 265;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size_a
	  section.data(191).logicalSrcIdx = 196;
	  section.data(191).dtTransOffset = 266;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_g
	  section.data(192).logicalSrcIdx = 197;
	  section.data(192).dtTransOffset = 268;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size_l
	  section.data(193).logicalSrcIdx = 198;
	  section.data(193).dtTransOffset = 269;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_i
	  section.data(194).logicalSrcIdx = 199;
	  section.data(194).dtTransOffset = 271;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain1_Gain_m
	  section.data(195).logicalSrcIdx = 200;
	  section.data(195).dtTransOffset = 272;
	
	  ;% robotarm_student_2021a_Ipos_P.Saturation1_UpperSat
	  section.data(196).logicalSrcIdx = 201;
	  section.data(196).dtTransOffset = 273;
	
	  ;% robotarm_student_2021a_Ipos_P.Saturation1_LowerSat
	  section.data(197).logicalSrcIdx = 202;
	  section.data(197).dtTransOffset = 274;
	
	  ;% robotarm_student_2021a_Ipos_P.ResetEncoderR1_P1_Size
	  section.data(198).logicalSrcIdx = 203;
	  section.data(198).dtTransOffset = 275;
	
	  ;% robotarm_student_2021a_Ipos_P.ResetEncoderR1_P1
	  section.data(199).logicalSrcIdx = 204;
	  section.data(199).dtTransOffset = 277;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain1_Gain_o
	  section.data(200).logicalSrcIdx = 205;
	  section.data(200).dtTransOffset = 278;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator_P1_Size_i
	  section.data(201).logicalSrcIdx = 206;
	  section.data(201).dtTransOffset = 279;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator_P1_j
	  section.data(202).logicalSrcIdx = 207;
	  section.data(202).dtTransOffset = 281;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator_P2_Size_p
	  section.data(203).logicalSrcIdx = 208;
	  section.data(203).dtTransOffset = 282;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator_P2_n
	  section.data(204).logicalSrcIdx = 209;
	  section.data(204).dtTransOffset = 284;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P1_Size_d
	  section.data(205).logicalSrcIdx = 210;
	  section.data(205).dtTransOffset = 285;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P1_m
	  section.data(206).logicalSrcIdx = 211;
	  section.data(206).dtTransOffset = 287;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P2_Size_g
	  section.data(207).logicalSrcIdx = 212;
	  section.data(207).dtTransOffset = 288;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P2_p
	  section.data(208).logicalSrcIdx = 213;
	  section.data(208).dtTransOffset = 290;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P3_Size_o
	  section.data(209).logicalSrcIdx = 214;
	  section.data(209).dtTransOffset = 291;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P3_ge
	  section.data(210).logicalSrcIdx = 215;
	  section.data(210).dtTransOffset = 293;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size_m3
	  section.data(211).logicalSrcIdx = 216;
	  section.data(211).dtTransOffset = 294;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_f
	  section.data(212).logicalSrcIdx = 217;
	  section.data(212).dtTransOffset = 296;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size_b
	  section.data(213).logicalSrcIdx = 218;
	  section.data(213).dtTransOffset = 297;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_k
	  section.data(214).logicalSrcIdx = 219;
	  section.data(214).dtTransOffset = 299;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain1_Gain_hw
	  section.data(215).logicalSrcIdx = 220;
	  section.data(215).dtTransOffset = 300;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P1_Size_b
	  section.data(216).logicalSrcIdx = 221;
	  section.data(216).dtTransOffset = 301;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P1_p
	  section.data(217).logicalSrcIdx = 222;
	  section.data(217).dtTransOffset = 303;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P2_Size_m
	  section.data(218).logicalSrcIdx = 223;
	  section.data(218).dtTransOffset = 304;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P2_a
	  section.data(219).logicalSrcIdx = 224;
	  section.data(219).dtTransOffset = 306;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P3_Size_p
	  section.data(220).logicalSrcIdx = 225;
	  section.data(220).dtTransOffset = 307;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P3_c
	  section.data(221).logicalSrcIdx = 226;
	  section.data(221).dtTransOffset = 309;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size_n
	  section.data(222).logicalSrcIdx = 227;
	  section.data(222).dtTransOffset = 310;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_h
	  section.data(223).logicalSrcIdx = 228;
	  section.data(223).dtTransOffset = 312;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size_g
	  section.data(224).logicalSrcIdx = 229;
	  section.data(224).dtTransOffset = 313;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_b
	  section.data(225).logicalSrcIdx = 230;
	  section.data(225).dtTransOffset = 315;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain_Gain_cj
	  section.data(226).logicalSrcIdx = 231;
	  section.data(226).dtTransOffset = 316;
	
	  ;% robotarm_student_2021a_Ipos_P.Saturation1_UpperSat_e
	  section.data(227).logicalSrcIdx = 232;
	  section.data(227).dtTransOffset = 317;
	
	  ;% robotarm_student_2021a_Ipos_P.Saturation1_LowerSat_p
	  section.data(228).logicalSrcIdx = 233;
	  section.data(228).dtTransOffset = 318;
	
	  ;% robotarm_student_2021a_Ipos_P.ResetEncoderR1_P1_Size_d
	  section.data(229).logicalSrcIdx = 234;
	  section.data(229).dtTransOffset = 319;
	
	  ;% robotarm_student_2021a_Ipos_P.ResetEncoderR1_P1_d
	  section.data(230).logicalSrcIdx = 235;
	  section.data(230).dtTransOffset = 321;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain_Gain_cr
	  section.data(231).logicalSrcIdx = 236;
	  section.data(231).dtTransOffset = 322;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator_P1_Size_p
	  section.data(232).logicalSrcIdx = 237;
	  section.data(232).dtTransOffset = 323;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator_P1_k
	  section.data(233).logicalSrcIdx = 238;
	  section.data(233).dtTransOffset = 325;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator_P2_Size_o
	  section.data(234).logicalSrcIdx = 239;
	  section.data(234).dtTransOffset = 326;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator_P2_m
	  section.data(235).logicalSrcIdx = 240;
	  section.data(235).dtTransOffset = 328;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P1_Size_ch
	  section.data(236).logicalSrcIdx = 241;
	  section.data(236).dtTransOffset = 329;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P1_h
	  section.data(237).logicalSrcIdx = 242;
	  section.data(237).dtTransOffset = 331;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P2_Size_h
	  section.data(238).logicalSrcIdx = 243;
	  section.data(238).dtTransOffset = 332;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P2_l
	  section.data(239).logicalSrcIdx = 244;
	  section.data(239).dtTransOffset = 334;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P3_Size_f
	  section.data(240).logicalSrcIdx = 245;
	  section.data(240).dtTransOffset = 335;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P3_a
	  section.data(241).logicalSrcIdx = 246;
	  section.data(241).dtTransOffset = 337;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size_ni
	  section.data(242).logicalSrcIdx = 247;
	  section.data(242).dtTransOffset = 338;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_j
	  section.data(243).logicalSrcIdx = 248;
	  section.data(243).dtTransOffset = 340;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size_a
	  section.data(244).logicalSrcIdx = 249;
	  section.data(244).dtTransOffset = 341;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_j
	  section.data(245).logicalSrcIdx = 250;
	  section.data(245).dtTransOffset = 343;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain_Gain_l
	  section.data(246).logicalSrcIdx = 251;
	  section.data(246).dtTransOffset = 344;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P1_Size_by
	  section.data(247).logicalSrcIdx = 252;
	  section.data(247).dtTransOffset = 345;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P1_i
	  section.data(248).logicalSrcIdx = 253;
	  section.data(248).dtTransOffset = 347;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P2_Size_j
	  section.data(249).logicalSrcIdx = 254;
	  section.data(249).dtTransOffset = 348;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P2_o
	  section.data(250).logicalSrcIdx = 255;
	  section.data(250).dtTransOffset = 350;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P3_Size_oi
	  section.data(251).logicalSrcIdx = 256;
	  section.data(251).dtTransOffset = 351;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P3_aa
	  section.data(252).logicalSrcIdx = 257;
	  section.data(252).dtTransOffset = 353;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size_p
	  section.data(253).logicalSrcIdx = 258;
	  section.data(253).dtTransOffset = 354;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_j3
	  section.data(254).logicalSrcIdx = 259;
	  section.data(254).dtTransOffset = 356;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size_j
	  section.data(255).logicalSrcIdx = 260;
	  section.data(255).dtTransOffset = 357;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_c
	  section.data(256).logicalSrcIdx = 261;
	  section.data(256).dtTransOffset = 359;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain_Gain_g
	  section.data(257).logicalSrcIdx = 262;
	  section.data(257).dtTransOffset = 360;
	
	  ;% robotarm_student_2021a_Ipos_P.Saturation1_UpperSat_i
	  section.data(258).logicalSrcIdx = 263;
	  section.data(258).dtTransOffset = 361;
	
	  ;% robotarm_student_2021a_Ipos_P.Saturation1_LowerSat_n
	  section.data(259).logicalSrcIdx = 264;
	  section.data(259).dtTransOffset = 362;
	
	  ;% robotarm_student_2021a_Ipos_P.ResetEncoderR1_P1_Size_b
	  section.data(260).logicalSrcIdx = 265;
	  section.data(260).dtTransOffset = 363;
	
	  ;% robotarm_student_2021a_Ipos_P.ResetEncoderR1_P1_l
	  section.data(261).logicalSrcIdx = 266;
	  section.data(261).dtTransOffset = 365;
	
	  ;% robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainva_g
	  section.data(262).logicalSrcIdx = 267;
	  section.data(262).dtTransOffset = 366;
	
	  ;% robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_IC_co
	  section.data(263).logicalSrcIdx = 268;
	  section.data(263).dtTransOffset = 367;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain1_Gain_j
	  section.data(264).logicalSrcIdx = 269;
	  section.data(264).dtTransOffset = 368;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator3_P1_Size_m
	  section.data(265).logicalSrcIdx = 270;
	  section.data(265).dtTransOffset = 369;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator3_P1_ji
	  section.data(266).logicalSrcIdx = 271;
	  section.data(266).dtTransOffset = 371;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator3_P2_Size_b
	  section.data(267).logicalSrcIdx = 272;
	  section.data(267).dtTransOffset = 372;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctintegrator3_P2_j
	  section.data(268).logicalSrcIdx = 273;
	  section.data(268).dtTransOffset = 374;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size_j
	  section.data(269).logicalSrcIdx = 274;
	  section.data(269).dtTransOffset = 375;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_ez
	  section.data(270).logicalSrcIdx = 275;
	  section.data(270).dtTransOffset = 377;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size_aj
	  section.data(271).logicalSrcIdx = 276;
	  section.data(271).dtTransOffset = 378;
	
	  ;% robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_n
	  section.data(272).logicalSrcIdx = 277;
	  section.data(272).dtTransOffset = 380;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P1_Size_l
	  section.data(273).logicalSrcIdx = 278;
	  section.data(273).dtTransOffset = 381;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P1_m0
	  section.data(274).logicalSrcIdx = 279;
	  section.data(274).dtTransOffset = 383;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P2_Size_n
	  section.data(275).logicalSrcIdx = 280;
	  section.data(275).dtTransOffset = 384;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P2_f
	  section.data(276).logicalSrcIdx = 281;
	  section.data(276).dtTransOffset = 386;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P3_Size_d
	  section.data(277).logicalSrcIdx = 282;
	  section.data(277).dtTransOffset = 387;
	
	  ;% robotarm_student_2021a_Ipos_P.Dctleadlag_P3_i
	  section.data(278).logicalSrcIdx = 283;
	  section.data(278).dtTransOffset = 389;
	
	  ;% robotarm_student_2021a_Ipos_P.HomingRunningSwitch_Threshol_lq
	  section.data(279).logicalSrcIdx = 284;
	  section.data(279).dtTransOffset = 390;
	
	  ;% robotarm_student_2021a_Ipos_P.Gain_Gain_j
	  section.data(280).logicalSrcIdx = 285;
	  section.data(280).dtTransOffset = 391;
	
	  ;% robotarm_student_2021a_Ipos_P.Saturation1_UpperSat_o
	  section.data(281).logicalSrcIdx = 286;
	  section.data(281).dtTransOffset = 392;
	
	  ;% robotarm_student_2021a_Ipos_P.Saturation1_LowerSat_g
	  section.data(282).logicalSrcIdx = 287;
	  section.data(282).dtTransOffset = 393;
	
	  ;% robotarm_student_2021a_Ipos_P.LimitSpeed_RisingLim
	  section.data(283).logicalSrcIdx = 288;
	  section.data(283).dtTransOffset = 394;
	
	  ;% robotarm_student_2021a_Ipos_P.LimitSpeed_FallingLim
	  section.data(284).logicalSrcIdx = 289;
	  section.data(284).dtTransOffset = 395;
	
	  ;% robotarm_student_2021a_Ipos_P.LimitSpeed_IC
	  section.data(285).logicalSrcIdx = 290;
	  section.data(285).dtTransOffset = 396;
	
	  ;% robotarm_student_2021a_Ipos_P.TSamp_WtEt
	  section.data(286).logicalSrcIdx = 291;
	  section.data(286).dtTransOffset = 397;
	
	  ;% robotarm_student_2021a_Ipos_P.LimitAcceleration_RisingLim
	  section.data(287).logicalSrcIdx = 292;
	  section.data(287).dtTransOffset = 398;
	
	  ;% robotarm_student_2021a_Ipos_P.LimitAcceleration_FallingLim
	  section.data(288).logicalSrcIdx = 293;
	  section.data(288).dtTransOffset = 399;
	
	  ;% robotarm_student_2021a_Ipos_P.LimitAcceleration_IC
	  section.data(289).logicalSrcIdx = 294;
	  section.data(289).dtTransOffset = 400;
	
	  ;% robotarm_student_2021a_Ipos_P.LimitSpeed_RisingLim_i
	  section.data(290).logicalSrcIdx = 295;
	  section.data(290).dtTransOffset = 401;
	
	  ;% robotarm_student_2021a_Ipos_P.LimitSpeed_FallingLim_k
	  section.data(291).logicalSrcIdx = 296;
	  section.data(291).dtTransOffset = 402;
	
	  ;% robotarm_student_2021a_Ipos_P.LimitSpeed_IC_a
	  section.data(292).logicalSrcIdx = 297;
	  section.data(292).dtTransOffset = 403;
	
	  ;% robotarm_student_2021a_Ipos_P.TSamp_WtEt_d
	  section.data(293).logicalSrcIdx = 298;
	  section.data(293).dtTransOffset = 404;
	
	  ;% robotarm_student_2021a_Ipos_P.LimitAcceleration_RisingLim_k
	  section.data(294).logicalSrcIdx = 299;
	  section.data(294).dtTransOffset = 405;
	
	  ;% robotarm_student_2021a_Ipos_P.LimitAcceleration_FallingLim_m
	  section.data(295).logicalSrcIdx = 300;
	  section.data(295).dtTransOffset = 406;
	
	  ;% robotarm_student_2021a_Ipos_P.LimitAcceleration_IC_k
	  section.data(296).logicalSrcIdx = 301;
	  section.data(296).dtTransOffset = 407;
	
	  ;% robotarm_student_2021a_Ipos_P.LimitSpeed_RisingLim_iu
	  section.data(297).logicalSrcIdx = 302;
	  section.data(297).dtTransOffset = 408;
	
	  ;% robotarm_student_2021a_Ipos_P.LimitSpeed_FallingLim_j
	  section.data(298).logicalSrcIdx = 303;
	  section.data(298).dtTransOffset = 409;
	
	  ;% robotarm_student_2021a_Ipos_P.LimitSpeed_IC_e
	  section.data(299).logicalSrcIdx = 304;
	  section.data(299).dtTransOffset = 410;
	
	  ;% robotarm_student_2021a_Ipos_P.TSamp_WtEt_g
	  section.data(300).logicalSrcIdx = 305;
	  section.data(300).dtTransOffset = 411;
	
	  ;% robotarm_student_2021a_Ipos_P.LimitAcceleration_RisingLim_m
	  section.data(301).logicalSrcIdx = 306;
	  section.data(301).dtTransOffset = 412;
	
	  ;% robotarm_student_2021a_Ipos_P.LimitAcceleration_FallingLim_k
	  section.data(302).logicalSrcIdx = 307;
	  section.data(302).dtTransOffset = 413;
	
	  ;% robotarm_student_2021a_Ipos_P.LimitAcceleration_IC_i
	  section.data(303).logicalSrcIdx = 308;
	  section.data(303).dtTransOffset = 414;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_P.LEDRing_Y0
	  section.data(1).logicalSrcIdx = 309;
	  section.data(1).dtTransOffset = 0;
	
	  ;% robotarm_student_2021a_Ipos_P.Colorsetwithstringblackorwhite_
	  section.data(2).logicalSrcIdx = 310;
	  section.data(2).dtTransOffset = 1;
	
	  ;% robotarm_student_2021a_Ipos_P.Colorspecifiedin6hexdigitsrrggb
	  section.data(3).logicalSrcIdx = 311;
	  section.data(3).dtTransOffset = 2;
	
	  ;% robotarm_student_2021a_Ipos_P.StringConstant3_String
	  section.data(4).logicalSrcIdx = 312;
	  section.data(4).dtTransOffset = 3;
	
	  ;% robotarm_student_2021a_Ipos_P.StringConstant1_String
	  section.data(5).logicalSrcIdx = 313;
	  section.data(5).dtTransOffset = 4;
	
	  ;% robotarm_student_2021a_Ipos_P.StringConstant4_String
	  section.data(6).logicalSrcIdx = 314;
	  section.data(6).dtTransOffset = 5;
	
	  ;% robotarm_student_2021a_Ipos_P.ReadyGreen_String
	  section.data(7).logicalSrcIdx = 315;
	  section.data(7).dtTransOffset = 6;
	
	  ;% robotarm_student_2021a_Ipos_P.AirbagRed_String
	  section.data(8).logicalSrcIdx = 316;
	  section.data(8).dtTransOffset = 7;
	
	  ;% robotarm_student_2021a_Ipos_P.HomingOrange_String
	  section.data(9).logicalSrcIdx = 317;
	  section.data(9).dtTransOffset = 8;
	
	  ;% robotarm_student_2021a_Ipos_P.Delay_InitialCondition
	  section.data(10).logicalSrcIdx = 318;
	  section.data(10).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_P.ManualSwitch1_CurrentSetting
	  section.data(1).logicalSrcIdx = 319;
	  section.data(1).dtTransOffset = 0;
	
	  ;% robotarm_student_2021a_Ipos_P.Constant1_Value_j
	  section.data(2).logicalSrcIdx = 320;
	  section.data(2).dtTransOffset = 1;
	
	  ;% robotarm_student_2021a_Ipos_P.Constant_Value_d
	  section.data(3).logicalSrcIdx = 321;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 5;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (robotarm_student_2021a_Ipos_B)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_B.ManualSwitch1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 146;
      section.data(146)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_B.SFunction
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% robotarm_student_2021a_Ipos_B.ec_Ipos_o1
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 1;
	
	  ;% robotarm_student_2021a_Ipos_B.ec_Ipos_o2
	  section.data(3).logicalSrcIdx = 3;
	  section.data(3).dtTransOffset = 2;
	
	  ;% robotarm_student_2021a_Ipos_B.ec_Ipos_o3
	  section.data(4).logicalSrcIdx = 4;
	  section.data(4).dtTransOffset = 3;
	
	  ;% robotarm_student_2021a_Ipos_B.ec_Ipos_o4
	  section.data(5).logicalSrcIdx = 5;
	  section.data(5).dtTransOffset = 4;
	
	  ;% robotarm_student_2021a_Ipos_B.ec_Ipos_o5
	  section.data(6).logicalSrcIdx = 6;
	  section.data(6).dtTransOffset = 5;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain
	  section.data(7).logicalSrcIdx = 7;
	  section.data(7).dtTransOffset = 6;
	
	  ;% robotarm_student_2021a_Ipos_B.Constant1
	  section.data(8).logicalSrcIdx = 8;
	  section.data(8).dtTransOffset = 7;
	
	  ;% robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator
	  section.data(9).logicalSrcIdx = 9;
	  section.data(9).dtTransOffset = 8;
	
	  ;% robotarm_student_2021a_Ipos_B.Sum2
	  section.data(10).logicalSrcIdx = 10;
	  section.data(10).dtTransOffset = 9;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain1
	  section.data(11).logicalSrcIdx = 11;
	  section.data(11).dtTransOffset = 10;
	
	  ;% robotarm_student_2021a_Ipos_B.Constant1_e
	  section.data(12).logicalSrcIdx = 12;
	  section.data(12).dtTransOffset = 11;
	
	  ;% robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator_e
	  section.data(13).logicalSrcIdx = 13;
	  section.data(13).dtTransOffset = 12;
	
	  ;% robotarm_student_2021a_Ipos_B.Sum2_a
	  section.data(14).logicalSrcIdx = 14;
	  section.data(14).dtTransOffset = 13;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain2
	  section.data(15).logicalSrcIdx = 15;
	  section.data(15).dtTransOffset = 14;
	
	  ;% robotarm_student_2021a_Ipos_B.Constant1_f
	  section.data(16).logicalSrcIdx = 16;
	  section.data(16).dtTransOffset = 15;
	
	  ;% robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator_p
	  section.data(17).logicalSrcIdx = 17;
	  section.data(17).dtTransOffset = 16;
	
	  ;% robotarm_student_2021a_Ipos_B.Sum2_e
	  section.data(18).logicalSrcIdx = 18;
	  section.data(18).dtTransOffset = 17;
	
	  ;% robotarm_student_2021a_Ipos_B.set_robot_calibration_r
	  section.data(19).logicalSrcIdx = 19;
	  section.data(19).dtTransOffset = 18;
	
	  ;% robotarm_student_2021a_Ipos_B.set_robot_calibration_x
	  section.data(20).logicalSrcIdx = 20;
	  section.data(20).dtTransOffset = 19;
	
	  ;% robotarm_student_2021a_Ipos_B.set_robot_calibration_z
	  section.data(21).logicalSrcIdx = 21;
	  section.data(21).dtTransOffset = 20;
	
	  ;% robotarm_student_2021a_Ipos_B.Add1
	  section.data(22).logicalSrcIdx = 22;
	  section.data(22).dtTransOffset = 21;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain3
	  section.data(23).logicalSrcIdx = 23;
	  section.data(23).dtTransOffset = 22;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain5
	  section.data(24).logicalSrcIdx = 24;
	  section.data(24).dtTransOffset = 23;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain_h
	  section.data(25).logicalSrcIdx = 25;
	  section.data(25).dtTransOffset = 24;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctintegrator
	  section.data(26).logicalSrcIdx = 26;
	  section.data(26).dtTransOffset = 25;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctleadlag
	  section.data(27).logicalSrcIdx = 27;
	  section.data(27).dtTransOffset = 26;
	
	  ;% robotarm_student_2021a_Ipos_B.Dct1lowpass
	  section.data(28).logicalSrcIdx = 28;
	  section.data(28).dtTransOffset = 27;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain_p
	  section.data(29).logicalSrcIdx = 29;
	  section.data(29).dtTransOffset = 28;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctleadlag_l
	  section.data(30).logicalSrcIdx = 30;
	  section.data(30).dtTransOffset = 29;
	
	  ;% robotarm_student_2021a_Ipos_B.Dct1lowpass_i
	  section.data(31).logicalSrcIdx = 31;
	  section.data(31).dtTransOffset = 30;
	
	  ;% robotarm_student_2021a_Ipos_B.Saturation1
	  section.data(32).logicalSrcIdx = 32;
	  section.data(32).dtTransOffset = 31;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain1_p
	  section.data(33).logicalSrcIdx = 33;
	  section.data(33).dtTransOffset = 32;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctintegrator_g
	  section.data(34).logicalSrcIdx = 34;
	  section.data(34).dtTransOffset = 33;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctleadlag_h
	  section.data(35).logicalSrcIdx = 35;
	  section.data(35).dtTransOffset = 34;
	
	  ;% robotarm_student_2021a_Ipos_B.Dct1lowpass_k
	  section.data(36).logicalSrcIdx = 36;
	  section.data(36).dtTransOffset = 35;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain1_o
	  section.data(37).logicalSrcIdx = 37;
	  section.data(37).dtTransOffset = 36;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctleadlag_b
	  section.data(38).logicalSrcIdx = 38;
	  section.data(38).dtTransOffset = 37;
	
	  ;% robotarm_student_2021a_Ipos_B.Dct1lowpass_j
	  section.data(39).logicalSrcIdx = 39;
	  section.data(39).dtTransOffset = 38;
	
	  ;% robotarm_student_2021a_Ipos_B.Saturation1_n
	  section.data(40).logicalSrcIdx = 40;
	  section.data(40).dtTransOffset = 39;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain_i
	  section.data(41).logicalSrcIdx = 41;
	  section.data(41).dtTransOffset = 40;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctintegrator_i
	  section.data(42).logicalSrcIdx = 42;
	  section.data(42).dtTransOffset = 41;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctleadlag_m
	  section.data(43).logicalSrcIdx = 43;
	  section.data(43).dtTransOffset = 42;
	
	  ;% robotarm_student_2021a_Ipos_B.Dct1lowpass_p
	  section.data(44).logicalSrcIdx = 44;
	  section.data(44).dtTransOffset = 43;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain_f
	  section.data(45).logicalSrcIdx = 45;
	  section.data(45).dtTransOffset = 44;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctleadlag_e
	  section.data(46).logicalSrcIdx = 46;
	  section.data(46).dtTransOffset = 45;
	
	  ;% robotarm_student_2021a_Ipos_B.Dct1lowpass_a
	  section.data(47).logicalSrcIdx = 47;
	  section.data(47).dtTransOffset = 46;
	
	  ;% robotarm_student_2021a_Ipos_B.Saturation1_a
	  section.data(48).logicalSrcIdx = 48;
	  section.data(48).dtTransOffset = 47;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain1_a
	  section.data(49).logicalSrcIdx = 49;
	  section.data(49).dtTransOffset = 48;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctintegrator3
	  section.data(50).logicalSrcIdx = 50;
	  section.data(50).dtTransOffset = 49;
	
	  ;% robotarm_student_2021a_Ipos_B.Dct1lowpass_g
	  section.data(51).logicalSrcIdx = 51;
	  section.data(51).dtTransOffset = 50;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctleadlag_k
	  section.data(52).logicalSrcIdx = 52;
	  section.data(52).dtTransOffset = 51;
	
	  ;% robotarm_student_2021a_Ipos_B.Saturation1_d
	  section.data(53).logicalSrcIdx = 53;
	  section.data(53).dtTransOffset = 52;
	
	  ;% robotarm_student_2021a_Ipos_B.jogSpeed
	  section.data(54).logicalSrcIdx = 54;
	  section.data(54).dtTransOffset = 53;
	
	  ;% robotarm_student_2021a_Ipos_B.homeControllerEnabled
	  section.data(55).logicalSrcIdx = 55;
	  section.data(55).dtTransOffset = 54;
	
	  ;% robotarm_student_2021a_Ipos_B.resetEnc
	  section.data(56).logicalSrcIdx = 56;
	  section.data(56).dtTransOffset = 55;
	
	  ;% robotarm_student_2021a_Ipos_B.homingBusy
	  section.data(57).logicalSrcIdx = 57;
	  section.data(57).dtTransOffset = 56;
	
	  ;% robotarm_student_2021a_Ipos_B.Ready
	  section.data(58).logicalSrcIdx = 58;
	  section.data(58).dtTransOffset = 57;
	
	  ;% robotarm_student_2021a_Ipos_B.StopSim
	  section.data(59).logicalSrcIdx = 59;
	  section.data(59).dtTransOffset = 58;
	
	  ;% robotarm_student_2021a_Ipos_B.jogSpeed_i
	  section.data(60).logicalSrcIdx = 60;
	  section.data(60).dtTransOffset = 59;
	
	  ;% robotarm_student_2021a_Ipos_B.toPoint
	  section.data(61).logicalSrcIdx = 61;
	  section.data(61).dtTransOffset = 60;
	
	  ;% robotarm_student_2021a_Ipos_B.homeControllerEnabled_b
	  section.data(62).logicalSrcIdx = 62;
	  section.data(62).dtTransOffset = 61;
	
	  ;% robotarm_student_2021a_Ipos_B.resetEnc_g
	  section.data(63).logicalSrcIdx = 63;
	  section.data(63).dtTransOffset = 62;
	
	  ;% robotarm_student_2021a_Ipos_B.homingBusy_n
	  section.data(64).logicalSrcIdx = 64;
	  section.data(64).dtTransOffset = 63;
	
	  ;% robotarm_student_2021a_Ipos_B.airBagEnabled
	  section.data(65).logicalSrcIdx = 65;
	  section.data(65).dtTransOffset = 64;
	
	  ;% robotarm_student_2021a_Ipos_B.airBagRef
	  section.data(66).logicalSrcIdx = 66;
	  section.data(66).dtTransOffset = 65;
	
	  ;% robotarm_student_2021a_Ipos_B.controlEnabled
	  section.data(67).logicalSrcIdx = 67;
	  section.data(67).dtTransOffset = 66;
	
	  ;% robotarm_student_2021a_Ipos_B.Ready_n
	  section.data(68).logicalSrcIdx = 68;
	  section.data(68).dtTransOffset = 67;
	
	  ;% robotarm_student_2021a_Ipos_B.StopSim_n
	  section.data(69).logicalSrcIdx = 69;
	  section.data(69).dtTransOffset = 68;
	
	  ;% robotarm_student_2021a_Ipos_B.y
	  section.data(70).logicalSrcIdx = 70;
	  section.data(70).dtTransOffset = 69;
	
	  ;% robotarm_student_2021a_Ipos_B.jogSpeed_c
	  section.data(71).logicalSrcIdx = 71;
	  section.data(71).dtTransOffset = 70;
	
	  ;% robotarm_student_2021a_Ipos_B.toPoint_e
	  section.data(72).logicalSrcIdx = 72;
	  section.data(72).dtTransOffset = 71;
	
	  ;% robotarm_student_2021a_Ipos_B.homeControllerEnabled_k
	  section.data(73).logicalSrcIdx = 73;
	  section.data(73).dtTransOffset = 72;
	
	  ;% robotarm_student_2021a_Ipos_B.resetEnc_c
	  section.data(74).logicalSrcIdx = 74;
	  section.data(74).dtTransOffset = 73;
	
	  ;% robotarm_student_2021a_Ipos_B.homingBusy_j
	  section.data(75).logicalSrcIdx = 76;
	  section.data(75).dtTransOffset = 74;
	
	  ;% robotarm_student_2021a_Ipos_B.airBagEnabled_o
	  section.data(76).logicalSrcIdx = 77;
	  section.data(76).dtTransOffset = 75;
	
	  ;% robotarm_student_2021a_Ipos_B.airBagRef_a
	  section.data(77).logicalSrcIdx = 78;
	  section.data(77).dtTransOffset = 76;
	
	  ;% robotarm_student_2021a_Ipos_B.controlEnabled_a
	  section.data(78).logicalSrcIdx = 79;
	  section.data(78).dtTransOffset = 77;
	
	  ;% robotarm_student_2021a_Ipos_B.Ready_i
	  section.data(79).logicalSrcIdx = 80;
	  section.data(79).dtTransOffset = 78;
	
	  ;% robotarm_student_2021a_Ipos_B.StopSim_o
	  section.data(80).logicalSrcIdx = 81;
	  section.data(80).dtTransOffset = 79;
	
	  ;% robotarm_student_2021a_Ipos_B.jogSpeed_o
	  section.data(81).logicalSrcIdx = 82;
	  section.data(81).dtTransOffset = 80;
	
	  ;% robotarm_student_2021a_Ipos_B.toPoint_b
	  section.data(82).logicalSrcIdx = 83;
	  section.data(82).dtTransOffset = 81;
	
	  ;% robotarm_student_2021a_Ipos_B.homeControllerEnabled_o
	  section.data(83).logicalSrcIdx = 84;
	  section.data(83).dtTransOffset = 82;
	
	  ;% robotarm_student_2021a_Ipos_B.resetEnc_k
	  section.data(84).logicalSrcIdx = 85;
	  section.data(84).dtTransOffset = 83;
	
	  ;% robotarm_student_2021a_Ipos_B.freddy_k
	  section.data(85).logicalSrcIdx = 86;
	  section.data(85).dtTransOffset = 84;
	
	  ;% robotarm_student_2021a_Ipos_B.homingBusy_l
	  section.data(86).logicalSrcIdx = 87;
	  section.data(86).dtTransOffset = 85;
	
	  ;% robotarm_student_2021a_Ipos_B.airBagEnabled_f
	  section.data(87).logicalSrcIdx = 88;
	  section.data(87).dtTransOffset = 86;
	
	  ;% robotarm_student_2021a_Ipos_B.airBagRef_g
	  section.data(88).logicalSrcIdx = 89;
	  section.data(88).dtTransOffset = 87;
	
	  ;% robotarm_student_2021a_Ipos_B.controlEnabled_l
	  section.data(89).logicalSrcIdx = 90;
	  section.data(89).dtTransOffset = 88;
	
	  ;% robotarm_student_2021a_Ipos_B.Ready_a
	  section.data(90).logicalSrcIdx = 91;
	  section.data(90).dtTransOffset = 89;
	
	  ;% robotarm_student_2021a_Ipos_B.StopSim_j
	  section.data(91).logicalSrcIdx = 92;
	  section.data(91).dtTransOffset = 90;
	
	  ;% robotarm_student_2021a_Ipos_B.y_b
	  section.data(92).logicalSrcIdx = 93;
	  section.data(92).dtTransOffset = 91;
	
	  ;% robotarm_student_2021a_Ipos_B.Selector2
	  section.data(93).logicalSrcIdx = 94;
	  section.data(93).dtTransOffset = 92;
	
	  ;% robotarm_student_2021a_Ipos_B.Selector
	  section.data(94).logicalSrcIdx = 95;
	  section.data(94).dtTransOffset = 101;
	
	  ;% robotarm_student_2021a_Ipos_B.Selector_g
	  section.data(95).logicalSrcIdx = 96;
	  section.data(95).dtTransOffset = 104;
	
	  ;% robotarm_student_2021a_Ipos_B.SFunctionBuilder
	  section.data(96).logicalSrcIdx = 97;
	  section.data(96).dtTransOffset = 105;
	
	  ;% robotarm_student_2021a_Ipos_B.Selector1
	  section.data(97).logicalSrcIdx = 98;
	  section.data(97).dtTransOffset = 106;
	
	  ;% robotarm_student_2021a_Ipos_B.Object
	  section.data(98).logicalSrcIdx = 99;
	  section.data(98).dtTransOffset = 107;
	
	  ;% robotarm_student_2021a_Ipos_B.SignalConversion2
	  section.data(99).logicalSrcIdx = 100;
	  section.data(99).dtTransOffset = 108;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain1_c
	  section.data(100).logicalSrcIdx = 101;
	  section.data(100).dtTransOffset = 109;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctleadlag2
	  section.data(101).logicalSrcIdx = 102;
	  section.data(101).dtTransOffset = 110;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctintegrator3_c
	  section.data(102).logicalSrcIdx = 103;
	  section.data(102).dtTransOffset = 111;
	
	  ;% robotarm_student_2021a_Ipos_B.Dct1lowpass_b
	  section.data(103).logicalSrcIdx = 104;
	  section.data(103).dtTransOffset = 112;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain1_g
	  section.data(104).logicalSrcIdx = 105;
	  section.data(104).dtTransOffset = 113;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctintegrator3_n
	  section.data(105).logicalSrcIdx = 106;
	  section.data(105).dtTransOffset = 114;
	
	  ;% robotarm_student_2021a_Ipos_B.Dct1lowpass_ab
	  section.data(106).logicalSrcIdx = 107;
	  section.data(106).dtTransOffset = 115;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctleadlag_d
	  section.data(107).logicalSrcIdx = 108;
	  section.data(107).dtTransOffset = 116;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain1_l
	  section.data(108).logicalSrcIdx = 109;
	  section.data(108).dtTransOffset = 117;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctpd2
	  section.data(109).logicalSrcIdx = 110;
	  section.data(109).dtTransOffset = 118;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctleadlag3
	  section.data(110).logicalSrcIdx = 111;
	  section.data(110).dtTransOffset = 119;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain1_pg
	  section.data(111).logicalSrcIdx = 112;
	  section.data(111).dtTransOffset = 120;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctpd2_a
	  section.data(112).logicalSrcIdx = 113;
	  section.data(112).dtTransOffset = 121;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctleadlag3_i
	  section.data(113).logicalSrcIdx = 114;
	  section.data(113).dtTransOffset = 122;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain1_m
	  section.data(114).logicalSrcIdx = 115;
	  section.data(114).dtTransOffset = 123;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctpd2_g
	  section.data(115).logicalSrcIdx = 116;
	  section.data(115).dtTransOffset = 124;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctleadlag3_b
	  section.data(116).logicalSrcIdx = 117;
	  section.data(116).dtTransOffset = 125;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain1_oc
	  section.data(117).logicalSrcIdx = 118;
	  section.data(117).dtTransOffset = 126;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctpd2_j
	  section.data(118).logicalSrcIdx = 119;
	  section.data(118).dtTransOffset = 127;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctleadlag3_f
	  section.data(119).logicalSrcIdx = 120;
	  section.data(119).dtTransOffset = 128;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain1_oz
	  section.data(120).logicalSrcIdx = 121;
	  section.data(120).dtTransOffset = 129;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctleadlag2_l
	  section.data(121).logicalSrcIdx = 122;
	  section.data(121).dtTransOffset = 130;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctintegrator3_l
	  section.data(122).logicalSrcIdx = 123;
	  section.data(122).dtTransOffset = 131;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctnotch4
	  section.data(123).logicalSrcIdx = 124;
	  section.data(123).dtTransOffset = 132;
	
	  ;% robotarm_student_2021a_Ipos_B.Dctpd5
	  section.data(124).logicalSrcIdx = 125;
	  section.data(124).dtTransOffset = 133;
	
	  ;% robotarm_student_2021a_Ipos_B.Sum4
	  section.data(125).logicalSrcIdx = 126;
	  section.data(125).dtTransOffset = 134;
	
	  ;% robotarm_student_2021a_Ipos_B.SignalConversion1
	  section.data(126).logicalSrcIdx = 127;
	  section.data(126).dtTransOffset = 135;
	
	  ;% robotarm_student_2021a_Ipos_B.Sum5
	  section.data(127).logicalSrcIdx = 128;
	  section.data(127).dtTransOffset = 136;
	
	  ;% robotarm_student_2021a_Ipos_B.SignalConversion
	  section.data(128).logicalSrcIdx = 129;
	  section.data(128).dtTransOffset = 137;
	
	  ;% robotarm_student_2021a_Ipos_B.Sum6
	  section.data(129).logicalSrcIdx = 130;
	  section.data(129).dtTransOffset = 138;
	
	  ;% robotarm_student_2021a_Ipos_B.Plot
	  section.data(130).logicalSrcIdx = 131;
	  section.data(130).dtTransOffset = 139;
	
	  ;% robotarm_student_2021a_Ipos_B.Stop
	  section.data(131).logicalSrcIdx = 132;
	  section.data(131).dtTransOffset = 140;
	
	  ;% robotarm_student_2021a_Ipos_B.Sum
	  section.data(132).logicalSrcIdx = 133;
	  section.data(132).dtTransOffset = 141;
	
	  ;% robotarm_student_2021a_Ipos_B.Selector2_i
	  section.data(133).logicalSrcIdx = 134;
	  section.data(133).dtTransOffset = 142;
	
	  ;% robotarm_student_2021a_Ipos_B.Selector3
	  section.data(134).logicalSrcIdx = 135;
	  section.data(134).dtTransOffset = 143;
	
	  ;% robotarm_student_2021a_Ipos_B.Selector4
	  section.data(135).logicalSrcIdx = 136;
	  section.data(135).dtTransOffset = 144;
	
	  ;% robotarm_student_2021a_Ipos_B.Selector5
	  section.data(136).logicalSrcIdx = 137;
	  section.data(136).dtTransOffset = 145;
	
	  ;% robotarm_student_2021a_Ipos_B.Selector6
	  section.data(137).logicalSrcIdx = 138;
	  section.data(137).dtTransOffset = 146;
	
	  ;% robotarm_student_2021a_Ipos_B.Selector7
	  section.data(138).logicalSrcIdx = 139;
	  section.data(138).dtTransOffset = 147;
	
	  ;% robotarm_student_2021a_Ipos_B.Selector8
	  section.data(139).logicalSrcIdx = 140;
	  section.data(139).dtTransOffset = 148;
	
	  ;% robotarm_student_2021a_Ipos_B.Gain1_o1
	  section.data(140).logicalSrcIdx = 141;
	  section.data(140).dtTransOffset = 149;
	
	  ;% robotarm_student_2021a_Ipos_B.path
	  section.data(141).logicalSrcIdx = 142;
	  section.data(141).dtTransOffset = 150;
	
	  ;% robotarm_student_2021a_Ipos_B.R_rad
	  section.data(142).logicalSrcIdx = 143;
	  section.data(142).dtTransOffset = 151;
	
	  ;% robotarm_student_2021a_Ipos_B.X_rad
	  section.data(143).logicalSrcIdx = 144;
	  section.data(143).dtTransOffset = 152;
	
	  ;% robotarm_student_2021a_Ipos_B.Z_rad
	  section.data(144).logicalSrcIdx = 145;
	  section.data(144).dtTransOffset = 153;
	
	  ;% robotarm_student_2021a_Ipos_B.Blow_suck
	  section.data(145).logicalSrcIdx = 146;
	  section.data(145).dtTransOffset = 154;
	
	  ;% robotarm_student_2021a_Ipos_B.In1
	  section.data(146).logicalSrcIdx = 148;
	  section.data(146).dtTransOffset = 155;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_B.RelationalOperator
	  section.data(1).logicalSrcIdx = 149;
	  section.data(1).dtTransOffset = 0;
	
	  ;% robotarm_student_2021a_Ipos_B.RelationalOperator_f
	  section.data(2).logicalSrcIdx = 150;
	  section.data(2).dtTransOffset = 1;
	
	  ;% robotarm_student_2021a_Ipos_B.RelationalOperator_k
	  section.data(3).logicalSrcIdx = 151;
	  section.data(3).dtTransOffset = 2;
	
	  ;% robotarm_student_2021a_Ipos_B.Compare
	  section.data(4).logicalSrcIdx = 152;
	  section.data(4).dtTransOffset = 3;
	
	  ;% robotarm_student_2021a_Ipos_B.Compare_j
	  section.data(5).logicalSrcIdx = 153;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_B.sf_quintictrajectorytime2.path
	  section.data(1).logicalSrcIdx = 154;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_B.sf_quintictrajectorytime1.path
	  section.data(1).logicalSrcIdx = 155;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 20;
    sectIdxOffset = 5;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (robotarm_student_2021a_Ipos_DW)
    ;%
      section.nData     = 14;
      section.data(14)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_g
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_m
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_o
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_a
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_j
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% robotarm_student_2021a_Ipos_DW.UnitDelay_DSTATE
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% robotarm_student_2021a_Ipos_DW.UnitDelay1_DSTATE
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_k
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% robotarm_student_2021a_Ipos_DW.UD_DSTATE
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% robotarm_student_2021a_Ipos_DW.UD_DSTATE_c
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% robotarm_student_2021a_Ipos_DW.UD_DSTATE_cc
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% robotarm_student_2021a_Ipos_DW.DelayInput1_DSTATE
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% robotarm_student_2021a_Ipos_DW.Discreteintegrator_DSTATE
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 24;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.Delay_DSTATE
	  section.data(1).logicalSrcIdx = 14;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 63;
      section.data(63)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.PrevY
	  section.data(1).logicalSrcIdx = 15;
	  section.data(1).dtTransOffset = 0;
	
	  ;% robotarm_student_2021a_Ipos_DW.PrevY_j
	  section.data(2).logicalSrcIdx = 16;
	  section.data(2).dtTransOffset = 1;
	
	  ;% robotarm_student_2021a_Ipos_DW.PrevY_d
	  section.data(3).logicalSrcIdx = 17;
	  section.data(3).dtTransOffset = 2;
	
	  ;% robotarm_student_2021a_Ipos_DW.PrevY_f
	  section.data(4).logicalSrcIdx = 18;
	  section.data(4).dtTransOffset = 3;
	
	  ;% robotarm_student_2021a_Ipos_DW.PrevY_i
	  section.data(5).logicalSrcIdx = 19;
	  section.data(5).dtTransOffset = 4;
	
	  ;% robotarm_student_2021a_Ipos_DW.PrevY_k
	  section.data(6).logicalSrcIdx = 20;
	  section.data(6).dtTransOffset = 5;
	
	  ;% robotarm_student_2021a_Ipos_DW.currentcarPos
	  section.data(7).logicalSrcIdx = 21;
	  section.data(7).dtTransOffset = 6;
	
	  ;% robotarm_student_2021a_Ipos_DW.currentcarPos_d
	  section.data(8).logicalSrcIdx = 22;
	  section.data(8).dtTransOffset = 7;
	
	  ;% robotarm_student_2021a_Ipos_DW.currentcarPos_l
	  section.data(9).logicalSrcIdx = 23;
	  section.data(9).dtTransOffset = 8;
	
	  ;% robotarm_student_2021a_Ipos_DW.previous_value_reference_start
	  section.data(10).logicalSrcIdx = 24;
	  section.data(10).dtTransOffset = 9;
	
	  ;% robotarm_student_2021a_Ipos_DW.previous_value_reference_end
	  section.data(11).logicalSrcIdx = 25;
	  section.data(11).dtTransOffset = 10;
	
	  ;% robotarm_student_2021a_Ipos_DW.index
	  section.data(12).logicalSrcIdx = 26;
	  section.data(12).dtTransOffset = 11;
	
	  ;% robotarm_student_2021a_Ipos_DW.treshold
	  section.data(13).logicalSrcIdx = 27;
	  section.data(13).dtTransOffset = 12;
	
	  ;% robotarm_student_2021a_Ipos_DW.x
	  section.data(14).logicalSrcIdx = 28;
	  section.data(14).dtTransOffset = 13;
	
	  ;% robotarm_student_2021a_Ipos_DW.y
	  section.data(15).logicalSrcIdx = 29;
	  section.data(15).dtTransOffset = 14;
	
	  ;% robotarm_student_2021a_Ipos_DW.z
	  section.data(16).logicalSrcIdx = 30;
	  section.data(16).dtTransOffset = 15;
	
	  ;% robotarm_student_2021a_Ipos_DW.X_pos
	  section.data(17).logicalSrcIdx = 31;
	  section.data(17).dtTransOffset = 16;
	
	  ;% robotarm_student_2021a_Ipos_DW.Y_pos
	  section.data(18).logicalSrcIdx = 32;
	  section.data(18).dtTransOffset = 17;
	
	  ;% robotarm_student_2021a_Ipos_DW.Z_pos
	  section.data(19).logicalSrcIdx = 33;
	  section.data(19).dtTransOffset = 18;
	
	  ;% robotarm_student_2021a_Ipos_DW.elapTime
	  section.data(20).logicalSrcIdx = 34;
	  section.data(20).dtTransOffset = 19;
	
	  ;% robotarm_student_2021a_Ipos_DW.yTracked
	  section.data(21).logicalSrcIdx = 35;
	  section.data(21).dtTransOffset = 20;
	
	  ;% robotarm_student_2021a_Ipos_DW.track
	  section.data(22).logicalSrcIdx = 36;
	  section.data(22).dtTransOffset = 21;
	
	  ;% robotarm_student_2021a_Ipos_DW.ObjectType
	  section.data(23).logicalSrcIdx = 37;
	  section.data(23).dtTransOffset = 22;
	
	  ;% robotarm_student_2021a_Ipos_DW.reachability
	  section.data(24).logicalSrcIdx = 38;
	  section.data(24).dtTransOffset = 23;
	
	  ;% robotarm_student_2021a_Ipos_DW.action
	  section.data(25).logicalSrcIdx = 39;
	  section.data(25).dtTransOffset = 24;
	
	  ;% robotarm_student_2021a_Ipos_DW.EndTime
	  section.data(26).logicalSrcIdx = 40;
	  section.data(26).dtTransOffset = 25;
	
	  ;% robotarm_student_2021a_Ipos_DW.velocity
	  section.data(27).logicalSrcIdx = 41;
	  section.data(27).dtTransOffset = 26;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctintegrator_RWORK
	  section.data(28).logicalSrcIdx = 42;
	  section.data(28).dtTransOffset = 27;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK
	  section.data(29).logicalSrcIdx = 43;
	  section.data(29).dtTransOffset = 29;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK
	  section.data(30).logicalSrcIdx = 44;
	  section.data(30).dtTransOffset = 31;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_k
	  section.data(31).logicalSrcIdx = 45;
	  section.data(31).dtTransOffset = 33;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_a
	  section.data(32).logicalSrcIdx = 46;
	  section.data(32).dtTransOffset = 35;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctintegrator_RWORK_m
	  section.data(33).logicalSrcIdx = 47;
	  section.data(33).dtTransOffset = 37;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_g
	  section.data(34).logicalSrcIdx = 48;
	  section.data(34).dtTransOffset = 39;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_n
	  section.data(35).logicalSrcIdx = 49;
	  section.data(35).dtTransOffset = 41;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_j
	  section.data(36).logicalSrcIdx = 50;
	  section.data(36).dtTransOffset = 43;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_k
	  section.data(37).logicalSrcIdx = 51;
	  section.data(37).dtTransOffset = 45;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctintegrator_RWORK_i
	  section.data(38).logicalSrcIdx = 52;
	  section.data(38).dtTransOffset = 47;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_n
	  section.data(39).logicalSrcIdx = 53;
	  section.data(39).dtTransOffset = 49;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_g
	  section.data(40).logicalSrcIdx = 54;
	  section.data(40).dtTransOffset = 51;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_i
	  section.data(41).logicalSrcIdx = 55;
	  section.data(41).dtTransOffset = 53;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_h
	  section.data(42).logicalSrcIdx = 56;
	  section.data(42).dtTransOffset = 55;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctintegrator3_RWORK
	  section.data(43).logicalSrcIdx = 57;
	  section.data(43).dtTransOffset = 57;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_ay
	  section.data(44).logicalSrcIdx = 58;
	  section.data(44).dtTransOffset = 59;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_o
	  section.data(45).logicalSrcIdx = 59;
	  section.data(45).dtTransOffset = 61;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctleadlag2_RWORK
	  section.data(46).logicalSrcIdx = 60;
	  section.data(46).dtTransOffset = 63;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctintegrator3_RWORK_e
	  section.data(47).logicalSrcIdx = 61;
	  section.data(47).dtTransOffset = 65;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_m
	  section.data(48).logicalSrcIdx = 62;
	  section.data(48).dtTransOffset = 67;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctintegrator3_RWORK_g
	  section.data(49).logicalSrcIdx = 63;
	  section.data(49).dtTransOffset = 69;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_c
	  section.data(50).logicalSrcIdx = 64;
	  section.data(50).dtTransOffset = 71;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_gp
	  section.data(51).logicalSrcIdx = 65;
	  section.data(51).dtTransOffset = 73;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctpd2_RWORK
	  section.data(52).logicalSrcIdx = 66;
	  section.data(52).dtTransOffset = 75;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctleadlag3_RWORK
	  section.data(53).logicalSrcIdx = 67;
	  section.data(53).dtTransOffset = 77;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctpd2_RWORK_d
	  section.data(54).logicalSrcIdx = 68;
	  section.data(54).dtTransOffset = 79;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctleadlag3_RWORK_c
	  section.data(55).logicalSrcIdx = 69;
	  section.data(55).dtTransOffset = 81;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctpd2_RWORK_b
	  section.data(56).logicalSrcIdx = 70;
	  section.data(56).dtTransOffset = 83;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctleadlag3_RWORK_o
	  section.data(57).logicalSrcIdx = 71;
	  section.data(57).dtTransOffset = 85;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctpd2_RWORK_j
	  section.data(58).logicalSrcIdx = 72;
	  section.data(58).dtTransOffset = 87;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctleadlag3_RWORK_cb
	  section.data(59).logicalSrcIdx = 73;
	  section.data(59).dtTransOffset = 89;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctleadlag2_RWORK_j
	  section.data(60).logicalSrcIdx = 74;
	  section.data(60).dtTransOffset = 91;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctintegrator3_RWORK_gh
	  section.data(61).logicalSrcIdx = 75;
	  section.data(61).dtTransOffset = 93;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctnotch4_RWORK
	  section.data(62).logicalSrcIdx = 76;
	  section.data(62).dtTransOffset = 95;
	
	  ;% robotarm_student_2021a_Ipos_DW.Dctpd5_RWORK
	  section.data(63).logicalSrcIdx = 77;
	  section.data(63).dtTransOffset = 99;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.Scope_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 78;
	  section.data(1).dtTransOffset = 0;
	
	  ;% robotarm_student_2021a_Ipos_DW.Scope9_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 79;
	  section.data(2).dtTransOffset = 1;
	
	  ;% robotarm_student_2021a_Ipos_DW.Scope_PWORK_p.LoggedData
	  section.data(3).logicalSrcIdx = 80;
	  section.data(3).dtTransOffset = 2;
	
	  ;% robotarm_student_2021a_Ipos_DW.Scope_PWORK_b.LoggedData
	  section.data(4).logicalSrcIdx = 81;
	  section.data(4).dtTransOffset = 3;
	
	  ;% robotarm_student_2021a_Ipos_DW.path_array
	  section.data(5).logicalSrcIdx = 82;
	  section.data(5).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.sfEvent
	  section.data(1).logicalSrcIdx = 83;
	  section.data(1).dtTransOffset = 0;
	
	  ;% robotarm_student_2021a_Ipos_DW.sfEvent_n
	  section.data(2).logicalSrcIdx = 84;
	  section.data(2).dtTransOffset = 1;
	
	  ;% robotarm_student_2021a_Ipos_DW.sfEvent_h
	  section.data(3).logicalSrcIdx = 85;
	  section.data(3).dtTransOffset = 2;
	
	  ;% robotarm_student_2021a_Ipos_DW.sfEvent_k
	  section.data(4).logicalSrcIdx = 86;
	  section.data(4).dtTransOffset = 3;
	
	  ;% robotarm_student_2021a_Ipos_DW.sfEvent_e
	  section.data(5).logicalSrcIdx = 87;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 13;
      section.data(13)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.is_c1_robotarm_student_2021a_Ip
	  section.data(1).logicalSrcIdx = 88;
	  section.data(1).dtTransOffset = 0;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_c18_robotarm_student_2021a_I
	  section.data(2).logicalSrcIdx = 89;
	  section.data(2).dtTransOffset = 1;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_c16_robotarm_student_2021a_I
	  section.data(3).logicalSrcIdx = 90;
	  section.data(3).dtTransOffset = 2;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I
	  section.data(4).logicalSrcIdx = 91;
	  section.data(4).dtTransOffset = 3;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_Object_Detection
	  section.data(5).logicalSrcIdx = 92;
	  section.data(5).dtTransOffset = 4;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_Belt
	  section.data(6).logicalSrcIdx = 93;
	  section.data(6).dtTransOffset = 5;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_Identification
	  section.data(7).logicalSrcIdx = 94;
	  section.data(7).dtTransOffset = 6;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_Vacuum
	  section.data(8).logicalSrcIdx = 95;
	  section.data(8).dtTransOffset = 7;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_Object_picked
	  section.data(9).logicalSrcIdx = 96;
	  section.data(9).dtTransOffset = 8;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_ActionDone
	  section.data(10).logicalSrcIdx = 97;
	  section.data(10).dtTransOffset = 9;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_Robot_Arm
	  section.data(11).logicalSrcIdx = 98;
	  section.data(11).dtTransOffset = 10;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_Object_tracking
	  section.data(12).logicalSrcIdx = 99;
	  section.data(12).dtTransOffset = 11;
	
	  ;% robotarm_student_2021a_Ipos_DW.temporalCounter_i2
	  section.data(13).logicalSrcIdx = 100;
	  section.data(13).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.temporalCounter_i1
	  section.data(1).logicalSrcIdx = 101;
	  section.data(1).dtTransOffset = 0;
	
	  ;% robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m
	  section.data(2).logicalSrcIdx = 102;
	  section.data(2).dtTransOffset = 1;
	
	  ;% robotarm_student_2021a_Ipos_DW.temporalCounter_i1_me
	  section.data(3).logicalSrcIdx = 103;
	  section.data(3).dtTransOffset = 2;
	
	  ;% robotarm_student_2021a_Ipos_DW.temporalCounter_i1_c
	  section.data(4).logicalSrcIdx = 104;
	  section.data(4).dtTransOffset = 3;
	
	  ;% robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m0
	  section.data(5).logicalSrcIdx = 105;
	  section.data(5).dtTransOffset = 4;
	
	  ;% robotarm_student_2021a_Ipos_DW.temporalCounter_i3
	  section.data(6).logicalSrcIdx = 106;
	  section.data(6).dtTransOffset = 5;
	
	  ;% robotarm_student_2021a_Ipos_DW.temporalCounter_i4
	  section.data(7).logicalSrcIdx = 107;
	  section.data(7).dtTransOffset = 6;
	
	  ;% robotarm_student_2021a_Ipos_DW.temporalCounter_i5
	  section.data(8).logicalSrcIdx = 108;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.Subsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 109;
	  section.data(1).dtTransOffset = 0;
	
	  ;% robotarm_student_2021a_Ipos_DW.IfActionSubsystem1_SubsysRanBC
	  section.data(2).logicalSrcIdx = 110;
	  section.data(2).dtTransOffset = 1;
	
	  ;% robotarm_student_2021a_Ipos_DW.IfActionSubsystem_SubsysRanBC
	  section.data(3).logicalSrcIdx = 111;
	  section.data(3).dtTransOffset = 2;
	
	  ;% robotarm_student_2021a_Ipos_DW.Controller_SubsysRanBC
	  section.data(4).logicalSrcIdx = 112;
	  section.data(4).dtTransOffset = 3;
	
	  ;% robotarm_student_2021a_Ipos_DW.EnabledSubsystem_SubsysRanBC
	  section.data(5).logicalSrcIdx = 113;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 13;
      section.data(13)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.is_active_c1_robotarm_student_2
	  section.data(1).logicalSrcIdx = 114;
	  section.data(1).dtTransOffset = 0;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_active_c18_robotarm_student_
	  section.data(2).logicalSrcIdx = 115;
	  section.data(2).dtTransOffset = 1;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_active_c16_robotarm_student_
	  section.data(3).logicalSrcIdx = 116;
	  section.data(3).dtTransOffset = 2;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_active_c12_robotarm_student_
	  section.data(4).logicalSrcIdx = 117;
	  section.data(4).dtTransOffset = 3;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_active_c4_robotarm_student_2
	  section.data(5).logicalSrcIdx = 118;
	  section.data(5).dtTransOffset = 4;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_active_Object_Detection
	  section.data(6).logicalSrcIdx = 119;
	  section.data(6).dtTransOffset = 5;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_active_Belt
	  section.data(7).logicalSrcIdx = 120;
	  section.data(7).dtTransOffset = 6;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_active_Identification
	  section.data(8).logicalSrcIdx = 121;
	  section.data(8).dtTransOffset = 7;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_active_Vacuum
	  section.data(9).logicalSrcIdx = 122;
	  section.data(9).dtTransOffset = 8;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_active_Object_picked
	  section.data(10).logicalSrcIdx = 123;
	  section.data(10).dtTransOffset = 9;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_active_ActionDone
	  section.data(11).logicalSrcIdx = 124;
	  section.data(11).dtTransOffset = 10;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_active_Robot_Arm
	  section.data(12).logicalSrcIdx = 125;
	  section.data(12).dtTransOffset = 11;
	
	  ;% robotarm_student_2021a_Ipos_DW.is_active_Object_tracking
	  section.data(13).logicalSrcIdx = 126;
	  section.data(13).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.path_array_not_empty
	  section.data(1).logicalSrcIdx = 127;
	  section.data(1).dtTransOffset = 0;
	
	  ;% robotarm_student_2021a_Ipos_DW.doneDoubleBufferReInit
	  section.data(2).logicalSrcIdx = 128;
	  section.data(2).dtTransOffset = 1;
	
	  ;% robotarm_student_2021a_Ipos_DW.isNotInit
	  section.data(3).logicalSrcIdx = 129;
	  section.data(3).dtTransOffset = 2;
	
	  ;% robotarm_student_2021a_Ipos_DW.Controller_MODE
	  section.data(4).logicalSrcIdx = 130;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.SerialWrite.obj
	  section.data(1).logicalSrcIdx = 131;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.SerialWrite.objisempty
	  section.data(1).logicalSrcIdx = 132;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.SerialWrite1.obj
	  section.data(1).logicalSrcIdx = 133;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(13) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.SerialWrite1.objisempty
	  section.data(1).logicalSrcIdx = 134;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(14) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime2.previous_value_reference_start
	  section.data(1).logicalSrcIdx = 135;
	  section.data(1).dtTransOffset = 0;
	
	  ;% robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime2.previous_value_reference_end
	  section.data(2).logicalSrcIdx = 136;
	  section.data(2).dtTransOffset = 1;
	
	  ;% robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime2.index
	  section.data(3).logicalSrcIdx = 137;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(15) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime2.path_array
	  section.data(1).logicalSrcIdx = 138;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(16) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime2.path_array_not_empty
	  section.data(1).logicalSrcIdx = 139;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(17) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime1.previous_value_reference_start
	  section.data(1).logicalSrcIdx = 140;
	  section.data(1).dtTransOffset = 0;
	
	  ;% robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime1.previous_value_reference_end
	  section.data(2).logicalSrcIdx = 141;
	  section.data(2).dtTransOffset = 1;
	
	  ;% robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime1.index
	  section.data(3).logicalSrcIdx = 142;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(18) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime1.path_array
	  section.data(1).logicalSrcIdx = 143;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(19) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime1.path_array_not_empty
	  section.data(1).logicalSrcIdx = 144;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(20) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 426494784;
  targMap.checksum1 = 282487448;
  targMap.checksum2 = 4094492535;
  targMap.checksum3 = 3961680584;

