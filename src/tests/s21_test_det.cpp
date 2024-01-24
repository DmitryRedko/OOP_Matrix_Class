#include "s21_test.h"


TEST(MatrixDetTest, Det1) {
    double determinant = 0;
    
    S21Matrix matrix(2, 2);
    matrix.FillByMass(new double[4]{3.1914966294906026, -0.18619073092272043, -0.8221935528321422, -3.198200206226023});

    determinant = matrix.Determinant();

    int flag = fabs(determinant - (-10.360129997168267))<1e-7?1:0;
    
    ASSERT_TRUE(flag == 1);
}

TEST(MatrixDetTest, Det2) {
    double determinant = 0;
    
    S21Matrix matrix(2, 2);
    matrix.FillByMass(new double[4]{1.2157485986039704, 4.029521678281448, -1.9323171708391182, 4.695512501480126});

    determinant = matrix.Determinant();

    int flag = fabs(determinant - (13.494876672613593))<1e-7?1:0;
    
    ASSERT_TRUE(flag == 1);
}

TEST(MatrixDetTest, Det3) {
    
    S21Matrix matrix(8, 3);
    matrix.FillByMass(new double[24]{-0.9311029422700834, 3.2581916443780408, -3.930483183692691, -3.088449650371645, 1.8511329355241743, 0.13748191442962998, 3.8146090431639514, 0.3785430090341606, -0.9364662585241321, -2.0971106213799215, -4.2846431286685585, 3.446724781081109, -1.650201898272238, -0.6425815248469693, -1.37815763021952, -2.532383365586889, -1.1151057506649167, -2.7343285713203414, 3.262540713040064, -0.9533025302034144, -0.565706470187477, 0.07804377596635792, -3.5942297210012386, -1.0138103861810799});

    EXPECT_THROW(matrix.Determinant(), std::invalid_argument);
 
}

TEST(MatrixDetTest, Det4) {
    
    S21Matrix matrix(5, 6);
    matrix.FillByMass(new double[30]{3.9883132139121624, -3.7509150200094723, -4.86160877666583, 0.46628860806164774, -1.2084788536834976, 1.35311509461296, -1.2155014681873388, -1.9393504943523143, 0.18942644644111528, 0.5716768160173551, -1.578350133933748, -0.8946692640108411, -4.0252767558942715, -3.7637608980322055, 0.3418814051524546, -2.8157078703312077, 0.27294117429498943, -1.075475874660552, 1.6562750006027906, -2.820985720346542, -2.240115965593761, 0.6730097782112967, -0.11371865330587738, 3.1430171660750172, -3.4295860788221555, 4.975627843123766, -0.9020835308649673, -1.8103110409320058, -3.967676845327679, -1.9018712978496843});

    EXPECT_THROW(matrix.Determinant(), std::invalid_argument);
 
}

TEST(MatrixDetTest, Det5) {
    double determinant = 0;
    
    S21Matrix matrix(2, 2);
    matrix.FillByMass(new double[4]{3.5650004656015213, -4.133085931874119, -3.585437663373614, -1.024483617396191});

    determinant = matrix.Determinant();

    int flag = fabs(determinant - (-18.471206539119645))<1e-7?1:0;
    
    ASSERT_TRUE(flag == 1);
}

