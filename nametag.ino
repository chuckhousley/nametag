#include <SoftwareSerial.h>

void generateName();
void printName();

SoftwareSerial lcd = SoftwareSerial(0,2);
int nameButton = 8;
int colorButton = 9;
int b = 0;

bool pressNameFlag = false;
bool pressColorFlag = false;

prog_char string_0[] PROGMEM = "Cabana";
prog_char string_1[] PROGMEM = "Cabaret";
prog_char string_2[] PROGMEM = "Cabbage";
prog_char string_3[] PROGMEM = "Cacophony";
prog_char string_4[] PROGMEM = "Cadaver";
prog_char string_5[] PROGMEM = "Cadence";
prog_char string_6[] PROGMEM = "Cadet";
prog_char string_7[] PROGMEM = "Cadmium";
prog_char string_8[] PROGMEM = "Cadre";
prog_char string_9[] PROGMEM = "Cafe";
prog_char string_10[] PROGMEM = "Cafeteria";
prog_char string_11[] PROGMEM = "Cage";
prog_char string_12[] PROGMEM = "Cake";
prog_char string_13[] PROGMEM = "Calcium";
prog_char string_14[] PROGMEM = "Calculator";
prog_char string_15[] PROGMEM = "Calendar";
prog_char string_16[] PROGMEM = "Calibre";
prog_char string_17[] PROGMEM = "Calico";
prog_char string_18[] PROGMEM = "Call";
prog_char string_19[] PROGMEM = "Calligraphy";
prog_char string_20[] PROGMEM = "Calorie";
prog_char string_21[] PROGMEM = "Calypso";
prog_char string_22[] PROGMEM = "Camel";
prog_char string_23[] PROGMEM = "Camera";
prog_char string_24[] PROGMEM = "Camouflage";
prog_char string_25[] PROGMEM = "Camp";
prog_char string_26[] PROGMEM = "Campaign";
prog_char string_27[] PROGMEM = "Camper";
prog_char string_28[] PROGMEM = "Campfire";
prog_char string_29[] PROGMEM = "Campground";
prog_char string_30[] PROGMEM = "Can";
prog_char string_31[] PROGMEM = "Cancer";
prog_char string_32[] PROGMEM = "Candidate";
prog_char string_33[] PROGMEM = "Candle";
prog_char string_34[] PROGMEM = "Candy";
prog_char string_35[] PROGMEM = "Cane";
prog_char string_36[] PROGMEM = "Canine";
prog_char string_37[] PROGMEM = "Canister";
prog_char string_38[] PROGMEM = "Cannery";
prog_char string_39[] PROGMEM = "Cannon";
prog_char string_40[] PROGMEM = "Cannonball";
prog_char string_41[] PROGMEM = "Canoe";
prog_char string_42[] PROGMEM = "Canopy";
prog_char string_43[] PROGMEM = "Cantaloupe";
prog_char string_44[] PROGMEM = "Canteen";
prog_char string_45[] PROGMEM = "Canyon";
prog_char string_46[] PROGMEM = "Cap";
prog_char string_47[] PROGMEM = "Capacitor";
prog_char string_48[] PROGMEM = "Cape";
prog_char string_49[] PROGMEM = "Caper";
prog_char string_50[] PROGMEM = "Capillary";
prog_char string_51[] PROGMEM = "Capita";
prog_char string_52[] PROGMEM = "Capital";
prog_char string_53[] PROGMEM = "Capitalism";
prog_char string_54[] PROGMEM = "Capitalist";
prog_char string_55[] PROGMEM = "Capitol";
prog_char string_56[] PROGMEM = "Capsicum";
prog_char string_57[] PROGMEM = "Capsule";
prog_char string_58[] PROGMEM = "Captain";
prog_char string_59[] PROGMEM = "Captive";
prog_char string_60[] PROGMEM = "Capture";
prog_char string_61[] PROGMEM = "Car";
prog_char string_62[] PROGMEM = "Caramel";
prog_char string_63[] PROGMEM = "Caravan";
prog_char string_64[] PROGMEM = "Carbide";
prog_char string_65[] PROGMEM = "Carbine";
prog_char string_66[] PROGMEM = "Carbohydrate";
prog_char string_67[] PROGMEM = "Carbon";
prog_char string_68[] PROGMEM = "Card";
prog_char string_69[] PROGMEM = "Cardboard";
prog_char string_70[] PROGMEM = "Cardinal";
prog_char string_71[] PROGMEM = "Career";
prog_char string_72[] PROGMEM = "Caretaker";
prog_char string_73[] PROGMEM = "Cargo";
prog_char string_74[] PROGMEM = "Caricature";
prog_char string_75[] PROGMEM = "Carnival";
prog_char string_76[] PROGMEM = "Carpenter";
prog_char string_77[] PROGMEM = "Carpet";
prog_char string_78[] PROGMEM = "Carport";
prog_char string_79[] PROGMEM = "Carriage";
prog_char string_80[] PROGMEM = "Carrier";
prog_char string_81[] PROGMEM = "Carrot";
prog_char string_82[] PROGMEM = "Cart";
prog_char string_83[] PROGMEM = "Cartilage";
prog_char string_84[] PROGMEM = "Cartoon";
prog_char string_85[] PROGMEM = "Cartoonist";
prog_char string_86[] PROGMEM = "Cartridge";
prog_char string_87[] PROGMEM = "Carver";
prog_char string_88[] PROGMEM = "Cash";
prog_char string_89[] PROGMEM = "Casino";
prog_char string_90[] PROGMEM = "Cask";
prog_char string_91[] PROGMEM = "Cast";
prog_char string_92[] PROGMEM = "Castle";
prog_char string_93[] PROGMEM = "Castor";
prog_char string_94[] PROGMEM = "Casualty";
prog_char string_95[] PROGMEM = "Cat";
prog_char string_96[] PROGMEM = "Catalog";
prog_char string_97[] PROGMEM = "Catalyst";
prog_char string_98[] PROGMEM = "Catastrophe";
prog_char string_99[] PROGMEM = "Catch";
prog_char string_100[] PROGMEM = "Cashmere";
prog_char string_101[] PROGMEM = "Category";
prog_char string_102[] PROGMEM = "Caterpillar";
prog_char string_103[] PROGMEM = "Cathedral";
prog_char string_104[] PROGMEM = "Cathode";
prog_char string_105[] PROGMEM = "Catsup";
prog_char string_106[] PROGMEM = "Cattle";
prog_char string_107[] PROGMEM = "Cauliflower";
prog_char string_108[] PROGMEM = "Cause";
prog_char string_109[] PROGMEM = "Caution";
prog_char string_110[] PROGMEM = "Cavalry";
prog_char string_111[] PROGMEM = "Cave";
prog_char string_112[] PROGMEM = "Caveat";
prog_char string_113[] PROGMEM = "Cavemen";
prog_char string_114[] PROGMEM = "Cavern";
prog_char string_115[] PROGMEM = "Caviar";
prog_char string_116[] PROGMEM = "Cavity";
prog_char string_117[] PROGMEM = "Cayenne";
prog_char string_118[] PROGMEM = "Ceiling";
prog_char string_119[] PROGMEM = "Celebrity";
prog_char string_120[] PROGMEM = "Celery";
prog_char string_121[] PROGMEM = "Cell";
prog_char string_122[] PROGMEM = "Cellar";
prog_char string_123[] PROGMEM = "Cello";
prog_char string_124[] PROGMEM = "Cellophane";
prog_char string_125[] PROGMEM = "Cellulose";
prog_char string_126[] PROGMEM = "Cement";
prog_char string_127[] PROGMEM = "Cemetery";
prog_char string_128[] PROGMEM = "Censure";
prog_char string_129[] PROGMEM = "Cent";
prog_char string_130[] PROGMEM = "Center";
prog_char string_131[] PROGMEM = "Centimeter";
prog_char string_132[] PROGMEM = "Centre";
prog_char string_133[] PROGMEM = "Centrifuge";
prog_char string_134[] PROGMEM = "Centrist";
prog_char string_135[] PROGMEM = "Centum";
prog_char string_136[] PROGMEM = "Century";
prog_char string_137[] PROGMEM = "Cereal";
prog_char string_138[] PROGMEM = "Cerebellum";
prog_char string_139[] PROGMEM = "Ceremony";
prog_char string_140[] PROGMEM = "Certificate";
prog_char string_141[] PROGMEM = "Chagrin";
prog_char string_142[] PROGMEM = "Chain";
prog_char string_143[] PROGMEM = "Chair";
prog_char string_144[] PROGMEM = "Chairman";
prog_char string_145[] PROGMEM = "Chaise";
prog_char string_146[] PROGMEM = "Chalk";
prog_char string_147[] PROGMEM = "Challenge";
prog_char string_148[] PROGMEM = "Challenger";
prog_char string_149[] PROGMEM = "Chamber";
prog_char string_150[] PROGMEM = "Champagne";
prog_char string_151[] PROGMEM = "Champion";
prog_char string_152[] PROGMEM = "Chance";
prog_char string_153[] PROGMEM = "Chancel";
prog_char string_154[] PROGMEM = "Chancellor";
prog_char string_155[] PROGMEM = "Chancery";
prog_char string_156[] PROGMEM = "Chandelier";
prog_char string_157[] PROGMEM = "Change";
prog_char string_158[] PROGMEM = "Channel";
prog_char string_159[] PROGMEM = "Chant";
prog_char string_160[] PROGMEM = "Chapel";
prog_char string_161[] PROGMEM = "Chaperone";
prog_char string_162[] PROGMEM = "Chaplain";
prog_char string_163[] PROGMEM = "Chapter";
prog_char string_164[] PROGMEM = "Character";
prog_char string_165[] PROGMEM = "Charcoal";
prog_char string_166[] PROGMEM = "Charge";
prog_char string_167[] PROGMEM = "Chariot";
prog_char string_168[] PROGMEM = "Charisma";
prog_char string_169[] PROGMEM = "Charity";
prog_char string_170[] PROGMEM = "Charm";
prog_char string_171[] PROGMEM = "Chart";
prog_char string_172[] PROGMEM = "Charter";
prog_char string_173[] PROGMEM = "Chase";
prog_char string_174[] PROGMEM = "Chat";
prog_char string_175[] PROGMEM = "Chatter";
prog_char string_176[] PROGMEM = "Chauffeur";
prog_char string_177[] PROGMEM = "Checkbook";
prog_char string_178[] PROGMEM = "Checker";
prog_char string_179[] PROGMEM = "Checklist";
prog_char string_180[] PROGMEM = "Checkup";
prog_char string_181[] PROGMEM = "Cheek";
prog_char string_182[] PROGMEM = "Cheekbone";
prog_char string_183[] PROGMEM = "Cheer";
prog_char string_184[] PROGMEM = "Cheese";
prog_char string_185[] PROGMEM = "Cheetah";
prog_char string_186[] PROGMEM = "Chef";
prog_char string_187[] PROGMEM = "Chemical";
prog_char string_188[] PROGMEM = "Chemistry";
prog_char string_189[] PROGMEM = "Cherry";
prog_char string_190[] PROGMEM = "Chestnut";
prog_char string_191[] PROGMEM = "Chicken";
prog_char string_192[] PROGMEM = "Chief";
prog_char string_193[] PROGMEM = "Chieftain";
prog_char string_194[] PROGMEM = "Child";
prog_char string_195[] PROGMEM = "Chili";
prog_char string_196[] PROGMEM = "Chimney";
prog_char string_197[] PROGMEM = "Chin";
prog_char string_198[] PROGMEM = "China";
prog_char string_199[] PROGMEM = "Chip";
prog_char string_200[] PROGMEM = "Chiropractor";
prog_char string_201[] PROGMEM = "Chirp";
prog_char string_202[] PROGMEM = "Chisel";
prog_char string_203[] PROGMEM = "Chivalry";
prog_char string_204[] PROGMEM = "Chlorine";
prog_char string_205[] PROGMEM = "Chocolate";
prog_char string_206[] PROGMEM = "Choice";
prog_char string_207[] PROGMEM = "Choir";
prog_char string_208[] PROGMEM = "Cholera";
prog_char string_209[] PROGMEM = "Cholesterol";
prog_char string_210[] PROGMEM = "Chomp";
prog_char string_211[] PROGMEM = "Chopper";
prog_char string_212[] PROGMEM = "Chord";
prog_char string_213[] PROGMEM = "Chore";
prog_char string_214[] PROGMEM = "Choreographer";
prog_char string_215[] PROGMEM = "Chow Chow";
prog_char string_216[] PROGMEM = "Chowder";
prog_char string_217[] PROGMEM = "Chrome";
prog_char string_218[] PROGMEM = "Chronicle";
prog_char string_219[] PROGMEM = "Chum";
prog_char string_220[] PROGMEM = "Chump";
prog_char string_221[] PROGMEM = "Church";
prog_char string_222[] PROGMEM = "Chute";
prog_char string_223[] PROGMEM = "Cider";
prog_char string_224[] PROGMEM = "Cinch";
prog_char string_225[] PROGMEM = "Cinder";
prog_char string_226[] PROGMEM = "Cinema";
prog_char string_227[] PROGMEM = "Circle";
prog_char string_228[] PROGMEM = "Circuit";
prog_char string_229[] PROGMEM = "Citizen";
prog_char string_230[] PROGMEM = "City";
prog_char string_231[] PROGMEM = "Civilian";
prog_char string_232[] PROGMEM = "Civilization";
prog_char string_233[] PROGMEM = "Claim";
prog_char string_234[] PROGMEM = "Clam";
prog_char string_235[] PROGMEM = "Clarinet";
prog_char string_236[] PROGMEM = "Clarity";
prog_char string_237[] PROGMEM = "Clash";
prog_char string_238[] PROGMEM = "Classic";
prog_char string_239[] PROGMEM = "Class";
prog_char string_240[] PROGMEM = "Clatter";
prog_char string_241[] PROGMEM = "Clause";
prog_char string_242[] PROGMEM = "Claustrophobia";
prog_char string_243[] PROGMEM = "Claw";
prog_char string_244[] PROGMEM = "Clay";
prog_char string_245[] PROGMEM = "Cleaner";
prog_char string_246[] PROGMEM = "Clearance";
prog_char string_247[] PROGMEM = "Cleat";
prog_char string_248[] PROGMEM = "Cleft";
prog_char string_249[] PROGMEM = "Cleric";
prog_char string_250[] PROGMEM = "Clerk";
prog_char string_251[] PROGMEM = "Cliche";
prog_char string_252[] PROGMEM = "Click";
prog_char string_253[] PROGMEM = "Client";
prog_char string_254[] PROGMEM = "Cliff";
prog_char string_255[] PROGMEM = "Climate";
prog_char string_256[] PROGMEM = "Climb";
prog_char string_257[] PROGMEM = "Clincher";
prog_char string_258[] PROGMEM = "Clinic";
prog_char string_259[] PROGMEM = "Clip";
prog_char string_260[] PROGMEM = "Clique";
prog_char string_261[] PROGMEM = "Cloak";
prog_char string_262[] PROGMEM = "Clock";
prog_char string_263[] PROGMEM = "Clockwork";
prog_char string_264[] PROGMEM = "Closet";
prog_char string_265[] PROGMEM = "Clot";
prog_char string_266[] PROGMEM = "Cloth";
prog_char string_267[] PROGMEM = "Clothesline";
prog_char string_268[] PROGMEM = "Cloud";
prog_char string_269[] PROGMEM = "Clove";
prog_char string_270[] PROGMEM = "Clover";
prog_char string_271[] PROGMEM = "Clown";
prog_char string_272[] PROGMEM = "Club";
prog_char string_273[] PROGMEM = "Clubhouse";
prog_char string_274[] PROGMEM = "Clue";
prog_char string_275[] PROGMEM = "Clump";
prog_char string_276[] PROGMEM = "Cluster";
prog_char string_277[] PROGMEM = "Clutch";
prog_char string_278[] PROGMEM = "Coach";
prog_char string_279[] PROGMEM = "Coal";
prog_char string_280[] PROGMEM = "Coalition";
prog_char string_281[] PROGMEM = "Coast";
prog_char string_282[] PROGMEM = "Coat";
prog_char string_283[] PROGMEM = "Cobalt";
prog_char string_284[] PROGMEM = "Cobblestone";
prog_char string_285[] PROGMEM = "Cobra";
prog_char string_286[] PROGMEM = "Cocaine";
prog_char string_287[] PROGMEM = "Coco Channel";
prog_char string_288[] PROGMEM = "Coco";
prog_char string_289[] PROGMEM = "Cocoa";
prog_char string_290[] PROGMEM = "Coconut";
prog_char string_291[] PROGMEM = "Cocoon";
prog_char string_292[] PROGMEM = "Cod";
prog_char string_293[] PROGMEM = "Code";
prog_char string_294[] PROGMEM = "Coefficient";
prog_char string_295[] PROGMEM = "Coffee";
prog_char string_296[] PROGMEM = "Coffin";
prog_char string_297[] PROGMEM = "Cognac";
prog_char string_298[] PROGMEM = "Coil";
prog_char string_299[] PROGMEM = "Coin";
prog_char string_300[] PROGMEM = "Coincidence";
prog_char string_301[] PROGMEM = "Coke";
prog_char string_302[] PROGMEM = "Cold";
prog_char string_303[] PROGMEM = "Collaborator";
prog_char string_304[] PROGMEM = "Collage";
prog_char string_305[] PROGMEM = "Collapse";
prog_char string_306[] PROGMEM = "Collar";
prog_char string_307[] PROGMEM = "Collarbone";
prog_char string_308[] PROGMEM = "Colleague";
prog_char string_309[] PROGMEM = "Collection";
prog_char string_310[] PROGMEM = "Collective";
prog_char string_311[] PROGMEM = "Collector";
prog_char string_312[] PROGMEM = "College";
prog_char string_313[] PROGMEM = "Collie";
prog_char string_314[] PROGMEM = "Collusion";
prog_char string_315[] PROGMEM = "Colon";
prog_char string_316[] PROGMEM = "Colonel";
prog_char string_317[] PROGMEM = "Colonialist";
prog_char string_318[] PROGMEM = "Colony";
prog_char string_319[] PROGMEM = "Color";
prog_char string_320[] PROGMEM = "Colt";
prog_char string_321[] PROGMEM = "Column";
prog_char string_322[] PROGMEM = "Columnist";
prog_char string_323[] PROGMEM = "Comb";
prog_char string_324[] PROGMEM = "Combat";
prog_char string_325[] PROGMEM = "Combatant";
prog_char string_326[] PROGMEM = "Combo";
prog_char string_327[] PROGMEM = "Combustion";
prog_char string_328[] PROGMEM = "Comedian";
prog_char string_329[] PROGMEM = "Comet";
prog_char string_330[] PROGMEM = "Comfort";
prog_char string_331[] PROGMEM = "Comic";
prog_char string_332[] PROGMEM = "Comma";
prog_char string_333[] PROGMEM = "Command";
prog_char string_334[] PROGMEM = "Commandant";
prog_char string_335[] PROGMEM = "Commander";
prog_char string_336[] PROGMEM = "Commando";
prog_char string_337[] PROGMEM = "Comment";
prog_char string_338[] PROGMEM = "Commentary";
prog_char string_339[] PROGMEM = "Commentator";
prog_char string_340[] PROGMEM = "Commerce";
prog_char string_341[] PROGMEM = "Commercial";
prog_char string_342[] PROGMEM = "Commercialism";
prog_char string_343[] PROGMEM = "Commissioner";
prog_char string_344[] PROGMEM = "Committee";
prog_char string_345[] PROGMEM = "Committeewoman";
prog_char string_346[] PROGMEM = "Commodity";
prog_char string_347[] PROGMEM = "Common";
prog_char string_348[] PROGMEM = "Commonwealth";
prog_char string_349[] PROGMEM = "Commotion";
prog_char string_350[] PROGMEM = "Communicator";
prog_char string_351[] PROGMEM = "Communion";
prog_char string_352[] PROGMEM = "Communist";
prog_char string_353[] PROGMEM = "Community";
prog_char string_354[] PROGMEM = "Commuter";
prog_char string_355[] PROGMEM = "Compact";
prog_char string_356[] PROGMEM = "Companion";
prog_char string_357[] PROGMEM = "Company";
prog_char string_358[] PROGMEM = "Compartment";
prog_char string_359[] PROGMEM = "Compassion";
prog_char string_360[] PROGMEM = "Compatriot";
prog_char string_361[] PROGMEM = "Compendium";
prog_char string_362[] PROGMEM = "Complaint";
prog_char string_363[] PROGMEM = "Complex";
prog_char string_364[] PROGMEM = "Compliance";
prog_char string_365[] PROGMEM = "Compliment";
prog_char string_366[] PROGMEM = "Component";
prog_char string_367[] PROGMEM = "Composer";
prog_char string_368[] PROGMEM = "Composition";
prog_char string_369[] PROGMEM = "Compost";
prog_char string_370[] PROGMEM = "Composure";
prog_char string_371[] PROGMEM = "Compound";
prog_char string_372[] PROGMEM = "Compression";
prog_char string_373[] PROGMEM = "Compressor";
prog_char string_374[] PROGMEM = "Compromise";
prog_char string_375[] PROGMEM = "Computer";
prog_char string_376[] PROGMEM = "Comrade";
prog_char string_377[] PROGMEM = "Concentrate";
prog_char string_378[] PROGMEM = "Concept";
prog_char string_379[] PROGMEM = "Concern";
prog_char string_380[] PROGMEM = "Concert";
prog_char string_381[] PROGMEM = "Concerto";
prog_char string_382[] PROGMEM = "Concierge";
prog_char string_383[] PROGMEM = "Conclusion";
prog_char string_384[] PROGMEM = "Concrete";
prog_char string_385[] PROGMEM = "Concussion";
prog_char string_386[] PROGMEM = "Condenser";
prog_char string_387[] PROGMEM = "Condition";
prog_char string_388[] PROGMEM = "Conditioner";
prog_char string_389[] PROGMEM = "Conductor";
prog_char string_390[] PROGMEM = "Cone";
prog_char string_391[] PROGMEM = "Conference";
prog_char string_392[] PROGMEM = "Conflict";
prog_char string_393[] PROGMEM = "Conformist";
prog_char string_394[] PROGMEM = "Confusion";
prog_char string_395[] PROGMEM = "Congresswoman";
prog_char string_396[] PROGMEM = "Connection";
prog_char string_397[] PROGMEM = "Conniver";
prog_char string_398[] PROGMEM = "Connoisseur";
prog_char string_399[] PROGMEM = "Conqueror";
prog_char string_400[] PROGMEM = "Conquest";
prog_char string_401[] PROGMEM = "Conscience";
prog_char string_402[] PROGMEM = "Conscript";
prog_char string_403[] PROGMEM = "Consequence";
prog_char string_404[] PROGMEM = "Conservationist";
prog_char string_405[] PROGMEM = "Conservative";
prog_char string_406[] PROGMEM = "Conservatory";
prog_char string_407[] PROGMEM = "Consonant";
prog_char string_408[] PROGMEM = "Conspiracy";
prog_char string_409[] PROGMEM = "Constant";
prog_char string_410[] PROGMEM = "Constitution";
prog_char string_411[] PROGMEM = "Constraint";
prog_char string_412[] PROGMEM = "Constrictor";
prog_char string_413[] PROGMEM = "Consultant";
prog_char string_414[] PROGMEM = "Consumer";
prog_char string_415[] PROGMEM = "Contact";
prog_char string_416[] PROGMEM = "Contagion";
prog_char string_417[] PROGMEM = "Container";
prog_char string_418[] PROGMEM = "Contemporary";
prog_char string_419[] PROGMEM = "Contempt";
prog_char string_420[] PROGMEM = "Contender";
prog_char string_421[] PROGMEM = "Contest";
prog_char string_422[] PROGMEM = "Context";
prog_char string_423[] PROGMEM = "Continence";
prog_char string_424[] PROGMEM = "Continent";
prog_char string_425[] PROGMEM = "Continuum";
prog_char string_426[] PROGMEM = "Contortionist";
prog_char string_427[] PROGMEM = "Contour";
prog_char string_428[] PROGMEM = "Contraband";
prog_char string_429[] PROGMEM = "Contract";
prog_char string_430[] PROGMEM = "Contractor";
prog_char string_431[] PROGMEM = "Contrary";
prog_char string_432[] PROGMEM = "Contrast";
prog_char string_433[] PROGMEM = "Contributor";
prog_char string_434[] PROGMEM = "Control";
prog_char string_435[] PROGMEM = "Controller";
prog_char string_436[] PROGMEM = "Controversy";
prog_char string_437[] PROGMEM = "Convenience";
prog_char string_438[] PROGMEM = "Convent";
prog_char string_439[] PROGMEM = "Convention";
prog_char string_440[] PROGMEM = "Converse";
prog_char string_441[] PROGMEM = "Convert";
prog_char string_442[] PROGMEM = "Convertible";
prog_char string_443[] PROGMEM = "Convict";
prog_char string_444[] PROGMEM = "Convoy";
prog_char string_445[] PROGMEM = "Cook";
prog_char string_446[] PROGMEM = "Cookie";
prog_char string_447[] PROGMEM = "Coolant";
prog_char string_448[] PROGMEM = "Cooler";
prog_char string_449[] PROGMEM = "Coop";
prog_char string_450[] PROGMEM = "Coordinate";
prog_char string_451[] PROGMEM = "Cop";
prog_char string_452[] PROGMEM = "Copper";
prog_char string_453[] PROGMEM = "Copy";
prog_char string_454[] PROGMEM = "Copywriter";
prog_char string_455[] PROGMEM = "Coquette";
prog_char string_456[] PROGMEM = "Coral";
prog_char string_457[] PROGMEM = "Cord";
prog_char string_458[] PROGMEM = "Cordon";
prog_char string_459[] PROGMEM = "Corduroy";
prog_char string_460[] PROGMEM = "Core";
prog_char string_461[] PROGMEM = "Coriander";
prog_char string_462[] PROGMEM = "Cork";
prog_char string_463[] PROGMEM = "Corkscrew";
prog_char string_464[] PROGMEM = "Corn";
prog_char string_465[] PROGMEM = "Cornbread";
prog_char string_466[] PROGMEM = "Corner";
prog_char string_467[] PROGMEM = "Cornerstone";
prog_char string_468[] PROGMEM = "Cornfield";
prog_char string_469[] PROGMEM = "Cornmeal";
prog_char string_470[] PROGMEM = "Cornstarch";
prog_char string_471[] PROGMEM = "Cornucopia";
prog_char string_472[] PROGMEM = "Corollary";
prog_char string_473[] PROGMEM = "Corona";
prog_char string_474[] PROGMEM = "Coronary";
prog_char string_475[] PROGMEM = "Coroner";
prog_char string_476[] PROGMEM = "Corporal";
prog_char string_477[] PROGMEM = "Corporation";
prog_char string_478[] PROGMEM = "Corpse";
prog_char string_479[] PROGMEM = "Corpulence";
prog_char string_480[] PROGMEM = "Corral";
prog_char string_481[] PROGMEM = "Correspondent";
prog_char string_482[] PROGMEM = "Corridor";
prog_char string_483[] PROGMEM = "Corsage";
prog_char string_484[] PROGMEM = "Cosmetic";
prog_char string_485[] PROGMEM = "Costume";
prog_char string_486[] PROGMEM = "Cottage";
prog_char string_487[] PROGMEM = "Cotton";
prog_char string_488[] PROGMEM = "Cottonmouth";
prog_char string_489[] PROGMEM = "Cottonseed";
prog_char string_490[] PROGMEM = "Couch";
prog_char string_491[] PROGMEM = "Cough";
prog_char string_492[] PROGMEM = "Council";
prog_char string_493[] PROGMEM = "Counselor";
prog_char string_494[] PROGMEM = "Count";
prog_char string_495[] PROGMEM = "Counter";
prog_char string_496[] PROGMEM = "Counterattack";
prog_char string_497[] PROGMEM = "Counterbalance";
prog_char string_498[] PROGMEM = "Countryside";
prog_char string_499[] PROGMEM = "County";
prog_char string_500[] PROGMEM = "Coup de Grace";
prog_char string_501[] PROGMEM = "Coupon";
prog_char string_502[] PROGMEM = "Courage";
prog_char string_503[] PROGMEM = "Course";
prog_char string_504[] PROGMEM = "Court";
prog_char string_505[] PROGMEM = "Courtesy";
prog_char string_506[] PROGMEM = "Courthouse";
prog_char string_507[] PROGMEM = "Courtier";
prog_char string_508[] PROGMEM = "Courtroom";
prog_char string_509[] PROGMEM = "Courtyard";
prog_char string_510[] PROGMEM = "Cousin";
prog_char string_511[] PROGMEM = "Cove";
prog_char string_512[] PROGMEM = "Covenant";
prog_char string_513[] PROGMEM = "Cover";
prog_char string_514[] PROGMEM = "Coverage";
prog_char string_515[] PROGMEM = "Coward";
prog_char string_516[] PROGMEM = "Coyote";
prog_char string_517[] PROGMEM = "Crabapple";
prog_char string_518[] PROGMEM = "Crack";
prog_char string_519[] PROGMEM = "Crackle";
prog_char string_520[] PROGMEM = "Cradle";
prog_char string_521[] PROGMEM = "Craft";
prog_char string_522[] PROGMEM = "Crap";
prog_char string_523[] PROGMEM = "Crash";
prog_char string_524[] PROGMEM = "Crate";
prog_char string_525[] PROGMEM = "Crater";
prog_char string_526[] PROGMEM = "Crawl";
prog_char string_527[] PROGMEM = "Crawlspace";
prog_char string_528[] PROGMEM = "Craze";
prog_char string_529[] PROGMEM = "Creak";
prog_char string_530[] PROGMEM = "Cream";
prog_char string_531[] PROGMEM = "Creamer";
prog_char string_532[] PROGMEM = "Crease";
prog_char string_533[] PROGMEM = "Creator";
prog_char string_534[] PROGMEM = "Creature";
prog_char string_535[] PROGMEM = "Credit";
prog_char string_536[] PROGMEM = "Creed";
prog_char string_537[] PROGMEM = "Creek";
prog_char string_538[] PROGMEM = "Creep";
prog_char string_539[] PROGMEM = "Creeper";
prog_char string_540[] PROGMEM = "Crepe";
prog_char string_541[] PROGMEM = "Crescendo";
prog_char string_542[] PROGMEM = "Crescent";
prog_char string_543[] PROGMEM = "Crest";
prog_char string_544[] PROGMEM = "Crevice";
prog_char string_545[] PROGMEM = "Crew";
prog_char string_546[] PROGMEM = "Cricket";
prog_char string_547[] PROGMEM = "Crime";
prog_char string_548[] PROGMEM = "Criminal";
prog_char string_549[] PROGMEM = "Crimson";
prog_char string_550[] PROGMEM = "Crisp";
prog_char string_551[] PROGMEM = "Criteria";
prog_char string_552[] PROGMEM = "Critic";
prog_char string_553[] PROGMEM = "Critter";
prog_char string_554[] PROGMEM = "Crocodile";
prog_char string_555[] PROGMEM = "Crook";
prog_char string_556[] PROGMEM = "Crop";
prog_char string_557[] PROGMEM = "Crosswalk";
prog_char string_558[] PROGMEM = "Crouch";
prog_char string_559[] PROGMEM = "Croupier";
prog_char string_560[] PROGMEM = "Crow";
prog_char string_561[] PROGMEM = "Crowd";
prog_char string_562[] PROGMEM = "Crown";
prog_char string_563[] PROGMEM = "Cruise";
prog_char string_564[] PROGMEM = "Cruiser";
prog_char string_565[] PROGMEM = "Crunch";
prog_char string_566[] PROGMEM = "Crusader";
prog_char string_567[] PROGMEM = "Crush";
prog_char string_568[] PROGMEM = "Crusher";
prog_char string_569[] PROGMEM = "Crust";
prog_char string_570[] PROGMEM = "Crutch";
prog_char string_571[] PROGMEM = "Crux";
prog_char string_572[] PROGMEM = "Crypt";
prog_char string_573[] PROGMEM = "Crystal";
prog_char string_574[] PROGMEM = "Cubbyhole";
prog_char string_575[] PROGMEM = "Cube";
prog_char string_576[] PROGMEM = "Cuff";
prog_char string_577[] PROGMEM = "Culprit";
prog_char string_578[] PROGMEM = "Cultist";
prog_char string_579[] PROGMEM = "Culture";
prog_char string_580[] PROGMEM = "Cup";
prog_char string_581[] PROGMEM = "Cupboard";
prog_char string_582[] PROGMEM = "Curator";
prog_char string_583[] PROGMEM = "Curb";
prog_char string_584[] PROGMEM = "Curd";
prog_char string_585[] PROGMEM = "Cure";
prog_char string_586[] PROGMEM = "Currant";
prog_char string_587[] PROGMEM = "Currency";
prog_char string_588[] PROGMEM = "Current";
prog_char string_589[] PROGMEM = "Curriculum";
prog_char string_590[] PROGMEM = "Curry";
prog_char string_591[] PROGMEM = "Curse";
prog_char string_592[] PROGMEM = "Curtain";
prog_char string_593[] PROGMEM = "Custodian";
prog_char string_594[] PROGMEM = "Custom";
prog_char string_595[] PROGMEM = "Customer";
prog_char string_596[] PROGMEM = "Cutthroat";
prog_char string_597[] PROGMEM = "Cheddar";
prog_char string_598[] PROGMEM = "Connie";
prog_char string_599[] PROGMEM = "Czech Republic";
prog_char string_600[] PROGMEM = "Carrie Kelley";

