/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentPassTableCell : PSTableCell {
    UIControl *_actionButton;
    UIView *_cardSnapshotView;
    <PKPaymentPassTableCellDelegate> *_delegate;
    UILabel *_mainLabel;
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
    int _settingsContext;
    BOOL _showAddButton;
    BOOL _showFPAN;
    BOOL _showState;
    UIActivityIndicatorView *_spinner;
    UILabel *_subTextLabel;
}

@property (nonatomic, readonly) UIControl *actionButton;
@property (nonatomic) <PKPaymentPassTableCellDelegate> *delegate;
@property (nonatomic, readonly) UILabel *mainLabel;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic) BOOL showAddButton;
@property (nonatomic) BOOL showFPAN;
@property (nonatomic, readonly) UILabel *subTextLabel;

- (void)_addButtonPressed:(id)arg1;
- (id)_stringForPassState:(unsigned int)arg1;
- (void)_verifyButtonPressed:(id)arg1;
- (id)actionButton;
- (void)dealloc;
- (id)delegate;
- (void)disableAddButton;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (id)mainLabel;
- (id)pass;
- (void)pk_applyAppearance:(struct _PKAppearanceSpecifier { BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; unsigned short x60; void*x61; short x62; void*x63; void*x64; void*x65; void*x66; unsigned long x67; int x68; unsigned int x69/* : ? */; const void*x70; const void*x71; void*x72; void*x73; const int x74; void x75; void*x76; void*x77; void*x78; void*x79; const void*x80; void*x81; void*x82; void*x83; out const void*x84; short x85; void*x86; unsigned short x87; void*x88; out const void*x89; void*x90; int x91; void*x92; void*x93; unsigned int x94; void*x95; float x96; const void*x97; void*x98; void*x99; void*x100; out const void*x101; void*x102; unsigned short x103; void*x104; out const void*x105; void*x106; int x107; void*x108; void*x109; unsigned int x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; unsigned short x126; void*x127; void*x128; unsigned int x129; void*x130; void*x131; double x132; int x133; void*x134; void*x135; long x136; void*x137; void*x138; void*x139; const unsigned int x140; void*x141; void*x142; void*x143; unsigned short x144; void*x145; void*x146; void*x147; void*x148; short x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; short x166; void*x167; void*x168; void*x169; short x170; void*x171; void*x172; void*x173; out void*x174; int x175; void*x176; double x177; void*x178; char *x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; short x197; void*x198; void*x199; void*x200; short x201; void*x202; void*x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; unsigned short x285; void*x286; short x287; void*x288; void*x289; void*x290; void*x291; unsigned long x292; int x293; unsigned int x294/* : ? */; const void*x295; const void*x296; void*x297; void*x298; const int x299; void x300; void*x301; void*x302; void*x303; void*x304; const void*x305; void*x306; void*x307; void*x308; out const void*x309; short x310; void*x311; void*x312; void*x313; out void*x314; in double x315; void*x316; void*x317; int x318; out in void*x319; float x320; const void*x321; void*x322; void*x323; void*x324; out const void*x325; void*x326; void*x327; void*x328; out void*x329; in double x330; void*x331; void*x332; int x333; out in void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; unsigned int x346; in void*x347; void*x348; const in void*x349; long x350; void*x351; const const out const void*x352; void*x353; void*x354; void*x355; void*x356; void*x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; void*x364; void*x365; void*x366; void*x367; void*x368; void*x369; void*x370; void*x371; id x372; void*x373; void*x374; void*x375; void*x376; void*x377; void*x378; void*x379; void*x380; void*x381; void*x382; void*x383; void*x384; void*x385; void*x386; void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; void*x393; void*x394; void*x395; void*x396; void*x397; void*x398; void*x399; void*x400; BOOL x401; void*x402; long x403; long x404; unsigned int x405; short x406; short x407; void*x408; void*x409; const void*x410; void*x411; void*x412; void*x413; void*x414; void*x415; void*x416; void*x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void*x425; void*x426; void*x427; void*x428; void*x429; void*x430; void*x431; void*x432; void*x433; void*x434; void*x435; void*x436; void*x437; void*x438; void*x439; void*x440; void*x441; void*x442; void*x443; void*x444; void*x445; void*x446; void*x447; void*x448; void*x449; void*x450; void*x451; void*x452; void*x453; void*x454; void*x455; void*x456; void*x457; void*x458; void*x459; void*x460; void*x461; void*x462; void*x463; unsigned short x464; void*x465; short x466; void*x467; void*x468; void*x469; void*x470; unsigned long x471; int x472; unsigned int x473/* : ? */; const void*x474; const void*x475; void*x476; void*x477; const void*x478; void*x479; void*x480; void*x481; out const void*x482; short x483; void*x484; void*x485; void*x486; short x487; short x488; void*x489; int x490; void*x491; void*x492; float x493; const void*x494; void*x495; void*x496; void*x497; out const void*x498; void*x499; void*x500; void*x501; short x502; short x503; void*x504; int x505; void*x506; void*x507; void*x508; void*x509; void*x510; void*x511; void*x512; void*x513; void*x514; void*x515; void*x516; void*x517; void*x518; void*x519; void*x520; void*x521; void*x522; long x523; BOOL x524; out void*x525; void*x526; void*x527; void*x528; void*x529; double x530; void*x531; const oneway int x532; void*x533; void*x534; void*x535; void*x536; void*x537; void*x538; void*x539; void*x540; void*x541; void*x542; void*x543; void*x544; void*x545; void*x546; void*x547; void*x548; void*x549; void*x550; void*x551; void*x552; void*x553; void*x554; void*x555; void*x556; void*x557; void*x558; void*x559; void*x560; void*x561; void*x562; void*x563; void*x564; void*x565; void*x566; void*x567; void*x568; void*x569; void*x570; void*x571; void*x572; void*x573; void*x574; void*x575; void*x576; void*x577; void*x578; void*x579; out void*x580; void*x581; void*x582; void*x583; void*x584; void*x585; void*x586; void*x587; void*x588; void*x589; void*x590; void*x591; void*x592; void*x593; void*x594; void*x595; void*x596; void*x597; void*x598; void*x599; void*x600; void*x601; void*x602; void*x603; void*x604; void*x605; void*x606; void*x607; void*x608; void*x609; void*x610; void*x611; void*x612; void*x613; void*x614; void*x615; void*x616; void*x617; void*x618; void*x619; void*x620; void*x621; void*x622; void*x623; void*x624; void*x625; void*x626; void*x627; void*x628; void*x629; void*x630; void*x631; void*x632; void*x633; void*x634; void*x635; void*x636; void*x637; void*x638; void*x639; void*x640; void*x641; void*x642; unsigned int x643; void*x644; const out void*x645; void*x646; void*x647; void*x648; unsigned int x649/* : ? */; long x650; void*x651; oneway int x652; void*x653; void*x654; unsigned char x655; void*x656; long x657; long x658; bool x659; void*x660; BOOL x661; void*x662; void*x663; const out void*x664; in double x665; void*x666; void*x667; void*x668; void*x669; void*x670; void*x671; void*x672; void*x673; void*x674; void*x675; void*x676; struct x677; void*x678; void*x679; void*x680; void*x681; unsigned long x682; void*x683; void*x684; void*x685; void*x686; void*x687; void*x688; void*x689; void*x690; void*x691; void*x692; void*x693; void*x694; void*x695; void*x696; void*x697; void*x698; void*x699; void*x700; void*x701; void*x702; void*x703; void*x704; void*x705; void*x706; void*x707; void*x708; void*x709; void*x710; void*x711; void*x712; void*x713; void*x714; void*x715; void*x716; void*x717; void*x718; void*x719; void*x720; void*x721; void*x722; void*x723; void*x724; void*x725; void*x726; void*x727; void*x728; void*x729; in void*x730; void*x731; void*x732; void*x733; void*x734; void*x735; void*x736; void*x737; void*x738; void*x739; void*x740; void*x741; void*x742; void*x743; void*x744; void*x745; void*x746; void*x747; void*x748; void*x749; void*x750; void*x751; void*x752; void*x753; void*x754; void*x755; void*x756; void*x757; void*x758; void*x759; void*x760; void*x761; void*x762; void*x763; void*x764; void*x765; void*x766; void*x767; void*x768; void*x769; void*x770; void*x771; void*x772; void*x773; void*x774; void*x775; void*x776; void*x777; void*x778; void*x779; void*x780; void*x781; void*x782; void*x783; void*x784; void*x785; void*x786; void*x787; void*x788; void*x789; unsigned short x790; void*x791; short x792; void*x793; void*x794; void*x795; void*x796; unsigned long x797; int x798; unsigned int x799/* : ? */; const void*x800; const void*x801; void*x802; void*x803; const void*x804; void*x805; void*x806; void*x807; out const void*x808; short x809; void*x810; void*x811; void*x812; void*x813; BOOL x814; void*x815; unsigned char x816; out in in void*x817; BOOL x818; void*x819; int x820; void x821; int x822; void*x823; void*x824; void*x825; float x826; const void*x827; void*x828; void*x829; void*x830; out const void*x831; void*x832; void*x833; void*x834; void*x835; BOOL x836; void*x837; unsigned char x838; out in in void*x839; BOOL x840; void*x841; int x842; void x843; int x844; void*x845; void*x846; void*x847; void*x848; void*x849; void*x850; void*x851; void*x852; void*x853; void*x854; void*x855; void*x856; void*x857; void*x858; void*x859; void*x860; void*x861; void*x862; void*x863; void*x864; void*x865; void*x866; void*x867; void*x868; void*x869; void*x870; void*x871; unsigned char x872; unsigned long long x873; void*x874; void*x875; void*x876; void*x877; double x878; void*x879; void*x880; short x881; short x882; void*x883; void*x884; void*x885; void*x886; void*x887; void*x888; void*x889; void*x890; void*x891; void*x892; void*x893; void*x894; void*x895; void*x896; void*x897; void*x898; void*x899; void*x900; void*x901; void*x902; void*x903; void*x904; void*x905; void*x906; void*x907; void*x908; void*x909; void*x910; void*x911; void*x912; void*x913; void*x914; void*x915; void*x916; void*x917; void*x918; void*x919; void*x920; void*x921; void*x922; void*x923; void*x924; void*x925; void*x926; void*x927; void*x928; void*x929; void*x930; void*x931; void*x932; void*x933; void*x934; void*x935; void*x936; void*x937; void*x938; void*x939; void*x940; id x941; void*x942; void*x943; void*x944; void*x945; void*x946; void*x947; void*x948; void*x949; void*x950; void*x951; void*x952; void*x953; void*x954; void*x955; void*x956; void*x957; void*x958; void*x959; void*x960; void*x961; void*x962; void*x963; void*x964; unsigned short x965; void*x966; void*x967; void*x968; void*x969; BOOL x970; void*x971; void*x972; void*x973; void*x974; unsigned int x975; in void*x976; void*x977; void*x978; bool x979; void*x980; in double x981; long x982; void*x983; void*x984; void*x985; void*x986; void*x987; void*x988; void*x989; void*x990; void*x991; void*x992; void*x993; void*x994; void*x995; void*x996; void*x997; void*x998; void*x999; void*x1000; void*x1001; void*x1002; void*x1003; void*x1004; void*x1005; void*x1006; void*x1007; void*x1008; void*x1009; void*x1010; void*x1011; void*x1012; void*x1013; void*x1014; void*x1015; void*x1016; void*x1017; void*x1018; void*x1019; void*x1020; void*x1021; void*x1022; void*x1023; void*x1024; void*x1025; void*x1026; void*x1027; unsigned short x1028; void*x1029; short x1030; void*x1031; void*x1032; void*x1033; void*x1034; unsigned long x1035; int x1036; unsigned int x1037/* : ? */; const void*x1038; const void*x1039; void*x1040; void*x1041; const void*x1042; void*x1043; void*x1044; void*x1045; out const void*x1046; short x1047; void*x1048; void*x1049; void*x1050; out void*x1051; out short x1052; void*x1053; unsigned int x1054; void*x1055; float x1056; const void*x1057; void*x1058; void*x1059; void*x1060; out const void*x1061; void*x1062; void*x1063; void*x1064; out void*x1065; out short x1066; void*x1067; unsigned int x1068; void*x1069; void*x1070; void*x1071; void*x1072; void*x1073; void*x1074; void*x1075; void*x1076; void*x1077; void*x1078; void*x1079; void*x1080; void*x1081; const out void*x1082; void*x1083; oneway void*x1084; long x1085; void*x1086; void*x1087; void*x1088; int x1089; long x1090; void*x1091; void*x1092; const void*x1093; void*x1094; void*x1095; void*x1096; void*x1097; void*x1098; void*x1099; void*x1100; void*x1101; void*x1102; void*x1103; void*x1104; void*x1105; void*x1106; unsigned int x1107; void*x1108; void*x1109; void*x1110; unsigned int x1111; void*x1112; void*x1113; void*x1114; unsigned int x1115; void*x1116; void*x1117; void*x1118; void*x1119; void*x1120; void*x1121; void*x1122; void*x1123; void*x1124; void*x1125; void*x1126; void*x1127; void*x1128; void*x1129; void*x1130; struct x1131; void*x1132; void*x1133; void*x1134; void*x1135; unsigned long x1136; void*x1137; void*x1138; void*x1139; void*x1140; void*x1141; void*x1142; void*x1143; void*x1144; void*x1145; void*x1146; void*x1147; void*x1148; void*x1149; void*x1150; void*x1151; void*x1152; void*x1153; void*x1154; void*x1155; void*x1156; void*x1157; void*x1158; void*x1159; void*x1160; void*x1161; void*x1162; void*x1163; void*x1164; void*x1165; void*x1166; void*x1167; void*x1168; void*x1169; void*x1170; void*x1171; void*x1172; void*x1173; void*x1174; void*x1175; void*x1176; void*x1177; void*x1178; void*x1179; void*x1180; void*x1181; void*x1182; void*x1183; void*x1184; void*x1185; void*x1186; void*x1187; void*x1188; void*x1189; void*x1190; void*x1191; void*x1192; void*x1193; void*x1194; void*x1195; void*x1196; void*x1197; void*x1198; void*x1199; void*x1200; void*x1201; void*x1202; void*x1203; void*x1204; void*x1205; void*x1206; void*x1207; void*x1208; void*x1209; void*x1210; void*x1211; void*x1212; void*x1213; void*x1214; void*x1215; void*x1216; void*x1217; void*x1218; void*x1219; void*x1220; void*x1221; void*x1222; void*x1223; void*x1224; void*x1225; void*x1226; void*x1227; void*x1228; void*x1229; void*x1230; void*x1231; void*x1232; void*x1233; void*x1234; void*x1235; void*x1236; void*x1237; void*x1238; void*x1239; void*x1240; void*x1241; void*x1242; void*x1243; void*x1244; unsigned short x1245; void*x1246; short x1247; void*x1248; void*x1249; void*x1250; void*x1251; unsigned long x1252; int x1253; unsigned int x1254/* : ? */; const void*x1255; const void*x1256; void*x1257; void*x1258; const int x1259; void x1260; void*x1261; void*x1262; void*x1263; void*x1264; const void*x1265; void*x1266; void*x1267; void*x1268; out const void*x1269; short x1270; void*x1271; unsigned short x1272; void*x1273; unsigned int x1274/* : ? */; void*x1275; void*x1276; BOOL x1277; void*x1278; short x1279; void*x1280; float x1281; const void*x1282; void*x1283; void*x1284; void*x1285; out const void*x1286; void*x1287; unsigned short x1288; void*x1289; unsigned int x1290/* : ? */; void*x1291; void*x1292; BOOL x1293; void*x1294; short x1295; void*x1296; void*x1297; void*x1298; void*x1299; void*x1300; void*x1301; void*x1302; void*x1303; void*x1304; void*x1305; void*x1306; void*x1307; void*x1308; void*x1309; void*x1310; void*x1311; void*x1312; unsigned short x1313; unsigned short x1314; void*x1315; in BOOL x1316; unsigned short x1317; void*x1318; const void x1319; void*x1320; const oneway void*x1321; const int x1322; float x1323; void*x1324; void*x1325; void*x1326; short x1327; void*x1328; out in short x1329; void*x1330; void*x1331; void*x1332; void*x1333; void*x1334; void*x1335; void*x1336; void*x1337; void*x1338; void*x1339; void*x1340; void*x1341; void*x1342; void*x1343; void*x1344; void*x1345; short x1346; void*x1347; void*x1348; short x1349; void*x1350; void*x1351; void*x1352; int x1353; long x1354; long x1355; bool x1356; void*x1357; BOOL x1358; out void*x1359; void*x1360; void*x1361; int x1362; double x1363; double x1364; void*x1365; in in int x1366; void*x1367; void*x1368; void*x1369; void*x1370; double x1371; void*x1372; void*x1373; void*x1374; void*x1375; void*x1376; void*x1377; void*x1378; void*x1379; void*x1380; void*x1381; void*x1382; void*x1383; void*x1384; void*x1385; void*x1386; void*x1387; void*x1388; void*x1389; void*x1390; void*x1391; void*x1392; void*x1393; void*x1394; void*x1395; void*x1396; void*x1397; void*x1398; void*x1399; void*x1400; void*x1401; void*x1402; id x1403; void*x1404; void*x1405; void*x1406; void*x1407; void*x1408; void*x1409; void*x1410; void*x1411; void*x1412; void*x1413; void*x1414; void*x1415; void*x1416; void*x1417; void*x1418; void*x1419; void*x1420; void*x1421; void*x1422; void*x1423; void*x1424; void*x1425; void*x1426; void*x1427; void*x1428; void*x1429; void*x1430; void*x1431; void*x1432; void*x1433; void*x1434; void*x1435; void*x1436; void*x1437; void*x1438; void*x1439; void*x1440; void*x1441; void*x1442; void*x1443; void*x1444; void*x1445; void*x1446; void*x1447; void*x1448; void*x1449; void*x1450; void*x1451; void*x1452; void*x1453; void*x1454; void*x1455; void*x1456; void*x1457; unsigned char x1458; void*x1459; unsigned short x1460; void*x1461; short x1462; void*x1463; void*x1464; void*x1465; void*x1466; unsigned long x1467; int x1468; unsigned int x1469/* : ? */; const void*x1470; const void*x1471; void*x1472; void*x1473; const int x1474; void x1475; void*x1476; void*x1477; void*x1478; void*x1479; const void*x1480; void*x1481; void*x1482; void*x1483; out const void*x1484; short x1485; void*x1486; int x1487; void*x1488; out const void*x1489; unsigned int x1490; void*x1491; void*x1492; out const void*x1493; void*x1494; float x1495; const void*x1496; void*x1497; void*x1498; void*x1499; out const void*x1500; void*x1501; int x1502; void*x1503; out const void*x1504; unsigned int x1505; void*x1506; void*x1507; out const void*x1508; void*x1509; void*x1510; void*x1511; void*x1512; void*x1513; void*x1514; void*x1515; void*x1516; void*x1517; void*x1518; void*x1519; void*x1520; void*x1521; void*x1522; unsigned short x1523; unsigned char x1524; void*x1525; void*x1526; long doublex1527; void*x1528; const void*x1529; float x1530; int x1531; long x1532; void*x1533; void*x1534; const void*x1535; double x1536; unsigned long x1537; int x1538; in void*x1539; void*x1540; void*x1541; in double x1542; void*x1543; const void*x1544; const void*x1545; void*x1546; void*x1547; void*x1548; void*x1549; void*x1550; void*x1551; void*x1552; void*x1553; void*x1554; unsigned short x1555; void*x1556; short x1557; void*x1558; void*x1559; void*x1560; struct x1561; void*x1562; void*x1563; unsigned int x1564/* : ? */; long x1565; void*x1566; oneway int x1567; void*x1568; void*x1569; SEL x1570; void*x1571; int x1572; void*x1573; long x1574; void*x1575; void*x1576; out const void*x1577; out out void*x1578; void*x1579; const unsigned int x1580; in unsigned short x1581; void*x1582; BOOL x1583; void*x1584; int x1585; out in SEL x1586; void*x1587; void*x1588; void*x1589; void*x1590; void*x1591; void*x1592; void*x1593; void*x1594; void*x1595; void*x1596; void*x1597; void*x1598; void*x1599; void*x1600; void*x1601; void*x1602; void*x1603; void*x1604; void*x1605; void*x1606; void*x1607; void*x1608; void*x1609; void*x1610; void*x1611; void*x1612; void*x1613; void*x1614; void*x1615; void*x1616; void*x1617; void*x1618; void*x1619; void*x1620; void*x1621; void*x1622; void*x1623; void*x1624; void*x1625; short x1626; unsigned long long x1627; void*x1628; void*x1629; void*x1630; void*x1631; void*x1632; void*x1633; void*x1634; void*x1635; void*x1636; void*x1637; void*x1638; void*x1639; void*x1640; void*x1641; void*x1642; void*x1643; void*x1644; void*x1645; void*x1646; void*x1647; void*x1648; void*x1649; void*x1650; void*x1651; void*x1652; void*x1653; void*x1654; void*x1655; void*x1656; void*x1657; void*x1658; void*x1659; void*x1660; void*x1661; void*x1662; void*x1663; void*x1664; void*x1665; void*x1666; void*x1667; void*x1668; void*x1669; void*x1670; void*x1671; void*x1672; void*x1673; void*x1674; void*x1675; void*x1676; void*x1677; void*x1678; void*x1679; void*x1680; void*x1681; void*x1682; void*x1683; void*x1684; void*x1685; void*x1686; void*x1687; void*x1688; void*x1689; void*x1690; void*x1691; void*x1692; void*x1693; void*x1694; void*x1695; void*x1696; unsigned short x1697; void*x1698; short x1699; void*x1700; void*x1701; void*x1702; void*x1703; unsigned long x1704; int x1705; unsigned int x1706/* : ? */; const void*x1707; const void*x1708; void*x1709; void*x1710; const int x1711; void x1712; void*x1713; void*x1714; void*x1715; void*x1716; const void*x1717; void*x1718; void*x1719; void*x1720; out const void*x1721; short x1722; void*x1723; void*x1724; void*x1725; unsigned int x1726/* : ? */; unsigned char x1727; out const void*x1728; void*x1729; float x1730; const void*x1731; void*x1732; void*x1733; void*x1734; out const void*x1735; void*x1736; void*x1737; void*x1738; unsigned int x1739/* : ? */; unsigned char x1740; out const void*x1741; void*x1742; void*x1743; void*x1744; void*x1745; void*x1746; void*x1747; void*x1748; void*x1749; void*x1750; void*x1751; void*x1752; void*x1753; void*x1754; void*x1755; void*x1756; void*x1757; void*x1758; void*x1759; void*x1760; void*x1761; void*x1762; long doublex1763; bycopy void*x1764; void*x1765; void*x1766; void*x1767; unsigned long x1768; void*x1769; void*x1770; unsigned int x1771/* : ? */; long x1772; void*x1773; unsigned short x1774; void*x1775; BOOL x1776; void*x1777; int x1778; out in void*x1779; long x1780; void*x1781; void*x1782; void*x1783; in void*x1784; void*x1785; void*x1786; void*x1787; void*x1788; void*x1789; void*x1790; void*x1791; void*x1792; void*x1793; void*x1794; void*x1795; void*x1796; void*x1797; void*x1798; void*x1799; void*x1800; void*x1801; void*x1802; void*x1803; void*x1804; void*x1805; void*x1806; void*x1807; void*x1808; void*x1809; void*x1810; void*x1811; void*x1812; void*x1813; void*x1814; void*x1815; void*x1816; void*x1817; void*x1818; void*x1819; void*x1820; void*x1821; void*x1822; void*x1823; void*x1824; void*x1825; void*x1826; void*x1827; void*x1828; void*x1829; void*x1830; void*x1831; void*x1832; void*x1833; void*x1834; void*x1835; void*x1836; void*x1837; void*x1838; void*x1839; void*x1840; void*x1841; void*x1842; void*x1843; void*x1844; void*x1845; void*x1846; void*x1847; void*x1848; void*x1849; void*x1850; void*x1851; void*x1852; void*x1853; void*x1854; void*x1855; void*x1856; void*x1857; void*x1858; void*x1859; void*x1860; void*x1861; void*x1862; void*x1863; void*x1864; void*x1865; void*x1866; void*x1867; void*x1868; void*x1869; void*x1870; unsigned char x1871; long doublex1872; void*x1873; long doublex1874; unsigned long x1875; out BOOL x1876; void*x1877; long x1878; long doublex1879; void*x1880; void x1881; int x1882; BOOL x1883; void*x1884; unsigned short x1885; void*x1886; BOOL x1887; const void*x1888; void*x1889; void*x1890; void*x1891; in double x1892; long x1893; void*x1894; const void*x1895; void*x1896; void*x1897; void*x1898; void*x1899; void*x1900; void*x1901; void*x1902; void*x1903; void*x1904; void*x1905; void*x1906; void*x1907; struct x1908; void*x1909; void*x1910; void*x1911; void*x1912; void*x1913; void*x1914; void*x1915; void*x1916; void*x1917; void*x1918; void*x1919; unsigned long x1920; void*x1921; void*x1922; void*x1923; unsigned long x1924; void*x1925; void*x1926; id x1927; void*x1928; void*x1929; void*x1930; void*x1931; void*x1932; void*x1933; void*x1934; void*x1935; void*x1936; void*x1937; void*x1938; void*x1939; void*x1940; void*x1941; void*x1942; void*x1943; void*x1944; void*x1945; void*x1946; void*x1947; void*x1948; void*x1949; void*x1950; void*x1951; void*x1952; void*x1953; void*x1954; void*x1955; void*x1956; void*x1957; void*x1958; void*x1959; void*x1960; void*x1961; void*x1962; void*x1963; void*x1964; void*x1965; void*x1966; void*x1967; void*x1968; void*x1969; void*x1970; void*x1971; void*x1972; void*x1973; void*x1974; void*x1975; void*x1976; void*x1977; void*x1978; void*x1979; void*x1980; void*x1981; void*x1982; void*x1983; unsigned short x1984; void*x1985; short x1986; void*x1987; void*x1988; void*x1989; void*x1990; unsigned long x1991; int x1992; unsigned int x1993/* : ? */; const void*x1994; const void*x1995; void*x1996; void*x1997; const void*x1998; void*x1999; void*x2000; void*x2001; out const void*x2002; short x2003; void*x2004; unsigned char x2005; out const void*x2006; long doublex2007; void*x2008; void*x2009; void*x2010; void*x2011; float x2012; const void*x2013; void*x2014; void*x2015; void*x2016; out const void*x2017; void*x2018; unsigned char x2019; out const void*x2020; long doublex2021; void*x2022; void*x2023; void*x2024; void*x2025; void*x2026; void*x2027; void*x2028; void*x2029; void*x2030; void*x2031; void*x2032; void*x2033; void*x2034; void*x2035; void*x2036; void*x2037; unsigned int x2038/* : ? */; int x2039; long long x2040; void*x2041; int x2042; void*x2043; void*x2044; void*x2045; long x2046; out unsigned int x2047/* : ? */; void*x2048; long x2049; bycopy unsigned int x2050/* : ? */; void*x2051; void*x2052; BOOL x2053; void*x2054; unsigned int x2055; long doublex2056; void*x2057; void*x2058; void*x2059; void*x2060; void*x2061; void*x2062; void*x2063; void*x2064; void*x2065; void*x2066; void*x2067; void*x2068; void*x2069; void*x2070; void*x2071; void*x2072; void*x2073; void*x2074; void*x2075; void*x2076; void*x2077; void*x2078; void*x2079; void*x2080; void*x2081; void*x2082; void*x2083; unsigned long x2084; void*x2085; void*x2086; void*x2087; void*x2088; void*x2089; void*x2090; void*x2091; void*x2092; void*x2093; void*x2094; void*x2095; void*x2096; void*x2097; void*x2098; void*x2099; void*x2100; void*x2101; void*x2102; void*x2103; void*x2104; void*x2105; void*x2106; void*x2107; void*x2108; void*x2109; void*x2110; void*x2111; void*x2112; void*x2113; void*x2114; void*x2115; void*x2116; void*x2117; void*x2118; void*x2119; void*x2120; void*x2121; void*x2122; void*x2123; void*x2124; void*x2125; void*x2126; void*x2127; void*x2128; void*x2129; void*x2130; void*x2131; void*x2132; void*x2133; void*x2134; void*x2135; void*x2136; void*x2137; void*x2138; void*x2139; void*x2140; void*x2141; void*x2142; void*x2143; void*x2144; void*x2145; void*x2146; void*x2147; void*x2148; void*x2149; void*x2150; }*)arg1;
- (id)pk_childrenForAppearance;
- (void)setDelegate:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setShowAddButton:(BOOL)arg1;
- (void)setShowFPAN:(BOOL)arg1;
- (void)showActivitySpinner:(BOOL)arg1;
- (BOOL)showAddButton;
- (BOOL)showFPAN;
- (id)subTextLabel;
- (void)tintColorDidChange;

@end