TEST(MatrixDetTest, Det6) {
    double determinant = 0;
    
    S21Matrix matrix(8, 8);
    matrix.FillByMass(new double[64]{-3.003915701619216, -2.169228084834798, -2.637679501001653, 1.4484374316926116, -1.0076726338229545, 3.6025642598932084, -3.9663926061771217, 2.7196445613902567, -4.442567545262785, 3.639186881507131, -3.2120668144477325, 1.144640942980443, -2.1254784651033045, 1.7480732103089114, 4.412615547185336, 1.4664885838848374, 0.6224135052872501, -3.477069950764907, 3.4028221767795515, -1.0192522579998107, -2.8181543941107257, 0.38655202708150593, 2.4158286298647704, 2.9278018939156505, -1.7682694252555375, 1.6826358011748797, -1.7748544275871203, 0.06298982906524397, -3.0950250935174015, -2.756500527210639, 1.649626014788601, -2.5433025385830685, 3.873991234964846, 4.816996297296525, 1.1060690689762644, 1.9699758966217136, -4.173683910690218, -0.7434195998603288, -1.0940484096758176, -3.7956471752827268, 1.172912155428155, 2.7677375072526598, 2.605110163039777, 4.275401019537879, -3.3567631391079367, -3.099658883219989, -2.5795553833223375, 2.559020662743251, 1.0471213564820285, -2.8127173933367597, -2.9812524411108585, -4.443142364448878, 4.890481450571141, 1.3777956125096038, 4.0499138496965905, -4.312997813820388, -1.3907734980087638, -2.646158343148499, 3.3669658881868916, 0.3278831163068965, 0.16056968734703503, -3.074465090059919, 1.6216548073765775, -1.98923871402532});

    determinant = matrix.Determinant();

    int flag = fabs(determinant - (-545987.9224250659))<1e-7?1:0;
    
    ASSERT_TRUE(flag == 1);
}

TEST(MatrixDetTest, Det7) {
    double determinant = 0;
    
    S21Matrix matrix(8, 8);
    matrix.FillByMass(new double[64]{-0.5002152029765945, -4.713483772268594, -0.7898382042732344, 2.8554311231428713, -3.8155253593198166, 3.8071708441433376, 2.2147601890072997, 0.39788358301104143, 2.1261417367125146, -1.9271000782826508, -1.0207970586947654, -0.8018532164192038, 1.0815315292527412, 4.8340680549602055, 1.0134350599095212, -4.946751807175901, 3.5534771209788687, 4.051011150749927, 4.063589534286832, 1.5054562164762055, -2.2702682421690987, 4.086282909611814, 0.7248832301547026, -2.505990719809489, -1.6235946279947777, -2.8732756820541905, -4.977528170349409, -2.26122390648418, -3.666883032337057, -2.952733784136241, 4.922784721310171, 1.6442291829124933, 1.6661521501503547, -3.168070644630827, -2.0243369129281295, 0.38814770918663655, 1.5502197570740295, -4.122557493360186, -4.741640950475493, 3.965259718264761, 4.002084020792125, -2.3309768518816796, 0.644128373602399, 3.1768278303706357, 2.788528005000833, 3.2118054131240275, -2.335916929009476, -0.3231832242364021, 0.7269891514217335, 4.739380818897118, 4.66860097564796, -2.7796411245740593, -1.6491408037998267, 0.9976793611926995, 3.7699246593156968, 2.265259457446234, -0.49023123010703973, 4.067434994829204, 4.372547378713399, 4.606725426406541, -3.70553882043843, -2.253350499734453, -4.123213257080497, 0.7541862944211486});

    determinant = matrix.Determinant();

    int flag = fabs(determinant - (-184059.3694408286))<1e-7?1:0;
    
    ASSERT_TRUE(flag == 1);
}

TEST(MatrixDetTest, Det8) {
    
    S21Matrix matrix(4, 6);
    matrix.FillByMass(new double[24]{2.368904613662898, -2.5931945128306366, -1.5917954224408124, 4.44659295991748, 3.527906601448464, -3.0240519683060674, -2.7807541170270724, 1.021757356471939, 1.6473832976649225, 4.724448729249506, 3.201878920860775, -3.517534977209158, 4.814685670839211, 3.0169442808053795, 2.8712497609226464, -1.2203504797835851, -1.8713008324093239, -0.7291910927925427, -1.7209990243757711, 3.833919524794007, 3.7914921569733, 0.5022336270035774, 1.6614650538903906, -3.005010000260123});

    EXPECT_THROW(matrix.Determinant(), std::invalid_argument);
 
}

TEST(MatrixDetTest, Det9) {
    double determinant = 0;
    
    S21Matrix matrix(4, 4);
    matrix.FillByMass(new double[16]{1.2308696149260143, -3.554625816236745, -4.496273747618572, -0.918205420033134, -4.6005184293523005, -2.1533156338637074, -3.507011254031739, 3.8066240180465822, -4.351843181487452, 1.4809929794859409, -3.408903488064837, 1.7557782016848815, -4.0164855863014335, -0.4571548408217385, 4.891888900516911, 1.6870608503824416});

    determinant = matrix.Determinant();

    int flag = fabs(determinant - (-347.04658114338883))<1e-7?1:0;
    
    ASSERT_TRUE(flag == 1);
}