PROGMEM const char *string_table[] = {
string_0, string_1, string_2, string_3, string_4, string_5, string_6, 
string_7, string_8, string_9, string_10, string_11, string_12, string_13, 
string_14, string_15, string_16, string_17, string_18, string_19, string_20, 
string_21, string_22, string_23, string_24, string_25, string_26, string_27, 
string_28, string_29, string_30, string_31, string_32, string_33, string_34, 
string_35, string_36, string_37, string_38, string_39, string_40, string_41, 
string_42, string_43, string_44, string_45, string_46, string_47, string_48, 
string_49, string_50, string_51, string_52, string_53, string_54, string_55, 
string_56, string_57, string_58, string_59, string_60, string_61, string_62, 
string_63, string_64, string_65, string_66, string_67, string_68, string_69, 
string_70, string_71, string_72, string_73, string_74, string_75, string_76, 
string_77, string_78, string_79, string_80, string_81, string_82, string_83, 
string_84, string_85, string_86, string_87, string_88, string_89, string_90, 
string_91, string_92, string_93, string_94, string_95, string_96, string_97, 
string_98, string_99, string_100, string_101, string_102, string_103, string_104, 
string_105, string_106, string_107, string_108, string_109, string_110, string_111, 
string_112, string_113, string_114, string_115, string_116, string_117, string_118, 
string_119, string_120, string_121, string_122, string_123, string_124, string_125, 
string_126, string_127, string_128, string_129, string_130, string_131, string_132, 
string_133, string_134, string_135, string_136, string_137, string_138, string_139, 
string_140, string_141, string_142, string_143, string_144, string_145, string_146, 
string_147, string_148, string_149, string_150, string_151, string_152, string_153, 
string_154, string_155, string_156, string_157, string_158, string_159, string_160, 
string_161, string_162, string_163, string_164, string_165, string_166, string_167, 
string_168, string_169, string_170, string_171, string_172, string_173, string_174, 
string_175, string_176, string_177, string_178, string_179, string_180, string_181, 
string_182, string_183, string_184, string_185, string_186, string_187, string_188, 
string_189, string_190, string_191, string_192, string_193, string_194, string_195, 
string_196, string_197, string_198, string_199, string_200, string_201, string_202, 
string_203, string_204, string_205, string_206, string_207, string_208, string_209, 
string_210, string_211, string_212, string_213, string_214, string_215, string_216, 
string_217, string_218, string_219, string_220, string_221, string_222, string_223, 
string_224, string_225, string_226, string_227, string_228, string_229, string_230, 
string_231, string_232, string_233, string_234, string_235, string_236, string_237, 
string_238, string_239, string_240, string_241, string_242, string_243, string_244, 
string_245, string_246, string_247, string_248, string_249, string_250, string_251, 
string_252, string_253, string_254, string_255, string_256, string_257, string_258, 
string_259, string_260, string_261, string_262, string_263, string_264, string_265, 
string_266, string_267, string_268, string_269, string_270, string_271, string_272, 
string_273, string_274, string_275, string_276, string_277, string_278, string_279, 
string_280, string_281, string_282, string_283, string_284, string_285, string_286, 
string_287, string_288, string_289, string_290, string_291, string_292, string_293, 
string_294, string_295, string_296, string_297, string_298, string_299, string_300, 
string_301, string_302, string_303, string_304, string_305, string_306, string_307, 
string_308, string_309, string_310, string_311, string_312, string_313, string_314, 
string_315, string_316, string_317, string_318, string_319, string_320, string_321, 
string_322, string_323, string_324, string_325, string_326, string_327, string_328, 
string_329, string_330, string_331, string_332, string_333, string_334, string_335, 
string_336, string_337, string_338, string_339, string_340, string_341, string_342, 
string_343, string_344, string_345, string_346, string_347, string_348, string_349, 
string_350, string_351, string_352, string_353, string_354, string_355, string_356, 
string_357, string_358, string_359, string_360, string_361, string_362, string_363, 
string_364, string_365, string_366, string_367, string_368, string_369, string_370, 
string_371, string_372, string_373, string_374, string_375, string_376, string_377, 
string_378, string_379, string_380, string_381, string_382, string_383, string_384, 
string_385, string_386, string_387, string_388, string_389, string_390, string_391, 
string_392, string_393, string_394, string_395, string_396, string_397, string_398, 
string_399, string_400, string_401, string_402, string_403, string_404, string_405, 
string_406, string_407, string_408, string_409, string_410, string_411, string_412, 
string_413, string_414, string_415, string_416, string_417, string_418, string_419, 
string_420, string_421, string_422, string_423, string_424, string_425, string_426, 
string_427, string_428, string_429, string_430, string_431, string_432, string_433, 
string_434, string_435, string_436, string_437, string_438, string_439, string_440, 
string_441, string_442, string_443, string_444, string_445, string_446, string_447, 
string_448, string_449, string_450, string_451, string_452, string_453, string_454, 
string_455, string_456, string_457, string_458, string_459, string_460, string_461, 
string_462, string_463, string_464, string_465, string_466, string_467, string_468, 
string_469, string_470, string_471, string_472, string_473, string_474, string_475, 
string_476, string_477, string_478, string_479, string_480, string_481, string_482, 
string_483, string_484, string_485, string_486, string_487, string_488, string_489, 
string_490, string_491, string_492, string_493, string_494, string_495, string_496, 
string_497, string_498, string_499, string_500, string_501, string_502, string_503, 
string_504, string_505, string_506, string_507, string_508, string_509, string_510, 
string_511, string_512, string_513, string_514, string_515, string_516, string_517, 
string_518, string_519, string_520, string_521, string_522, string_523, string_524, 
string_525, string_526, string_527, string_528, string_529, string_530, string_531, 
string_532, string_533, string_534, string_535, string_536, string_537, string_538, 
string_539, string_540, string_541, string_542, string_543, string_544, string_545, 
string_546, string_547, string_548, string_549, string_550, string_551, string_552, 
string_553, string_554, string_555, string_556, string_557, string_558, string_559, 
string_560, string_561, string_562, string_563, string_564, string_565, string_566, 
string_567, string_568, string_569, string_570, string_571, string_572, string_573, 
string_574, string_575, string_576, string_577, string_578, string_579, string_580, 
string_581, string_582, string_583, string_584, string_585, string_586, string_587, 
string_588, string_589, string_590, string_591, string_592, string_593, string_594, 
string_595, string_596, string_597, string_598, string_599, string_600, };