TEST(MatrixDetTest, Det10) {
    double determinant = 0;
    
    S21Matrix matrix(2, 2);
    matrix.FillByMass(new double[4]{4.527470917065116, -1.8938899375020393, -3.99049451791202, -0.1871173245324087});

    determinant = matrix.Determinant();

    int flag = fabs(determinant - (-8.404725658030141))<1e-7?1:0;
    
    ASSERT_TRUE(flag == 1);
}

TEST(MatrixDetTest, Det11) {
    
    S21Matrix matrix(5, 3);
    matrix.FillByMass(new double[15]{-0.7705184808646424, -4.328494990090606, -1.1966211926345194, -1.2697732392407102, -1.4410629352969284, -2.987743608007424, -4.180850729832805, -3.711889927868003, -3.696504527329918, -3.937396416159775, 4.33961816882308, -0.4136667660982427, 1.6195120211993164, 1.5760530781488455, -1.509038448502479});

    EXPECT_THROW(matrix.Determinant(), std::invalid_argument);
 
}

TEST(MatrixDetTest, Det12) {
    double determinant = 0;
    
    S21Matrix matrix(7, 7);
    matrix.FillByMass(new double[49]{3.414197242473392, 0.8611546026273391, -4.526186001413318, -2.772938171234257, 0.11202028107178741, -1.4459436869879294, 0.3523541457041386, 3.975700148069496, -1.9460164109545608, 0.8332470760628139, 2.94996373936249, -1.0997170173577029, -0.001739933609642641, -3.6923458358923056, 0.6780585246161888, -3.7129519716855253, -2.354723217848105, 1.3674652192432948, 1.3232797438646244, -3.1572838460345922, 1.1661062136157714, -2.796238086316045, -1.407761616861002, 3.208526759173637, 2.886324974859546, -3.26483611216367, 1.20303985256652, 3.7180500110184944, -0.6440497050421934, 1.03667325076343, 1.5126365429027437, 0.8038210692735595, 4.628424003394958, 3.3586709267600803, 3.5580261300697984, 4.536686793915255, 2.3265500086031317, -4.191193232602478, -4.747893118017331, 4.652144515107851, -2.16244345773699, -2.188952462575773, -2.1046107967690797, -2.4710460083171193, 0.4011199503978542, -2.4741207982454205, 1.3721340050946687, 3.2920798808242733, 0.5737010997073346});

    determinant = matrix.Determinant();

    int flag = fabs(determinant - (-48201.3616468385))<1e-7?1:0;
    
    ASSERT_TRUE(flag == 1);
}

TEST(MatrixDetTest, Det13) {
    double determinant = 0;
    
    S21Matrix matrix(5, 5);
    matrix.FillByMass(new double[25]{-0.8397404963325616, -4.057656457246369, -4.054589419035959, -2.0977672604290865, -3.179630202752173, 4.979846393727097, -0.3294742610227708, 2.296518119191372, 2.6903444243881216, -3.4402282576452015, -0.7030435084274975, -3.3647977286846844, -2.5151183253885154, -3.163993353587525, -0.3111205962868038, 2.50405825918988, 1.9884446836627392, -2.3398405590241467, -0.022463989980784582, 1.7309574443079025, -3.6263097013307064, 4.081959505203839, -1.0782310014927687, -2.256485731576089, -1.2661504651793876});

    determinant = matrix.Determinant();

    int flag = fabs(determinant - (1772.9355578653374))<1e-7?1:0;
    
    ASSERT_TRUE(flag == 1);
}

TEST(MatrixDetTest, Det14) {
    double determinant = 0;
    
    S21Matrix matrix(5, 5);
    matrix.FillByMass(new double[25]{0.7678324336696392, 2.686481208957222, 2.949845485884973, -2.458073419305893, 0.2501206186965579, -4.130487327520659, -3.8724155948274386, 2.614744494911122, -3.080705754798636, 2.877485765648016, -0.057801557278934546, 4.009674156662706, -4.206318970096222, -4.4792460842459505, -4.757936823643965, 4.90054405492338, 3.381692768257073, -0.2357435250927491, -3.4503643509638016, 3.3581456214829934, 4.586387663648496, 2.25951800209791, -2.881609781162112, 2.1672813338975523, -1.4104687466735601});

    determinant = matrix.Determinant();

    int flag = fabs(determinant - (-1132.4378166882304))<1e-7?1:0;
    
    ASSERT_TRUE(flag == 1);
}

TEST(MatrixDetTest, Det15) {
    
    S21Matrix matrix(4, 8);
    matrix.FillByMass(new double[32]{-2.3539199256246492, 1.299308106093136, 2.462649758414739, 2.261381682800595, 1.4275947502509778, -0.5361168744234446, -4.448355723212707, 3.5115320030546453, -1.2544462549945323, -4.81854784950969, 3.9543833865138485, -1.167119122776683, 3.8004483598437115, -3.874125501608212, -4.348615169821153, -2.9241240162625703, -2.5941932614219763, -0.9393260248671904, -2.1002203572055453, 0.4927692074080099, -1.3136674299546702, 4.122071588472924, 3.140715152315579, 0.6510498080541787, -3.269834559693985, 2.217037705899884, -0.025201986816626665, -4.408838694223105, 4.563690463007861, -2.7789778937324106, -3.515011307964259, -0.4898104083148871});

    EXPECT_THROW(matrix.Determinant(), std::invalid_argument);
 
}

TEST(MatrixDetTest, Det16) {
    double determinant = 0;
    
    S21Matrix matrix(3, 3);
    matrix.FillByMass(new double[9]{-3.7227580570328636, 2.8000862527138963, -0.7132777603367142, 0.15029157528029202, -3.8881418386555278, 4.0317486483723926, 1.6771518475437759, -2.5008281552077696, -3.433453943384902});

    determinant = matrix.Determinant();

    int flag = fabs(determinant - (-71.2379281212908))<1e-7?1:0;
    
    ASSERT_TRUE(flag == 1);
}

TEST(MatrixDetTest, Det17) {
    double determinant = 0;
    
    S21Matrix matrix(3, 3);
    matrix.FillByMass(new double[9]{2.24765968248772, -2.4760592908893786, 4.616952228887955, 0.2080560800110609, -0.5288733049918646, 2.8551801855755174, -2.4912824341800643, -4.022411260973945, 0.7229513560277407});

    determinant = matrix.Determinant();

    int flag = fabs(determinant - (32.992080810689124))<1e-7?1:0;
    
    ASSERT_TRUE(flag == 1);
}

TEST(MatrixDetTest, Det18) {
    
    S21Matrix matrix(2, 4);
    matrix.FillByMass(new double[8]{2.6639798640003507, 0.594280523825673, -0.11655299229505811, 1.8335102967599362, 4.856622305848749, 1.2894978587310524, 0.6946085657586156, -3.8513403195644913});

    EXPECT_THROW(matrix.Determinant(), std::invalid_argument);
 
}

TEST(MatrixDetTest, Det19) {
    
    S21Matrix matrix(3, 2);
    matrix.FillByMass(new double[6]{0.21455010699067145, -0.5370864676498677, 3.847793499731356, -1.4183228105114343, 3.040372598544245, -2.8740076346347463});

    EXPECT_THROW(matrix.Determinant(), std::invalid_argument);
 
}

TEST(MatrixDetTest, Det20) {
    
    S21Matrix matrix(5, 4);
    matrix.FillByMass(new double[20]{2.076161048865032, -3.7049732226974728, -3.7094800182288914, -3.9891136338710775, -1.9496487728447596, 1.5003996943202704, 3.89329472823489, 2.3182282683559112, -2.5498514229617033, -0.06795689808039551, 2.3903257443987496, -3.868029802095536, 0.04576626046703591, 3.517269728590147, 3.927869741934053, -4.648092075994698, 1.2718740905281862, -4.80148226743804, 2.4224549373993307, 3.9380414505456187});

    EXPECT_THROW(matrix.Determinant(), std::invalid_argument);
 
}