char buffer[16];

int numOfNames = 601;

void setup() {
  lcd.begin(9600);
  randomSeed(analogRead(0));
  
  // set the size of the display if it isn't 16x2 (you only have to do this once)
  lcd.write(0xFE);
  lcd.write(0xD1);
  lcd.write(16);  // 16 columns
  lcd.write(2);   // 2 rows
  delay(10);       
  // we suggest putting delays after each command to make sure the data 
  // is sent and the LCD is updated.

  // set the contrast, 200 is a good place to start, adjust as desired
  lcd.write(0xFE);
  lcd.write(0x50);
  lcd.write(200);
  delay(10);       
  
  // set the brightness - we'll max it (255 is max brightness)
  lcd.write(0xFE);
  lcd.write(0x99);
  lcd.write(255);
  delay(10);       
  
  // turn off cursors
  lcd.write(0xFE);
  lcd.write(0x4B);
  lcd.write(0xFE);
  lcd.write(0x54);
  
  // clear screen
  lcd.write(0xFE);
  lcd.write(0x58);
  delay(10);   // we suggest putting delays after each command 
  
  // go 'home'
  lcd.write(0xFE);
  lcd.write(0x48);
  delay(10);   // we suggest putting delays after each command 
  

  pinMode(nameButton, INPUT_PULLUP);
  pinMode(colorButton, INPUT_PULLUP);
  
  delay(1000);
}

void loop() {
 printName();
}

void printName() {
  if (digitalRead(nameButton) == LOW && pressNameFlag == false) {
   pressNameFlag = true;
   lcd.write(0xFE);
   lcd.write(0x58);
   lcd.println("  My name is :");
   delay(10);
   
   int n = random(numOfNames);
   strcpy_P(buffer, (char*)pgm_read_word(&(string_table[n])));
   for (int i = 0; i < 16; i++) {
     if (buffer[i] == '\0') {
       int j = i - 1;
       int k = 15 - j;
       for (int l = 0; l < k /2; l++) {
         lcd.print(" ");
       }
       break;
     }
   }
   lcd.print(buffer);
   delay(10);
 }
 
 if (digitalRead(colorButton) == LOW && pressColorFlag == false) {
    pressColorFlag = true;
    lcd.write(0xFE);
    lcd.write(0xD0);
    int choice = random(7);
    if (choice == 1) {
      lcd.write(random(256));
      lcd.write(random(256));
      lcd.write((uint8_t)0);
    } else if (choice == 2) {
      lcd.write(random(256));
      lcd.write((uint8_t)0);
      lcd.write(random(256));
    } else if (choice == 3) {
      lcd.write((uint8_t)0);
      lcd.write(random(256));
      lcd.write(random(256));
    } else if (choice == 4) {
      lcd.write((uint8_t)0);
      lcd.write(random(256));
      lcd.write((uint8_t)0);
    } else if (choice == 5) {
      lcd.write(random(256));
      lcd.write((uint8_t)0);
      lcd.write((uint8_t)0);
    } else if (choice == 6) {
      lcd.write((uint8_t)0);
      lcd.write((uint8_t)0);
      lcd.write(random(256));
    } else {
      lcd.write(random(256));
      lcd.write(random(256));
      lcd.write(random(256));
    }
    delay(10);
 }
 
 if (digitalRead(nameButton) == HIGH && pressNameFlag == true) {
   pressNameFlag = false;
   delay(10);
 }
 
 if (digitalRead(colorButton) == HIGH && pressColorFlag == true) {
    pressColorFlag = false;
    delay(10);
 }
 
}
