#include "Blocks.h"

namespace Block
{
	enum Type Type(short ID)
	{
		switch (ID)
		{
			case 6443:case 6447:case 6451:case 6455:case 6459:case 6463:case 6444:case 6448:case 6452:case 6456:case 6460:case 6464:case 6445:case 6449:case 6453:case 6457:case 6461:case 6465:case 6442:case 6446:case 6450:case 6454:case 6458:case 6462: return Type::AcaciaButton;
			case 8955:case 8987:case 8956:case 8988:case 8957:case 8989:case 8958:case 8990:case 8959:case 8991:case 8960:case 8992:case 8961:case 8930:case 8962:case 8931:case 8963:case 8932:case 8964:case 8933:case 8965:case 8934:case 8966:case 8935:case 8967:case 8936:case 8968:case 8937:case 8969:case 8938:case 8970:case 8939:case 8971:case 8940:case 8972:case 8941:case 8973:case 8942:case 8974:case 8943:case 8975:case 8944:case 8976:case 8945:case 8977:case 8946:case 8978:case 8947:case 8979:case 8948:case 8980:case 8949:case 8981:case 8950:case 8982:case 8951:case 8983:case 8952:case 8984:case 8953:case 8985:case 8954:case 8986:case 8993: return Type::AcaciaDoor;
			case 8677:case 8685:case 8693:case 8701:case 8678:case 8686:case 8694:case 8702:case 8679:case 8687:case 8695:case 8703:case 8680:case 8688:case 8696:case 8704:case 8681:case 8689:case 8697:case 8674:case 8682:case 8690:case 8698:case 8675:case 8683:case 8691:case 8699:case 8676:case 8684:case 8692:case 8700:case 8705: return Type::AcaciaFence;
			case 8522:case 8530:case 8538:case 8515:case 8523:case 8531:case 8539:case 8516:case 8524:case 8532:case 8540:case 8517:case 8525:case 8533:case 8541:case 8518:case 8526:case 8534:case 8542:case 8519:case 8527:case 8535:case 8543:case 8520:case 8528:case 8536:case 8544:case 8521:case 8529:case 8537:case 8514:case 8545: return Type::AcaciaFenceGate;
			case 213:case 206:case 214:case 207:case 208:case 201:case 209:case 202:case 210:case 203:case 211:case 204:case 212:case 205: return Type::AcaciaLeaves;
			case 85:case 86:case 87: return Type::AcaciaLog;
			case 19: return Type::AcaciaPlanks;
			case 3881:case 3882: return Type::AcaciaPressurePlate;
			case 29:case 30: return Type::AcaciaSapling;
			case 3483:case 3485:case 3487:case 3489:case 3491:case 3493:case 3495:case 3497:case 3499:case 3501:case 3503:case 3505:case 3507:case 3478:case 3480:case 3482:case 3484:case 3486:case 3488:case 3490:case 3492:case 3494:case 3496:case 3498:case 3500:case 3502:case 3504:case 3506:case 3477:case 3479:case 3481:case 3508: return Type::AcaciaSign;
			case 8325:case 8329:case 8326:case 8327:case 8324:case 8328: return Type::AcaciaSlab;
			case 7425:case 7426:case 7427:case 7428:case 7429:case 7430:case 7431:case 7432:case 7433:case 7434:case 7435:case 7436:case 7437:case 7438:case 7375:case 7439:case 7376:case 7440:case 7377:case 7441:case 7378:case 7442:case 7379:case 7443:case 7380:case 7444:case 7381:case 7445:case 7382:case 7446:case 7383:case 7447:case 7384:case 7448:case 7385:case 7449:case 7386:case 7450:case 7387:case 7451:case 7388:case 7452:case 7389:case 7453:case 7390:case 7454:case 7391:case 7392:case 7393:case 7394:case 7395:case 7396:case 7397:case 7398:case 7399:case 7400:case 7401:case 7402:case 7403:case 7404:case 7405:case 7406:case 7407:case 7408:case 7409:case 7410:case 7411:case 7412:case 7413:case 7414:case 7415:case 7416:case 7417:case 7418:case 7419:case 7420:case 7421:case 7422:case 7423:case 7424: return Type::AcaciaStairs;
			case 4384:case 4400:case 4416:case 4369:case 4385:case 4401:case 4417:case 4370:case 4386:case 4402:case 4418:case 4371:case 4387:case 4403:case 4419:case 4372:case 4388:case 4404:case 4420:case 4373:case 4389:case 4405:case 4421:case 4374:case 4390:case 4406:case 4422:case 4375:case 4391:case 4407:case 4423:case 4376:case 4392:case 4408:case 4424:case 4377:case 4393:case 4409:case 4425:case 4378:case 4394:case 4410:case 4426:case 4379:case 4395:case 4411:case 4427:case 4380:case 4396:case 4412:case 4428:case 4381:case 4397:case 4413:case 4429:case 4382:case 4398:case 4414:case 4367:case 4383:case 4399:case 4415:case 4368:case 4430: return Type::AcaciaTrapdoor;
			case 3764:case 3765:case 3759:case 3760:case 3761:case 3762:case 3763:case 3766: return Type::AcaciaWallSign;
			case 121:case 122:case 123: return Type::AcaciaWood;
			case 6826:case 6827:case 6828:case 6829:case 6830:case 6831:case 6832:case 6833:case 6834:case 6823:case 6824:case 6825: return Type::ActivatorRail;
			case -0: return Type::Air;
			case 1415: return Type::Allium;
			case 15827: return Type::AncientDebris;
			case 6: return Type::Andesite;
			case 10845:case 10846:case 10843:case 10847:case 10844:case 10848: return Type::AndesiteSlab;
			case 10469:case 10470:case 10471:case 10472:case 10473:case 10474:case 10475:case 10476:case 10477:case 10478:case 10479:case 10480:case 10481:case 10482:case 10483:case 10484:case 10485:case 10486:case 10487:case 10488:case 10489:case 10490:case 10491:case 10492:case 10493:case 10494:case 10495:case 10496:case 10497:case 10498:case 10499:case 10500:case 10501:case 10502:case 10503:case 10504:case 10505:case 10506:case 10507:case 10508:case 10509:case 10510:case 10511:case 10512:case 10513:case 10514:case 10515:case 10516:case 10517:case 10518:case 10519:case 10520:case 10521:case 10522:case 10523:case 10524:case 10525:case 10526:case 10527:case 10528:case 10529:case 10530:case 10531:case 10532:case 10533:case 10534:case 10535:case 10536:case 10537:case 10538:case 10539:case 10540:case 10541:case 10542:case 10543:case 10544:case 10545:case 10546:case 10547:case 10548: return Type::AndesiteStairs;
			case 13138:case 13142:case 13146:case 13150:case 13154:case 13158:case 13162:case 13166:case 13170:case 13174:case 13178:case 13182:case 13186:case 13190:case 13194:case 13198:case 13202:case 13206:case 13210:case 13214:case 13218:case 13222:case 13226:case 13230:case 13234:case 13238:case 13242:case 13246:case 13250:case 13254:case 13258:case 13262:case 13266:case 13270:case 13274:case 13278:case 13282:case 13286:case 13290:case 13294:case 13298:case 13302:case 13306:case 13310:case 13314:case 13318:case 13322:case 13326:case 13330:case 13334:case 13338:case 13342:case 13346:case 13350:case 13354:case 13358:case 13362:case 13366:case 13370:case 13374:case 13378:case 13382:case 13386:case 13390:case 13394:case 13398:case 13402:case 13406:case 13410:case 13414:case 13418:case 13422:case 13426:case 13430:case 13434:case 13438:case 13442:case 13446:case 13450:case 13454:case 13458:case 13135:case 13139:case 13143:case 13147:case 13151:case 13155:case 13159:case 13163:case 13167:case 13171:case 13175:case 13179:case 13183:case 13187:case 13191:case 13195:case 13199:case 13203:case 13207:case 13211:case 13215:case 13219:case 13223:case 13227:case 13231:case 13235:case 13239:case 13243:case 13247:case 13251:case 13255:case 13259:case 13263:case 13267:case 13271:case 13275:case 13279:case 13283:case 13287:case 13291:case 13295:case 13299:case 13303:case 13307:case 13311:case 13315:case 13319:case 13323:case 13327:case 13331:case 13335:case 13339:case 13343:case 13347:case 13351:case 13355:case 13359:case 13363:case 13367:case 13371:case 13375:case 13379:case 13383:case 13387:case 13391:case 13395:case 13399:case 13403:case 13407:case 13411:case 13415:case 13419:case 13423:case 13427:case 13431:case 13435:case 13439:case 13443:case 13447:case 13451:case 13455:case 13136:case 13140:case 13144:case 13148:case 13152:case 13156:case 13160:case 13164:case 13168:case 13172:case 13176:case 13180:case 13184:case 13188:case 13192:case 13196:case 13200:case 13204:case 13208:case 13212:case 13216:case 13220:case 13224:case 13228:case 13232:case 13236:case 13240:case 13244:case 13248:case 13252:case 13256:case 13260:case 13264:case 13268:case 13272:case 13276:case 13280:case 13284:case 13288:case 13292:case 13296:case 13300:case 13304:case 13308:case 13312:case 13316:case 13320:case 13324:case 13328:case 13332:case 13336:case 13340:case 13344:case 13348:case 13352:case 13356:case 13360:case 13364:case 13368:case 13372:case 13376:case 13380:case 13384:case 13388:case 13392:case 13396:case 13400:case 13404:case 13408:case 13412:case 13416:case 13420:case 13424:case 13428:case 13432:case 13436:case 13440:case 13444:case 13448:case 13452:case 13456:case 13137:case 13141:case 13145:case 13149:case 13153:case 13157:case 13161:case 13165:case 13169:case 13173:case 13177:case 13181:case 13185:case 13189:case 13193:case 13197:case 13201:case 13205:case 13209:case 13213:case 13217:case 13221:case 13225:case 13229:case 13233:case 13237:case 13241:case 13245:case 13249:case 13253:case 13257:case 13261:case 13265:case 13269:case 13273:case 13277:case 13281:case 13285:case 13289:case 13293:case 13297:case 13301:case 13305:case 13309:case 13313:case 13317:case 13321:case 13325:case 13329:case 13333:case 13337:case 13341:case 13345:case 13349:case 13353:case 13357:case 13361:case 13365:case 13369:case 13373:case 13377:case 13381:case 13385:case 13389:case 13393:case 13397:case 13401:case 13405:case 13409:case 13413:case 13417:case 13421:case 13425:case 13429:case 13433:case 13437:case 13441:case 13445:case 13449:case 13453:case 13457: return Type::AndesiteWall;
			case 6610:case 6611:case 6612:case 6613: return Type::Anvil;
			case 4768:case 4769:case 4770:case 4771: return Type::AttachedMelonStem;
			case 4765:case 4766:case 4764:case 4767: return Type::AttachedPumpkinStem;
			case 1416: return Type::AzureBluet;
			case 9660:case 9662:case 9653:case 9655:case 9657:case 9659:case 9661:case 9663:case 9652:case 9654:case 9656:case 9658: return Type::Bamboo;
			case 9651: return Type::BambooSapling;
			case 14792:case 14794:case 14796:case 14798:case 14800:case 14802:case 14791:case 14793:case 14795:case 14797:case 14799:case 14801: return Type::Barrel;
			case 7536: return Type::Barrier;
			case 4003:case 4002:case 4004: return Type::Basalt;
			case 5656: return Type::Beacon;
			case 33: return Type::Bedrock;
			case 15776:case 15784:case 15792:case 15777:case 15785:case 15793:case 15778:case 15786:case 15794:case 15779:case 15787:case 15795:case 15780:case 15788:case 15796:case 15781:case 15789:case 15797:case 15782:case 15790:case 15798:case 15783:case 15791:case 15799: return Type::BeeNest;
			case 15807:case 15815:case 15823:case 15800:case 15808:case 15816:case 15801:case 15809:case 15817:case 15802:case 15810:case 15818:case 15803:case 15811:case 15819:case 15804:case 15812:case 15820:case 15805:case 15813:case 15821:case 15806:case 15814:case 15822: return Type::Beehive;
			case 9219:case 9221:case 9220:case 9222: return Type::Beetroots;
			case 14877:case 14854:case 14862:case 14870:case 14878:case 14855:case 14863:case 14871:case 14879:case 14856:case 14864:case 14872:case 14880:case 14857:case 14865:case 14873:case 14881:case 14858:case 14866:case 14874:case 14882:case 14859:case 14867:case 14875:case 14883:case 14860:case 14868:case 14876:case 14884:case 14861:case 14869:case 14885: return Type::Bell;
			case 6404:case 6408:case 6412:case 6416:case 6397:case 6401:case 6405:case 6409:case 6413:case 6417:case 6394:case 6398:case 6402:case 6406:case 6410:case 6414:case 6395:case 6399:case 6403:case 6407:case 6411:case 6415:case 6396:case 6400: return Type::BirchButton;
			case 8829:case 8861:case 8830:case 8862:case 8831:case 8863:case 8832:case 8864:case 8833:case 8802:case 8834:case 8803:case 8835:case 8804:case 8836:case 8805:case 8837:case 8806:case 8838:case 8807:case 8839:case 8808:case 8840:case 8809:case 8841:case 8810:case 8842:case 8811:case 8843:case 8812:case 8844:case 8813:case 8845:case 8814:case 8846:case 8815:case 8847:case 8816:case 8848:case 8817:case 8849:case 8818:case 8850:case 8819:case 8851:case 8820:case 8852:case 8821:case 8853:case 8822:case 8854:case 8823:case 8855:case 8824:case 8856:case 8825:case 8857:case 8826:case 8858:case 8827:case 8859:case 8828:case 8860:case 8865: return Type::BirchDoor;
			case 8615:case 8623:case 8631:case 8639:case 8616:case 8624:case 8632:case 8640:case 8617:case 8625:case 8633:case 8610:case 8618:case 8626:case 8634:case 8611:case 8619:case 8627:case 8635:case 8612:case 8620:case 8628:case 8636:case 8613:case 8621:case 8629:case 8637:case 8614:case 8622:case 8630:case 8638:case 8641: return Type::BirchFence;
			case 8460:case 8468:case 8476:case 8453:case 8461:case 8469:case 8477:case 8454:case 8462:case 8470:case 8478:case 8455:case 8463:case 8471:case 8479:case 8456:case 8464:case 8472:case 8480:case 8457:case 8465:case 8473:case 8450:case 8458:case 8466:case 8474:case 8451:case 8459:case 8467:case 8475:case 8452:case 8481: return Type::BirchFenceGate;
			case 183:case 176:case 184:case 177:case 185:case 178:case 186:case 179:case 180:case 173:case 181:case 174:case 182:case 175: return Type::BirchLeaves;
			case 79:case 80:case 81: return Type::BirchLog;
			case 17: return Type::BirchPlanks;
			case 3877:case 3878: return Type::BirchPressurePlate;
			case 25:case 26: return Type::BirchSapling;
			case 3452:case 3454:case 3456:case 3458:case 3460:case 3462:case 3464:case 3466:case 3468:case 3470:case 3472:case 3474:case 3445:case 3447:case 3449:case 3451:case 3453:case 3455:case 3457:case 3459:case 3461:case 3463:case 3465:case 3467:case 3469:case 3471:case 3473:case 3475:case 3446:case 3448:case 3450:case 3476: return Type::BirchSign;
			case 8315:case 8312:case 8316:case 8313:case 8317:case 8314: return Type::BirchSlab;
			case 5520:case 5521:case 5522:case 5523:case 5524:case 5525:case 5526:case 5527:case 5528:case 5529:case 5530:case 5531:case 5532:case 5533:case 5534:case 5535:case 5536:case 5537:case 5538:case 5539:case 5540:case 5541:case 5542:case 5543:case 5544:case 5545:case 5546:case 5547:case 5484:case 5548:case 5485:case 5549:case 5486:case 5550:case 5487:case 5551:case 5488:case 5552:case 5489:case 5553:case 5490:case 5554:case 5491:case 5555:case 5492:case 5556:case 5493:case 5557:case 5494:case 5558:case 5495:case 5559:case 5496:case 5560:case 5497:case 5561:case 5498:case 5562:case 5499:case 5563:case 5500:case 5501:case 5502:case 5503:case 5504:case 5505:case 5506:case 5507:case 5508:case 5509:case 5510:case 5511:case 5512:case 5513:case 5514:case 5515:case 5516:case 5517:case 5518:case 5519: return Type::BirchStairs;
			case 4258:case 4274:case 4290:case 4243:case 4259:case 4275:case 4291:case 4244:case 4260:case 4276:case 4292:case 4245:case 4261:case 4277:case 4293:case 4246:case 4262:case 4278:case 4294:case 4247:case 4263:case 4279:case 4295:case 4248:case 4264:case 4280:case 4296:case 4249:case 4265:case 4281:case 4297:case 4250:case 4266:case 4282:case 4298:case 4251:case 4267:case 4283:case 4299:case 4252:case 4268:case 4284:case 4300:case 4253:case 4269:case 4285:case 4301:case 4254:case 4270:case 4286:case 4239:case 4255:case 4271:case 4287:case 4240:case 4256:case 4272:case 4288:case 4241:case 4257:case 4273:case 4289:case 4242:case 4302: return Type::BirchTrapdoor;
			case 3757:case 3751:case 3752:case 3753:case 3754:case 3755:case 3756:case 3758: return Type::BirchWallSign;
			case 115:case 116:case 117: return Type::BirchWood;
			case 8146:case 8147:case 8148:case 8149:case 8150:case 8151:case 8137:case 8138:case 8139:case 8140:case 8141:case 8142:case 8143:case 8144:case 8145:case 8152: return Type::BlackBanner;
			case 1302:case 1291:case 1295:case 1299:case 1303:case 1292:case 1296:case 1300:case 1289:case 1293:case 1297:case 1301:case 1290:case 1294:case 1298:case 1304: return Type::BlackBed;
			case 7881: return Type::BlackCarpet;
			case 9453: return Type::BlackConcrete;
			case 9469: return Type::BlackConcretePowder;
			case 9435:case 9434:case 9436:case 9437: return Type::BlackGlazedTerracotta;
			case 9368:case 9372:case 9369:case 9373:case 9370:case 9371: return Type::BlackShulkerBox;
			case 4110: return Type::BlackStainedGlass;
			case 7365:case 7369:case 7373:case 7346:case 7350:case 7354:case 7358:case 7362:case 7366:case 7370:case 7343:case 7347:case 7351:case 7355:case 7359:case 7363:case 7367:case 7371:case 7344:case 7348:case 7352:case 7356:case 7360:case 7364:case 7368:case 7372:case 7345:case 7349:case 7353:case 7357:case 7361:case 7374: return Type::BlackStainedGlassPane;
			case 6862: return Type::BlackTerracotta;
			case 8214:case 8213:case 8215:case 8216: return Type::BlackWallBanner;
			case 1399: return Type::BlackWool;
			case 15839: return Type::Blackstone;
			case 16249:case 16246:case 16247:case 16244:case 16248:case 16245: return Type::BlackstoneSlab;
			case 15840:case 15841:case 15842:case 15843:case 15844:case 15845:case 15846:case 15847:case 15848:case 15849:case 15850:case 15851:case 15852:case 15853:case 15854:case 15855:case 15856:case 15857:case 15858:case 15859:case 15860:case 15861:case 15862:case 15863:case 15864:case 15865:case 15866:case 15867:case 15868:case 15869:case 15870:case 15871:case 15872:case 15873:case 15874:case 15875:case 15876:case 15877:case 15878:case 15879:case 15880:case 15881:case 15882:case 15883:case 15884:case 15885:case 15886:case 15887:case 15888:case 15889:case 15890:case 15891:case 15892:case 15893:case 15894:case 15895:case 15896:case 15897:case 15898:case 15899:case 15900:case 15901:case 15902:case 15903:case 15904:case 15905:case 15906:case 15907:case 15908:case 15909:case 15910:case 15911:case 15912:case 15913:case 15914:case 15915:case 15916:case 15917:case 15918:case 15919: return Type::BlackstoneStairs;
			case 16144:case 16148:case 16152:case 16156:case 16160:case 16164:case 16168:case 16172:case 16176:case 16180:case 16184:case 16188:case 16192:case 16196:case 16200:case 16204:case 16208:case 16212:case 16216:case 16220:case 16224:case 16228:case 16232:case 16236:case 16240:case 15921:case 15925:case 15929:case 15933:case 15937:case 15941:case 15945:case 15949:case 15953:case 15957:case 15961:case 15965:case 15969:case 15973:case 15977:case 15981:case 15985:case 15989:case 15993:case 15997:case 16001:case 16005:case 16009:case 16013:case 16017:case 16021:case 16025:case 16029:case 16033:case 16037:case 16041:case 16045:case 16049:case 16053:case 16057:case 16061:case 16065:case 16069:case 16073:case 16077:case 16081:case 16085:case 16089:case 16093:case 16097:case 16101:case 16105:case 16109:case 16113:case 16117:case 16121:case 16125:case 16129:case 16133:case 16137:case 16141:case 16145:case 16149:case 16153:case 16157:case 16161:case 16165:case 16169:case 16173:case 16177:case 16181:case 16185:case 16189:case 16193:case 16197:case 16201:case 16205:case 16209:case 16213:case 16217:case 16221:case 16225:case 16229:case 16233:case 16237:case 16241:case 15922:case 15926:case 15930:case 15934:case 15938:case 15942:case 15946:case 15950:case 15954:case 15958:case 15962:case 15966:case 15970:case 15974:case 15978:case 15982:case 15986:case 15990:case 15994:case 15998:case 16002:case 16006:case 16010:case 16014:case 16018:case 16022:case 16026:case 16030:case 16034:case 16038:case 16042:case 16046:case 16050:case 16054:case 16058:case 16062:case 16066:case 16070:case 16074:case 16078:case 16082:case 16086:case 16090:case 16094:case 16098:case 16102:case 16106:case 16110:case 16114:case 16118:case 16122:case 16126:case 16130:case 16134:case 16138:case 16142:case 16146:case 16150:case 16154:case 16158:case 16162:case 16166:case 16170:case 16174:case 16178:case 16182:case 16186:case 16190:case 16194:case 16198:case 16202:case 16206:case 16210:case 16214:case 16218:case 16222:case 16226:case 16230:case 16234:case 16238:case 16242:case 15923:case 15927:case 15931:case 15935:case 15939:case 15943:case 15947:case 15951:case 15955:case 15959:case 15963:case 15967:case 15971:case 15975:case 15979:case 15983:case 15987:case 15991:case 15995:case 15999:case 16003:case 16007:case 16011:case 16015:case 16019:case 16023:case 16027:case 16031:case 16035:case 16039:case 16043:case 16047:case 16051:case 16055:case 16059:case 16063:case 16067:case 16071:case 16075:case 16079:case 16083:case 16087:case 16091:case 16095:case 16099:case 16103:case 16107:case 16111:case 16115:case 16119:case 16123:case 16127:case 16131:case 16135:case 16139:case 16143:case 16147:case 16151:case 16155:case 16159:case 16163:case 16167:case 16171:case 16175:case 16179:case 16183:case 16187:case 16191:case 16195:case 16199:case 16203:case 16207:case 16211:case 16215:case 16219:case 16223:case 16227:case 16231:case 16235:case 16239:case 16243:case 15920:case 15924:case 15928:case 15932:case 15936:case 15940:case 15944:case 15948:case 15952:case 15956:case 15960:case 15964:case 15968:case 15972:case 15976:case 15980:case 15984:case 15988:case 15992:case 15996:case 16000:case 16004:case 16008:case 16012:case 16016:case 16020:case 16024:case 16028:case 16032:case 16036:case 16040:case 16044:case 16048:case 16052:case 16056:case 16060:case 16064:case 16068:case 16072:case 16076:case 16080:case 16084:case 16088:case 16092:case 16096:case 16100:case 16104:case 16108:case 16112:case 16116:case 16120:case 16124:case 16128:case 16132:case 16136:case 16140: return Type::BlackstoneWall;
			case 14814:case 14811:case 14815:case 14812:case 14816:case 14813:case 14817:case 14818: return Type::BlastFurnace;
			case 8086:case 8087:case 8073:case 8074:case 8075:case 8076:case 8077:case 8078:case 8079:case 8080:case 8081:case 8082:case 8083:case 8084:case 8085:case 8088: return Type::BlueBanner;
			case 1227:case 1231:case 1235:case 1239:case 1228:case 1232:case 1236:case 1225:case 1229:case 1233:case 1237:case 1226:case 1230:case 1234:case 1238:case 1240: return Type::BlueBed;
			case 7877: return Type::BlueCarpet;
			case 9449: return Type::BlueConcrete;
			case 9465: return Type::BlueConcretePowder;
			case 9420:case 9419:case 9418:case 9421: return Type::BlueGlazedTerracotta;
			case 9648: return Type::BlueIce;
			case 1414: return Type::BlueOrchid;
			case 9347:case 9344:case 9348:case 9345:case 9349:case 9346: return Type::BlueShulkerBox;
			case 4106: return Type::BlueStainedGlass;
			case 7241:case 7245:case 7218:case 7222:case 7226:case 7230:case 7234:case 7238:case 7242:case 7215:case 7219:case 7223:case 7227:case 7231:case 7235:case 7239:case 7243:case 7216:case 7220:case 7224:case 7228:case 7232:case 7236:case 7240:case 7244:case 7217:case 7221:case 7225:case 7229:case 7233:case 7237:case 7246: return Type::BlueStainedGlassPane;
			case 6858: return Type::BlueTerracotta;
			case 8199:case 8198:case 8197:case 8200: return Type::BlueWallBanner;
			case 1395: return Type::BlueWool;
			case 9258:case 9257:case 9256: return Type::BoneBlock;
			case 1432: return Type::Bookshelf;
			case 9532:case 9533: return Type::BrainCoral;
			case 9516: return Type::BrainCoralBlock;
			case 9552:case 9553: return Type::BrainCoralFan;
			case 9613:case 9610:case 9614:case 9611:case 9608:case 9612:case 9609:case 9615: return Type::BrainCoralWallFan;
			case 5133:case 5135:case 5137:case 5139:case 5134:case 5136:case 5138:case 5140: return Type::BrewingStand;
			case 8374:case 8375:case 8372:case 8376:case 8373:case 8377: return Type::BrickSlab;
			case 4885:case 4886:case 4887:case 4888:case 4889:case 4890:case 4891:case 4892:case 4893:case 4894:case 4895:case 4896:case 4897:case 4898:case 4899:case 4900:case 4901:case 4902:case 4903:case 4904:case 4905:case 4906:case 4907:case 4908:case 4909:case 4910:case 4911:case 4912:case 4913:case 4914:case 4915:case 4852:case 4916:case 4853:case 4917:case 4854:case 4918:case 4855:case 4919:case 4856:case 4920:case 4857:case 4921:case 4858:case 4922:case 4859:case 4923:case 4860:case 4924:case 4861:case 4925:case 4862:case 4926:case 4863:case 4927:case 4864:case 4928:case 4865:case 4929:case 4866:case 4930:case 4867:case 4931:case 4868:case 4869:case 4870:case 4871:case 4872:case 4873:case 4874:case 4875:case 4876:case 4877:case 4878:case 4879:case 4880:case 4881:case 4882:case 4883:case 4884: return Type::BrickStairs;
			case 11034:case 11038:case 11042:case 11046:case 11050:case 11054:case 11058:case 11062:case 11066:case 11070:case 11074:case 11078:case 11082:case 11086:case 11090:case 11094:case 11098:case 11102:case 11106:case 11110:case 11114:case 11118:case 11122:case 11126:case 11130:case 11134:case 11138:case 11142:case 11146:case 11150:case 11154:case 11158:case 11162:case 11166:case 11170:case 11174:case 11178:case 11182:case 11186:case 11190:case 10867:case 10871:case 10875:case 10879:case 10883:case 10887:case 10891:case 10895:case 10899:case 10903:case 10907:case 10911:case 10915:case 10919:case 10923:case 10927:case 10931:case 10935:case 10939:case 10943:case 10947:case 10951:case 10955:case 10959:case 10963:case 10967:case 10971:case 10975:case 10979:case 10983:case 10987:case 10991:case 10995:case 10999:case 11003:case 11007:case 11011:case 11015:case 11019:case 11023:case 11027:case 11031:case 11035:case 11039:case 11043:case 11047:case 11051:case 11055:case 11059:case 11063:case 11067:case 11071:case 11075:case 11079:case 11083:case 11087:case 11091:case 11095:case 11099:case 11103:case 11107:case 11111:case 11115:case 11119:case 11123:case 11127:case 11131:case 11135:case 11139:case 11143:case 11147:case 11151:case 11155:case 11159:case 11163:case 11167:case 11171:case 11175:case 11179:case 11183:case 11187:case 10868:case 10872:case 10876:case 10880:case 10884:case 10888:case 10892:case 10896:case 10900:case 10904:case 10908:case 10912:case 10916:case 10920:case 10924:case 10928:case 10932:case 10936:case 10940:case 10944:case 10948:case 10952:case 10956:case 10960:case 10964:case 10968:case 10972:case 10976:case 10980:case 10984:case 10988:case 10992:case 10996:case 11000:case 11004:case 11008:case 11012:case 11016:case 11020:case 11024:case 11028:case 11032:case 11036:case 11040:case 11044:case 11048:case 11052:case 11056:case 11060:case 11064:case 11068:case 11072:case 11076:case 11080:case 11084:case 11088:case 11092:case 11096:case 11100:case 11104:case 11108:case 11112:case 11116:case 11120:case 11124:case 11128:case 11132:case 11136:case 11140:case 11144:case 11148:case 11152:case 11156:case 11160:case 11164:case 11168:case 11172:case 11176:case 11180:case 11184:case 11188:case 10869:case 10873:case 10877:case 10881:case 10885:case 10889:case 10893:case 10897:case 10901:case 10905:case 10909:case 10913:case 10917:case 10921:case 10925:case 10929:case 10933:case 10937:case 10941:case 10945:case 10949:case 10953:case 10957:case 10961:case 10965:case 10969:case 10973:case 10977:case 10981:case 10985:case 10989:case 10993:case 10997:case 11001:case 11005:case 11009:case 11013:case 11017:case 11021:case 11025:case 11029:case 11033:case 11037:case 11041:case 11045:case 11049:case 11053:case 11057:case 11061:case 11065:case 11069:case 11073:case 11077:case 11081:case 11085:case 11089:case 11093:case 11097:case 11101:case 11105:case 11109:case 11113:case 11117:case 11121:case 11125:case 11129:case 11133:case 11137:case 11141:case 11145:case 11149:case 11153:case 11157:case 11161:case 11165:case 11169:case 11173:case 11177:case 11181:case 11185:case 11189:case 10870:case 10874:case 10878:case 10882:case 10886:case 10890:case 10894:case 10898:case 10902:case 10906:case 10910:case 10914:case 10918:case 10922:case 10926:case 10930:case 10934:case 10938:case 10942:case 10946:case 10950:case 10954:case 10958:case 10962:case 10966:case 10970:case 10974:case 10978:case 10982:case 10986:case 10990:case 10994:case 10998:case 11002:case 11006:case 11010:case 11014:case 11018:case 11022:case 11026:case 11030: return Type::BrickWall;
			case 1429: return Type::Bricks;
			case 8101:case 8102:case 8103:case 8089:case 8090:case 8091:case 8092:case 8093:case 8094:case 8095:case 8096:case 8097:case 8098:case 8099:case 8100:case 8104: return Type::BrownBanner;
			case 1242:case 1246:case 1250:case 1254:case 1243:case 1247:case 1251:case 1255:case 1244:case 1248:case 1252:case 1241:case 1245:case 1249:case 1253:case 1256: return Type::BrownBed;
			case 7878: return Type::BrownCarpet;
			case 9450: return Type::BrownConcrete;
			case 9466: return Type::BrownConcretePowder;
			case 9423:case 9422:case 9424:case 9425: return Type::BrownGlazedTerracotta;
			case 1425: return Type::BrownMushroom;
			case 4510:case 4526:case 4542:case 4558:case 4511:case 4527:case 4543:case 4559:case 4512:case 4528:case 4544:case 4560:case 4513:case 4529:case 4545:case 4561:case 4514:case 4530:case 4546:case 4562:case 4515:case 4531:case 4547:case 4563:case 4516:case 4532:case 4548:case 4564:case 4517:case 4533:case 4549:case 4565:case 4518:case 4534:case 4550:case 4566:case 4519:case 4535:case 4551:case 4567:case 4520:case 4536:case 4552:case 4505:case 4521:case 4537:case 4553:case 4506:case 4522:case 4538:case 4554:case 4507:case 4523:case 4539:case 4555:case 4508:case 4524:case 4540:case 4556:case 4509:case 4525:case 4541:case 4557:case 4568: return Type::BrownMushroomBlock;
			case 9354:case 9351:case 9355:case 9352:case 9353:case 9350: return Type::BrownShulkerBox;
			case 4107: return Type::BrownStainedGlass;
			case 7272:case 7276:case 7249:case 7253:case 7257:case 7261:case 7265:case 7269:case 7273:case 7277:case 7250:case 7254:case 7258:case 7262:case 7266:case 7270:case 7274:case 7247:case 7251:case 7255:case 7259:case 7263:case 7267:case 7271:case 7275:case 7248:case 7252:case 7256:case 7260:case 7264:case 7268:case 7278: return Type::BrownStainedGlassPane;
			case 6859: return Type::BrownTerracotta;
			case 8202:case 8201:case 8203:case 8204: return Type::BrownWallBanner;
			case 1396: return Type::BrownWool;
			case 9667:case 9668: return Type::BubbleColumn;
			case 9534:case 9535: return Type::BubbleCoral;
			case 9517: return Type::BubbleCoralBlock;
			case 9554:case 9555: return Type::BubbleCoralFan;
			case 9620:case 9617:case 9621:case 9618:case 9622:case 9619:case 9616:case 9623: return Type::BubbleCoralWallFan;
			case 3931:case 3939:case 3932:case 3940:case 3933:case 3941:case 3934:case 3942:case 3935:case 3943:case 3936:case 3944:case 3937:case 3945:case 3938:case 3946: return Type::Cactus;
			case 4030:case 4024:case 4025:case 4026:case 4027:case 4028:case 4029: return Type::Cake;
			case 14908:case 14916:case 14893:case 14901:case 14909:case 14917:case 14894:case 14902:case 14910:case 14918:case 14895:case 14903:case 14911:case 14919:case 14896:case 14904:case 14912:case 14920:case 14897:case 14905:case 14913:case 14890:case 14898:case 14906:case 14914:case 14891:case 14899:case 14907:case 14915:case 14892:case 14900:case 14921: return Type::Campfire;
			case 6330:case 6332:case 6334:case 6336:case 6331:case 6333:case 6335:case 6337: return Type::Carrots;
			case 14819: return Type::CartographyTable;
			case 4018:case 4017:case 4016:case 4019: return Type::CarvedPumpkin;
			case 5143:case 5141:case 5142:case 5144: return Type::Cauldron;
			case 9666: return Type::CaveAir;
			case 4729:case 4730: return Type::Chain;
			case 9240:case 9242:case 9244:case 9246:case 9248:case 9237:case 9239:case 9241:case 9243:case 9245:case 9247:case 9238: return Type::ChainCommandBlock;
			case 2037:case 2038:case 2039:case 2040:case 2041:case 2042:case 2043:case 2044:case 2045:case 2046:case 2047:case 2048:case 2050:case 2052:case 2054:case 2056:case 2057:case 2055:case 2053:case 2049:case 2034:case 2035:case 2036:case 2051: return Type::Chest;
			case 6616:case 6614:case 6615:case 6617: return Type::ChippedAnvil;
			case 17101: return Type::ChiseledNetherBricks;
			case 16253: return Type::ChiseledPolishedBlackstone;
			case 6739: return Type::ChiseledQuartzBlock;
			case 8218: return Type::ChiseledRedSandstone;
			case 247: return Type::ChiseledSandstone;
			case 4498: return Type::ChiseledStoneBricks;
			case 9130:case 9131:case 9128:case 9132:case 9129:case 9133: return Type::ChorusFlower;
			case 9081:case 9113:case 9082:case 9114:case 9083:case 9115:case 9084:case 9116:case 9085:case 9117:case 9086:case 9118:case 9087:case 9119:case 9088:case 9120:case 9089:case 9121:case 9090:case 9122:case 9091:case 9123:case 9092:case 9124:case 9093:case 9125:case 9094:case 9126:case 9095:case 9064:case 9096:case 9065:case 9097:case 9066:case 9098:case 9067:case 9099:case 9068:case 9100:case 9069:case 9101:case 9070:case 9102:case 9071:case 9103:case 9072:case 9104:case 9073:case 9105:case 9074:case 9106:case 9075:case 9107:case 9076:case 9108:case 9077:case 9109:case 9078:case 9110:case 9079:case 9111:case 9080:case 9112:case 9127: return Type::ChorusPlant;
			case 3947: return Type::Clay;
			case 7883: return Type::CoalBlock;
			case 71: return Type::CoalOre;
			case 11: return Type::CoarseDirt;
			case 14: return Type::Cobblestone;
			case 8367:case 8371:case 8368:case 8369:case 8366:case 8370: return Type::CobblestoneSlab;
			case 3665:case 3697:case 3729:case 3666:case 3698:case 3730:case 3667:case 3699:case 3731:case 3668:case 3700:case 3732:case 3669:case 3701:case 3733:case 3670:case 3702:case 3734:case 3671:case 3703:case 3672:case 3704:case 3673:case 3705:case 3674:case 3706:case 3675:case 3707:case 3676:case 3708:case 3677:case 3709:case 3678:case 3710:case 3679:case 3711:case 3680:case 3712:case 3681:case 3713:case 3682:case 3714:case 3683:case 3715:case 3684:case 3716:case 3685:case 3717:case 3686:case 3718:case 3655:case 3687:case 3719:case 3656:case 3688:case 3720:case 3657:case 3689:case 3721:case 3658:case 3690:case 3722:case 3659:case 3691:case 3723:case 3660:case 3692:case 3724:case 3661:case 3693:case 3725:case 3662:case 3694:case 3726:case 3663:case 3695:case 3727:case 3664:case 3696:case 3728: return Type::CobblestoneStairs;
			case 5657:case 5659:case 5661:case 5663:case 5665:case 5667:case 5669:case 5671:case 5673:case 5675:case 5677:case 5679:case 5681:case 5683:case 5685:case 5687:case 5689:case 5691:case 5693:case 5695:case 5697:case 5699:case 5701:case 5703:case 5705:case 5707:case 5709:case 5711:case 5713:case 5715:case 5717:case 5719:case 5721:case 5723:case 5725:case 5727:case 5729:case 5731:case 5733:case 5735:case 5737:case 5739:case 5741:case 5743:case 5745:case 5747:case 5749:case 5751:case 5753:case 5755:case 5757:case 5759:case 5761:case 5763:case 5765:case 5767:case 5769:case 5771:case 5773:case 5775:case 5777:case 5779:case 5781:case 5783:case 5785:case 5787:case 5789:case 5791:case 5793:case 5795:case 5797:case 5799:case 5801:case 5803:case 5805:case 5807:case 5809:case 5811:case 5813:case 5815:case 5817:case 5819:case 5821:case 5823:case 5825:case 5827:case 5829:case 5831:case 5833:case 5835:case 5837:case 5839:case 5841:case 5843:case 5845:case 5847:case 5849:case 5851:case 5853:case 5855:case 5857:case 5859:case 5861:case 5863:case 5865:case 5867:case 5869:case 5871:case 5873:case 5875:case 5877:case 5879:case 5881:case 5883:case 5885:case 5887:case 5889:case 5891:case 5893:case 5895:case 5897:case 5899:case 5901:case 5903:case 5905:case 5907:case 5909:case 5911:case 5913:case 5915:case 5917:case 5919:case 5921:case 5923:case 5925:case 5927:case 5929:case 5931:case 5933:case 5935:case 5937:case 5939:case 5941:case 5943:case 5945:case 5947:case 5949:case 5951:case 5953:case 5955:case 5957:case 5959:case 5961:case 5963:case 5965:case 5967:case 5969:case 5971:case 5973:case 5975:case 5977:case 5979:case 5658:case 5660:case 5662:case 5664:case 5666:case 5668:case 5670:case 5672:case 5674:case 5676:case 5678:case 5680:case 5682:case 5684:case 5686:case 5688:case 5690:case 5692:case 5694:case 5696:case 5698:case 5700:case 5702:case 5704:case 5706:case 5708:case 5710:case 5712:case 5714:case 5716:case 5718:case 5720:case 5722:case 5724:case 5726:case 5728:case 5730:case 5732:case 5734:case 5736:case 5738:case 5740:case 5742:case 5744:case 5746:case 5748:case 5750:case 5752:case 5754:case 5756:case 5758:case 5760:case 5762:case 5764:case 5766:case 5768:case 5770:case 5772:case 5774:case 5776:case 5778:case 5780:case 5782:case 5784:case 5786:case 5788:case 5790:case 5792:case 5794:case 5796:case 5798:case 5800:case 5802:case 5804:case 5806:case 5808:case 5810:case 5812:case 5814:case 5816:case 5818:case 5820:case 5822:case 5824:case 5826:case 5828:case 5830:case 5832:case 5834:case 5836:case 5838:case 5840:case 5842:case 5844:case 5846:case 5848:case 5850:case 5852:case 5854:case 5856:case 5858:case 5860:case 5862:case 5864:case 5866:case 5868:case 5870:case 5872:case 5874:case 5876:case 5878:case 5880:case 5882:case 5884:case 5886:case 5888:case 5890:case 5892:case 5894:case 5896:case 5898:case 5900:case 5902:case 5904:case 5906:case 5908:case 5910:case 5912:case 5914:case 5916:case 5918:case 5920:case 5922:case 5924:case 5926:case 5928:case 5930:case 5932:case 5934:case 5936:case 5938:case 5940:case 5942:case 5944:case 5946:case 5948:case 5950:case 5952:case 5954:case 5956:case 5958:case 5960:case 5962:case 5964:case 5966:case 5968:case 5970:case 5972:case 5974:case 5976:case 5978:case 5980: return Type::CobblestoneWall;
			case 1341: return Type::Cobweb;
			case 5161:case 5162:case 5163:case 5164:case 5165:case 5166:case 5167:case 5168:case 5169:case 5158:case 5159:case 5160: return Type::Cocoa;
			case 5644:case 5645:case 5646:case 5647:case 5648:case 5649:case 5650:case 5651:case 5652:case 5653:case 5654:case 5655: return Type::CommandBlock;
			case 6691:case 6692:case 6678:case 6679:case 6680:case 6681:case 6682:case 6683:case 6684:case 6685:case 6686:case 6687:case 6688:case 6689:case 6690:case 6693: return Type::Comparator;
			case 15752:case 15754:case 15756:case 15758:case 15751:case 15753:case 15755:case 15757:case 15759: return Type::Composter;
			case 9649:case 9650: return Type::Conduit;
			case 1422: return Type::Cornflower;
			case 17102: return Type::CrackedNetherBricks;
			case 16252: return Type::CrackedPolishedBlackstoneBricks;
			case 4497: return Type::CrackedStoneBricks;
			case 3356: return Type::CraftingTable;
			case 6571:case 6572:case 6573:case 6574:case 6575:case 6576:case 6577:case 6578:case 6579:case 6580:case 6581:case 6582:case 6583:case 6584:case 6570:case 6585: return Type::CreeperHead;
			case 6586:case 6587:case 6588:case 6589: return Type::CreeperWallHead;
			case 15497:case 15482:case 15490:case 15498:case 15483:case 15491:case 15499:case 15484:case 15492:case 15500:case 15485:case 15493:case 15501:case 15486:case 15494:case 15502:case 15479:case 15487:case 15495:case 15480:case 15488:case 15496:case 15481:case 15489: return Type::CrimsonButton;
			case 15570:case 15539:case 15571:case 15540:case 15572:case 15541:case 15573:case 15542:case 15574:case 15543:case 15575:case 15544:case 15576:case 15545:case 15577:case 15546:case 15578:case 15547:case 15579:case 15548:case 15580:case 15549:case 15581:case 15550:case 15582:case 15551:case 15583:case 15552:case 15584:case 15553:case 15585:case 15554:case 15586:case 15555:case 15587:case 15556:case 15588:case 15557:case 15589:case 15558:case 15527:case 15559:case 15528:case 15560:case 15529:case 15561:case 15530:case 15562:case 15531:case 15563:case 15532:case 15564:case 15533:case 15565:case 15534:case 15566:case 15535:case 15567:case 15536:case 15568:case 15537:case 15569:case 15538:case 15590: return Type::CrimsonDoor;
			case 15063:case 15071:case 15079:case 15087:case 15064:case 15072:case 15080:case 15088:case 15065:case 15073:case 15081:case 15089:case 15066:case 15074:case 15082:case 15090:case 15067:case 15075:case 15083:case 15091:case 15068:case 15076:case 15084:case 15092:case 15069:case 15077:case 15085:case 15093:case 15070:case 15078:case 15086:case 15094: return Type::CrimsonFence;
			case 15280:case 15257:case 15265:case 15273:case 15281:case 15258:case 15266:case 15274:case 15282:case 15259:case 15267:case 15275:case 15283:case 15260:case 15268:case 15276:case 15284:case 15261:case 15269:case 15277:case 15285:case 15262:case 15270:case 15278:case 15255:case 15263:case 15271:case 15279:case 15256:case 15264:case 15272:case 15286: return Type::CrimsonFenceGate;
			case 14988: return Type::CrimsonFungus;
			case 14982:case 14981:case 14983: return Type::CrimsonHyphae;
			case 14987: return Type::CrimsonNylium;
			case 15045: return Type::CrimsonPlanks;
			case 15059:case 15060: return Type::CrimsonPressurePlate;
			case 15044: return Type::CrimsonRoots;
			case 15683:case 15660:case 15668:case 15676:case 15684:case 15661:case 15669:case 15677:case 15685:case 15662:case 15670:case 15678:case 15655:case 15663:case 15671:case 15679:case 15656:case 15664:case 15672:case 15680:case 15657:case 15665:case 15673:case 15681:case 15658:case 15666:case 15674:case 15682:case 15659:case 15667:case 15675:case 15686: return Type::CrimsonSign;
			case 15052:case 15049:case 15050:case 15047:case 15051:case 15048: return Type::CrimsonSlab;
			case 15319:case 15320:case 15321:case 15322:case 15323:case 15324:case 15325:case 15326:case 15327:case 15328:case 15329:case 15330:case 15331:case 15332:case 15333:case 15334:case 15335:case 15336:case 15337:case 15338:case 15339:case 15340:case 15341:case 15342:case 15343:case 15344:case 15345:case 15346:case 15347:case 15348:case 15349:case 15350:case 15351:case 15352:case 15353:case 15354:case 15355:case 15356:case 15357:case 15358:case 15359:case 15360:case 15361:case 15362:case 15363:case 15364:case 15365:case 15366:case 15367:case 15368:case 15369:case 15370:case 15371:case 15372:case 15373:case 15374:case 15375:case 15376:case 15377:case 15378:case 15379:case 15380:case 15381:case 15382:case 15383:case 15384:case 15385:case 15386:case 15387:case 15388:case 15389:case 15390:case 15391:case 15392:case 15393:case 15394:case 15395:case 15396:case 15397:case 15398: return Type::CrimsonStairs;
			case 14976:case 14975:case 14977: return Type::CrimsonStem;
			case 15129:case 15161:case 15130:case 15162:case 15131:case 15163:case 15132:case 15164:case 15133:case 15165:case 15134:case 15166:case 15135:case 15167:case 15136:case 15168:case 15137:case 15169:case 15138:case 15170:case 15139:case 15171:case 15140:case 15172:case 15141:case 15173:case 15142:case 15174:case 15143:case 15175:case 15144:case 15176:case 15145:case 15177:case 15146:case 15178:case 15147:case 15179:case 15148:case 15180:case 15149:case 15181:case 15150:case 15182:case 15151:case 15183:case 15152:case 15184:case 15153:case 15185:case 15154:case 15186:case 15155:case 15187:case 15156:case 15188:case 15157:case 15189:case 15158:case 15127:case 15159:case 15128:case 15160:case 15190: return Type::CrimsonTrapdoor;
			case 15724:case 15721:case 15725:case 15722:case 15719:case 15723:case 15720:case 15726: return Type::CrimsonWallSign;
			case 15828: return Type::CryingObsidian;
			case 8219: return Type::CutRedSandstone;
			case 8402:case 8406:case 8403:case 8407:case 8404:case 8405: return Type::CutRedSandstoneSlab;
			case 248: return Type::CutSandstone;
			case 8357:case 8354:case 8358:case 8355:case 8359:case 8356: return Type::CutSandstoneSlab;
			case 8041:case 8042:case 8043:case 8044:case 8045:case 8046:case 8047:case 8048:case 8049:case 8050:case 8051:case 8052:case 8053:case 8054:case 8055:case 8056: return Type::CyanBanner;
			case 1197:case 1201:case 1205:case 1194:case 1198:case 1202:case 1206:case 1195:case 1199:case 1203:case 1207:case 1196:case 1200:case 1204:case 1193:case 1208: return Type::CyanBed;
			case 7875: return Type::CyanCarpet;
			case 9447: return Type::CyanConcrete;
			case 9463: return Type::CyanConcretePowder;
			case 9411:case 9410:case 9412:case 9413: return Type::CyanGlazedTerracotta;
			case 9333:case 9337:case 9334:case 9335:case 9332:case 9336: return Type::CyanShulkerBox;
			case 4104: return Type::CyanStainedGlass;
			case 7179:case 7152:case 7156:case 7160:case 7164:case 7168:case 7172:case 7176:case 7180:case 7153:case 7157:case 7161:case 7165:case 7169:case 7173:case 7177:case 7181:case 7154:case 7158:case 7162:case 7166:case 7170:case 7174:case 7178:case 7151:case 7155:case 7159:case 7163:case 7167:case 7171:case 7175:case 7182: return Type::CyanStainedGlassPane;
			case 6856: return Type::CyanTerracotta;
			case 8191:case 8189:case 8190:case 8192: return Type::CyanWallBanner;
			case 1393: return Type::CyanWool;
			case 6619:case 6620:case 6618:case 6621: return Type::DamagedAnvil;
			case 1412: return Type::Dandelion;
			case 6466:case 6470:case 6474:case 6478:case 6482:case 6486:case 6467:case 6471:case 6475:case 6479:case 6483:case 6487:case 6468:case 6472:case 6476:case 6480:case 6484:case 6488:case 6469:case 6473:case 6477:case 6481:case 6485:case 6489: return Type::DarkOakButton;
			case 9018:case 9050:case 9019:case 9051:case 9020:case 9052:case 9021:case 9053:case 9022:case 9054:case 9023:case 9055:case 9024:case 9056:case 9025:case 8994:case 9026:case 8995:case 9027:case 8996:case 9028:case 8997:case 9029:case 8998:case 9030:case 8999:case 9031:case 9000:case 9032:case 9001:case 9033:case 9002:case 9034:case 9003:case 9035:case 9004:case 9036:case 9005:case 9037:case 9006:case 9038:case 9007:case 9039:case 9008:case 9040:case 9009:case 9041:case 9010:case 9042:case 9011:case 9043:case 9012:case 9044:case 9013:case 9045:case 9014:case 9046:case 9015:case 9047:case 9016:case 9048:case 9017:case 9049:case 9057: return Type::DarkOakDoor;
			case 8708:case 8716:case 8724:case 8732:case 8709:case 8717:case 8725:case 8733:case 8710:case 8718:case 8726:case 8734:case 8711:case 8719:case 8727:case 8735:case 8712:case 8720:case 8728:case 8736:case 8713:case 8721:case 8729:case 8706:case 8714:case 8722:case 8730:case 8707:case 8715:case 8723:case 8731:case 8737: return Type::DarkOakFence;
			case 8553:case 8561:case 8569:case 8546:case 8554:case 8562:case 8570:case 8547:case 8555:case 8563:case 8571:case 8548:case 8556:case 8564:case 8572:case 8549:case 8557:case 8565:case 8573:case 8550:case 8558:case 8566:case 8574:case 8551:case 8559:case 8567:case 8575:case 8552:case 8560:case 8568:case 8576:case 8577: return Type::DarkOakFenceGate;
			case 228:case 221:case 222:case 215:case 223:case 216:case 224:case 217:case 225:case 218:case 226:case 219:case 227:case 220: return Type::DarkOakLeaves;
			case 88:case 89:case 90: return Type::DarkOakLog;
			case 20: return Type::DarkOakPlanks;
			case 3883:case 3884: return Type::DarkOakPressurePlate;
			case 31:case 32: return Type::DarkOakSapling;
			case 3545:case 3547:case 3549:case 3551:case 3553:case 3555:case 3557:case 3559:case 3561:case 3563:case 3565:case 3567:case 3569:case 3571:case 3542:case 3544:case 3546:case 3548:case 3550:case 3552:case 3554:case 3556:case 3558:case 3560:case 3562:case 3564:case 3566:case 3568:case 3570:case 3541:case 3543:case 3572: return Type::DarkOakSign;
			case 8332:case 8333:case 8330:case 8334:case 8331:case 8335: return Type::DarkOakSlab;
			case 7489:case 7490:case 7491:case 7492:case 7493:case 7494:case 7495:case 7496:case 7497:case 7498:case 7499:case 7500:case 7501:case 7502:case 7503:case 7504:case 7505:case 7506:case 7507:case 7508:case 7509:case 7510:case 7511:case 7512:case 7513:case 7514:case 7515:case 7516:case 7517:case 7518:case 7455:case 7519:case 7456:case 7520:case 7457:case 7521:case 7458:case 7522:case 7459:case 7523:case 7460:case 7524:case 7461:case 7525:case 7462:case 7526:case 7463:case 7527:case 7464:case 7528:case 7465:case 7529:case 7466:case 7530:case 7467:case 7531:case 7468:case 7532:case 7469:case 7533:case 7470:case 7534:case 7471:case 7472:case 7473:case 7474:case 7475:case 7476:case 7477:case 7478:case 7479:case 7480:case 7481:case 7482:case 7483:case 7484:case 7485:case 7486:case 7487:case 7488: return Type::DarkOakStairs;
			case 4447:case 4463:case 4479:case 4432:case 4448:case 4464:case 4480:case 4433:case 4449:case 4465:case 4481:case 4434:case 4450:case 4466:case 4482:case 4435:case 4451:case 4467:case 4483:case 4436:case 4452:case 4468:case 4484:case 4437:case 4453:case 4469:case 4485:case 4438:case 4454:case 4470:case 4486:case 4439:case 4455:case 4471:case 4487:case 4440:case 4456:case 4472:case 4488:case 4441:case 4457:case 4473:case 4489:case 4442:case 4458:case 4474:case 4490:case 4443:case 4459:case 4475:case 4491:case 4444:case 4460:case 4476:case 4492:case 4445:case 4461:case 4477:case 4493:case 4446:case 4462:case 4478:case 4431:case 4494: return Type::DarkOakTrapdoor;
			case 3778:case 3779:case 3780:case 3781:case 3775:case 3776:case 3777:case 3782: return Type::DarkOakWallSign;
			case 124:case 125:case 126: return Type::DarkOakWood;
			case 7603: return Type::DarkPrismarine;
			case 7856:case 7858:case 7860:case 7857:case 7859:case 7861: return Type::DarkPrismarineSlab;
			case 7806:case 7807:case 7808:case 7809:case 7810:case 7811:case 7812:case 7813:case 7814:case 7815:case 7816:case 7817:case 7818:case 7819:case 7820:case 7821:case 7822:case 7823:case 7824:case 7825:case 7826:case 7827:case 7764:case 7828:case 7765:case 7829:case 7766:case 7830:case 7767:case 7831:case 7768:case 7832:case 7769:case 7833:case 7770:case 7834:case 7771:case 7835:case 7772:case 7836:case 7773:case 7837:case 7774:case 7838:case 7775:case 7839:case 7776:case 7840:case 7777:case 7841:case 7778:case 7842:case 7779:case 7843:case 7780:case 7781:case 7782:case 7783:case 7784:case 7785:case 7786:case 7787:case 7788:case 7789:case 7790:case 7791:case 7792:case 7793:case 7794:case 7795:case 7796:case 7797:case 7798:case 7799:case 7800:case 7801:case 7802:case 7803:case 7804:case 7805: return Type::DarkPrismarineStairs;
			case 6714:case 6718:case 6722:case 6695:case 6699:case 6703:case 6707:case 6711:case 6715:case 6719:case 6723:case 6696:case 6700:case 6704:case 6708:case 6712:case 6716:case 6720:case 6724:case 6697:case 6701:case 6705:case 6709:case 6713:case 6717:case 6721:case 6694:case 6698:case 6702:case 6706:case 6710:case 6725: return Type::DaylightDetector;
			case 9522:case 9523: return Type::DeadBrainCoral;
			case 9511: return Type::DeadBrainCoralBlock;
			case 9542:case 9543: return Type::DeadBrainCoralFan;
			case 9571:case 9568:case 9572:case 9569:case 9573:case 9570:case 9574:case 9575: return Type::DeadBrainCoralWallFan;
			case 9524:case 9525: return Type::DeadBubbleCoral;
			case 9512: return Type::DeadBubbleCoralBlock;
			case 9544:case 9545: return Type::DeadBubbleCoralFan;
			case 9578:case 9582:case 9579:case 9576:case 9580:case 9577:case 9581:case 9583: return Type::DeadBubbleCoralWallFan;
			case 1344: return Type::DeadBush;
			case 9526:case 9527: return Type::DeadFireCoral;
			case 9513: return Type::DeadFireCoralBlock;
			case 9546:case 9547: return Type::DeadFireCoralFan;
			case 9585:case 9589:case 9586:case 9590:case 9587:case 9584:case 9588:case 9591: return Type::DeadFireCoralWallFan;
			case 9528:case 9529: return Type::DeadHornCoral;
			case 9514: return Type::DeadHornCoralBlock;
			case 9548:case 9549: return Type::DeadHornCoralFan;
			case 9592:case 9596:case 9593:case 9597:case 9594:case 9598:case 9595:case 9599: return Type::DeadHornCoralWallFan;
			case 9520:case 9521: return Type::DeadTubeCoral;
			case 9510: return Type::DeadTubeCoralBlock;
			case 9540:case 9541: return Type::DeadTubeCoralFan;
			case 9564:case 9561:case 9565:case 9562:case 9566:case 9563:case 9560:case 9567: return Type::DeadTubeCoralWallFan;
			case 1317:case 1321:case 1325:case 1318:case 1322:case 1326:case 1319:case 1323:case 1327:case 1320:case 1324:case 1328: return Type::DetectorRail;
			case 3355: return Type::DiamondBlock;
			case 3354: return Type::DiamondOre;
			case 4: return Type::Diorite;
			case 10866:case 10863:case 10864:case 10861:case 10865:case 10862: return Type::DioriteSlab;
			case 10722:case 10723:case 10724:case 10725:case 10726:case 10727:case 10728:case 10729:case 10730:case 10731:case 10732:case 10733:case 10734:case 10735:case 10736:case 10737:case 10738:case 10739:case 10740:case 10741:case 10742:case 10743:case 10744:case 10745:case 10746:case 10747:case 10748:case 10749:case 10750:case 10751:case 10752:case 10753:case 10754:case 10755:case 10756:case 10757:case 10758:case 10759:case 10760:case 10761:case 10762:case 10763:case 10764:case 10765:case 10766:case 10767:case 10768:case 10769:case 10770:case 10771:case 10772:case 10773:case 10774:case 10775:case 10776:case 10777:case 10778:case 10779:case 10780:case 10781:case 10782:case 10783:case 10784:case 10785:case 10786:case 10787:case 10788:case 10709:case 10710:case 10711:case 10712:case 10713:case 10714:case 10715:case 10716:case 10717:case 10718:case 10719:case 10720:case 10721: return Type::DioriteStairs;
			case 14611:case 14615:case 14619:case 14623:case 14627:case 14631:case 14635:case 14639:case 14643:case 14647:case 14651:case 14655:case 14659:case 14663:case 14667:case 14671:case 14675:case 14679:case 14683:case 14687:case 14691:case 14695:case 14699:case 14703:case 14707:case 14711:case 14715:case 14719:case 14723:case 14727:case 14731:case 14735:case 14739:case 14743:case 14747:case 14751:case 14432:case 14436:case 14440:case 14444:case 14448:case 14452:case 14456:case 14460:case 14464:case 14468:case 14472:case 14476:case 14480:case 14484:case 14488:case 14492:case 14496:case 14500:case 14504:case 14508:case 14512:case 14516:case 14520:case 14524:case 14528:case 14532:case 14536:case 14540:case 14544:case 14548:case 14552:case 14556:case 14560:case 14564:case 14568:case 14572:case 14576:case 14580:case 14584:case 14588:case 14592:case 14596:case 14600:case 14604:case 14608:case 14612:case 14616:case 14620:case 14624:case 14628:case 14632:case 14636:case 14640:case 14644:case 14648:case 14652:case 14656:case 14660:case 14664:case 14668:case 14672:case 14676:case 14680:case 14684:case 14688:case 14692:case 14696:case 14700:case 14704:case 14708:case 14712:case 14716:case 14720:case 14724:case 14728:case 14732:case 14736:case 14740:case 14744:case 14748:case 14752:case 14433:case 14437:case 14441:case 14445:case 14449:case 14453:case 14457:case 14461:case 14465:case 14469:case 14473:case 14477:case 14481:case 14485:case 14489:case 14493:case 14497:case 14501:case 14505:case 14509:case 14513:case 14517:case 14521:case 14525:case 14529:case 14533:case 14537:case 14541:case 14545:case 14549:case 14553:case 14557:case 14561:case 14565:case 14569:case 14573:case 14577:case 14581:case 14585:case 14589:case 14593:case 14597:case 14601:case 14605:case 14609:case 14613:case 14617:case 14621:case 14625:case 14629:case 14633:case 14637:case 14641:case 14645:case 14649:case 14653:case 14657:case 14661:case 14665:case 14669:case 14673:case 14677:case 14681:case 14685:case 14689:case 14693:case 14697:case 14701:case 14705:case 14709:case 14713:case 14717:case 14721:case 14725:case 14729:case 14733:case 14737:case 14741:case 14745:case 14749:case 14753:case 14434:case 14438:case 14442:case 14446:case 14450:case 14454:case 14458:case 14462:case 14466:case 14470:case 14474:case 14478:case 14482:case 14486:case 14490:case 14494:case 14498:case 14502:case 14506:case 14510:case 14514:case 14518:case 14522:case 14526:case 14530:case 14534:case 14538:case 14542:case 14546:case 14550:case 14554:case 14558:case 14562:case 14566:case 14570:case 14574:case 14578:case 14582:case 14586:case 14590:case 14594:case 14598:case 14602:case 14606:case 14610:case 14614:case 14618:case 14622:case 14626:case 14630:case 14634:case 14638:case 14642:case 14646:case 14650:case 14654:case 14658:case 14662:case 14666:case 14670:case 14674:case 14678:case 14682:case 14686:case 14690:case 14694:case 14698:case 14702:case 14706:case 14710:case 14714:case 14718:case 14722:case 14726:case 14730:case 14734:case 14738:case 14742:case 14746:case 14750:case 14754:case 14431:case 14435:case 14439:case 14443:case 14447:case 14451:case 14455:case 14459:case 14463:case 14467:case 14471:case 14475:case 14479:case 14483:case 14487:case 14491:case 14495:case 14499:case 14503:case 14507:case 14511:case 14515:case 14519:case 14523:case 14527:case 14531:case 14535:case 14539:case 14543:case 14547:case 14551:case 14555:case 14559:case 14563:case 14567:case 14571:case 14575:case 14579:case 14583:case 14587:case 14591:case 14595:case 14599:case 14603:case 14607: return Type::DioriteWall;
			case 10: return Type::Dirt;
			case 243:case 236:case 244:case 237:case 245:case 238:case 239:case 240:case 241:case 234:case 242:case 235: return Type::Dispenser;
			case 5155: return Type::DragonEgg;
			case 6601:case 6602:case 6603:case 6604:case 6590:case 6591:case 6592:case 6593:case 6594:case 6595:case 6596:case 6597:case 6598:case 6599:case 6600:case 6605: return Type::DragonHead;
			case 6607:case 6608:case 6606:case 6609: return Type::DragonWallHead;
			case 9497: return Type::DriedKelpBlock;
			case 6841:case 6842:case 6843:case 6844:case 6845:case 6846:case 6835:case 6836:case 6837:case 6838:case 6839:case 6840: return Type::Dropper;
			case 5403: return Type::EmeraldBlock;
			case 5250: return Type::EmeraldOre;
			case 5132: return Type::EnchantingTable;
			case 9224: return Type::EndGateway;
			case 5145: return Type::EndPortal;
			case 5147:case 5149:case 5151:case 5146:case 5148:case 5150:case 5152:case 5153: return Type::EndPortalFrame;
			case 9060:case 9061:case 9058:case 9062:case 9059:case 9063: return Type::EndRod;
			case 5154: return Type::EndStone;
			case 10824:case 10821:case 10822:case 10819:case 10823:case 10820: return Type::EndStoneBrickSlab;
			case 10087:case 10088:case 10089:case 10090:case 10091:case 10092:case 10093:case 10094:case 10095:case 10096:case 10097:case 10098:case 10099:case 10100:case 10101:case 10102:case 10103:case 10104:case 10105:case 10106:case 10107:case 10108:case 10109:case 10110:case 10111:case 10112:case 10113:case 10114:case 10115:case 10116:case 10117:case 10118:case 10119:case 10120:case 10121:case 10122:case 10123:case 10124:case 10125:case 10126:case 10127:case 10128:case 10129:case 10130:case 10131:case 10132:case 10133:case 10134:case 10135:case 10136:case 10137:case 10138:case 10139:case 10140:case 10141:case 10142:case 10143:case 10144:case 10145:case 10146:case 10147:case 10148:case 10069:case 10070:case 10071:case 10072:case 10073:case 10074:case 10075:case 10076:case 10077:case 10078:case 10079:case 10080:case 10081:case 10082:case 10083:case 10084:case 10085:case 10086: return Type::EndStoneBrickStairs;
			case 14108:case 14112:case 14116:case 14120:case 14124:case 14128:case 14132:case 14136:case 14140:case 14144:case 14148:case 14152:case 14156:case 14160:case 14164:case 14168:case 14172:case 14176:case 14180:case 14184:case 14188:case 14192:case 14196:case 14200:case 14204:case 14208:case 14212:case 14216:case 14220:case 14224:case 14228:case 14232:case 14236:case 14240:case 14244:case 14248:case 14252:case 14256:case 14260:case 14264:case 14268:case 14272:case 14276:case 14280:case 14284:case 14288:case 14292:case 14296:case 14300:case 14304:case 14308:case 14312:case 14316:case 14320:case 14324:case 14328:case 14332:case 14336:case 14340:case 14344:case 14348:case 14352:case 14356:case 14360:case 14364:case 14368:case 14372:case 14376:case 14380:case 14384:case 14388:case 14392:case 14396:case 14400:case 14404:case 14408:case 14412:case 14416:case 14420:case 14424:case 14428:case 14109:case 14113:case 14117:case 14121:case 14125:case 14129:case 14133:case 14137:case 14141:case 14145:case 14149:case 14153:case 14157:case 14161:case 14165:case 14169:case 14173:case 14177:case 14181:case 14185:case 14189:case 14193:case 14197:case 14201:case 14205:case 14209:case 14213:case 14217:case 14221:case 14225:case 14229:case 14233:case 14237:case 14241:case 14245:case 14249:case 14253:case 14257:case 14261:case 14265:case 14269:case 14273:case 14277:case 14281:case 14285:case 14289:case 14293:case 14297:case 14301:case 14305:case 14309:case 14313:case 14317:case 14321:case 14325:case 14329:case 14333:case 14337:case 14341:case 14345:case 14349:case 14353:case 14357:case 14361:case 14365:case 14369:case 14373:case 14377:case 14381:case 14385:case 14389:case 14393:case 14397:case 14401:case 14405:case 14409:case 14413:case 14417:case 14421:case 14425:case 14429:case 14110:case 14114:case 14118:case 14122:case 14126:case 14130:case 14134:case 14138:case 14142:case 14146:case 14150:case 14154:case 14158:case 14162:case 14166:case 14170:case 14174:case 14178:case 14182:case 14186:case 14190:case 14194:case 14198:case 14202:case 14206:case 14210:case 14214:case 14218:case 14222:case 14226:case 14230:case 14234:case 14238:case 14242:case 14246:case 14250:case 14254:case 14258:case 14262:case 14266:case 14270:case 14274:case 14278:case 14282:case 14286:case 14290:case 14294:case 14298:case 14302:case 14306:case 14310:case 14314:case 14318:case 14322:case 14326:case 14330:case 14334:case 14338:case 14342:case 14346:case 14350:case 14354:case 14358:case 14362:case 14366:case 14370:case 14374:case 14378:case 14382:case 14386:case 14390:case 14394:case 14398:case 14402:case 14406:case 14410:case 14414:case 14418:case 14422:case 14426:case 14430:case 14107:case 14111:case 14115:case 14119:case 14123:case 14127:case 14131:case 14135:case 14139:case 14143:case 14147:case 14151:case 14155:case 14159:case 14163:case 14167:case 14171:case 14175:case 14179:case 14183:case 14187:case 14191:case 14195:case 14199:case 14203:case 14207:case 14211:case 14215:case 14219:case 14223:case 14227:case 14231:case 14235:case 14239:case 14243:case 14247:case 14251:case 14255:case 14259:case 14263:case 14267:case 14271:case 14275:case 14279:case 14283:case 14287:case 14291:case 14295:case 14299:case 14303:case 14307:case 14311:case 14315:case 14319:case 14323:case 14327:case 14331:case 14335:case 14339:case 14343:case 14347:case 14351:case 14355:case 14359:case 14363:case 14367:case 14371:case 14375:case 14379:case 14383:case 14387:case 14391:case 14395:case 14399:case 14403:case 14407:case 14411:case 14415:case 14419:case 14423:case 14427: return Type::EndStoneBrickWall;
			case 9218: return Type::EndStoneBricks;
			case 5252:case 5254:case 5256:case 5251:case 5253:case 5255:case 5257:case 5258: return Type::EnderChest;
			case 3365:case 3366:case 3367:case 3368:case 3369:case 3370:case 3371:case 3372: return Type::Farmland;
			case 1343: return Type::Fern;
			case 1513:case 1769:case 1514:case 1770:case 1515:case 1771:case 1516:case 1772:case 1517:case 1773:case 1518:case 1774:case 1519:case 1775:case 1520:case 1776:case 1521:case 1777:case 1522:case 1778:case 1523:case 1779:case 1524:case 1780:case 1525:case 1781:case 1526:case 1782:case 1527:case 1783:case 1528:case 1784:case 1529:case 1785:case 1530:case 1786:case 1531:case 1787:case 1532:case 1788:case 1533:case 1789:case 1534:case 1790:case 1535:case 1791:case 1536:case 1792:case 1537:case 1793:case 1538:case 1794:case 1539:case 1795:case 1540:case 1796:case 1541:case 1797:case 1542:case 1798:case 1543:case 1799:case 1544:case 1800:case 1545:case 1801:case 1546:case 1802:case 1547:case 1803:case 1548:case 1804:case 1549:case 1805:case 1550:case 1806:case 1551:case 1807:case 1552:case 1808:case 1553:case 1809:case 1554:case 1810:case 1555:case 1811:case 1556:case 1812:case 1557:case 1813:case 1558:case 1814:case 1559:case 1815:case 1560:case 1816:case 1561:case 1817:case 1562:case 1818:case 1563:case 1819:case 1564:case 1820:case 1565:case 1821:case 1566:case 1822:case 1567:case 1823:case 1568:case 1824:case 1569:case 1825:case 1570:case 1826:case 1571:case 1827:case 1572:case 1828:case 1573:case 1829:case 1574:case 1830:case 1575:case 1831:case 1576:case 1832:case 1577:case 1833:case 1578:case 1834:case 1579:case 1835:case 1580:case 1836:case 1581:case 1837:case 1582:case 1838:case 1583:case 1839:case 1584:case 1840:case 1585:case 1841:case 1586:case 1842:case 1587:case 1843:case 1588:case 1844:case 1589:case 1845:case 1590:case 1846:case 1591:case 1847:case 1592:case 1848:case 1593:case 1849:case 1594:case 1850:case 1595:case 1851:case 1596:case 1852:case 1597:case 1853:case 1598:case 1854:case 1599:case 1855:case 1600:case 1856:case 1601:case 1857:case 1602:case 1858:case 1603:case 1859:case 1604:case 1860:case 1605:case 1861:case 1606:case 1862:case 1607:case 1863:case 1608:case 1864:case 1609:case 1865:case 1610:case 1866:case 1611:case 1867:case 1612:case 1868:case 1613:case 1869:case 1614:case 1870:case 1615:case 1871:case 1616:case 1872:case 1617:case 1873:case 1618:case 1874:case 1619:case 1875:case 1620:case 1876:case 1621:case 1877:case 1622:case 1878:case 1623:case 1879:case 1624:case 1880:case 1625:case 1881:case 1626:case 1882:case 1627:case 1883:case 1628:case 1884:case 1629:case 1885:case 1630:case 1886:case 1631:case 1887:case 1632:case 1888:case 1633:case 1889:case 1634:case 1890:case 1635:case 1891:case 1636:case 1892:case 1637:case 1893:case 1638:case 1894:case 1639:case 1895:case 1640:case 1896:case 1641:case 1897:case 1642:case 1898:case 1643:case 1899:case 1644:case 1900:case 1645:case 1901:case 1646:case 1902:case 1647:case 1903:case 1648:case 1904:case 1649:case 1905:case 1650:case 1906:case 1651:case 1907:case 1652:case 1908:case 1653:case 1909:case 1654:case 1910:case 1655:case 1911:case 1656:case 1912:case 1657:case 1913:case 1658:case 1914:case 1659:case 1915:case 1660:case 1916:case 1661:case 1917:case 1662:case 1918:case 1663:case 1919:case 1664:case 1920:case 1665:case 1921:case 1666:case 1922:case 1667:case 1923:case 1668:case 1924:case 1669:case 1925:case 1670:case 1926:case 1671:case 1927:case 1672:case 1928:case 1673:case 1929:case 1674:case 1930:case 1675:case 1931:case 1676:case 1932:case 1677:case 1933:case 1678:case 1934:case 1679:case 1935:case 1680:case 1936:case 1681:case 1937:case 1682:case 1938:case 1683:case 1939:case 1684:case 1940:case 1685:case 1941:case 1686:case 1942:case 1687:case 1943:case 1688:case 1944:case 1689:case 1945:case 1690:case 1946:case 1691:case 1947:case 1692:case 1948:case 1693:case 1949:case 1694:case 1950:case 1695:case 1440:case 1696:case 1441:case 1697:case 1442:case 1698:case 1443:case 1699:case 1444:case 1700:case 1445:case 1701:case 1446:case 1702:case 1447:case 1703:case 1448:case 1704:case 1449:case 1705:case 1450:case 1706:case 1451:case 1707:case 1452:case 1708:case 1453:case 1709:case 1454:case 1710:case 1455:case 1711:case 1456:case 1712:case 1457:case 1713:case 1458:case 1714:case 1459:case 1715:case 1460:case 1716:case 1461:case 1717:case 1462:case 1718:case 1463:case 1719:case 1464:case 1720:case 1465:case 1721:case 1466:case 1722:case 1467:case 1723:case 1468:case 1724:case 1469:case 1725:case 1470:case 1726:case 1471:case 1727:case 1472:case 1728:case 1473:case 1729:case 1474:case 1730:case 1475:case 1731:case 1476:case 1732:case 1477:case 1733:case 1478:case 1734:case 1479:case 1735:case 1480:case 1736:case 1481:case 1737:case 1482:case 1738:case 1483:case 1739:case 1484:case 1740:case 1485:case 1741:case 1486:case 1742:case 1487:case 1743:case 1488:case 1744:case 1489:case 1745:case 1490:case 1746:case 1491:case 1747:case 1492:case 1748:case 1493:case 1749:case 1494:case 1750:case 1495:case 1751:case 1496:case 1752:case 1497:case 1753:case 1498:case 1754:case 1499:case 1755:case 1500:case 1756:case 1501:case 1757:case 1502:case 1758:case 1503:case 1759:case 1504:case 1760:case 1505:case 1761:case 1506:case 1762:case 1507:case 1763:case 1508:case 1764:case 1509:case 1765:case 1510:case 1766:case 1511:case 1767:case 1512:case 1768:case 1951: return Type::Fire;
			case 9536:case 9537: return Type::FireCoral;
			case 9518: return Type::FireCoralBlock;
			case 9556:case 9557: return Type::FireCoralFan;
			case 9627:case 9624:case 9628:case 9625:case 9629:case 9626:case 9630:case 9631: return Type::FireCoralWallFan;
			case 14820: return Type::FletchingTable;
			case 6305: return Type::FlowerPot;
			case 9249:case 9251:case 9250:case 9252: return Type::FrostedIce;
			case 3379:case 3373:case 3374:case 3375:case 3376:case 3377:case 3378:case 3380: return Type::Furnace;
			case 16664: return Type::GildedBlackstone;
			case 231: return Type::Glass;
			case 4761:case 4734:case 4738:case 4742:case 4746:case 4750:case 4754:case 4758:case 4731:case 4735:case 4739:case 4743:case 4747:case 4751:case 4755:case 4759:case 4732:case 4736:case 4740:case 4744:case 4748:case 4752:case 4756:case 4760:case 4733:case 4737:case 4741:case 4745:case 4749:case 4753:case 4757:case 4762: return Type::GlassPane;
			case 4013: return Type::Glowstone;
			case 1427: return Type::GoldBlock;
			case 69: return Type::GoldOre;
			case 2: return Type::Granite;
			case 10838:case 10842:case 10839:case 10840:case 10837:case 10841: return Type::GraniteSlab;
			case 10468:case 10389:case 10390:case 10391:case 10392:case 10393:case 10394:case 10395:case 10396:case 10397:case 10398:case 10399:case 10400:case 10401:case 10402:case 10403:case 10404:case 10405:case 10406:case 10407:case 10408:case 10409:case 10410:case 10411:case 10412:case 10413:case 10414:case 10415:case 10416:case 10417:case 10418:case 10419:case 10420:case 10421:case 10422:case 10423:case 10424:case 10425:case 10426:case 10427:case 10428:case 10429:case 10430:case 10431:case 10432:case 10433:case 10434:case 10435:case 10436:case 10437:case 10438:case 10439:case 10440:case 10441:case 10442:case 10443:case 10444:case 10445:case 10446:case 10447:case 10448:case 10449:case 10450:case 10451:case 10452:case 10453:case 10454:case 10455:case 10456:case 10457:case 10458:case 10459:case 10460:case 10461:case 10462:case 10463:case 10464:case 10465:case 10466:case 10467: return Type::GraniteStairs;
			case 12164:case 12168:case 12172:case 12176:case 12180:case 12184:case 12188:case 12192:case 12196:case 12200:case 12204:case 12208:case 12212:case 12216:case 12220:case 12224:case 12228:case 12232:case 12236:case 12240:case 12244:case 12248:case 12252:case 12256:case 12260:case 12264:case 12268:case 12272:case 12276:case 12280:case 12284:case 12288:case 12292:case 12296:case 12300:case 12304:case 12308:case 12312:case 12316:case 12320:case 12324:case 12328:case 12332:case 12336:case 12340:case 12344:case 12348:case 12352:case 12356:case 12360:case 12364:case 12368:case 12372:case 12376:case 12380:case 12384:case 12388:case 12392:case 12396:case 12400:case 12404:case 12408:case 12412:case 12416:case 12420:case 12424:case 12428:case 12432:case 12436:case 12440:case 12444:case 12448:case 12452:case 12456:case 12460:case 12464:case 12468:case 12472:case 12476:case 12480:case 12484:case 12165:case 12169:case 12173:case 12177:case 12181:case 12185:case 12189:case 12193:case 12197:case 12201:case 12205:case 12209:case 12213:case 12217:case 12221:case 12225:case 12229:case 12233:case 12237:case 12241:case 12245:case 12249:case 12253:case 12257:case 12261:case 12265:case 12269:case 12273:case 12277:case 12281:case 12285:case 12289:case 12293:case 12297:case 12301:case 12305:case 12309:case 12313:case 12317:case 12321:case 12325:case 12329:case 12333:case 12337:case 12341:case 12345:case 12349:case 12353:case 12357:case 12361:case 12365:case 12369:case 12373:case 12377:case 12381:case 12385:case 12389:case 12393:case 12397:case 12401:case 12405:case 12409:case 12413:case 12417:case 12421:case 12425:case 12429:case 12433:case 12437:case 12441:case 12445:case 12449:case 12453:case 12457:case 12461:case 12465:case 12469:case 12473:case 12477:case 12481:case 12485:case 12166:case 12170:case 12174:case 12178:case 12182:case 12186:case 12190:case 12194:case 12198:case 12202:case 12206:case 12210:case 12214:case 12218:case 12222:case 12226:case 12230:case 12234:case 12238:case 12242:case 12246:case 12250:case 12254:case 12258:case 12262:case 12266:case 12270:case 12274:case 12278:case 12282:case 12286:case 12290:case 12294:case 12298:case 12302:case 12306:case 12310:case 12314:case 12318:case 12322:case 12326:case 12330:case 12334:case 12338:case 12342:case 12346:case 12350:case 12354:case 12358:case 12362:case 12366:case 12370:case 12374:case 12378:case 12382:case 12386:case 12390:case 12394:case 12398:case 12402:case 12406:case 12410:case 12414:case 12418:case 12422:case 12426:case 12430:case 12434:case 12438:case 12442:case 12446:case 12450:case 12454:case 12458:case 12462:case 12466:case 12470:case 12474:case 12478:case 12482:case 12486:case 12163:case 12167:case 12171:case 12175:case 12179:case 12183:case 12187:case 12191:case 12195:case 12199:case 12203:case 12207:case 12211:case 12215:case 12219:case 12223:case 12227:case 12231:case 12235:case 12239:case 12243:case 12247:case 12251:case 12255:case 12259:case 12263:case 12267:case 12271:case 12275:case 12279:case 12283:case 12287:case 12291:case 12295:case 12299:case 12303:case 12307:case 12311:case 12315:case 12319:case 12323:case 12327:case 12331:case 12335:case 12339:case 12343:case 12347:case 12351:case 12355:case 12359:case 12363:case 12367:case 12371:case 12375:case 12379:case 12383:case 12387:case 12391:case 12395:case 12399:case 12403:case 12407:case 12411:case 12415:case 12419:case 12423:case 12427:case 12431:case 12435:case 12439:case 12443:case 12447:case 12451:case 12455:case 12459:case 12463:case 12467:case 12471:case 12475:case 12479:case 12483: return Type::GraniteWall;
			case 1342: return Type::Grass;
			case 8:case 9: return Type::GrassBlock;
			case 9223: return Type::GrassPath;
			case 68: return Type::Gravel;
			case 8011:case 8012:case 8013:case 8014:case 8015:case 8016:case 8017:case 8018:case 8019:case 8020:case 8021:case 8022:case 8023:case 8009:case 8010:case 8024: return Type::GrayBanner;
			case 1167:case 1171:case 1175:case 1164:case 1168:case 1172:case 1161:case 1165:case 1169:case 1173:case 1162:case 1166:case 1170:case 1174:case 1163:case 1176: return Type::GrayBed;
			case 7873: return Type::GrayCarpet;
			case 9445: return Type::GrayConcrete;
			case 9461: return Type::GrayConcretePowder;
			case 9402:case 9404:case 9403:case 9405: return Type::GrayGlazedTerracotta;
			case 9323:case 9320:case 9324:case 9321:case 9325:case 9322: return Type::GrayShulkerBox;
			case 4102: return Type::GrayStainedGlass;
			case 7117:case 7090:case 7094:case 7098:case 7102:case 7106:case 7110:case 7114:case 7087:case 7091:case 7095:case 7099:case 7103:case 7107:case 7111:case 7115:case 7088:case 7092:case 7096:case 7100:case 7104:case 7108:case 7112:case 7116:case 7089:case 7093:case 7097:case 7101:case 7105:case 7109:case 7113:case 7118: return Type::GrayStainedGlassPane;
			case 6854: return Type::GrayTerracotta;
			case 8182:case 8183:case 8181:case 8184: return Type::GrayWallBanner;
			case 1391: return Type::GrayWool;
			case 8116:case 8117:case 8118:case 8119:case 8105:case 8106:case 8107:case 8108:case 8109:case 8110:case 8111:case 8112:case 8113:case 8114:case 8115:case 8120: return Type::GreenBanner;
			case 1257:case 1261:case 1265:case 1269:case 1258:case 1262:case 1266:case 1270:case 1259:case 1263:case 1267:case 1271:case 1260:case 1264:case 1268:case 1272: return Type::GreenBed;
			case 7879: return Type::GreenCarpet;
			case 9451: return Type::GreenConcrete;
			case 9467: return Type::GreenConcretePowder;
			case 9426:case 9428:case 9427:case 9429: return Type::GreenGlazedTerracotta;
			case 9361:case 9358:case 9359:case 9356:case 9360:case 9357: return Type::GreenShulkerBox;
			case 4108: return Type::GreenStainedGlass;
			case 7303:case 7307:case 7280:case 7284:case 7288:case 7292:case 7296:case 7300:case 7304:case 7308:case 7281:case 7285:case 7289:case 7293:case 7297:case 7301:case 7305:case 7309:case 7282:case 7286:case 7290:case 7294:case 7298:case 7302:case 7306:case 7279:case 7283:case 7287:case 7291:case 7295:case 7299:case 7310: return Type::GreenStainedGlassPane;
			case 6860: return Type::GreenTerracotta;
			case 8205:case 8207:case 8206:case 8208: return Type::GreenWallBanner;
			case 1397: return Type::GreenWool;
			case 14822:case 14824:case 14826:case 14828:case 14830:case 14832:case 14821:case 14823:case 14825:case 14827:case 14829:case 14831: return Type::Grindstone;
			case 7864:case 7865:case 7863: return Type::HayBale;
			case 6676:case 6662:case 6663:case 6664:case 6665:case 6666:case 6667:case 6668:case 6669:case 6670:case 6671:case 6672:case 6673:case 6674:case 6675:case 6677: return Type::HeavyWeightedPressurePlate;
			case 15824: return Type::HoneyBlock;
			case 15825: return Type::HoneycombBlock;
			case 6736:case 6737:case 6728:case 6729:case 6730:case 6731:case 6732:case 6733:case 6734:case 6735: return Type::Hopper;
			case 9538:case 9539: return Type::HornCoral;
			case 9519: return Type::HornCoralBlock;
			case 9558:case 9559: return Type::HornCoralFan;
			case 9634:case 9638:case 9635:case 9632:case 9636:case 9633:case 9637:case 9639: return Type::HornCoralWallFan;
			case 3929: return Type::Ice;
			case 4504: return Type::InfestedChiseledStoneBricks;
			case 4500: return Type::InfestedCobblestone;
			case 4503: return Type::InfestedCrackedStoneBricks;
			case 4502: return Type::InfestedMossyStoneBricks;
			case 4499: return Type::InfestedStone;
			case 4501: return Type::InfestedStoneBricks;
			case 4699:case 4703:case 4707:case 4711:case 4715:case 4719:case 4723:case 4727:case 4700:case 4704:case 4708:case 4712:case 4716:case 4720:case 4724:case 4697:case 4701:case 4705:case 4709:case 4713:case 4717:case 4721:case 4725:case 4698:case 4702:case 4706:case 4710:case 4714:case 4718:case 4722:case 4726:case 4728: return Type::IronBars;
			case 1428: return Type::IronBlock;
			case 3862:case 3870:case 3815:case 3823:case 3831:case 3839:case 3847:case 3855:case 3863:case 3871:case 3816:case 3824:case 3832:case 3840:case 3848:case 3856:case 3864:case 3809:case 3817:case 3825:case 3833:case 3841:case 3849:case 3857:case 3865:case 3810:case 3818:case 3826:case 3834:case 3842:case 3850:case 3858:case 3866:case 3811:case 3819:case 3827:case 3835:case 3843:case 3851:case 3859:case 3867:case 3812:case 3820:case 3828:case 3836:case 3844:case 3852:case 3860:case 3868:case 3813:case 3821:case 3829:case 3837:case 3845:case 3853:case 3861:case 3869:case 3814:case 3822:case 3830:case 3838:case 3846:case 3854:case 3872: return Type::IronDoor;
			case 70: return Type::IronOre;
			case 7597:case 7550:case 7566:case 7582:case 7598:case 7551:case 7567:case 7583:case 7599:case 7552:case 7568:case 7584:case 7537:case 7553:case 7569:case 7585:case 7538:case 7554:case 7570:case 7586:case 7539:case 7555:case 7571:case 7587:case 7540:case 7556:case 7572:case 7588:case 7541:case 7557:case 7573:case 7589:case 7542:case 7558:case 7574:case 7590:case 7543:case 7559:case 7575:case 7591:case 7544:case 7560:case 7576:case 7592:case 7545:case 7561:case 7577:case 7593:case 7546:case 7562:case 7578:case 7594:case 7547:case 7563:case 7579:case 7595:case 7548:case 7564:case 7580:case 7596:case 7549:case 7565:case 7581:case 7600: return Type::IronTrapdoor;
			case 4021:case 4020:case 4022:case 4023: return Type::JackOLantern;
			case 15750:case 15739:case 15741:case 15743:case 15745:case 15747:case 15749:case 15740:case 15742:case 15744:case 15746:case 15748: return Type::Jigsaw;
			case 3964:case 3965: return Type::Jukebox;
			case 6435:case 6439:case 6420:case 6424:case 6428:case 6432:case 6436:case 6440:case 6421:case 6425:case 6429:case 6433:case 6437:case 6441:case 6418:case 6422:case 6426:case 6430:case 6434:case 6438:case 6419:case 6423:case 6427:case 6431: return Type::JungleButton;
			case 8892:case 8924:case 8893:case 8925:case 8894:case 8926:case 8895:case 8927:case 8896:case 8928:case 8897:case 8866:case 8898:case 8867:case 8899:case 8868:case 8900:case 8869:case 8901:case 8870:case 8902:case 8871:case 8903:case 8872:case 8904:case 8873:case 8905:case 8874:case 8906:case 8875:case 8907:case 8876:case 8908:case 8877:case 8909:case 8878:case 8910:case 8879:case 8911:case 8880:case 8912:case 8881:case 8913:case 8882:case 8914:case 8883:case 8915:case 8884:case 8916:case 8885:case 8917:case 8886:case 8918:case 8887:case 8919:case 8888:case 8920:case 8889:case 8921:case 8890:case 8922:case 8891:case 8923:case 8929: return Type::JungleDoor;
			case 8646:case 8654:case 8662:case 8670:case 8647:case 8655:case 8663:case 8671:case 8648:case 8656:case 8664:case 8672:case 8649:case 8657:case 8665:case 8642:case 8650:case 8658:case 8666:case 8643:case 8651:case 8659:case 8667:case 8644:case 8652:case 8660:case 8668:case 8645:case 8653:case 8661:case 8669:case 8673: return Type::JungleFence;
			case 8491:case 8499:case 8507:case 8484:case 8492:case 8500:case 8508:case 8485:case 8493:case 8501:case 8509:case 8486:case 8494:case 8502:case 8510:case 8487:case 8495:case 8503:case 8511:case 8488:case 8496:case 8504:case 8512:case 8489:case 8497:case 8505:case 8482:case 8490:case 8498:case 8506:case 8483:case 8513: return Type::JungleFenceGate;
			case 198:case 191:case 199:case 192:case 200:case 193:case 194:case 187:case 195:case 188:case 196:case 189:case 197:case 190: return Type::JungleLeaves;
			case 82:case 83:case 84: return Type::JungleLog;
			case 18: return Type::JunglePlanks;
			case 3879:case 3880: return Type::JunglePressurePlate;
			case 27:case 28: return Type::JungleSapling;
			case 3514:case 3516:case 3518:case 3520:case 3522:case 3524:case 3526:case 3528:case 3530:case 3532:case 3534:case 3536:case 3538:case 3509:case 3511:case 3513:case 3515:case 3517:case 3519:case 3521:case 3523:case 3525:case 3527:case 3529:case 3531:case 3533:case 3535:case 3537:case 3539:case 3510:case 3512:case 3540: return Type::JungleSign;
			case 8318:case 8322:case 8319:case 8323:case 8320:case 8321: return Type::JungleSlab;
			case 5584:case 5585:case 5586:case 5587:case 5588:case 5589:case 5590:case 5591:case 5592:case 5593:case 5594:case 5595:case 5596:case 5597:case 5598:case 5599:case 5600:case 5601:case 5602:case 5603:case 5604:case 5605:case 5606:case 5607:case 5608:case 5609:case 5610:case 5611:case 5612:case 5613:case 5614:case 5615:case 5616:case 5617:case 5618:case 5619:case 5620:case 5621:case 5622:case 5623:case 5624:case 5625:case 5626:case 5627:case 5564:case 5628:case 5565:case 5629:case 5566:case 5630:case 5567:case 5631:case 5568:case 5632:case 5569:case 5633:case 5570:case 5634:case 5571:case 5635:case 5572:case 5636:case 5573:case 5637:case 5574:case 5638:case 5575:case 5639:case 5576:case 5640:case 5577:case 5641:case 5578:case 5642:case 5579:case 5643:case 5580:case 5581:case 5582:case 5583: return Type::JungleStairs;
			case 4321:case 4337:case 4353:case 4306:case 4322:case 4338:case 4354:case 4307:case 4323:case 4339:case 4355:case 4308:case 4324:case 4340:case 4356:case 4309:case 4325:case 4341:case 4357:case 4310:case 4326:case 4342:case 4358:case 4311:case 4327:case 4343:case 4359:case 4312:case 4328:case 4344:case 4360:case 4313:case 4329:case 4345:case 4361:case 4314:case 4330:case 4346:case 4362:case 4315:case 4331:case 4347:case 4363:case 4316:case 4332:case 4348:case 4364:case 4317:case 4333:case 4349:case 4365:case 4318:case 4334:case 4350:case 4303:case 4319:case 4335:case 4351:case 4304:case 4320:case 4336:case 4352:case 4305:case 4366: return Type::JungleTrapdoor;
			case 3771:case 3772:case 3773:case 3767:case 3768:case 3769:case 3770:case 3774: return Type::JungleWallSign;
			case 118:case 119:case 120: return Type::JungleWood;
			case 9483:case 9491:case 9476:case 9484:case 9492:case 9477:case 9485:case 9493:case 9470:case 9478:case 9486:case 9494:case 9471:case 9479:case 9487:case 9495:case 9472:case 9480:case 9488:case 9473:case 9481:case 9489:case 9474:case 9482:case 9490:case 9475: return Type::Kelp;
			case 9496: return Type::KelpPlant;
			case 3638:case 3639:case 3640:case 3641:case 3642:case 3643:case 3637:case 3644: return Type::Ladder;
			case 14886:case 14887: return Type::Lantern;
			case 233: return Type::LapisBlock;
			case 232: return Type::LapisOre;
			case 7895:case 7896: return Type::LargeFern;
			case 61:case 63:case 50:case 52:case 54:case 56:case 58:case 60:case 62:case 64:case 51:case 53:case 55:case 57:case 59:case 65: return Type::Lava;
			case 14835:case 14837:case 14839:case 14841:case 14843:case 14845:case 14847:case 14834:case 14836:case 14838:case 14840:case 14842:case 14844:case 14846:case 14833:case 14848: return Type::Lectern;
			case 3793:case 3795:case 3797:case 3799:case 3801:case 3803:case 3805:case 3784:case 3786:case 3788:case 3790:case 3792:case 3794:case 3796:case 3798:case 3800:case 3802:case 3804:case 3806:case 3783:case 3785:case 3787:case 3789:case 3791: return Type::Lever;
			case 7951:case 7952:case 7953:case 7954:case 7955:case 7956:case 7957:case 7958:case 7959:case 7945:case 7946:case 7947:case 7948:case 7949:case 7950:case 7960: return Type::LightBlueBanner;
			case 1107:case 1111:case 1100:case 1104:case 1108:case 1097:case 1101:case 1105:case 1109:case 1098:case 1102:case 1106:case 1110:case 1099:case 1103:case 1112: return Type::LightBlueBed;
			case 7869: return Type::LightBlueCarpet;
			case 9441: return Type::LightBlueConcrete;
			case 9457: return Type::LightBlueConcretePowder;
			case 9387:case 9386:case 9388:case 9389: return Type::LightBlueGlazedTerracotta;
			case 9298:case 9299:case 9296:case 9300:case 9297:case 9301: return Type::LightBlueShulkerBox;
			case 4098: return Type::LightBlueStainedGlass;
			case 6962:case 6966:case 6970:case 6974:case 6978:case 6982:case 6986:case 6959:case 6963:case 6967:case 6971:case 6975:case 6979:case 6983:case 6987:case 6960:case 6964:case 6968:case 6972:case 6976:case 6980:case 6984:case 6988:case 6961:case 6965:case 6969:case 6973:case 6977:case 6981:case 6985:case 6989:case 6990: return Type::LightBlueStainedGlassPane;
			case 6850: return Type::LightBlueTerracotta;
			case 8167:case 8165:case 8166:case 8168: return Type::LightBlueWallBanner;
			case 1387: return Type::LightBlueWool;
			case 8026:case 8027:case 8028:case 8029:case 8030:case 8031:case 8032:case 8033:case 8034:case 8035:case 8036:case 8037:case 8038:case 8039:case 8025:case 8040: return Type::LightGrayBanner;
			case 1182:case 1186:case 1190:case 1179:case 1183:case 1187:case 1191:case 1180:case 1184:case 1188:case 1177:case 1181:case 1185:case 1189:case 1178:case 1192: return Type::LightGrayBed;
			case 7874: return Type::LightGrayCarpet;
			case 9446: return Type::LightGrayConcrete;
			case 9462: return Type::LightGrayConcretePowder;
			case 9408:case 9407:case 9406:case 9409: return Type::LightGrayGlazedTerracotta;
			case 9326:case 9330:case 9327:case 9331:case 9328:case 9329: return Type::LightGrayShulkerBox;
			case 4103: return Type::LightGrayStainedGlass;
			case 7148:case 7121:case 7125:case 7129:case 7133:case 7137:case 7141:case 7145:case 7149:case 7122:case 7126:case 7130:case 7134:case 7138:case 7142:case 7146:case 7119:case 7123:case 7127:case 7131:case 7135:case 7139:case 7143:case 7147:case 7120:case 7124:case 7128:case 7132:case 7136:case 7140:case 7144:case 7150: return Type::LightGrayStainedGlassPane;
			case 6855: return Type::LightGrayTerracotta;
			case 8185:case 8186:case 8187:case 8188: return Type::LightGrayWallBanner;
			case 1392: return Type::LightGrayWool;
			case 6646:case 6647:case 6648:case 6649:case 6650:case 6651:case 6652:case 6653:case 6654:case 6655:case 6656:case 6657:case 6658:case 6659:case 6660:case 6661: return Type::LightWeightedPressurePlate;
			case 7887:case 7888: return Type::Lilac;
			case 1424: return Type::LilyOfTheValley;
			case 5014: return Type::LilyPad;
			case 7981:case 7982:case 7983:case 7984:case 7985:case 7986:case 7987:case 7988:case 7989:case 7990:case 7991:case 7977:case 7978:case 7979:case 7980:case 7992: return Type::LimeBanner;
			case 1137:case 1141:case 1130:case 1134:case 1138:case 1142:case 1131:case 1135:case 1139:case 1143:case 1132:case 1136:case 1140:case 1129:case 1133:case 1144: return Type::LimeBed;
			case 7871: return Type::LimeCarpet;
			case 9443: return Type::LimeConcrete;
			case 9459: return Type::LimeConcretePowder;
			case 9396:case 9395:case 9394:case 9397: return Type::LimeGlazedTerracotta;
			case 9312:case 9309:case 9313:case 9310:case 9311:case 9308: return Type::LimeShulkerBox;
			case 4100: return Type::LimeStainedGlass;
			case 7024:case 7028:case 7032:case 7036:case 7040:case 7044:case 7048:case 7052:case 7025:case 7029:case 7033:case 7037:case 7041:case 7045:case 7049:case 7053:case 7026:case 7030:case 7034:case 7038:case 7042:case 7046:case 7050:case 7023:case 7027:case 7031:case 7035:case 7039:case 7043:case 7047:case 7051:case 7054: return Type::LimeStainedGlassPane;
			case 6852: return Type::LimeTerracotta;
			case 8173:case 8174:case 8175:case 8176: return Type::LimeWallBanner;
			case 1389: return Type::LimeWool;
			case 15838: return Type::Lodestone;
			case 14787:case 14789:case 14788:case 14790: return Type::Loom;
			case 7936:case 7937:case 7938:case 7939:case 7940:case 7941:case 7942:case 7943:case 7929:case 7930:case 7931:case 7932:case 7933:case 7934:case 7935:case 7944: return Type::MagentaBanner;
			case 1092:case 1081:case 1085:case 1089:case 1093:case 1082:case 1086:case 1090:case 1094:case 1083:case 1087:case 1091:case 1095:case 1084:case 1088:case 1096: return Type::MagentaBed;
			case 7868: return Type::MagentaCarpet;
			case 9440: return Type::MagentaConcrete;
			case 9456: return Type::MagentaConcretePowder;
			case 9384:case 9383:case 9382:case 9385: return Type::MagentaGlazedTerracotta;
			case 9291:case 9295:case 9292:case 9293:case 9290:case 9294: return Type::MagentaShulkerBox;
			case 4097: return Type::MagentaStainedGlass;
			case 6931:case 6935:case 6939:case 6943:case 6947:case 6951:case 6955:case 6928:case 6932:case 6936:case 6940:case 6944:case 6948:case 6952:case 6956:case 6929:case 6933:case 6937:case 6941:case 6945:case 6949:case 6953:case 6957:case 6930:case 6934:case 6938:case 6942:case 6946:case 6950:case 6954:case 6927:case 6958: return Type::MagentaStainedGlassPane;
			case 6849: return Type::MagentaTerracotta;
			case 8161:case 8162:case 8163:case 8164: return Type::MagentaWallBanner;
			case 1386: return Type::MagentaWool;
			case 9253: return Type::MagmaBlock;
			case 4763: return Type::Melon;
			case 4783:case 4785:case 4780:case 4782:case 4784:case 4786:case 4781:case 4787: return Type::MelonStem;
			case 1433: return Type::MossyCobblestone;
			case 10817:case 10814:case 10818:case 10815:case 10816:case 10813: return Type::MossyCobblestoneSlab;
			case 9989:case 9990:case 9991:case 9992:case 9993:case 9994:case 9995:case 9996:case 9997:case 9998:case 9999:case 10000:case 10001:case 10002:case 10003:case 10004:case 10005:case 10006:case 10007:case 10008:case 10009:case 10010:case 10011:case 10012:case 10013:case 10014:case 10015:case 10016:case 10017:case 10018:case 10019:case 10020:case 10021:case 10022:case 10023:case 10024:case 10025:case 10026:case 10027:case 10028:case 10029:case 10030:case 10031:case 10032:case 10033:case 10034:case 10035:case 10036:case 10037:case 10038:case 10039:case 10040:case 10041:case 10042:case 10043:case 10044:case 10045:case 10046:case 10047:case 10048:case 10049:case 10050:case 10051:case 10052:case 10053:case 10054:case 10055:case 10056:case 10057:case 10058:case 10059:case 10060:case 10061:case 10062:case 10063:case 10064:case 10065:case 10066:case 10067:case 10068: return Type::MossyCobblestoneStairs;
			case 6036:case 6038:case 6040:case 6042:case 6044:case 6046:case 6048:case 6050:case 6052:case 6054:case 6056:case 6058:case 6060:case 6062:case 6064:case 6066:case 6068:case 6070:case 6072:case 6074:case 6076:case 6078:case 6080:case 6082:case 6084:case 6086:case 6088:case 6090:case 6092:case 6094:case 6096:case 6098:case 6100:case 6102:case 6104:case 6106:case 6108:case 6110:case 6112:case 6114:case 6116:case 6118:case 6120:case 6122:case 6124:case 6126:case 6128:case 6130:case 6132:case 6134:case 6136:case 6138:case 6140:case 6142:case 6144:case 6146:case 6148:case 6150:case 6152:case 6154:case 6156:case 6158:case 6160:case 6162:case 6164:case 6166:case 6168:case 6170:case 6172:case 6174:case 6176:case 6178:case 6180:case 6182:case 6184:case 6186:case 6188:case 6190:case 6192:case 6194:case 6196:case 6198:case 6200:case 6202:case 6204:case 6206:case 6208:case 6210:case 6212:case 6214:case 6216:case 6218:case 6220:case 6222:case 6224:case 6226:case 6228:case 6230:case 6232:case 6234:case 6236:case 6238:case 6240:case 6242:case 6244:case 6246:case 6248:case 6250:case 6252:case 6254:case 6256:case 6258:case 6260:case 6262:case 6264:case 6266:case 6268:case 6270:case 6272:case 6274:case 6276:case 6278:case 6280:case 6282:case 6284:case 6286:case 6288:case 6290:case 6292:case 6294:case 6296:case 6298:case 6300:case 6302:case 6304:case 5981:case 5983:case 5985:case 5987:case 5989:case 5991:case 5993:case 5995:case 5997:case 5999:case 6001:case 6003:case 6005:case 6007:case 6009:case 6011:case 6013:case 6015:case 6017:case 6019:case 6021:case 6023:case 6025:case 6027:case 6029:case 6031:case 6033:case 6035:case 6037:case 6039:case 6041:case 6043:case 6045:case 6047:case 6049:case 6051:case 6053:case 6055:case 6057:case 6059:case 6061:case 6063:case 6065:case 6067:case 6069:case 6071:case 6073:case 6075:case 6077:case 6079:case 6081:case 6083:case 6085:case 6087:case 6089:case 6091:case 6093:case 6095:case 6097:case 6099:case 6101:case 6103:case 6105:case 6107:case 6109:case 6111:case 6113:case 6115:case 6117:case 6119:case 6121:case 6123:case 6125:case 6127:case 6129:case 6131:case 6133:case 6135:case 6137:case 6139:case 6141:case 6143:case 6145:case 6147:case 6149:case 6151:case 6153:case 6155:case 6157:case 6159:case 6161:case 6163:case 6165:case 6167:case 6169:case 6171:case 6173:case 6175:case 6177:case 6179:case 6181:case 6183:case 6185:case 6187:case 6189:case 6191:case 6193:case 6195:case 6197:case 6199:case 6201:case 6203:case 6205:case 6207:case 6209:case 6211:case 6213:case 6215:case 6217:case 6219:case 6221:case 6223:case 6225:case 6227:case 6229:case 6231:case 6233:case 6235:case 6237:case 6239:case 6241:case 6243:case 6245:case 6247:case 6249:case 6251:case 6253:case 6255:case 6257:case 6259:case 6261:case 6263:case 6265:case 6267:case 6269:case 6271:case 6273:case 6275:case 6277:case 6279:case 6281:case 6283:case 6285:case 6287:case 6289:case 6291:case 6293:case 6295:case 6297:case 6299:case 6301:case 6303:case 5982:case 5984:case 5986:case 5988:case 5990:case 5992:case 5994:case 5996:case 5998:case 6000:case 6002:case 6004:case 6006:case 6008:case 6010:case 6012:case 6014:case 6016:case 6018:case 6020:case 6022:case 6024:case 6026:case 6028:case 6030:case 6032:case 6034: return Type::MossyCobblestoneWall;
			case 10803:case 10804:case 10801:case 10805:case 10802:case 10806: return Type::MossyStoneBrickSlab;
			case 9833:case 9834:case 9835:case 9836:case 9837:case 9838:case 9839:case 9840:case 9841:case 9842:case 9843:case 9844:case 9845:case 9846:case 9847:case 9848:case 9849:case 9850:case 9851:case 9852:case 9853:case 9854:case 9855:case 9856:case 9857:case 9858:case 9859:case 9860:case 9861:case 9862:case 9863:case 9864:case 9865:case 9866:case 9867:case 9868:case 9869:case 9870:case 9871:case 9872:case 9873:case 9874:case 9875:case 9876:case 9877:case 9878:case 9879:case 9880:case 9881:case 9882:case 9883:case 9884:case 9885:case 9886:case 9887:case 9888:case 9889:case 9890:case 9891:case 9892:case 9893:case 9894:case 9895:case 9896:case 9897:case 9898:case 9899:case 9900:case 9901:case 9902:case 9903:case 9904:case 9905:case 9906:case 9907:case 9908:case 9829:case 9830:case 9831:case 9832: return Type::MossyStoneBrickStairs;
			case 12056:case 12060:case 12064:case 12068:case 12072:case 12076:case 12080:case 12084:case 12088:case 12092:case 12096:case 12100:case 12104:case 12108:case 12112:case 12116:case 12120:case 12124:case 12128:case 12132:case 12136:case 12140:case 12144:case 12148:case 12152:case 12156:case 12160:case 11841:case 11845:case 11849:case 11853:case 11857:case 11861:case 11865:case 11869:case 11873:case 11877:case 11881:case 11885:case 11889:case 11893:case 11897:case 11901:case 11905:case 11909:case 11913:case 11917:case 11921:case 11925:case 11929:case 11933:case 11937:case 11941:case 11945:case 11949:case 11953:case 11957:case 11961:case 11965:case 11969:case 11973:case 11977:case 11981:case 11985:case 11989:case 11993:case 11997:case 12001:case 12005:case 12009:case 12013:case 12017:case 12021:case 12025:case 12029:case 12033:case 12037:case 12041:case 12045:case 12049:case 12053:case 12057:case 12061:case 12065:case 12069:case 12073:case 12077:case 12081:case 12085:case 12089:case 12093:case 12097:case 12101:case 12105:case 12109:case 12113:case 12117:case 12121:case 12125:case 12129:case 12133:case 12137:case 12141:case 12145:case 12149:case 12153:case 12157:case 12161:case 11842:case 11846:case 11850:case 11854:case 11858:case 11862:case 11866:case 11870:case 11874:case 11878:case 11882:case 11886:case 11890:case 11894:case 11898:case 11902:case 11906:case 11910:case 11914:case 11918:case 11922:case 11926:case 11930:case 11934:case 11938:case 11942:case 11946:case 11950:case 11954:case 11958:case 11962:case 11966:case 11970:case 11974:case 11978:case 11982:case 11986:case 11990:case 11994:case 11998:case 12002:case 12006:case 12010:case 12014:case 12018:case 12022:case 12026:case 12030:case 12034:case 12038:case 12042:case 12046:case 12050:case 12054:case 12058:case 12062:case 12066:case 12070:case 12074:case 12078:case 12082:case 12086:case 12090:case 12094:case 12098:case 12102:case 12106:case 12110:case 12114:case 12118:case 12122:case 12126:case 12130:case 12134:case 12138:case 12142:case 12146:case 12150:case 12154:case 12158:case 12162:case 11839:case 11843:case 11847:case 11851:case 11855:case 11859:case 11863:case 11867:case 11871:case 11875:case 11879:case 11883:case 11887:case 11891:case 11895:case 11899:case 11903:case 11907:case 11911:case 11915:case 11919:case 11923:case 11927:case 11931:case 11935:case 11939:case 11943:case 11947:case 11951:case 11955:case 11959:case 11963:case 11967:case 11971:case 11975:case 11979:case 11983:case 11987:case 11991:case 11995:case 11999:case 12003:case 12007:case 12011:case 12015:case 12019:case 12023:case 12027:case 12031:case 12035:case 12039:case 12043:case 12047:case 12051:case 12055:case 12059:case 12063:case 12067:case 12071:case 12075:case 12079:case 12083:case 12087:case 12091:case 12095:case 12099:case 12103:case 12107:case 12111:case 12115:case 12119:case 12123:case 12127:case 12131:case 12135:case 12139:case 12143:case 12147:case 12151:case 12155:case 12159:case 11840:case 11844:case 11848:case 11852:case 11856:case 11860:case 11864:case 11868:case 11872:case 11876:case 11880:case 11884:case 11888:case 11892:case 11896:case 11900:case 11904:case 11908:case 11912:case 11916:case 11920:case 11924:case 11928:case 11932:case 11936:case 11940:case 11944:case 11948:case 11952:case 11956:case 11960:case 11964:case 11968:case 11972:case 11976:case 11980:case 11984:case 11988:case 11992:case 11996:case 12000:case 12004:case 12008:case 12012:case 12016:case 12020:case 12024:case 12028:case 12032:case 12036:case 12040:case 12044:case 12048:case 12052: return Type::MossyStoneBrickWall;
			case 4496: return Type::MossyStoneBricks;
			case 1407:case 1411:case 1400:case 1404:case 1408:case 1401:case 1405:case 1409:case 1402:case 1406:case 1410:case 1403: return Type::MovingPiston;
			case 4636:case 4652:case 4668:case 4684:case 4637:case 4653:case 4669:case 4685:case 4638:case 4654:case 4670:case 4686:case 4639:case 4655:case 4671:case 4687:case 4640:case 4656:case 4672:case 4688:case 4641:case 4657:case 4673:case 4689:case 4642:case 4658:case 4674:case 4690:case 4643:case 4659:case 4675:case 4691:case 4644:case 4660:case 4676:case 4692:case 4645:case 4661:case 4677:case 4693:case 4646:case 4662:case 4678:case 4694:case 4647:case 4663:case 4679:case 4695:case 4648:case 4664:case 4680:case 4633:case 4649:case 4665:case 4681:case 4634:case 4650:case 4666:case 4682:case 4635:case 4651:case 4667:case 4683:case 4696: return Type::MushroomStem;
			case 5012:case 5013: return Type::Mycelium;
			case 5040:case 5044:case 5017:case 5021:case 5025:case 5029:case 5033:case 5037:case 5041:case 5045:case 5018:case 5022:case 5026:case 5030:case 5034:case 5038:case 5042:case 5046:case 5019:case 5023:case 5027:case 5031:case 5035:case 5039:case 5043:case 5016:case 5020:case 5024:case 5028:case 5032:case 5036:case 5047: return Type::NetherBrickFence;
			case 8388:case 8385:case 8389:case 8386:case 8387:case 8384: return Type::NetherBrickSlab;
			case 5076:case 5077:case 5078:case 5079:case 5080:case 5081:case 5082:case 5083:case 5084:case 5085:case 5086:case 5087:case 5088:case 5089:case 5090:case 5091:case 5092:case 5093:case 5094:case 5095:case 5096:case 5097:case 5098:case 5099:case 5100:case 5101:case 5102:case 5103:case 5104:case 5105:case 5106:case 5107:case 5108:case 5109:case 5110:case 5111:case 5048:case 5112:case 5049:case 5113:case 5050:case 5114:case 5051:case 5115:case 5052:case 5116:case 5053:case 5117:case 5054:case 5118:case 5055:case 5119:case 5056:case 5120:case 5057:case 5121:case 5058:case 5122:case 5059:case 5123:case 5060:case 5124:case 5061:case 5125:case 5062:case 5126:case 5063:case 5127:case 5064:case 5065:case 5066:case 5067:case 5068:case 5069:case 5070:case 5071:case 5072:case 5073:case 5074:case 5075: return Type::NetherBrickStairs;
			case 13078:case 13082:case 13086:case 13090:case 13094:case 13098:case 13102:case 13106:case 13110:case 13114:case 13118:case 13122:case 13126:case 13130:case 13134:case 12811:case 12815:case 12819:case 12823:case 12827:case 12831:case 12835:case 12839:case 12843:case 12847:case 12851:case 12855:case 12859:case 12863:case 12867:case 12871:case 12875:case 12879:case 12883:case 12887:case 12891:case 12895:case 12899:case 12903:case 12907:case 12911:case 12915:case 12919:case 12923:case 12927:case 12931:case 12935:case 12939:case 12943:case 12947:case 12951:case 12955:case 12959:case 12963:case 12967:case 12971:case 12975:case 12979:case 12983:case 12987:case 12991:case 12995:case 12999:case 13003:case 13007:case 13011:case 13015:case 13019:case 13023:case 13027:case 13031:case 13035:case 13039:case 13043:case 13047:case 13051:case 13055:case 13059:case 13063:case 13067:case 13071:case 13075:case 13079:case 13083:case 13087:case 13091:case 13095:case 13099:case 13103:case 13107:case 13111:case 13115:case 13119:case 13123:case 13127:case 13131:case 12812:case 12816:case 12820:case 12824:case 12828:case 12832:case 12836:case 12840:case 12844:case 12848:case 12852:case 12856:case 12860:case 12864:case 12868:case 12872:case 12876:case 12880:case 12884:case 12888:case 12892:case 12896:case 12900:case 12904:case 12908:case 12912:case 12916:case 12920:case 12924:case 12928:case 12932:case 12936:case 12940:case 12944:case 12948:case 12952:case 12956:case 12960:case 12964:case 12968:case 12972:case 12976:case 12980:case 12984:case 12988:case 12992:case 12996:case 13000:case 13004:case 13008:case 13012:case 13016:case 13020:case 13024:case 13028:case 13032:case 13036:case 13040:case 13044:case 13048:case 13052:case 13056:case 13060:case 13064:case 13068:case 13072:case 13076:case 13080:case 13084:case 13088:case 13092:case 13096:case 13100:case 13104:case 13108:case 13112:case 13116:case 13120:case 13124:case 13128:case 13132:case 12813:case 12817:case 12821:case 12825:case 12829:case 12833:case 12837:case 12841:case 12845:case 12849:case 12853:case 12857:case 12861:case 12865:case 12869:case 12873:case 12877:case 12881:case 12885:case 12889:case 12893:case 12897:case 12901:case 12905:case 12909:case 12913:case 12917:case 12921:case 12925:case 12929:case 12933:case 12937:case 12941:case 12945:case 12949:case 12953:case 12957:case 12961:case 12965:case 12969:case 12973:case 12977:case 12981:case 12985:case 12989:case 12993:case 12997:case 13001:case 13005:case 13009:case 13013:case 13017:case 13021:case 13025:case 13029:case 13033:case 13037:case 13041:case 13045:case 13049:case 13053:case 13057:case 13061:case 13065:case 13069:case 13073:case 13077:case 13081:case 13085:case 13089:case 13093:case 13097:case 13101:case 13105:case 13109:case 13113:case 13117:case 13121:case 13125:case 13129:case 13133:case 12814:case 12818:case 12822:case 12826:case 12830:case 12834:case 12838:case 12842:case 12846:case 12850:case 12854:case 12858:case 12862:case 12866:case 12870:case 12874:case 12878:case 12882:case 12886:case 12890:case 12894:case 12898:case 12902:case 12906:case 12910:case 12914:case 12918:case 12922:case 12926:case 12930:case 12934:case 12938:case 12942:case 12946:case 12950:case 12954:case 12958:case 12962:case 12966:case 12970:case 12974:case 12978:case 12982:case 12986:case 12990:case 12994:case 12998:case 13002:case 13006:case 13010:case 13014:case 13018:case 13022:case 13026:case 13030:case 13034:case 13038:case 13042:case 13046:case 13050:case 13054:case 13058:case 13062:case 13066:case 13070:case 13074: return Type::NetherBrickWall;
			case 5015: return Type::NetherBricks;
			case 72: return Type::NetherGoldOre;
			case 4014:case 4015: return Type::NetherPortal;
			case 6727: return Type::NetherQuartzOre;
			case 14974: return Type::NetherSprouts;
			case 5128:case 5129:case 5130:case 5131: return Type::NetherWart;
			case 9254: return Type::NetherWartBlock;
			case 15826: return Type::NetheriteBlock;
			case 3999: return Type::Netherrack;
			case 249:case 250:case 251:case 252:case 253:case 254:case 255:case 256:case 257:case 258:case 259:case 260:case 261:case 262:case 263:case 264:case 265:case 266:case 267:case 268:case 269:case 270:case 271:case 272:case 273:case 274:case 275:case 276:case 277:case 278:case 279:case 280:case 281:case 282:case 283:case 284:case 285:case 286:case 287:case 288:case 289:case 290:case 291:case 292:case 293:case 294:case 295:case 296:case 297:case 298:case 299:case 300:case 301:case 302:case 303:case 304:case 305:case 306:case 307:case 308:case 309:case 310:case 311:case 312:case 313:case 314:case 315:case 316:case 317:case 318:case 319:case 320:case 321:case 322:case 323:case 324:case 325:case 326:case 327:case 328:case 329:case 330:case 331:case 332:case 333:case 334:case 335:case 336:case 337:case 338:case 339:case 340:case 341:case 342:case 343:case 344:case 345:case 346:case 347:case 348:case 349:case 350:case 351:case 352:case 353:case 354:case 355:case 356:case 357:case 358:case 359:case 360:case 361:case 362:case 363:case 364:case 365:case 366:case 367:case 368:case 369:case 370:case 371:case 372:case 373:case 374:case 375:case 376:case 377:case 378:case 379:case 380:case 381:case 382:case 383:case 384:case 385:case 386:case 387:case 388:case 389:case 390:case 391:case 392:case 393:case 394:case 395:case 396:case 397:case 398:case 399:case 400:case 401:case 402:case 403:case 404:case 405:case 406:case 407:case 408:case 409:case 410:case 411:case 412:case 413:case 414:case 415:case 416:case 417:case 418:case 419:case 420:case 421:case 422:case 423:case 424:case 425:case 426:case 427:case 428:case 429:case 430:case 431:case 432:case 433:case 434:case 435:case 436:case 437:case 438:case 439:case 440:case 441:case 442:case 443:case 444:case 445:case 446:case 447:case 448:case 449:case 450:case 451:case 452:case 453:case 454:case 455:case 456:case 457:case 458:case 459:case 460:case 461:case 462:case 463:case 464:case 465:case 466:case 467:case 468:case 469:case 470:case 471:case 472:case 473:case 474:case 475:case 476:case 477:case 478:case 479:case 480:case 481:case 482:case 483:case 484:case 485:case 486:case 487:case 488:case 489:case 490:case 491:case 492:case 493:case 494:case 495:case 496:case 497:case 498:case 499:case 500:case 501:case 502:case 503:case 504:case 505:case 506:case 507:case 508:case 509:case 510:case 511:case 512:case 513:case 514:case 515:case 516:case 517:case 518:case 519:case 520:case 521:case 522:case 523:case 524:case 525:case 526:case 527:case 528:case 529:case 530:case 531:case 532:case 533:case 534:case 535:case 536:case 537:case 538:case 539:case 540:case 541:case 542:case 543:case 544:case 545:case 546:case 547:case 548:case 549:case 550:case 551:case 552:case 553:case 554:case 555:case 556:case 557:case 558:case 559:case 560:case 561:case 562:case 563:case 564:case 565:case 566:case 567:case 568:case 569:case 570:case 571:case 572:case 573:case 574:case 575:case 576:case 577:case 578:case 579:case 580:case 581:case 582:case 583:case 584:case 585:case 586:case 587:case 588:case 589:case 590:case 591:case 592:case 593:case 594:case 595:case 596:case 597:case 598:case 599:case 600:case 601:case 602:case 603:case 604:case 605:case 606:case 607:case 608:case 609:case 610:case 611:case 612:case 613:case 614:case 615:case 616:case 617:case 618:case 619:case 620:case 621:case 622:case 623:case 624:case 625:case 626:case 627:case 628:case 629:case 630:case 631:case 632:case 633:case 634:case 635:case 636:case 637:case 638:case 639:case 640:case 641:case 642:case 643:case 644:case 645:case 646:case 647:case 648:case 649:case 650:case 651:case 652:case 653:case 654:case 655:case 656:case 657:case 658:case 659:case 660:case 661:case 662:case 663:case 664:case 665:case 666:case 667:case 668:case 669:case 670:case 671:case 672:case 673:case 674:case 675:case 676:case 677:case 678:case 679:case 680:case 681:case 682:case 683:case 684:case 685:case 686:case 687:case 688:case 689:case 690:case 691:case 692:case 693:case 694:case 695:case 696:case 697:case 698:case 699:case 700:case 701:case 702:case 703:case 704:case 705:case 706:case 707:case 708:case 709:case 710:case 711:case 712:case 713:case 714:case 715:case 716:case 717:case 718:case 719:case 720:case 721:case 722:case 723:case 724:case 725:case 726:case 727:case 728:case 729:case 730:case 731:case 732:case 733:case 734:case 735:case 736:case 737:case 738:case 739:case 740:case 741:case 742:case 743:case 744:case 745:case 746:case 747:case 748:case 749:case 750:case 751:case 752:case 753:case 754:case 755:case 756:case 757:case 758:case 759:case 760:case 761:case 762:case 763:case 764:case 765:case 766:case 767:case 768:case 769:case 770:case 771:case 772:case 773:case 774:case 775:case 776:case 777:case 778:case 779:case 780:case 781:case 782:case 783:case 784:case 785:case 786:case 787:case 788:case 789:case 790:case 791:case 792:case 793:case 794:case 795:case 796:case 797:case 798:case 799:case 800:case 801:case 802:case 803:case 804:case 805:case 806:case 807:case 808:case 809:case 810:case 811:case 812:case 813:case 814:case 815:case 816:case 817:case 818:case 819:case 820:case 821:case 822:case 823:case 824:case 825:case 826:case 827:case 828:case 829:case 830:case 831:case 832:case 833:case 834:case 835:case 836:case 837:case 838:case 839:case 840:case 841:case 842:case 843:case 844:case 845:case 846:case 847:case 848:case 849:case 850:case 851:case 852:case 853:case 854:case 855:case 856:case 857:case 858:case 859:case 860:case 861:case 862:case 863:case 864:case 865:case 866:case 867:case 868:case 869:case 870:case 871:case 872:case 873:case 874:case 875:case 876:case 877:case 878:case 879:case 880:case 881:case 882:case 883:case 884:case 885:case 886:case 887:case 888:case 889:case 890:case 891:case 892:case 893:case 894:case 895:case 896:case 897:case 898:case 899:case 900:case 901:case 902:case 903:case 904:case 905:case 906:case 907:case 908:case 909:case 910:case 911:case 912:case 913:case 914:case 915:case 916:case 917:case 918:case 919:case 920:case 921:case 922:case 923:case 924:case 925:case 926:case 927:case 928:case 929:case 930:case 931:case 932:case 933:case 934:case 935:case 936:case 937:case 938:case 939:case 940:case 941:case 942:case 943:case 944:case 945:case 946:case 947:case 948:case 949:case 950:case 951:case 952:case 953:case 954:case 955:case 956:case 957:case 958:case 959:case 960:case 961:case 962:case 963:case 964:case 965:case 966:case 967:case 968:case 969:case 970:case 971:case 972:case 973:case 974:case 975:case 976:case 977:case 978:case 979:case 980:case 981:case 982:case 983:case 984:case 985:case 986:case 987:case 988:case 989:case 990:case 991:case 992:case 993:case 994:case 995:case 996:case 997:case 998:case 999:case 1000:case 1001:case 1002:case 1003:case 1004:case 1005:case 1006:case 1007:case 1008:case 1009:case 1010:case 1011:case 1012:case 1013:case 1014:case 1015:case 1016:case 1017:case 1018:case 1019:case 1020:case 1021:case 1022:case 1023:case 1024:case 1045:case 1046:case 1047:case 1048:case 1025:case 1026:case 1027:case 1028:case 1029:case 1030:case 1031:case 1032:case 1033:case 1034:case 1035:case 1036:case 1037:case 1038:case 1039:case 1040:case 1041:case 1042:case 1043:case 1044: return Type::NoteBlock;
			case 6346:case 6350:case 6354:case 6358:case 6362:case 6366:case 6347:case 6351:case 6355:case 6359:case 6363:case 6367:case 6348:case 6352:case 6356:case 6360:case 6364:case 6368:case 6349:case 6353:case 6357:case 6361:case 6365:case 6369: return Type::OakButton;
			case 3610:case 3618:case 3626:case 3634:case 3579:case 3587:case 3595:case 3603:case 3611:case 3619:case 3627:case 3635:case 3580:case 3588:case 3596:case 3604:case 3612:case 3620:case 3628:case 3573:case 3581:case 3589:case 3597:case 3605:case 3613:case 3621:case 3629:case 3574:case 3582:case 3590:case 3598:case 3606:case 3614:case 3622:case 3630:case 3575:case 3583:case 3591:case 3599:case 3607:case 3615:case 3623:case 3631:case 3576:case 3584:case 3592:case 3600:case 3608:case 3616:case 3624:case 3632:case 3577:case 3585:case 3593:case 3601:case 3609:case 3617:case 3625:case 3633:case 3578:case 3586:case 3594:case 3602:case 3636: return Type::OakDoor;
			case 3979:case 3981:case 3983:case 3985:case 3987:case 3989:case 3991:case 3993:case 3995:case 3966:case 3968:case 3970:case 3972:case 3974:case 3976:case 3978:case 3980:case 3982:case 3984:case 3986:case 3988:case 3990:case 3992:case 3994:case 3996:case 3967:case 3969:case 3971:case 3973:case 3975:case 3977:case 3997: return Type::OakFence;
			case 4823:case 4827:case 4831:case 4835:case 4839:case 4843:case 4847:case 4820:case 4824:case 4828:case 4832:case 4836:case 4840:case 4844:case 4848:case 4821:case 4825:case 4829:case 4833:case 4837:case 4841:case 4845:case 4849:case 4822:case 4826:case 4830:case 4834:case 4838:case 4842:case 4846:case 4850:case 4851: return Type::OakFenceGate;
			case 153:case 146:case 154:case 147:case 155:case 148:case 156:case 149:case 157:case 150:case 158:case 151:case 152:case 145: return Type::OakLeaves;
			case 73:case 74:case 75: return Type::OakLog;
			case 15: return Type::OakPlanks;
			case 3873:case 3874: return Type::OakPressurePlate;
			case 21:case 22: return Type::OakSapling;
			case 3390:case 3392:case 3394:case 3396:case 3398:case 3400:case 3402:case 3404:case 3406:case 3408:case 3410:case 3381:case 3383:case 3385:case 3387:case 3389:case 3391:case 3393:case 3395:case 3397:case 3399:case 3401:case 3403:case 3405:case 3407:case 3409:case 3411:case 3382:case 3384:case 3386:case 3388:case 3412: return Type::OakSign;
			case 8304:case 8301:case 8305:case 8302:case 8303:case 8300: return Type::OakSlab;
			case 2031:case 1968:case 1984:case 2000:case 2016:case 2032:case 1969:case 1985:case 2001:case 2017:case 2033:case 1954:case 1970:case 1986:case 2002:case 2018:case 1955:case 1971:case 1987:case 2003:case 2019:case 1956:case 1972:case 1988:case 2004:case 2020:case 1957:case 1973:case 1989:case 2005:case 2021:case 1958:case 1974:case 1990:case 2006:case 2022:case 1959:case 1975:case 1991:case 2007:case 2023:case 1960:case 1976:case 1992:case 2008:case 2024:case 1961:case 1977:case 1993:case 2009:case 2025:case 1962:case 1978:case 1994:case 2010:case 2026:case 1963:case 1979:case 1995:case 2011:case 2027:case 1964:case 1980:case 1996:case 2012:case 2028:case 1965:case 1981:case 1997:case 2013:case 2029:case 1966:case 1982:case 1998:case 2014:case 2030:case 1967:case 1983:case 1999:case 2015: return Type::OakStairs;
			case 4132:case 4148:case 4164:case 4117:case 4133:case 4149:case 4165:case 4118:case 4134:case 4150:case 4166:case 4119:case 4135:case 4151:case 4167:case 4120:case 4136:case 4152:case 4168:case 4121:case 4137:case 4153:case 4169:case 4122:case 4138:case 4154:case 4170:case 4123:case 4139:case 4155:case 4171:case 4124:case 4140:case 4156:case 4172:case 4125:case 4141:case 4157:case 4173:case 4126:case 4142:case 4158:case 4111:case 4127:case 4143:case 4159:case 4112:case 4128:case 4144:case 4160:case 4113:case 4129:case 4145:case 4161:case 4114:case 4130:case 4146:case 4162:case 4115:case 4131:case 4147:case 4163:case 4116:case 4174: return Type::OakTrapdoor;
			case 3736:case 3737:case 3738:case 3739:case 3740:case 3741:case 3735:case 3742: return Type::OakWallSign;
			case 109:case 110:case 111: return Type::OakWood;
			case 9270:case 9261:case 9263:case 9265:case 9267:case 9269:case 9271:case 9260:case 9262:case 9264:case 9266:case 9268: return Type::Observer;
			case 1434: return Type::Obsidian;
			case 7921:case 7922:case 7923:case 7924:case 7925:case 7926:case 7927:case 7913:case 7914:case 7915:case 7916:case 7917:case 7918:case 7919:case 7920:case 7928: return Type::OrangeBanner;
			case 1077:case 1066:case 1070:case 1074:case 1078:case 1067:case 1071:case 1075:case 1079:case 1068:case 1072:case 1076:case 1065:case 1069:case 1073:case 1080: return Type::OrangeBed;
			case 7867: return Type::OrangeCarpet;
			case 9439: return Type::OrangeConcrete;
			case 9455: return Type::OrangeConcretePowder;
			case 9378:case 9380:case 9379:case 9381: return Type::OrangeGlazedTerracotta;
			case 9284:case 9288:case 9285:case 9289:case 9286:case 9287: return Type::OrangeShulkerBox;
			case 4096: return Type::OrangeStainedGlass;
			case 6900:case 6904:case 6908:case 6912:case 6916:case 6920:case 6924:case 6897:case 6901:case 6905:case 6909:case 6913:case 6917:case 6921:case 6925:case 6898:case 6902:case 6906:case 6910:case 6914:case 6918:case 6922:case 6895:case 6899:case 6903:case 6907:case 6911:case 6915:case 6919:case 6923:case 6896:case 6926: return Type::OrangeStainedGlassPane;
			case 6848: return Type::OrangeTerracotta;
			case 1418: return Type::OrangeTulip;
			case 8158:case 8159:case 8157:case 8160: return Type::OrangeWallBanner;
			case 1385: return Type::OrangeWool;
			case 1421: return Type::OxeyeDaisy;
			case 7884: return Type::PackedIce;
			case 7891:case 7892: return Type::Peony;
			case 8360:case 8364:case 8361:case 8365:case 8362:case 8363: return Type::PetrifiedOakSlab;
			case 7996:case 7997:case 7998:case 7999:case 8000:case 8001:case 8002:case 8003:case 8004:case 8005:case 8006:case 8007:case 7993:case 7994:case 7995:case 8008: return Type::PinkBanner;
			case 1152:case 1156:case 1145:case 1149:case 1153:case 1157:case 1146:case 1150:case 1154:case 1158:case 1147:case 1151:case 1155:case 1159:case 1148:case 1160: return Type::PinkBed;
			case 7872: return Type::PinkCarpet;
			case 9444: return Type::PinkConcrete;
			case 9460: return Type::PinkConcretePowder;
			case 9399:case 9398:case 9400:case 9401: return Type::PinkGlazedTerracotta;
			case 9319:case 9316:case 9317:case 9314:case 9318:case 9315: return Type::PinkShulkerBox;
			case 4101: return Type::PinkStainedGlass;
			case 7055:case 7059:case 7063:case 7067:case 7071:case 7075:case 7079:case 7083:case 7056:case 7060:case 7064:case 7068:case 7072:case 7076:case 7080:case 7084:case 7057:case 7061:case 7065:case 7069:case 7073:case 7077:case 7081:case 7085:case 7058:case 7062:case 7066:case 7070:case 7074:case 7078:case 7082:case 7086: return Type::PinkStainedGlassPane;
			case 6853: return Type::PinkTerracotta;
			case 1420: return Type::PinkTulip;
			case 8179:case 8177:case 8178:case 8180: return Type::PinkWallBanner;
			case 1390: return Type::PinkWool;
			case 1351:case 1355:case 1359:case 1348:case 1352:case 1356:case 1349:case 1353:case 1357:case 1350:case 1354:case 1358: return Type::Piston;
			case 1360:case 1361:case 1362:case 1363:case 1364:case 1365:case 1366:case 1367:case 1368:case 1369:case 1370:case 1371:case 1372:case 1373:case 1374:case 1375:case 1376:case 1377:case 1378:case 1379:case 1380:case 1381:case 1382:case 1383: return Type::PistonHead;
			case 6556:case 6557:case 6558:case 6559:case 6560:case 6561:case 6562:case 6563:case 6564:case 6550:case 6551:case 6552:case 6553:case 6554:case 6555:case 6565: return Type::PlayerHead;
			case 6568:case 6566:case 6567:case 6569: return Type::PlayerWallHead;
			case 12:case 13: return Type::Podzol;
			case 7: return Type::PolishedAndesite;
			case 10859:case 10856:case 10860:case 10857:case 10858:case 10855: return Type::PolishedAndesiteSlab;
			case 10629:case 10630:case 10631:case 10632:case 10633:case 10634:case 10635:case 10636:case 10637:case 10638:case 10639:case 10640:case 10641:case 10642:case 10643:case 10644:case 10645:case 10646:case 10647:case 10648:case 10649:case 10650:case 10651:case 10652:case 10653:case 10654:case 10655:case 10656:case 10657:case 10658:case 10659:case 10660:case 10661:case 10662:case 10663:case 10664:case 10665:case 10666:case 10667:case 10668:case 10669:case 10670:case 10671:case 10672:case 10673:case 10674:case 10675:case 10676:case 10677:case 10678:case 10679:case 10680:case 10681:case 10682:case 10683:case 10684:case 10685:case 10686:case 10687:case 10688:case 10689:case 10690:case 10691:case 10692:case 10693:case 10694:case 10695:case 10696:case 10697:case 10698:case 10699:case 10700:case 10701:case 10702:case 10703:case 10704:case 10705:case 10706:case 10707:case 10708: return Type::PolishedAndesiteStairs;
			case 4006:case 4005:case 4007: return Type::PolishedBasalt;
			case 16250: return Type::PolishedBlackstone;
			case 16256:case 16257:case 16254:case 16258:case 16255:case 16259: return Type::PolishedBlackstoneBrickSlab;
			case 16310:case 16311:case 16312:case 16313:case 16314:case 16315:case 16316:case 16317:case 16318:case 16319:case 16320:case 16321:case 16322:case 16323:case 16324:case 16325:case 16326:case 16327:case 16328:case 16329:case 16330:case 16331:case 16332:case 16333:case 16334:case 16335:case 16336:case 16337:case 16338:case 16339:case 16260:case 16261:case 16262:case 16263:case 16264:case 16265:case 16266:case 16267:case 16268:case 16269:case 16270:case 16271:case 16272:case 16273:case 16274:case 16275:case 16276:case 16277:case 16278:case 16279:case 16280:case 16281:case 16282:case 16283:case 16284:case 16285:case 16286:case 16287:case 16288:case 16289:case 16290:case 16291:case 16292:case 16293:case 16294:case 16295:case 16296:case 16297:case 16298:case 16299:case 16300:case 16301:case 16302:case 16303:case 16304:case 16305:case 16306:case 16307:case 16308:case 16309: return Type::PolishedBlackstoneBrickStairs;
			case 16415:case 16423:case 16431:case 16439:case 16447:case 16455:case 16463:case 16471:case 16479:case 16487:case 16495:case 16503:case 16511:case 16519:case 16527:case 16535:case 16543:case 16551:case 16559:case 16567:case 16575:case 16583:case 16591:case 16599:case 16607:case 16615:case 16623:case 16631:case 16639:case 16647:case 16655:case 16663:case 16340:case 16344:case 16348:case 16352:case 16356:case 16360:case 16364:case 16368:case 16372:case 16376:case 16380:case 16384:case 16392:case 16400:case 16408:case 16416:case 16424:case 16432:case 16440:case 16448:case 16456:case 16464:case 16472:case 16480:case 16488:case 16496:case 16504:case 16512:case 16520:case 16528:case 16536:case 16544:case 16552:case 16560:case 16568:case 16576:case 16584:case 16592:case 16600:case 16608:case 16616:case 16624:case 16632:case 16640:case 16648:case 16656:case 16385:case 16393:case 16401:case 16409:case 16417:case 16425:case 16433:case 16441:case 16449:case 16457:case 16465:case 16473:case 16481:case 16489:case 16497:case 16505:case 16513:case 16521:case 16529:case 16537:case 16545:case 16553:case 16561:case 16569:case 16577:case 16585:case 16593:case 16601:case 16609:case 16617:case 16625:case 16633:case 16641:case 16649:case 16657:case 16341:case 16345:case 16349:case 16353:case 16357:case 16361:case 16365:case 16369:case 16373:case 16377:case 16381:case 16386:case 16394:case 16402:case 16410:case 16418:case 16426:case 16434:case 16442:case 16450:case 16458:case 16466:case 16474:case 16482:case 16490:case 16498:case 16506:case 16514:case 16522:case 16530:case 16538:case 16546:case 16554:case 16562:case 16570:case 16578:case 16586:case 16594:case 16602:case 16610:case 16618:case 16626:case 16634:case 16642:case 16650:case 16658:case 16387:case 16395:case 16403:case 16411:case 16419:case 16427:case 16435:case 16443:case 16451:case 16459:case 16467:case 16475:case 16483:case 16491:case 16499:case 16507:case 16515:case 16523:case 16531:case 16539:case 16547:case 16555:case 16563:case 16571:case 16579:case 16587:case 16595:case 16603:case 16611:case 16619:case 16627:case 16635:case 16643:case 16651:case 16659:case 16342:case 16346:case 16350:case 16354:case 16358:case 16362:case 16366:case 16370:case 16374:case 16378:case 16382:case 16388:case 16396:case 16404:case 16412:case 16420:case 16428:case 16436:case 16444:case 16452:case 16460:case 16468:case 16476:case 16484:case 16492:case 16500:case 16508:case 16516:case 16524:case 16532:case 16540:case 16548:case 16556:case 16564:case 16572:case 16580:case 16588:case 16596:case 16604:case 16612:case 16620:case 16628:case 16636:case 16644:case 16652:case 16660:case 16389:case 16397:case 16405:case 16413:case 16421:case 16429:case 16437:case 16445:case 16453:case 16461:case 16469:case 16477:case 16485:case 16493:case 16501:case 16509:case 16517:case 16525:case 16533:case 16541:case 16549:case 16557:case 16565:case 16573:case 16581:case 16589:case 16597:case 16605:case 16613:case 16621:case 16629:case 16637:case 16645:case 16653:case 16661:case 16343:case 16347:case 16351:case 16355:case 16359:case 16363:case 16367:case 16371:case 16375:case 16379:case 16383:case 16390:case 16398:case 16406:case 16414:case 16422:case 16430:case 16438:case 16446:case 16454:case 16462:case 16470:case 16478:case 16486:case 16494:case 16502:case 16510:case 16518:case 16526:case 16534:case 16542:case 16550:case 16558:case 16566:case 16574:case 16582:case 16590:case 16598:case 16606:case 16614:case 16622:case 16630:case 16638:case 16646:case 16654:case 16662:case 16391:case 16399:case 16407: return Type::PolishedBlackstoneBrickWall;
			case 16251: return Type::PolishedBlackstoneBricks;
			case 16765:case 16766:case 16767:case 16768:case 16753:case 16769:case 16754:case 16770:case 16755:case 16771:case 16756:case 16772:case 16757:case 16773:case 16758:case 16774:case 16759:case 16775:case 16760:case 16776:case 16761:case 16762:case 16763:case 16764: return Type::PolishedBlackstoneButton;
			case 16751:case 16752: return Type::PolishedBlackstonePressurePlate;
			case 16745:case 16746:case 16747:case 16748:case 16749:case 16750: return Type::PolishedBlackstoneSlab;
			case 16744:case 16665:case 16667:case 16669:case 16671:case 16673:case 16675:case 16677:case 16679:case 16681:case 16683:case 16685:case 16687:case 16689:case 16691:case 16693:case 16695:case 16697:case 16699:case 16701:case 16703:case 16705:case 16707:case 16709:case 16711:case 16713:case 16715:case 16717:case 16719:case 16721:case 16723:case 16725:case 16727:case 16729:case 16731:case 16733:case 16735:case 16737:case 16739:case 16741:case 16743:case 16666:case 16668:case 16670:case 16672:case 16674:case 16676:case 16678:case 16680:case 16682:case 16684:case 16686:case 16688:case 16690:case 16692:case 16694:case 16696:case 16698:case 16700:case 16702:case 16704:case 16706:case 16708:case 16710:case 16712:case 16714:case 16716:case 16718:case 16720:case 16722:case 16724:case 16726:case 16728:case 16730:case 16732:case 16734:case 16736:case 16738:case 16740:case 16742: return Type::PolishedBlackstoneStairs;
			case 16926:case 16934:case 16942:case 16950:case 16958:case 16966:case 16974:case 16982:case 16990:case 16998:case 17006:case 17014:case 17022:case 17030:case 17038:case 17046:case 17054:case 17062:case 17070:case 17078:case 17086:case 17094:case 16783:case 16791:case 16799:case 16807:case 16815:case 16823:case 16831:case 16839:case 16847:case 16855:case 16863:case 16871:case 16879:case 16887:case 16895:case 16903:case 16911:case 16919:case 16927:case 16935:case 16943:case 16951:case 16959:case 16967:case 16975:case 16983:case 16991:case 16999:case 17007:case 17015:case 17023:case 17031:case 17039:case 17047:case 17055:case 17063:case 17071:case 17079:case 17087:case 17095:case 16784:case 16792:case 16800:case 16808:case 16816:case 16824:case 16832:case 16840:case 16848:case 16856:case 16864:case 16872:case 16880:case 16888:case 16896:case 16904:case 16912:case 16920:case 16928:case 16936:case 16944:case 16952:case 16960:case 16968:case 16976:case 16984:case 16992:case 17000:case 17008:case 17016:case 17024:case 17032:case 17040:case 17048:case 17056:case 17064:case 17072:case 17080:case 17088:case 17096:case 16777:case 16785:case 16793:case 16801:case 16809:case 16817:case 16825:case 16833:case 16841:case 16849:case 16857:case 16865:case 16873:case 16881:case 16889:case 16897:case 16905:case 16913:case 16921:case 16929:case 16937:case 16945:case 16953:case 16961:case 16969:case 16977:case 16985:case 16993:case 17001:case 17009:case 17017:case 17025:case 17033:case 17041:case 17049:case 17057:case 17065:case 17073:case 17081:case 17089:case 17097:case 16778:case 16786:case 16794:case 16802:case 16810:case 16818:case 16826:case 16834:case 16842:case 16850:case 16858:case 16866:case 16874:case 16882:case 16890:case 16898:case 16906:case 16914:case 16922:case 16930:case 16938:case 16946:case 16954:case 16962:case 16970:case 16978:case 16986:case 16994:case 17002:case 17010:case 17018:case 17026:case 17034:case 17042:case 17050:case 17058:case 17066:case 17074:case 17082:case 17090:case 17098:case 16779:case 16787:case 16795:case 16803:case 16811:case 16819:case 16827:case 16835:case 16843:case 16851:case 16859:case 16867:case 16875:case 16883:case 16891:case 16899:case 16907:case 16915:case 16923:case 16931:case 16939:case 16947:case 16955:case 16963:case 16971:case 16979:case 16987:case 16995:case 17003:case 17011:case 17019:case 17027:case 17035:case 17043:case 17051:case 17059:case 17067:case 17075:case 17083:case 17091:case 17099:case 16780:case 16788:case 16796:case 16804:case 16812:case 16820:case 16828:case 16836:case 16844:case 16852:case 16860:case 16868:case 16876:case 16884:case 16892:case 16900:case 16908:case 16916:case 16924:case 16932:case 16940:case 16948:case 16956:case 16964:case 16972:case 16980:case 16988:case 16996:case 17004:case 17012:case 17020:case 17028:case 17036:case 17044:case 17052:case 17060:case 17068:case 17076:case 17084:case 17092:case 17100:case 16781:case 16789:case 16797:case 16805:case 16813:case 16821:case 16829:case 16837:case 16845:case 16853:case 16861:case 16869:case 16877:case 16885:case 16893:case 16901:case 16909:case 16917:case 16925:case 16933:case 16941:case 16949:case 16957:case 16965:case 16973:case 16981:case 16989:case 16997:case 17005:case 17013:case 17021:case 17029:case 17037:case 17045:case 17053:case 17061:case 17069:case 17077:case 17085:case 17093:case 16782:case 16790:case 16798:case 16806:case 16814:case 16822:case 16830:case 16838:case 16846:case 16854:case 16862:case 16870:case 16878:case 16886:case 16894:case 16902:case 16910:case 16918: return Type::PolishedBlackstoneWall;
			case 5: return Type::PolishedDiorite;
			case 10810:case 10807:case 10811:case 10808:case 10812:case 10809: return Type::PolishedDioriteSlab;
			case 9960:case 9961:case 9962:case 9963:case 9964:case 9965:case 9966:case 9967:case 9968:case 9969:case 9970:case 9971:case 9972:case 9973:case 9974:case 9975:case 9976:case 9977:case 9978:case 9979:case 9980:case 9981:case 9982:case 9983:case 9984:case 9985:case 9986:case 9987:case 9988:case 9909:case 9910:case 9911:case 9912:case 9913:case 9914:case 9915:case 9916:case 9917:case 9918:case 9919:case 9920:case 9921:case 9922:case 9923:case 9924:case 9925:case 9926:case 9927:case 9928:case 9929:case 9930:case 9931:case 9932:case 9933:case 9934:case 9935:case 9936:case 9937:case 9938:case 9939:case 9940:case 9941:case 9942:case 9943:case 9944:case 9945:case 9946:case 9947:case 9948:case 9949:case 9950:case 9951:case 9952:case 9953:case 9954:case 9955:case 9956:case 9957:case 9958:case 9959: return Type::PolishedDioriteStairs;
			case 3: return Type::PolishedGranite;
			case 10789:case 10793:case 10790:case 10794:case 10791:case 10792: return Type::PolishedGraniteSlab;
			case 9706:case 9707:case 9708:case 9709:case 9710:case 9711:case 9712:case 9713:case 9714:case 9715:case 9716:case 9717:case 9718:case 9719:case 9720:case 9721:case 9722:case 9723:case 9724:case 9725:case 9726:case 9727:case 9728:case 9729:case 9730:case 9731:case 9732:case 9733:case 9734:case 9735:case 9736:case 9737:case 9738:case 9739:case 9740:case 9741:case 9742:case 9743:case 9744:case 9745:case 9746:case 9747:case 9748:case 9669:case 9670:case 9671:case 9672:case 9673:case 9674:case 9675:case 9676:case 9677:case 9678:case 9679:case 9680:case 9681:case 9682:case 9683:case 9684:case 9685:case 9686:case 9687:case 9688:case 9689:case 9690:case 9691:case 9692:case 9693:case 9694:case 9695:case 9696:case 9697:case 9698:case 9699:case 9700:case 9701:case 9702:case 9703:case 9704:case 9705: return Type::PolishedGraniteStairs;
			case 1413: return Type::Poppy;
			case 6344:case 6339:case 6341:case 6343:case 6338:case 6340:case 6342:case 6345: return Type::Potatoes;
			case 6310: return Type::PottedAcaciaSapling;
			case 6316: return Type::PottedAllium;
			case 6317: return Type::PottedAzureBluet;
			case 9664: return Type::PottedBamboo;
			case 6308: return Type::PottedBirchSapling;
			case 6315: return Type::PottedBlueOrchid;
			case 6327: return Type::PottedBrownMushroom;
			case 6329: return Type::PottedCactus;
			case 6323: return Type::PottedCornflower;
			case 15834: return Type::PottedCrimsonFungus;
			case 15836: return Type::PottedCrimsonRoots;
			case 6313: return Type::PottedDandelion;
			case 6311: return Type::PottedDarkOakSapling;
			case 6328: return Type::PottedDeadBush;
			case 6312: return Type::PottedFern;
			case 6309: return Type::PottedJungleSapling;
			case 6324: return Type::PottedLilyOfTheValley;
			case 6306: return Type::PottedOakSapling;
			case 6319: return Type::PottedOrangeTulip;
			case 6322: return Type::PottedOxeyeDaisy;
			case 6321: return Type::PottedPinkTulip;
			case 6314: return Type::PottedPoppy;
			case 6326: return Type::PottedRedMushroom;
			case 6318: return Type::PottedRedTulip;
			case 6307: return Type::PottedSpruceSapling;
			case 15835: return Type::PottedWarpedFungus;
			case 15837: return Type::PottedWarpedRoots;
			case 6320: return Type::PottedWhiteTulip;
			case 6325: return Type::PottedWitherRose;
			case 1306:case 1310:case 1314:case 1307:case 1311:case 1315:case 1308:case 1312:case 1316:case 1305:case 1309:case 1313: return Type::PoweredRail;
			case 7601: return Type::Prismarine;
			case 7851:case 7853:case 7855:case 7850:case 7852:case 7854: return Type::PrismarineBrickSlab;
			case 7743:case 7744:case 7745:case 7746:case 7747:case 7684:case 7748:case 7685:case 7749:case 7686:case 7750:case 7687:case 7751:case 7688:case 7752:case 7689:case 7753:case 7690:case 7754:case 7691:case 7755:case 7692:case 7756:case 7693:case 7757:case 7694:case 7758:case 7695:case 7759:case 7696:case 7760:case 7697:case 7761:case 7698:case 7762:case 7699:case 7763:case 7700:case 7701:case 7702:case 7703:case 7704:case 7705:case 7706:case 7707:case 7708:case 7709:case 7710:case 7711:case 7712:case 7713:case 7714:case 7715:case 7716:case 7717:case 7718:case 7719:case 7720:case 7721:case 7722:case 7723:case 7724:case 7725:case 7726:case 7727:case 7728:case 7729:case 7730:case 7731:case 7732:case 7733:case 7734:case 7735:case 7736:case 7737:case 7738:case 7739:case 7740:case 7741:case 7742: return Type::PrismarineBrickStairs;
			case 7602: return Type::PrismarineBricks;
			case 7849:case 7844:case 7846:case 7848:case 7845:case 7847: return Type::PrismarineSlab;
			case 7679:case 7616:case 7680:case 7617:case 7681:case 7618:case 7682:case 7619:case 7683:case 7620:case 7621:case 7622:case 7623:case 7624:case 7625:case 7626:case 7627:case 7628:case 7629:case 7630:case 7631:case 7632:case 7633:case 7634:case 7635:case 7636:case 7637:case 7638:case 7639:case 7640:case 7641:case 7642:case 7643:case 7644:case 7645:case 7646:case 7647:case 7648:case 7649:case 7650:case 7651:case 7652:case 7653:case 7654:case 7655:case 7656:case 7657:case 7658:case 7659:case 7660:case 7661:case 7662:case 7663:case 7664:case 7665:case 7666:case 7667:case 7604:case 7668:case 7605:case 7669:case 7606:case 7670:case 7607:case 7671:case 7608:case 7672:case 7609:case 7673:case 7610:case 7674:case 7611:case 7675:case 7612:case 7676:case 7613:case 7677:case 7614:case 7678:case 7615: return Type::PrismarineStairs;
			case 11194:case 11198:case 11202:case 11206:case 11210:case 11214:case 11218:case 11222:case 11226:case 11230:case 11234:case 11238:case 11242:case 11246:case 11250:case 11254:case 11258:case 11262:case 11266:case 11270:case 11274:case 11278:case 11282:case 11286:case 11290:case 11294:case 11298:case 11302:case 11306:case 11310:case 11314:case 11318:case 11322:case 11326:case 11330:case 11334:case 11338:case 11342:case 11346:case 11350:case 11354:case 11358:case 11362:case 11366:case 11370:case 11374:case 11378:case 11382:case 11386:case 11390:case 11394:case 11398:case 11402:case 11406:case 11410:case 11414:case 11418:case 11422:case 11426:case 11430:case 11434:case 11438:case 11442:case 11446:case 11450:case 11454:case 11458:case 11462:case 11466:case 11470:case 11474:case 11478:case 11482:case 11486:case 11490:case 11494:case 11498:case 11502:case 11506:case 11510:case 11514:case 11191:case 11195:case 11199:case 11203:case 11207:case 11211:case 11215:case 11219:case 11223:case 11227:case 11231:case 11235:case 11239:case 11243:case 11247:case 11251:case 11255:case 11259:case 11263:case 11267:case 11271:case 11275:case 11279:case 11283:case 11287:case 11291:case 11295:case 11299:case 11303:case 11307:case 11311:case 11315:case 11319:case 11323:case 11327:case 11331:case 11335:case 11339:case 11343:case 11347:case 11351:case 11355:case 11359:case 11363:case 11367:case 11371:case 11375:case 11379:case 11383:case 11387:case 11391:case 11395:case 11399:case 11403:case 11407:case 11411:case 11415:case 11419:case 11423:case 11427:case 11431:case 11435:case 11439:case 11443:case 11447:case 11451:case 11455:case 11459:case 11463:case 11467:case 11471:case 11475:case 11479:case 11483:case 11487:case 11491:case 11495:case 11499:case 11503:case 11507:case 11511:case 11192:case 11196:case 11200:case 11204:case 11208:case 11212:case 11216:case 11220:case 11224:case 11228:case 11232:case 11236:case 11240:case 11244:case 11248:case 11252:case 11256:case 11260:case 11264:case 11268:case 11272:case 11276:case 11280:case 11284:case 11288:case 11292:case 11296:case 11300:case 11304:case 11308:case 11312:case 11316:case 11320:case 11324:case 11328:case 11332:case 11336:case 11340:case 11344:case 11348:case 11352:case 11356:case 11360:case 11364:case 11368:case 11372:case 11376:case 11380:case 11384:case 11388:case 11392:case 11396:case 11400:case 11404:case 11408:case 11412:case 11416:case 11420:case 11424:case 11428:case 11432:case 11436:case 11440:case 11444:case 11448:case 11452:case 11456:case 11460:case 11464:case 11468:case 11472:case 11476:case 11480:case 11484:case 11488:case 11492:case 11496:case 11500:case 11504:case 11508:case 11512:case 11193:case 11197:case 11201:case 11205:case 11209:case 11213:case 11217:case 11221:case 11225:case 11229:case 11233:case 11237:case 11241:case 11245:case 11249:case 11253:case 11257:case 11261:case 11265:case 11269:case 11273:case 11277:case 11281:case 11285:case 11289:case 11293:case 11297:case 11301:case 11305:case 11309:case 11313:case 11317:case 11321:case 11325:case 11329:case 11333:case 11337:case 11341:case 11345:case 11349:case 11353:case 11357:case 11361:case 11365:case 11369:case 11373:case 11377:case 11381:case 11385:case 11389:case 11393:case 11397:case 11401:case 11405:case 11409:case 11413:case 11417:case 11421:case 11425:case 11429:case 11433:case 11437:case 11441:case 11445:case 11449:case 11453:case 11457:case 11461:case 11465:case 11469:case 11473:case 11477:case 11481:case 11485:case 11489:case 11493:case 11497:case 11501:case 11505:case 11509:case 11513: return Type::PrismarineWall;
			case 3998: return Type::Pumpkin;
			case 4776:case 4778:case 4773:case 4775:case 4777:case 4772:case 4774:case 4779: return Type::PumpkinStem;
			case 8071:case 8057:case 8058:case 8059:case 8060:case 8061:case 8062:case 8063:case 8064:case 8065:case 8066:case 8067:case 8068:case 8069:case 8070:case 8072: return Type::PurpleBanner;
			case 1212:case 1216:case 1220:case 1209:case 1213:case 1217:case 1221:case 1210:case 1214:case 1218:case 1222:case 1211:case 1215:case 1219:case 1223:case 1224: return Type::PurpleBed;
			case 7876: return Type::PurpleCarpet;
			case 9448: return Type::PurpleConcrete;
			case 9464: return Type::PurpleConcretePowder;
			case 9414:case 9416:case 9415:case 9417: return Type::PurpleGlazedTerracotta;
			case 9340:case 9341:case 9338:case 9342:case 9339:case 9343: return Type::PurpleShulkerBox;
			case 4105: return Type::PurpleStainedGlass;
			case 7210:case 7183:case 7187:case 7191:case 7195:case 7199:case 7203:case 7207:case 7211:case 7184:case 7188:case 7192:case 7196:case 7200:case 7204:case 7208:case 7212:case 7185:case 7189:case 7193:case 7197:case 7201:case 7205:case 7209:case 7213:case 7186:case 7190:case 7194:case 7198:case 7202:case 7206:case 7214: return Type::PurpleStainedGlassPane;
			case 6857: return Type::PurpleTerracotta;
			case 8193:case 8195:case 8194:case 8196: return Type::PurpleWallBanner;
			case 1394: return Type::PurpleWool;
			case 9134: return Type::PurpurBlock;
			case 9135:case 9137:case 9136: return Type::PurpurPillar;
			case 8409:case 8413:case 8410:case 8411:case 8408:case 8412: return Type::PurpurSlab;
			case 9198:case 9199:case 9200:case 9201:case 9202:case 9203:case 9204:case 9205:case 9206:case 9207:case 9208:case 9209:case 9210:case 9211:case 9212:case 9213:case 9214:case 9215:case 9216:case 9217:case 9138:case 9139:case 9140:case 9141:case 9142:case 9143:case 9144:case 9145:case 9146:case 9147:case 9148:case 9149:case 9150:case 9151:case 9152:case 9153:case 9154:case 9155:case 9156:case 9157:case 9158:case 9159:case 9160:case 9161:case 9162:case 9163:case 9164:case 9165:case 9166:case 9167:case 9168:case 9169:case 9170:case 9171:case 9172:case 9173:case 9174:case 9175:case 9176:case 9177:case 9178:case 9179:case 9180:case 9181:case 9182:case 9183:case 9184:case 9185:case 9186:case 9187:case 9188:case 9189:case 9190:case 9191:case 9192:case 9193:case 9194:case 9195:case 9196:case 9197: return Type::PurpurStairs;
			case 6738: return Type::QuartzBlock;
			case 17103: return Type::QuartzBricks;
			case 6742:case 6740:case 6741: return Type::QuartzPillar;
			case 8395:case 8392:case 8393:case 8390:case 8394:case 8391: return Type::QuartzSlab;
			case 6790:case 6791:case 6792:case 6793:case 6794:case 6795:case 6796:case 6797:case 6798:case 6799:case 6800:case 6801:case 6802:case 6803:case 6804:case 6805:case 6806:case 6743:case 6807:case 6744:case 6808:case 6745:case 6809:case 6746:case 6810:case 6747:case 6811:case 6748:case 6812:case 6749:case 6813:case 6750:case 6814:case 6751:case 6815:case 6752:case 6816:case 6753:case 6817:case 6754:case 6818:case 6755:case 6819:case 6756:case 6820:case 6757:case 6821:case 6758:case 6822:case 6759:case 6760:case 6761:case 6762:case 6763:case 6764:case 6765:case 6766:case 6767:case 6768:case 6769:case 6770:case 6771:case 6772:case 6773:case 6774:case 6775:case 6776:case 6777:case 6778:case 6779:case 6780:case 6781:case 6782:case 6783:case 6784:case 6785:case 6786:case 6787:case 6788:case 6789: return Type::QuartzStairs;
			case 3646:case 3654:case 3647:case 3648:case 3649:case 3650:case 3651:case 3652:case 3645:case 3653: return Type::Rail;
			case 8131:case 8132:case 8133:case 8134:case 8135:case 8121:case 8122:case 8123:case 8124:case 8125:case 8126:case 8127:case 8128:case 8129:case 8130:case 8136: return Type::RedBanner;
			case 1287:case 1276:case 1280:case 1284:case 1273:case 1277:case 1281:case 1285:case 1274:case 1278:case 1282:case 1286:case 1275:case 1279:case 1283:case 1288: return Type::RedBed;
			case 7880: return Type::RedCarpet;
			case 9452: return Type::RedConcrete;
			case 9468: return Type::RedConcretePowder;
			case 9432:case 9431:case 9430:case 9433: return Type::RedGlazedTerracotta;
			case 1426: return Type::RedMushroom;
			case 4573:case 4589:case 4605:case 4621:case 4574:case 4590:case 4606:case 4622:case 4575:case 4591:case 4607:case 4623:case 4576:case 4592:case 4608:case 4624:case 4577:case 4593:case 4609:case 4625:case 4578:case 4594:case 4610:case 4626:case 4579:case 4595:case 4611:case 4627:case 4580:case 4596:case 4612:case 4628:case 4581:case 4597:case 4613:case 4629:case 4582:case 4598:case 4614:case 4630:case 4583:case 4599:case 4615:case 4631:case 4584:case 4600:case 4616:case 4569:case 4585:case 4601:case 4617:case 4570:case 4586:case 4602:case 4618:case 4571:case 4587:case 4603:case 4619:case 4572:case 4588:case 4604:case 4620:case 4632: return Type::RedMushroomBlock;
			case 10852:case 10849:case 10853:case 10850:case 10854:case 10851: return Type::RedNetherBrickSlab;
			case 10595:case 10596:case 10597:case 10598:case 10599:case 10600:case 10601:case 10602:case 10603:case 10604:case 10605:case 10606:case 10607:case 10608:case 10609:case 10610:case 10611:case 10612:case 10613:case 10614:case 10615:case 10616:case 10617:case 10618:case 10619:case 10620:case 10621:case 10622:case 10623:case 10624:case 10625:case 10626:case 10627:case 10628:case 10549:case 10550:case 10551:case 10552:case 10553:case 10554:case 10555:case 10556:case 10557:case 10558:case 10559:case 10560:case 10561:case 10562:case 10563:case 10564:case 10565:case 10566:case 10567:case 10568:case 10569:case 10570:case 10571:case 10572:case 10573:case 10574:case 10575:case 10576:case 10577:case 10578:case 10579:case 10580:case 10581:case 10582:case 10583:case 10584:case 10585:case 10586:case 10587:case 10588:case 10589:case 10590:case 10591:case 10592:case 10593:case 10594: return Type::RedNetherBrickStairs;
			case 13589:case 13593:case 13597:case 13601:case 13605:case 13609:case 13613:case 13617:case 13621:case 13625:case 13629:case 13633:case 13637:case 13641:case 13645:case 13649:case 13653:case 13657:case 13661:case 13665:case 13669:case 13673:case 13677:case 13681:case 13685:case 13689:case 13693:case 13697:case 13701:case 13705:case 13709:case 13713:case 13717:case 13721:case 13725:case 13729:case 13733:case 13737:case 13741:case 13745:case 13749:case 13753:case 13757:case 13761:case 13765:case 13769:case 13773:case 13777:case 13781:case 13462:case 13466:case 13470:case 13474:case 13478:case 13482:case 13486:case 13490:case 13494:case 13498:case 13502:case 13506:case 13510:case 13514:case 13518:case 13522:case 13526:case 13530:case 13534:case 13538:case 13542:case 13546:case 13550:case 13554:case 13558:case 13562:case 13566:case 13570:case 13574:case 13578:case 13582:case 13586:case 13590:case 13594:case 13598:case 13602:case 13606:case 13610:case 13614:case 13618:case 13622:case 13626:case 13630:case 13634:case 13638:case 13642:case 13646:case 13650:case 13654:case 13658:case 13662:case 13666:case 13670:case 13674:case 13678:case 13682:case 13686:case 13690:case 13694:case 13698:case 13702:case 13706:case 13710:case 13714:case 13718:case 13722:case 13726:case 13730:case 13734:case 13738:case 13742:case 13746:case 13750:case 13754:case 13758:case 13762:case 13766:case 13770:case 13774:case 13778:case 13782:case 13459:case 13463:case 13467:case 13471:case 13475:case 13479:case 13483:case 13487:case 13491:case 13495:case 13499:case 13503:case 13507:case 13511:case 13515:case 13519:case 13523:case 13527:case 13531:case 13535:case 13539:case 13543:case 13547:case 13551:case 13555:case 13559:case 13563:case 13567:case 13571:case 13575:case 13579:case 13583:case 13587:case 13591:case 13595:case 13599:case 13603:case 13607:case 13611:case 13615:case 13619:case 13623:case 13627:case 13631:case 13635:case 13639:case 13643:case 13647:case 13651:case 13655:case 13659:case 13663:case 13667:case 13671:case 13675:case 13679:case 13683:case 13687:case 13691:case 13695:case 13699:case 13703:case 13707:case 13711:case 13715:case 13719:case 13723:case 13727:case 13731:case 13735:case 13739:case 13743:case 13747:case 13751:case 13755:case 13759:case 13763:case 13767:case 13771:case 13775:case 13779:case 13460:case 13464:case 13468:case 13472:case 13476:case 13480:case 13484:case 13488:case 13492:case 13496:case 13500:case 13504:case 13508:case 13512:case 13516:case 13520:case 13524:case 13528:case 13532:case 13536:case 13540:case 13544:case 13548:case 13552:case 13556:case 13560:case 13564:case 13568:case 13572:case 13576:case 13580:case 13584:case 13588:case 13592:case 13596:case 13600:case 13604:case 13608:case 13612:case 13616:case 13620:case 13624:case 13628:case 13632:case 13636:case 13640:case 13644:case 13648:case 13652:case 13656:case 13660:case 13664:case 13668:case 13672:case 13676:case 13680:case 13684:case 13688:case 13692:case 13696:case 13700:case 13704:case 13708:case 13712:case 13716:case 13720:case 13724:case 13728:case 13732:case 13736:case 13740:case 13744:case 13748:case 13752:case 13756:case 13760:case 13764:case 13768:case 13772:case 13776:case 13780:case 13461:case 13465:case 13469:case 13473:case 13477:case 13481:case 13485:case 13489:case 13493:case 13497:case 13501:case 13505:case 13509:case 13513:case 13517:case 13521:case 13525:case 13529:case 13533:case 13537:case 13541:case 13545:case 13549:case 13553:case 13557:case 13561:case 13565:case 13569:case 13573:case 13577:case 13581:case 13585: return Type::RedNetherBrickWall;
			case 9255: return Type::RedNetherBricks;
			case 67: return Type::RedSand;
			case 8217: return Type::RedSandstone;
			case 8399:case 8396:case 8400:case 8397:case 8401:case 8398: return Type::RedSandstoneSlab;
			case 8220:case 8221:case 8222:case 8223:case 8224:case 8225:case 8226:case 8227:case 8228:case 8229:case 8230:case 8231:case 8232:case 8233:case 8234:case 8235:case 8236:case 8237:case 8238:case 8239:case 8240:case 8241:case 8242:case 8243:case 8244:case 8245:case 8246:case 8247:case 8248:case 8249:case 8250:case 8251:case 8252:case 8253:case 8254:case 8255:case 8256:case 8257:case 8258:case 8259:case 8260:case 8261:case 8262:case 8263:case 8264:case 8265:case 8266:case 8267:case 8268:case 8269:case 8270:case 8271:case 8272:case 8273:case 8274:case 8275:case 8276:case 8277:case 8278:case 8279:case 8280:case 8281:case 8282:case 8283:case 8284:case 8285:case 8286:case 8287:case 8288:case 8289:case 8290:case 8291:case 8292:case 8293:case 8294:case 8295:case 8296:case 8297:case 8298:case 8299: return Type::RedSandstoneStairs;
			case 11545:case 11549:case 11553:case 11557:case 11561:case 11565:case 11569:case 11573:case 11577:case 11581:case 11585:case 11589:case 11593:case 11597:case 11601:case 11605:case 11609:case 11613:case 11617:case 11621:case 11625:case 11629:case 11633:case 11637:case 11641:case 11645:case 11649:case 11653:case 11657:case 11661:case 11665:case 11669:case 11673:case 11677:case 11681:case 11685:case 11689:case 11693:case 11697:case 11701:case 11705:case 11709:case 11713:case 11717:case 11721:case 11725:case 11729:case 11733:case 11737:case 11741:case 11745:case 11749:case 11753:case 11757:case 11761:case 11765:case 11769:case 11773:case 11777:case 11781:case 11785:case 11789:case 11793:case 11797:case 11801:case 11805:case 11809:case 11813:case 11817:case 11821:case 11825:case 11829:case 11833:case 11837:case 11518:case 11522:case 11526:case 11530:case 11534:case 11538:case 11542:case 11546:case 11550:case 11554:case 11558:case 11562:case 11566:case 11570:case 11574:case 11578:case 11582:case 11586:case 11590:case 11594:case 11598:case 11602:case 11606:case 11610:case 11614:case 11618:case 11622:case 11626:case 11630:case 11634:case 11638:case 11642:case 11646:case 11650:case 11654:case 11658:case 11662:case 11666:case 11670:case 11674:case 11678:case 11682:case 11686:case 11690:case 11694:case 11698:case 11702:case 11706:case 11710:case 11714:case 11718:case 11722:case 11726:case 11730:case 11734:case 11738:case 11742:case 11746:case 11750:case 11754:case 11758:case 11762:case 11766:case 11770:case 11774:case 11778:case 11782:case 11786:case 11790:case 11794:case 11798:case 11802:case 11806:case 11810:case 11814:case 11818:case 11822:case 11826:case 11830:case 11834:case 11838:case 11515:case 11519:case 11523:case 11527:case 11531:case 11535:case 11539:case 11543:case 11547:case 11551:case 11555:case 11559:case 11563:case 11567:case 11571:case 11575:case 11579:case 11583:case 11587:case 11591:case 11595:case 11599:case 11603:case 11607:case 11611:case 11615:case 11619:case 11623:case 11627:case 11631:case 11635:case 11639:case 11643:case 11647:case 11651:case 11655:case 11659:case 11663:case 11667:case 11671:case 11675:case 11679:case 11683:case 11687:case 11691:case 11695:case 11699:case 11703:case 11707:case 11711:case 11715:case 11719:case 11723:case 11727:case 11731:case 11735:case 11739:case 11743:case 11747:case 11751:case 11755:case 11759:case 11763:case 11767:case 11771:case 11775:case 11779:case 11783:case 11787:case 11791:case 11795:case 11799:case 11803:case 11807:case 11811:case 11815:case 11819:case 11823:case 11827:case 11831:case 11835:case 11516:case 11520:case 11524:case 11528:case 11532:case 11536:case 11540:case 11544:case 11548:case 11552:case 11556:case 11560:case 11564:case 11568:case 11572:case 11576:case 11580:case 11584:case 11588:case 11592:case 11596:case 11600:case 11604:case 11608:case 11612:case 11616:case 11620:case 11624:case 11628:case 11632:case 11636:case 11640:case 11644:case 11648:case 11652:case 11656:case 11660:case 11664:case 11668:case 11672:case 11676:case 11680:case 11684:case 11688:case 11692:case 11696:case 11700:case 11704:case 11708:case 11712:case 11716:case 11720:case 11724:case 11728:case 11732:case 11736:case 11740:case 11744:case 11748:case 11752:case 11756:case 11760:case 11764:case 11768:case 11772:case 11776:case 11780:case 11784:case 11788:case 11792:case 11796:case 11800:case 11804:case 11808:case 11812:case 11816:case 11820:case 11824:case 11828:case 11832:case 11836:case 11517:case 11521:case 11525:case 11529:case 11533:case 11537:case 11541: return Type::RedSandstoneWall;
			case 9365:case 9362:case 9366:case 9363:case 9367:case 9364: return Type::RedShulkerBox;
			case 4109: return Type::RedStainedGlass;
			case 7334:case 7338:case 7311:case 7315:case 7319:case 7323:case 7327:case 7331:case 7335:case 7339:case 7312:case 7316:case 7320:case 7324:case 7328:case 7332:case 7336:case 7340:case 7313:case 7317:case 7321:case 7325:case 7329:case 7333:case 7337:case 7341:case 7314:case 7318:case 7322:case 7326:case 7330:case 7342: return Type::RedStainedGlassPane;
			case 6861: return Type::RedTerracotta;
			case 1417: return Type::RedTulip;
			case 8211:case 8210:case 8209:case 8212: return Type::RedWallBanner;
			case 1398: return Type::RedWool;
			case 6726: return Type::RedstoneBlock;
			case 5156:case 5157: return Type::RedstoneLamp;
			case 3885:case 3886: return Type::RedstoneOre;
			case 3887:case 3888: return Type::RedstoneTorch;
			case 3890:case 3891:case 3892:case 3893:case 3894:case 3895:case 3889:case 3896: return Type::RedstoneWallTorch;
			case 3061:case 3065:case 3069:case 3073:case 3077:case 3081:case 3085:case 3089:case 3093:case 3097:case 3101:case 3105:case 3109:case 3113:case 3117:case 3121:case 3125:case 3129:case 3133:case 3137:case 3141:case 3145:case 3149:case 3153:case 3157:case 3161:case 3165:case 3169:case 3173:case 3177:case 3181:case 3185:case 3189:case 3193:case 3197:case 3201:case 3205:case 3209:case 3213:case 3217:case 3221:case 3225:case 3229:case 3233:case 3237:case 3241:case 3245:case 3249:case 3253:case 3257:case 3261:case 3265:case 3269:case 3273:case 3277:case 3281:case 3285:case 3289:case 3293:case 3297:case 3301:case 3305:case 3309:case 3313:case 3317:case 3321:case 3325:case 3329:case 3333:case 3337:case 3341:case 3345:case 3349:case 3353:case 2058:case 2062:case 2066:case 2070:case 2074:case 2078:case 2082:case 2086:case 2090:case 2094:case 2098:case 2102:case 2106:case 2110:case 2114:case 2118:case 2122:case 2126:case 2130:case 2134:case 2138:case 2142:case 2146:case 2150:case 2154:case 2158:case 2162:case 2166:case 2170:case 2174:case 2178:case 2182:case 2186:case 2190:case 2194:case 2198:case 2202:case 2206:case 2210:case 2214:case 2218:case 2222:case 2226:case 2230:case 2234:case 2238:case 2242:case 2246:case 2250:case 2254:case 2258:case 2262:case 2266:case 2270:case 2274:case 2278:case 2282:case 2286:case 2290:case 2294:case 2298:case 2302:case 2306:case 2310:case 2314:case 2318:case 2322:case 2326:case 2330:case 2334:case 2338:case 2342:case 2346:case 2350:case 2354:case 2358:case 2362:case 2366:case 2370:case 2374:case 2378:case 2382:case 2386:case 2390:case 2394:case 2398:case 2402:case 2406:case 2410:case 2414:case 2418:case 2422:case 2426:case 2430:case 2434:case 2438:case 2442:case 2446:case 2450:case 2454:case 2458:case 2462:case 2466:case 2470:case 2474:case 2478:case 2482:case 2486:case 2490:case 2494:case 2498:case 2502:case 2506:case 2510:case 2514:case 2518:case 2522:case 2526:case 2530:case 2534:case 2538:case 2542:case 2546:case 2550:case 2554:case 2558:case 2562:case 2566:case 2570:case 2574:case 2578:case 2582:case 2586:case 2590:case 2594:case 2598:case 2602:case 2606:case 2610:case 2614:case 2618:case 2622:case 2626:case 2630:case 2634:case 2638:case 2642:case 2646:case 2650:case 2654:case 2658:case 2662:case 2666:case 2670:case 2674:case 2678:case 2682:case 2686:case 2690:case 2694:case 2698:case 2702:case 2706:case 2710:case 2714:case 2718:case 2722:case 2726:case 2730:case 2734:case 2738:case 2742:case 2746:case 2750:case 2754:case 2758:case 2762:case 2766:case 2770:case 2774:case 2778:case 2782:case 2786:case 2790:case 2794:case 2798:case 2802:case 2806:case 2810:case 2814:case 2818:case 2822:case 2826:case 2830:case 2834:case 2838:case 2842:case 2846:case 2850:case 2854:case 2858:case 2862:case 2866:case 2870:case 2874:case 2878:case 2882:case 2886:case 2890:case 2894:case 2898:case 2902:case 2906:case 2910:case 2914:case 2918:case 2922:case 2926:case 2930:case 2934:case 2938:case 2942:case 2946:case 2950:case 2954:case 2958:case 2962:case 2966:case 2970:case 2974:case 2978:case 2982:case 2986:case 2990:case 2994:case 2998:case 3002:case 3006:case 3010:case 3014:case 3018:case 3022:case 3026:case 3030:case 3034:case 3038:case 3042:case 3046:case 3050:case 3054:case 3058:case 3062:case 3066:case 3070:case 3074:case 3078:case 3082:case 3086:case 3090:case 3094:case 3098:case 3102:case 3106:case 3110:case 3114:case 3118:case 3122:case 3126:case 3130:case 3134:case 3138:case 3142:case 3146:case 3150:case 3154:case 3158:case 3162:case 3166:case 3170:case 3174:case 3178:case 3182:case 3186:case 3190:case 3194:case 3198:case 3202:case 3206:case 3210:case 3214:case 3218:case 3222:case 3226:case 3230:case 3234:case 3238:case 3242:case 3246:case 3250:case 3254:case 3258:case 3262:case 3266:case 3270:case 3274:case 3278:case 3282:case 3286:case 3290:case 3294:case 3298:case 3302:case 3306:case 3310:case 3314:case 3318:case 3322:case 3326:case 3330:case 3334:case 3338:case 3342:case 3346:case 3350:case 2059:case 2063:case 2067:case 2071:case 2075:case 2079:case 2083:case 2087:case 2091:case 2095:case 2099:case 2103:case 2107:case 2111:case 2115:case 2119:case 2123:case 2127:case 2131:case 2135:case 2139:case 2143:case 2147:case 2151:case 2155:case 2159:case 2163:case 2167:case 2171:case 2175:case 2179:case 2183:case 2187:case 2191:case 2195:case 2199:case 2203:case 2207:case 2211:case 2215:case 2219:case 2223:case 2227:case 2231:case 2235:case 2239:case 2243:case 2247:case 2251:case 2255:case 2259:case 2263:case 2267:case 2271:case 2275:case 2279:case 2283:case 2287:case 2291:case 2295:case 2299:case 2303:case 2307:case 2311:case 2315:case 2319:case 2323:case 2327:case 2331:case 2335:case 2339:case 2343:case 2347:case 2351:case 2355:case 2359:case 2363:case 2367:case 2371:case 2375:case 2379:case 2383:case 2387:case 2391:case 2395:case 2399:case 2403:case 2407:case 2411:case 2415:case 2419:case 2423:case 2427:case 2431:case 2435:case 2439:case 2443:case 2447:case 2451:case 2455:case 2459:case 2463:case 2467:case 2471:case 2475:case 2479:case 2483:case 2487:case 2491:case 2495:case 2499:case 2503:case 2507:case 2511:case 2515:case 2519:case 2523:case 2527:case 2531:case 2535:case 2539:case 2543:case 2547:case 2551:case 2555:case 2559:case 2563:case 2567:case 2571:case 2575:case 2579:case 2583:case 2587:case 2591:case 2595:case 2599:case 2603:case 2607:case 2611:case 2615:case 2619:case 2623:case 2627:case 2631:case 2635:case 2639:case 2643:case 2647:case 2651:case 2655:case 2659:case 2663:case 2667:case 2671:case 2675:case 2679:case 2683:case 2687:case 2691:case 2695:case 2699:case 2703:case 2707:case 2711:case 2715:case 2719:case 2723:case 2727:case 2731:case 2735:case 2739:case 2743:case 2747:case 2751:case 2755:case 2759:case 2763:case 2767:case 2771:case 2775:case 2779:case 2783:case 2787:case 2791:case 2795:case 2799:case 2803:case 2807:case 2811:case 2815:case 2819:case 2823:case 2827:case 2831:case 2835:case 2839:case 2843:case 2847:case 2851:case 2855:case 2859:case 2863:case 2867:case 2871:case 2875:case 2879:case 2883:case 2887:case 2891:case 2895:case 2899:case 2903:case 2907:case 2911:case 2915:case 2919:case 2923:case 2927:case 2931:case 2935:case 2939:case 2943:case 2947:case 2951:case 2955:case 2959:case 2963:case 2967:case 2971:case 2975:case 2979:case 2983:case 2987:case 2991:case 2995:case 2999:case 3003:case 3007:case 3011:case 3015:case 3019:case 3023:case 3027:case 3031:case 3035:case 3039:case 3043:case 3047:case 3051:case 3055:case 3059:case 3063:case 3067:case 3071:case 3075:case 3079:case 3083:case 3087:case 3091:case 3095:case 3099:case 3103:case 3107:case 3111:case 3115:case 3119:case 3123:case 3127:case 3131:case 3135:case 3139:case 3143:case 3147:case 3151:case 3155:case 3159:case 3163:case 3167:case 3171:case 3175:case 3179:case 3183:case 3187:case 3191:case 3195:case 3199:case 3203:case 3207:case 3211:case 3215:case 3219:case 3223:case 3227:case 3231:case 3235:case 3239:case 3243:case 3247:case 3251:case 3255:case 3259:case 3263:case 3267:case 3271:case 3275:case 3279:case 3283:case 3287:case 3291:case 3295:case 3299:case 3303:case 3307:case 3311:case 3315:case 3319:case 3323:case 3327:case 3331:case 3335:case 3339:case 3343:case 3347:case 3351:case 2060:case 2064:case 2068:case 2072:case 2076:case 2080:case 2084:case 2088:case 2092:case 2096:case 2100:case 2104:case 2108:case 2112:case 2116:case 2120:case 2124:case 2128:case 2132:case 2136:case 2140:case 2144:case 2148:case 2152:case 2156:case 2160:case 2164:case 2168:case 2172:case 2176:case 2180:case 2184:case 2188:case 2192:case 2196:case 2200:case 2204:case 2208:case 2212:case 2216:case 2220:case 2224:case 2228:case 2232:case 2236:case 2240:case 2244:case 2248:case 2252:case 2256:case 2260:case 2264:case 2268:case 2272:case 2276:case 2280:case 2284:case 2288:case 2292:case 2296:case 2300:case 2304:case 2308:case 2312:case 2316:case 2320:case 2324:case 2328:case 2332:case 2336:case 2340:case 2344:case 2348:case 2352:case 2356:case 2360:case 2364:case 2368:case 2372:case 2376:case 2380:case 2384:case 2388:case 2392:case 2396:case 2400:case 2404:case 2408:case 2412:case 2416:case 2420:case 2424:case 2428:case 2432:case 2436:case 2440:case 2444:case 2448:case 2452:case 2456:case 2460:case 2464:case 2468:case 2472:case 2476:case 2480:case 2484:case 2488:case 2492:case 2496:case 2500:case 2504:case 2508:case 2512:case 2516:case 2520:case 2524:case 2528:case 2532:case 2536:case 2540:case 2544:case 2548:case 2552:case 2556:case 2560:case 2564:case 2568:case 2572:case 2576:case 2580:case 2584:case 2588:case 2592:case 2596:case 2600:case 2604:case 2608:case 2612:case 2616:case 2620:case 2624:case 2628:case 2632:case 2636:case 2640:case 2644:case 2648:case 2652:case 2656:case 2660:case 2664:case 2668:case 2672:case 2676:case 2680:case 2684:case 2688:case 2692:case 2696:case 2700:case 2704:case 2708:case 2712:case 2716:case 2720:case 2724:case 2728:case 2732:case 2736:case 2740:case 2744:case 2748:case 2752:case 2756:case 2760:case 2764:case 2768:case 2772:case 2776:case 2780:case 2784:case 2788:case 2792:case 2796:case 2800:case 2804:case 2808:case 2812:case 2816:case 2820:case 2824:case 2828:case 2832:case 2836:case 2840:case 2844:case 2848:case 2852:case 2856:case 2860:case 2864:case 2868:case 2872:case 2876:case 2880:case 2884:case 2888:case 2892:case 2896:case 2900:case 2904:case 2908:case 2912:case 2916:case 2920:case 2924:case 2928:case 2932:case 2936:case 2940:case 2944:case 2948:case 2952:case 2956:case 2960:case 2964:case 2968:case 2972:case 2976:case 2980:case 2984:case 2988:case 2992:case 2996:case 3000:case 3004:case 3008:case 3012:case 3016:case 3020:case 3024:case 3028:case 3032:case 3036:case 3040:case 3044:case 3048:case 3052:case 3056:case 3060:case 3064:case 3068:case 3072:case 3076:case 3080:case 3084:case 3088:case 3092:case 3096:case 3100:case 3104:case 3108:case 3112:case 3116:case 3120:case 3124:case 3128:case 3132:case 3136:case 3140:case 3144:case 3148:case 3152:case 3156:case 3160:case 3164:case 3168:case 3172:case 3176:case 3180:case 3184:case 3188:case 3192:case 3196:case 3200:case 3204:case 3208:case 3212:case 3216:case 3220:case 3224:case 3228:case 3232:case 3236:case 3240:case 3244:case 3248:case 3252:case 3256:case 3260:case 3264:case 3268:case 3272:case 3276:case 3280:case 3284:case 3288:case 3292:case 3296:case 3300:case 3304:case 3308:case 3312:case 3316:case 3320:case 3324:case 3328:case 3332:case 3336:case 3340:case 3344:case 3348:case 3352:case 2061:case 2065:case 2069:case 2073:case 2077:case 2081:case 2085:case 2089:case 2093:case 2097:case 2101:case 2105:case 2109:case 2113:case 2117:case 2121:case 2125:case 2129:case 2133:case 2137:case 2141:case 2145:case 2149:case 2153:case 2157:case 2161:case 2165:case 2169:case 2173:case 2177:case 2181:case 2185:case 2189:case 2193:case 2197:case 2201:case 2205:case 2209:case 2213:case 2217:case 2221:case 2225:case 2229:case 2233:case 2237:case 2241:case 2245:case 2249:case 2253:case 2257:case 2261:case 2265:case 2269:case 2273:case 2277:case 2281:case 2285:case 2289:case 2293:case 2297:case 2301:case 2305:case 2309:case 2313:case 2317:case 2321:case 2325:case 2329:case 2333:case 2337:case 2341:case 2345:case 2349:case 2353:case 2357:case 2361:case 2365:case 2369:case 2373:case 2377:case 2381:case 2385:case 2389:case 2393:case 2397:case 2401:case 2405:case 2409:case 2413:case 2417:case 2421:case 2425:case 2429:case 2433:case 2437:case 2441:case 2445:case 2449:case 2453:case 2457:case 2461:case 2465:case 2469:case 2473:case 2477:case 2481:case 2485:case 2489:case 2493:case 2497:case 2501:case 2505:case 2509:case 2513:case 2517:case 2521:case 2525:case 2529:case 2533:case 2537:case 2541:case 2545:case 2549:case 2553:case 2557:case 2561:case 2565:case 2569:case 2573:case 2577:case 2581:case 2585:case 2589:case 2593:case 2597:case 2601:case 2605:case 2609:case 2613:case 2617:case 2621:case 2625:case 2629:case 2633:case 2637:case 2641:case 2645:case 2649:case 2653:case 2657:case 2661:case 2665:case 2669:case 2673:case 2677:case 2681:case 2685:case 2689:case 2693:case 2697:case 2701:case 2705:case 2709:case 2713:case 2717:case 2721:case 2725:case 2729:case 2733:case 2737:case 2741:case 2745:case 2749:case 2753:case 2757:case 2761:case 2765:case 2769:case 2773:case 2777:case 2781:case 2785:case 2789:case 2793:case 2797:case 2801:case 2805:case 2809:case 2813:case 2817:case 2821:case 2825:case 2829:case 2833:case 2837:case 2841:case 2845:case 2849:case 2853:case 2857:case 2861:case 2865:case 2869:case 2873:case 2877:case 2881:case 2885:case 2889:case 2893:case 2897:case 2901:case 2905:case 2909:case 2913:case 2917:case 2921:case 2925:case 2929:case 2933:case 2937:case 2941:case 2945:case 2949:case 2953:case 2957:case 2961:case 2965:case 2969:case 2973:case 2977:case 2981:case 2985:case 2989:case 2993:case 2997:case 3001:case 3005:case 3009:case 3013:case 3017:case 3021:case 3025:case 3029:case 3033:case 3037:case 3041:case 3045:case 3049:case 3053:case 3057: return Type::RedstoneWire;
			case 4051:case 4059:case 4067:case 4075:case 4083:case 4091:case 4036:case 4044:case 4052:case 4060:case 4068:case 4076:case 4084:case 4092:case 4037:case 4045:case 4053:case 4061:case 4069:case 4077:case 4085:case 4093:case 4038:case 4046:case 4054:case 4062:case 4070:case 4078:case 4086:case 4031:case 4039:case 4047:case 4055:case 4063:case 4071:case 4079:case 4087:case 4032:case 4040:case 4048:case 4056:case 4064:case 4072:case 4080:case 4088:case 4033:case 4041:case 4049:case 4057:case 4065:case 4073:case 4081:case 4089:case 4034:case 4042:case 4050:case 4058:case 4066:case 4074:case 4082:case 4090:case 4035:case 4043:case 4094: return Type::Repeater;
			case 9225:case 9227:case 9229:case 9231:case 9233:case 9235:case 9226:case 9228:case 9230:case 9232:case 9234:case 9236: return Type::RepeatingCommandBlock;
			case 15829:case 15833:case 15830:case 15831:case 15832: return Type::RespawnAnchor;
			case 7889:case 7890: return Type::RoseBush;
			case 66: return Type::Sand;
			case 246: return Type::Sandstone;
			case 8353:case 8350:case 8351:case 8348:case 8352:case 8349: return Type::SandstoneSlab;
			case 5203:case 5204:case 5205:case 5206:case 5207:case 5208:case 5209:case 5210:case 5211:case 5212:case 5213:case 5214:case 5215:case 5216:case 5217:case 5218:case 5219:case 5220:case 5221:case 5222:case 5223:case 5224:case 5225:case 5226:case 5227:case 5228:case 5229:case 5230:case 5231:case 5232:case 5233:case 5170:case 5234:case 5171:case 5235:case 5172:case 5236:case 5173:case 5237:case 5174:case 5238:case 5175:case 5239:case 5176:case 5240:case 5177:case 5241:case 5178:case 5242:case 5179:case 5243:case 5180:case 5244:case 5181:case 5245:case 5182:case 5246:case 5183:case 5247:case 5184:case 5248:case 5185:case 5249:case 5186:case 5187:case 5188:case 5189:case 5190:case 5191:case 5192:case 5193:case 5194:case 5195:case 5196:case 5197:case 5198:case 5199:case 5200:case 5201:case 5202: return Type::SandstoneStairs;
			case 14100:case 14104:case 13785:case 13789:case 13793:case 13797:case 13801:case 13805:case 13809:case 13813:case 13817:case 13821:case 13825:case 13829:case 13833:case 13837:case 13841:case 13845:case 13849:case 13853:case 13857:case 13861:case 13865:case 13869:case 13873:case 13877:case 13881:case 13885:case 13889:case 13893:case 13897:case 13901:case 13905:case 13909:case 13913:case 13917:case 13921:case 13925:case 13929:case 13933:case 13937:case 13941:case 13945:case 13949:case 13953:case 13957:case 13961:case 13965:case 13969:case 13973:case 13977:case 13981:case 13985:case 13989:case 13993:case 13997:case 14001:case 14005:case 14009:case 14013:case 14017:case 14021:case 14025:case 14029:case 14033:case 14037:case 14041:case 14045:case 14049:case 14053:case 14057:case 14061:case 14065:case 14069:case 14073:case 14077:case 14081:case 14085:case 14089:case 14093:case 14097:case 14101:case 14105:case 13786:case 13790:case 13794:case 13798:case 13802:case 13806:case 13810:case 13814:case 13818:case 13822:case 13826:case 13830:case 13834:case 13838:case 13842:case 13846:case 13850:case 13854:case 13858:case 13862:case 13866:case 13870:case 13874:case 13878:case 13882:case 13886:case 13890:case 13894:case 13898:case 13902:case 13906:case 13910:case 13914:case 13918:case 13922:case 13926:case 13930:case 13934:case 13938:case 13942:case 13946:case 13950:case 13954:case 13958:case 13962:case 13966:case 13970:case 13974:case 13978:case 13982:case 13986:case 13990:case 13994:case 13998:case 14002:case 14006:case 14010:case 14014:case 14018:case 14022:case 14026:case 14030:case 14034:case 14038:case 14042:case 14046:case 14050:case 14054:case 14058:case 14062:case 14066:case 14070:case 14074:case 14078:case 14082:case 14086:case 14090:case 14094:case 14098:case 14102:case 14106:case 13783:case 13787:case 13791:case 13795:case 13799:case 13803:case 13807:case 13811:case 13815:case 13819:case 13823:case 13827:case 13831:case 13835:case 13839:case 13843:case 13847:case 13851:case 13855:case 13859:case 13863:case 13867:case 13871:case 13875:case 13879:case 13883:case 13887:case 13891:case 13895:case 13899:case 13903:case 13907:case 13911:case 13915:case 13919:case 13923:case 13927:case 13931:case 13935:case 13939:case 13943:case 13947:case 13951:case 13955:case 13959:case 13963:case 13967:case 13971:case 13975:case 13979:case 13983:case 13987:case 13991:case 13995:case 13999:case 14003:case 14007:case 14011:case 14015:case 14019:case 14023:case 14027:case 14031:case 14035:case 14039:case 14043:case 14047:case 14051:case 14055:case 14059:case 14063:case 14067:case 14071:case 14075:case 14079:case 14083:case 14087:case 14091:case 14095:case 14099:case 14103:case 13784:case 13788:case 13792:case 13796:case 13800:case 13804:case 13808:case 13812:case 13816:case 13820:case 13824:case 13828:case 13832:case 13836:case 13840:case 13844:case 13848:case 13852:case 13856:case 13860:case 13864:case 13868:case 13872:case 13876:case 13880:case 13884:case 13888:case 13892:case 13896:case 13900:case 13904:case 13908:case 13912:case 13916:case 13920:case 13924:case 13928:case 13932:case 13936:case 13940:case 13944:case 13948:case 13952:case 13956:case 13960:case 13964:case 13968:case 13972:case 13976:case 13980:case 13984:case 13988:case 13992:case 13996:case 14000:case 14004:case 14008:case 14012:case 14016:case 14020:case 14024:case 14028:case 14032:case 14036:case 14040:case 14044:case 14048:case 14052:case 14056:case 14060:case 14064:case 14068:case 14072:case 14076:case 14080:case 14084:case 14088:case 14092:case 14096: return Type::SandstoneWall;
			case 14784:case 14761:case 14769:case 14777:case 14785:case 14762:case 14770:case 14778:case 14755:case 14763:case 14771:case 14779:case 14756:case 14764:case 14772:case 14780:case 14757:case 14765:case 14773:case 14781:case 14758:case 14766:case 14774:case 14782:case 14759:case 14767:case 14775:case 14783:case 14760:case 14768:case 14776:case 14786: return Type::Scaffolding;
			case 7862: return Type::SeaLantern;
			case 9641:case 9645:case 9642:case 9646:case 9643:case 9640:case 9644:case 9647: return Type::SeaPickle;
			case 1345: return Type::Seagrass;
			case 14989: return Type::Shroomlight;
			case 9277:case 9274:case 9275:case 9272:case 9276:case 9273: return Type::ShulkerBox;
			case 6496:case 6497:case 6498:case 6499:case 6500:case 6501:case 6502:case 6503:case 6504:case 6490:case 6491:case 6492:case 6493:case 6494:case 6495:case 6505: return Type::SkeletonSkull;
			case 6508:case 6506:case 6507:case 6509: return Type::SkeletonWallSkull;
			case 7535: return Type::SlimeBlock;
			case 14849: return Type::SmithingTable;
			case 14807:case 14804:case 14808:case 14805:case 14809:case 14806:case 14803:case 14810: return Type::Smoker;
			case 8416: return Type::SmoothQuartz;
			case 10831:case 10835:case 10832:case 10836:case 10833:case 10834: return Type::SmoothQuartzSlab;
			case 10341:case 10342:case 10343:case 10344:case 10345:case 10346:case 10347:case 10348:case 10349:case 10350:case 10351:case 10352:case 10353:case 10354:case 10355:case 10356:case 10357:case 10358:case 10359:case 10360:case 10361:case 10362:case 10363:case 10364:case 10365:case 10366:case 10367:case 10368:case 10369:case 10370:case 10371:case 10372:case 10373:case 10374:case 10375:case 10376:case 10377:case 10378:case 10379:case 10380:case 10381:case 10382:case 10383:case 10384:case 10385:case 10386:case 10387:case 10388:case 10309:case 10310:case 10311:case 10312:case 10313:case 10314:case 10315:case 10316:case 10317:case 10318:case 10319:case 10320:case 10321:case 10322:case 10323:case 10324:case 10325:case 10326:case 10327:case 10328:case 10329:case 10330:case 10331:case 10332:case 10333:case 10334:case 10335:case 10336:case 10337:case 10338:case 10339:case 10340: return Type::SmoothQuartzStairs;
			case 8417: return Type::SmoothRedSandstone;
			case 10796:case 10800:case 10797:case 10798:case 10795:case 10799: return Type::SmoothRedSandstoneSlab;
			case 9749:case 9750:case 9751:case 9752:case 9753:case 9754:case 9755:case 9756:case 9757:case 9758:case 9759:case 9760:case 9761:case 9762:case 9763:case 9764:case 9765:case 9766:case 9767:case 9768:case 9769:case 9770:case 9771:case 9772:case 9773:case 9774:case 9775:case 9776:case 9777:case 9778:case 9779:case 9780:case 9781:case 9782:case 9783:case 9784:case 9785:case 9786:case 9787:case 9788:case 9789:case 9790:case 9791:case 9792:case 9793:case 9794:case 9795:case 9796:case 9797:case 9798:case 9799:case 9800:case 9801:case 9802:case 9803:case 9804:case 9805:case 9806:case 9807:case 9808:case 9809:case 9810:case 9811:case 9812:case 9813:case 9814:case 9815:case 9816:case 9817:case 9818:case 9819:case 9820:case 9821:case 9822:case 9823:case 9824:case 9825:case 9826:case 9827:case 9828: return Type::SmoothRedSandstoneStairs;
			case 8415: return Type::SmoothSandstone;
			case 10828:case 10825:case 10829:case 10826:case 10830:case 10827: return Type::SmoothSandstoneSlab;
			case 10229:case 10230:case 10231:case 10232:case 10233:case 10234:case 10235:case 10236:case 10237:case 10238:case 10239:case 10240:case 10241:case 10242:case 10243:case 10244:case 10245:case 10246:case 10247:case 10248:case 10249:case 10250:case 10251:case 10252:case 10253:case 10254:case 10255:case 10256:case 10257:case 10258:case 10259:case 10260:case 10261:case 10262:case 10263:case 10264:case 10265:case 10266:case 10267:case 10268:case 10269:case 10270:case 10271:case 10272:case 10273:case 10274:case 10275:case 10276:case 10277:case 10278:case 10279:case 10280:case 10281:case 10282:case 10283:case 10284:case 10285:case 10286:case 10287:case 10288:case 10289:case 10290:case 10291:case 10292:case 10293:case 10294:case 10295:case 10296:case 10297:case 10298:case 10299:case 10300:case 10301:case 10302:case 10303:case 10304:case 10305:case 10306:case 10307:case 10308: return Type::SmoothSandstoneStairs;
			case 8414: return Type::SmoothStone;
			case 8346:case 8343:case 8347:case 8344:case 8345:case 8342: return Type::SmoothStoneSlab;
			case 3925:case 3926:case 3927:case 3921:case 3922:case 3923:case 3924:case 3928: return Type::Snow;
			case 3930: return Type::SnowBlock;
			case 14939:case 14947:case 14924:case 14932:case 14940:case 14948:case 14925:case 14933:case 14941:case 14949:case 14926:case 14934:case 14942:case 14950:case 14927:case 14935:case 14943:case 14951:case 14928:case 14936:case 14944:case 14952:case 14929:case 14937:case 14945:case 14922:case 14930:case 14938:case 14946:case 14923:case 14931:case 14953: return Type::SoulCampfire;
			case 1952: return Type::SoulFire;
			case 14888:case 14889: return Type::SoulLantern;
			case 4000: return Type::SoulSand;
			case 4001: return Type::SoulSoil;
			case 4008: return Type::SoulTorch;
			case 4009:case 4011:case 4010:case 4012: return Type::SoulWallTorch;
			case 1953: return Type::Spawner;
			case 229: return Type::Sponge;
			case 6373:case 6377:case 6381:case 6385:case 6389:case 6393:case 6370:case 6374:case 6378:case 6382:case 6386:case 6390:case 6371:case 6375:case 6379:case 6383:case 6387:case 6391:case 6372:case 6376:case 6380:case 6384:case 6388:case 6392: return Type::SpruceButton;
			case 8766:case 8798:case 8767:case 8799:case 8768:case 8800:case 8769:case 8738:case 8770:case 8739:case 8771:case 8740:case 8772:case 8741:case 8773:case 8742:case 8774:case 8743:case 8775:case 8744:case 8776:case 8745:case 8777:case 8746:case 8778:case 8747:case 8779:case 8748:case 8780:case 8749:case 8781:case 8750:case 8782:case 8751:case 8783:case 8752:case 8784:case 8753:case 8785:case 8754:case 8786:case 8755:case 8787:case 8756:case 8788:case 8757:case 8789:case 8758:case 8790:case 8759:case 8791:case 8760:case 8792:case 8761:case 8793:case 8762:case 8794:case 8763:case 8795:case 8764:case 8796:case 8765:case 8797:case 8801: return Type::SpruceDoor;
			case 8584:case 8592:case 8600:case 8608:case 8585:case 8593:case 8601:case 8578:case 8586:case 8594:case 8602:case 8579:case 8587:case 8595:case 8603:case 8580:case 8588:case 8596:case 8604:case 8581:case 8589:case 8597:case 8605:case 8582:case 8590:case 8598:case 8606:case 8583:case 8591:case 8599:case 8607:case 8609: return Type::SpruceFence;
			case 8429:case 8437:case 8445:case 8422:case 8430:case 8438:case 8446:case 8423:case 8431:case 8439:case 8447:case 8424:case 8432:case 8440:case 8448:case 8425:case 8433:case 8441:case 8418:case 8426:case 8434:case 8442:case 8419:case 8427:case 8435:case 8443:case 8420:case 8428:case 8436:case 8444:case 8421:case 8449: return Type::SpruceFenceGate;
			case 168:case 161:case 169:case 162:case 170:case 163:case 171:case 164:case 172:case 165:case 166:case 159:case 167:case 160: return Type::SpruceLeaves;
			case 76:case 77:case 78: return Type::SpruceLog;
			case 16: return Type::SprucePlanks;
			case 3875:case 3876: return Type::SprucePressurePlate;
			case 23:case 24: return Type::SpruceSapling;
			case 3421:case 3423:case 3425:case 3427:case 3429:case 3431:case 3433:case 3435:case 3437:case 3439:case 3441:case 3443:case 3414:case 3416:case 3418:case 3420:case 3422:case 3424:case 3426:case 3428:case 3430:case 3432:case 3434:case 3436:case 3438:case 3440:case 3442:case 3413:case 3415:case 3417:case 3419:case 3444: return Type::SpruceSign;
			case 8311:case 8308:case 8309:case 8306:case 8310:case 8307: return Type::SpruceSlab;
			case 5457:case 5458:case 5459:case 5460:case 5461:case 5462:case 5463:case 5464:case 5465:case 5466:case 5467:case 5404:case 5468:case 5405:case 5469:case 5406:case 5470:case 5407:case 5471:case 5408:case 5472:case 5409:case 5473:case 5410:case 5474:case 5411:case 5475:case 5412:case 5476:case 5413:case 5477:case 5414:case 5478:case 5415:case 5479:case 5416:case 5480:case 5417:case 5481:case 5418:case 5482:case 5419:case 5483:case 5420:case 5421:case 5422:case 5423:case 5424:case 5425:case 5426:case 5427:case 5428:case 5429:case 5430:case 5431:case 5432:case 5433:case 5434:case 5435:case 5436:case 5437:case 5438:case 5439:case 5440:case 5441:case 5442:case 5443:case 5444:case 5445:case 5446:case 5447:case 5448:case 5449:case 5450:case 5451:case 5452:case 5453:case 5454:case 5455:case 5456: return Type::SpruceStairs;
			case 4195:case 4211:case 4227:case 4180:case 4196:case 4212:case 4228:case 4181:case 4197:case 4213:case 4229:case 4182:case 4198:case 4214:case 4230:case 4183:case 4199:case 4215:case 4231:case 4184:case 4200:case 4216:case 4232:case 4185:case 4201:case 4217:case 4233:case 4186:case 4202:case 4218:case 4234:case 4187:case 4203:case 4219:case 4235:case 4188:case 4204:case 4220:case 4236:case 4189:case 4205:case 4221:case 4237:case 4190:case 4206:case 4222:case 4175:case 4191:case 4207:case 4223:case 4176:case 4192:case 4208:case 4224:case 4177:case 4193:case 4209:case 4225:case 4178:case 4194:case 4210:case 4226:case 4179:case 4238: return Type::SpruceTrapdoor;
			case 3743:case 3744:case 3745:case 3746:case 3747:case 3748:case 3749:case 3750: return Type::SpruceWallSign;
			case 112:case 113:case 114: return Type::SpruceWood;
			case 1332:case 1336:case 1340:case 1329:case 1333:case 1337:case 1330:case 1334:case 1338:case 1331:case 1335:case 1339: return Type::StickyPiston;
			case 1: return Type::Stone;
			case 8381:case 8378:case 8382:case 8379:case 8383:case 8380: return Type::StoneBrickSlab;
			case 4949:case 4950:case 4951:case 4952:case 4953:case 4954:case 4955:case 4956:case 4957:case 4958:case 4959:case 4960:case 4961:case 4962:case 4963:case 4964:case 4965:case 4966:case 4967:case 4968:case 4969:case 4970:case 4971:case 4972:case 4973:case 4974:case 4975:case 4976:case 4977:case 4978:case 4979:case 4980:case 4981:case 4982:case 4983:case 4984:case 4985:case 4986:case 4987:case 4988:case 4989:case 4990:case 4991:case 4992:case 4993:case 4994:case 4995:case 4932:case 4996:case 4933:case 4997:case 4934:case 4998:case 4935:case 4999:case 4936:case 5000:case 4937:case 5001:case 4938:case 5002:case 4939:case 5003:case 4940:case 5004:case 4941:case 5005:case 4942:case 5006:case 4943:case 5007:case 4944:case 5008:case 4945:case 5009:case 4946:case 5010:case 4947:case 5011:case 4948: return Type::StoneBrickStairs;
			case 12567:case 12571:case 12575:case 12579:case 12583:case 12587:case 12591:case 12595:case 12599:case 12603:case 12607:case 12611:case 12615:case 12619:case 12623:case 12627:case 12631:case 12635:case 12639:case 12643:case 12647:case 12651:case 12655:case 12659:case 12663:case 12667:case 12671:case 12675:case 12679:case 12683:case 12687:case 12691:case 12695:case 12699:case 12703:case 12707:case 12711:case 12715:case 12719:case 12723:case 12727:case 12731:case 12735:case 12739:case 12743:case 12747:case 12751:case 12755:case 12759:case 12763:case 12767:case 12771:case 12775:case 12779:case 12783:case 12787:case 12791:case 12795:case 12799:case 12803:case 12807:case 12488:case 12492:case 12496:case 12500:case 12504:case 12508:case 12512:case 12516:case 12520:case 12524:case 12528:case 12532:case 12536:case 12540:case 12544:case 12548:case 12552:case 12556:case 12560:case 12564:case 12568:case 12572:case 12576:case 12580:case 12584:case 12588:case 12592:case 12596:case 12600:case 12604:case 12608:case 12612:case 12616:case 12620:case 12624:case 12628:case 12632:case 12636:case 12640:case 12644:case 12648:case 12652:case 12656:case 12660:case 12664:case 12668:case 12672:case 12676:case 12680:case 12684:case 12688:case 12692:case 12696:case 12700:case 12704:case 12708:case 12712:case 12716:case 12720:case 12724:case 12728:case 12732:case 12736:case 12740:case 12744:case 12748:case 12752:case 12756:case 12760:case 12764:case 12768:case 12772:case 12776:case 12780:case 12784:case 12788:case 12792:case 12796:case 12800:case 12804:case 12808:case 12489:case 12493:case 12497:case 12501:case 12505:case 12509:case 12513:case 12517:case 12521:case 12525:case 12529:case 12533:case 12537:case 12541:case 12545:case 12549:case 12553:case 12557:case 12561:case 12565:case 12569:case 12573:case 12577:case 12581:case 12585:case 12589:case 12593:case 12597:case 12601:case 12605:case 12609:case 12613:case 12617:case 12621:case 12625:case 12629:case 12633:case 12637:case 12641:case 12645:case 12649:case 12653:case 12657:case 12661:case 12665:case 12669:case 12673:case 12677:case 12681:case 12685:case 12689:case 12693:case 12697:case 12701:case 12705:case 12709:case 12713:case 12717:case 12721:case 12725:case 12729:case 12733:case 12737:case 12741:case 12745:case 12749:case 12753:case 12757:case 12761:case 12765:case 12769:case 12773:case 12777:case 12781:case 12785:case 12789:case 12793:case 12797:case 12801:case 12805:case 12809:case 12490:case 12494:case 12498:case 12502:case 12506:case 12510:case 12514:case 12518:case 12522:case 12526:case 12530:case 12534:case 12538:case 12542:case 12546:case 12550:case 12554:case 12558:case 12562:case 12566:case 12570:case 12574:case 12578:case 12582:case 12586:case 12590:case 12594:case 12598:case 12602:case 12606:case 12610:case 12614:case 12618:case 12622:case 12626:case 12630:case 12634:case 12638:case 12642:case 12646:case 12650:case 12654:case 12658:case 12662:case 12666:case 12670:case 12674:case 12678:case 12682:case 12686:case 12690:case 12694:case 12698:case 12702:case 12706:case 12710:case 12714:case 12718:case 12722:case 12726:case 12730:case 12734:case 12738:case 12742:case 12746:case 12750:case 12754:case 12758:case 12762:case 12766:case 12770:case 12774:case 12778:case 12782:case 12786:case 12790:case 12794:case 12798:case 12802:case 12806:case 12810:case 12487:case 12491:case 12495:case 12499:case 12503:case 12507:case 12511:case 12515:case 12519:case 12523:case 12527:case 12531:case 12535:case 12539:case 12543:case 12547:case 12551:case 12555:case 12559:case 12563: return Type::StoneBrickWall;
			case 4495: return Type::StoneBricks;
			case 3917:case 3919:case 3898:case 3900:case 3902:case 3904:case 3906:case 3908:case 3910:case 3912:case 3914:case 3916:case 3918:case 3920:case 3897:case 3899:case 3901:case 3903:case 3905:case 3907:case 3909:case 3911:case 3913:case 3915: return Type::StoneButton;
			case 3807:case 3808: return Type::StonePressurePlate;
			case 8339:case 8336:case 8340:case 8337:case 8341:case 8338: return Type::StoneSlab;
			case 10214:case 10215:case 10216:case 10217:case 10218:case 10219:case 10220:case 10221:case 10222:case 10223:case 10224:case 10225:case 10226:case 10227:case 10228:case 10149:case 10150:case 10151:case 10152:case 10153:case 10154:case 10155:case 10156:case 10157:case 10158:case 10159:case 10160:case 10161:case 10162:case 10163:case 10164:case 10165:case 10166:case 10167:case 10168:case 10169:case 10170:case 10171:case 10172:case 10173:case 10174:case 10175:case 10176:case 10177:case 10178:case 10179:case 10180:case 10181:case 10182:case 10183:case 10184:case 10185:case 10186:case 10187:case 10188:case 10189:case 10190:case 10191:case 10192:case 10193:case 10194:case 10195:case 10196:case 10197:case 10198:case 10199:case 10200:case 10201:case 10202:case 10203:case 10204:case 10205:case 10206:case 10207:case 10208:case 10209:case 10210:case 10211:case 10212:case 10213: return Type::StoneStairs;
			case 14850:case 14852:case 14851:case 14853: return Type::Stonecutter;
			case 100:case 101:case 102: return Type::StrippedAcaciaLog;
			case 141:case 140:case 139: return Type::StrippedAcaciaWood;
			case 94:case 95:case 96: return Type::StrippedBirchLog;
			case 135:case 134:case 133: return Type::StrippedBirchWood;
			case 14985:case 14984:case 14986: return Type::StrippedCrimsonHyphae;
			case 14979:case 14978:case 14980: return Type::StrippedCrimsonStem;
			case 103:case 104:case 105: return Type::StrippedDarkOakLog;
			case 144:case 143:case 142: return Type::StrippedDarkOakWood;
			case 97:case 98:case 99: return Type::StrippedJungleLog;
			case 138:case 137:case 136: return Type::StrippedJungleWood;
			case 106:case 107:case 108: return Type::StrippedOakLog;
			case 127:case 128:case 129: return Type::StrippedOakWood;
			case 91:case 92:case 93: return Type::StrippedSpruceLog;
			case 132:case 131:case 130: return Type::StrippedSpruceWood;
			case 14967:case 14969:case 14968: return Type::StrippedWarpedHyphae;
			case 14961:case 14963:case 14962: return Type::StrippedWarpedStem;
			case 15735:case 15737:case 15736:case 15738: return Type::StructureBlock;
			case 9259: return Type::StructureVoid;
			case 3961:case 3954:case 3962:case 3955:case 3948:case 3956:case 3949:case 3957:case 3950:case 3958:case 3951:case 3959:case 3952:case 3960:case 3953:case 3963: return Type::SugarCane;
			case 7885:case 7886: return Type::Sunflower;
			case 14955:case 14954:case 14956:case 14957: return Type::SweetBerryBush;
			case 7893:case 7894: return Type::TallGrass;
			case 1346:case 1347: return Type::TallSeagrass;
			case 15765:case 15767:case 15769:case 15771:case 15773:case 15760:case 15762:case 15764:case 15766:case 15768:case 15770:case 15772:case 15774:case 15761:case 15763:case 15775: return Type::Target;
			case 7882: return Type::Terracotta;
			case 1430:case 1431: return Type::Tnt;
			case 1435: return Type::Torch;
			case 6625:case 6629:case 6633:case 6637:case 6641:case 6645:case 6622:case 6626:case 6630:case 6634:case 6638:case 6642:case 6623:case 6627:case 6631:case 6635:case 6639:case 6643:case 6624:case 6628:case 6632:case 6636:case 6640:case 6644: return Type::TrappedChest;
			case 5393:case 5330:case 5394:case 5331:case 5395:case 5332:case 5396:case 5333:case 5397:case 5334:case 5398:case 5335:case 5399:case 5336:case 5400:case 5337:case 5401:case 5338:case 5275:case 5339:case 5276:case 5340:case 5277:case 5341:case 5278:case 5342:case 5279:case 5343:case 5280:case 5344:case 5281:case 5345:case 5282:case 5346:case 5283:case 5347:case 5284:case 5348:case 5285:case 5349:case 5286:case 5350:case 5287:case 5351:case 5288:case 5352:case 5289:case 5353:case 5290:case 5354:case 5291:case 5355:case 5292:case 5356:case 5293:case 5357:case 5294:case 5358:case 5295:case 5359:case 5296:case 5360:case 5297:case 5361:case 5298:case 5362:case 5299:case 5363:case 5300:case 5364:case 5301:case 5365:case 5302:case 5366:case 5303:case 5367:case 5304:case 5368:case 5305:case 5369:case 5306:case 5370:case 5307:case 5371:case 5308:case 5372:case 5309:case 5373:case 5310:case 5374:case 5311:case 5375:case 5312:case 5376:case 5313:case 5377:case 5314:case 5378:case 5315:case 5379:case 5316:case 5380:case 5317:case 5381:case 5318:case 5382:case 5319:case 5383:case 5320:case 5384:case 5321:case 5385:case 5322:case 5386:case 5323:case 5387:case 5324:case 5388:case 5325:case 5389:case 5326:case 5390:case 5327:case 5391:case 5328:case 5392:case 5329:case 5402: return Type::Tripwire;
			case 5266:case 5267:case 5268:case 5269:case 5270:case 5271:case 5272:case 5273:case 5259:case 5260:case 5261:case 5262:case 5263:case 5264:case 5265:case 5274: return Type::TripwireHook;
			case 9530:case 9531: return Type::TubeCoral;
			case 9515: return Type::TubeCoralBlock;
			case 9550:case 9551: return Type::TubeCoralFan;
			case 9606:case 9603:case 9600:case 9604:case 9601:case 9605:case 9602:case 9607: return Type::TubeCoralWallFan;
			case 9499:case 9501:case 9503:case 9505:case 9507:case 9509:case 9498:case 9500:case 9502:case 9504:case 9506:case 9508: return Type::TurtleEgg;
			case 15032:case 15040:case 15017:case 15025:case 15033:case 15041:case 15018:case 15026:case 15034:case 15042:case 15019:case 15027:case 15035:case 15020:case 15028:case 15036:case 15021:case 15029:case 15037:case 15022:case 15030:case 15038:case 15023:case 15031:case 15039:case 15024: return Type::TwistingVines;
			case 15043: return Type::TwistingVinesPlant;
			case 4792:case 4796:case 4800:case 4804:case 4808:case 4812:case 4816:case 4789:case 4793:case 4797:case 4801:case 4805:case 4809:case 4813:case 4817:case 4790:case 4794:case 4798:case 4802:case 4806:case 4810:case 4814:case 4818:case 4791:case 4795:case 4799:case 4803:case 4807:case 4811:case 4815:case 4788:case 4819: return Type::Vine;
			case 9665: return Type::VoidAir;
			case 1437:case 1438:case 1436:case 1439: return Type::WallTorch;
			case 15505:case 15513:case 15521:case 15506:case 15514:case 15522:case 15507:case 15515:case 15523:case 15508:case 15516:case 15524:case 15509:case 15517:case 15525:case 15510:case 15518:case 15526:case 15503:case 15511:case 15519:case 15504:case 15512:case 15520: return Type::WarpedButton;
			case 15633:case 15602:case 15634:case 15603:case 15635:case 15604:case 15636:case 15605:case 15637:case 15606:case 15638:case 15607:case 15639:case 15608:case 15640:case 15609:case 15641:case 15610:case 15642:case 15611:case 15643:case 15612:case 15644:case 15613:case 15645:case 15614:case 15646:case 15615:case 15647:case 15616:case 15648:case 15617:case 15649:case 15618:case 15650:case 15619:case 15651:case 15620:case 15652:case 15621:case 15653:case 15622:case 15591:case 15623:case 15592:case 15624:case 15593:case 15625:case 15594:case 15626:case 15595:case 15627:case 15596:case 15628:case 15597:case 15629:case 15598:case 15630:case 15599:case 15631:case 15600:case 15632:case 15601:case 15654: return Type::WarpedDoor;
			case 15125:case 15102:case 15110:case 15118:case 15095:case 15103:case 15111:case 15119:case 15096:case 15104:case 15112:case 15120:case 15097:case 15105:case 15113:case 15121:case 15098:case 15106:case 15114:case 15122:case 15099:case 15107:case 15115:case 15123:case 15100:case 15108:case 15116:case 15124:case 15101:case 15109:case 15117:case 15126: return Type::WarpedFence;
			case 15311:case 15288:case 15296:case 15304:case 15312:case 15289:case 15297:case 15305:case 15313:case 15290:case 15298:case 15306:case 15314:case 15291:case 15299:case 15307:case 15315:case 15292:case 15300:case 15308:case 15316:case 15293:case 15301:case 15309:case 15317:case 15294:case 15302:case 15310:case 15287:case 15295:case 15303:case 15318: return Type::WarpedFenceGate;
			case 14971: return Type::WarpedFungus;
			case 14964:case 14966:case 14965: return Type::WarpedHyphae;
			case 14970: return Type::WarpedNylium;
			case 15046: return Type::WarpedPlanks;
			case 15061:case 15062: return Type::WarpedPressurePlate;
			case 14973: return Type::WarpedRoots;
			case 15714:case 15691:case 15699:case 15707:case 15715:case 15692:case 15700:case 15708:case 15716:case 15693:case 15701:case 15709:case 15717:case 15694:case 15702:case 15710:case 15687:case 15695:case 15703:case 15711:case 15688:case 15696:case 15704:case 15712:case 15689:case 15697:case 15705:case 15713:case 15690:case 15698:case 15706:case 15718: return Type::WarpedSign;
			case 15056:case 15053:case 15057:case 15054:case 15058:case 15055: return Type::WarpedSlab;
			case 15421:case 15422:case 15423:case 15424:case 15425:case 15426:case 15427:case 15428:case 15429:case 15430:case 15431:case 15432:case 15433:case 15434:case 15435:case 15436:case 15437:case 15438:case 15439:case 15440:case 15441:case 15442:case 15443:case 15444:case 15445:case 15446:case 15447:case 15448:case 15449:case 15450:case 15451:case 15452:case 15453:case 15454:case 15455:case 15456:case 15457:case 15458:case 15459:case 15460:case 15461:case 15462:case 15463:case 15464:case 15465:case 15466:case 15467:case 15468:case 15469:case 15470:case 15471:case 15472:case 15473:case 15474:case 15475:case 15476:case 15477:case 15478:case 15399:case 15400:case 15401:case 15402:case 15403:case 15404:case 15405:case 15406:case 15407:case 15408:case 15409:case 15410:case 15411:case 15412:case 15413:case 15414:case 15415:case 15416:case 15417:case 15418:case 15419:case 15420: return Type::WarpedStairs;
			case 14958:case 14960:case 14959: return Type::WarpedStem;
			case 15192:case 15224:case 15193:case 15225:case 15194:case 15226:case 15195:case 15227:case 15196:case 15228:case 15197:case 15229:case 15198:case 15230:case 15199:case 15231:case 15200:case 15232:case 15201:case 15233:case 15202:case 15234:case 15203:case 15235:case 15204:case 15236:case 15205:case 15237:case 15206:case 15238:case 15207:case 15239:case 15208:case 15240:case 15209:case 15241:case 15210:case 15242:case 15211:case 15243:case 15212:case 15244:case 15213:case 15245:case 15214:case 15246:case 15215:case 15247:case 15216:case 15248:case 15217:case 15249:case 15218:case 15250:case 15219:case 15251:case 15220:case 15252:case 15221:case 15253:case 15222:case 15191:case 15223:case 15254: return Type::WarpedTrapdoor;
			case 15731:case 15728:case 15732:case 15729:case 15733:case 15730:case 15727:case 15734: return Type::WarpedWallSign;
			case 14972: return Type::WarpedWartBlock;
			case 46:case 48:case 35:case 37:case 39:case 41:case 43:case 45:case 47:case 34:case 36:case 38:case 40:case 42:case 44:case 49: return Type::Water;
			case 15001:case 15009:case 14994:case 15002:case 15010:case 14995:case 15003:case 15011:case 14996:case 15004:case 15012:case 14997:case 15005:case 15013:case 14990:case 14998:case 15006:case 15014:case 14991:case 14999:case 15007:case 15015:case 14992:case 15000:case 15008:case 14993: return Type::WeepingVines;
			case 15016: return Type::WeepingVinesPlant;
			case 230: return Type::WetSponge;
			case 3358:case 3359:case 3360:case 3361:case 3362:case 3363:case 3357:case 3364: return Type::Wheat;
			case 7906:case 7907:case 7908:case 7909:case 7910:case 7911:case 7897:case 7898:case 7899:case 7900:case 7901:case 7902:case 7903:case 7904:case 7905:case 7912: return Type::WhiteBanner;
			case 1062:case 1051:case 1055:case 1059:case 1063:case 1052:case 1056:case 1060:case 1049:case 1053:case 1057:case 1061:case 1050:case 1054:case 1058:case 1064: return Type::WhiteBed;
			case 7866: return Type::WhiteCarpet;
			case 9438: return Type::WhiteConcrete;
			case 9454: return Type::WhiteConcretePowder;
			case 9375:case 9374:case 9376:case 9377: return Type::WhiteGlazedTerracotta;
			case 9281:case 9278:case 9282:case 9279:case 9283:case 9280: return Type::WhiteShulkerBox;
			case 4095: return Type::WhiteStainedGlass;
			case 6869:case 6873:case 6877:case 6881:case 6885:case 6889:case 6893:case 6866:case 6870:case 6874:case 6878:case 6882:case 6886:case 6890:case 6863:case 6867:case 6871:case 6875:case 6879:case 6883:case 6887:case 6891:case 6864:case 6868:case 6872:case 6876:case 6880:case 6884:case 6888:case 6892:case 6865:case 6894: return Type::WhiteStainedGlassPane;
			case 6847: return Type::WhiteTerracotta;
			case 1419: return Type::WhiteTulip;
			case 8155:case 8153:case 8154:case 8156: return Type::WhiteWallBanner;
			case 1384: return Type::WhiteWool;
			case 1423: return Type::WitherRose;
			case 6511:case 6512:case 6513:case 6514:case 6515:case 6516:case 6517:case 6518:case 6519:case 6520:case 6521:case 6522:case 6523:case 6524:case 6510:case 6525: return Type::WitherSkeletonSkull;
			case 6526:case 6527:case 6528:case 6529: return Type::WitherSkeletonWallSkull;
			case 7966:case 7967:case 7968:case 7969:case 7970:case 7971:case 7972:case 7973:case 7974:case 7975:case 7961:case 7962:case 7963:case 7964:case 7965:case 7976: return Type::YellowBanner;
			case 1122:case 1126:case 1115:case 1119:case 1123:case 1127:case 1116:case 1120:case 1124:case 1113:case 1117:case 1121:case 1125:case 1114:case 1118:case 1128: return Type::YellowBed;
			case 7870: return Type::YellowCarpet;
			case 9442: return Type::YellowConcrete;
			case 9458: return Type::YellowConcretePowder;
			case 9390:case 9392:case 9391:case 9393: return Type::YellowGlazedTerracotta;
			case 9305:case 9302:case 9306:case 9303:case 9307:case 9304: return Type::YellowShulkerBox;
			case 4099: return Type::YellowStainedGlass;
			case 6993:case 6997:case 7001:case 7005:case 7009:case 7013:case 7017:case 7021:case 6994:case 6998:case 7002:case 7006:case 7010:case 7014:case 7018:case 6991:case 6995:case 6999:case 7003:case 7007:case 7011:case 7015:case 7019:case 6992:case 6996:case 7000:case 7004:case 7008:case 7012:case 7016:case 7020:case 7022: return Type::YellowStainedGlassPane;
			case 6851: return Type::YellowTerracotta;
			case 8170:case 8171:case 8169:case 8172: return Type::YellowWallBanner;
			case 1388: return Type::YellowWool;
			case 6541:case 6542:case 6543:case 6544:case 6530:case 6531:case 6532:case 6533:case 6534:case 6535:case 6536:case 6537:case 6538:case 6539:case 6540:case 6545: return Type::ZombieHead;
			default: return Type::ZombieWallHead;
		}
	}
	bool Is(short ID, enum Type Type)
	{
		return Block::Type(ID) == Type;
	}
	namespace AcaciaButton
	{
		short AcaciaButton()
		{
			return 6451;
		}
		enum Face Face(short ID)
		{
			switch (ID)
			{
				case 6459: case 6463: case 6460: case 6464: case 6461: case 6465: case 6458: case 6462: return Face::Ceiling;
				case 6443: case 6447: case 6444: case 6448: case 6445: case 6449: case 6442: case 6446: return Face::Floor;
				default: return Face::Wall;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6447: case 6455: case 6463: case 6446: case 6454: case 6462: return eBlockFace::BLOCK_FACE_XM;
				case 6448: case 6456: case 6464: case 6449: case 6457: case 6465: return eBlockFace::BLOCK_FACE_XP;
				case 6443: case 6451: case 6459: case 6442: case 6450: case 6458: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 6443: case 6447: case 6451: case 6455: case 6459: case 6463: case 6445: case 6449: case 6453: case 6457: case 6461: case 6465: return false;
				default: return true;
			}
		}
	}
	namespace AcaciaDoor
	{
		short AcaciaDoor()
		{
			return 8941;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8962: case 8963: case 8964: case 8965: case 8966: case 8967: case 8968: case 8969: case 8970: case 8971: case 8972: case 8973: case 8974: case 8975: case 8976: case 8977: return eBlockFace::BLOCK_FACE_XM;
				case 8987: case 8988: case 8989: case 8990: case 8991: case 8992: case 8978: case 8979: case 8980: case 8981: case 8982: case 8983: case 8984: case 8985: case 8986: case 8993: return eBlockFace::BLOCK_FACE_XP;
				case 8930: case 8931: case 8932: case 8933: case 8934: case 8935: case 8936: case 8937: case 8938: case 8939: case 8940: case 8941: case 8942: case 8943: case 8944: case 8945: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 8955: case 8987: case 8956: case 8988: case 8957: case 8989: case 8958: case 8990: case 8959: case 8991: case 8960: case 8992: case 8961: case 8938: case 8970: case 8939: case 8971: case 8940: case 8972: case 8941: case 8973: case 8942: case 8974: case 8943: case 8975: case 8944: case 8976: case 8945: case 8977: case 8954: case 8986: case 8993: return Half::Lower;
				default: return Half::Upper;
			}
		}
		enum Hinge Hinge(short ID)
		{
			switch (ID)
			{
				case 8955: case 8987: case 8956: case 8988: case 8957: case 8989: case 8930: case 8962: case 8931: case 8963: case 8932: case 8964: case 8933: case 8965: case 8938: case 8970: case 8939: case 8971: case 8940: case 8972: case 8941: case 8973: case 8946: case 8978: case 8947: case 8979: case 8948: case 8980: case 8949: case 8981: case 8954: case 8986: return Hinge::Left;
				default: return Hinge::Right;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 8956: case 8988: case 8957: case 8989: case 8960: case 8992: case 8961: case 8932: case 8964: case 8933: case 8965: case 8936: case 8968: case 8937: case 8969: case 8940: case 8972: case 8941: case 8973: case 8944: case 8976: case 8945: case 8977: case 8948: case 8980: case 8949: case 8981: case 8952: case 8984: case 8953: case 8985: case 8993: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 8955: case 8987: case 8957: case 8989: case 8959: case 8991: case 8961: case 8931: case 8963: case 8933: case 8965: case 8935: case 8967: case 8937: case 8969: case 8939: case 8971: case 8941: case 8973: case 8943: case 8975: case 8945: case 8977: case 8947: case 8979: case 8949: case 8981: case 8951: case 8983: case 8953: case 8985: case 8993: return false;
				default: return true;
			}
		}
	}
	namespace AcaciaFence
	{
		short AcaciaFence()
		{
			return 8705;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 8693: case 8701: case 8694: case 8702: case 8695: case 8703: case 8696: case 8704: case 8697: case 8690: case 8698: case 8691: case 8699: case 8692: case 8700: case 8705: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 8685: case 8701: case 8686: case 8702: case 8687: case 8703: case 8688: case 8704: case 8689: case 8682: case 8698: case 8683: case 8699: case 8684: case 8700: case 8705: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 8678: case 8686: case 8694: case 8702: case 8679: case 8687: case 8695: case 8703: case 8680: case 8688: case 8696: case 8704: case 8681: case 8689: case 8697: case 8705: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8677: case 8685: case 8693: case 8701: case 8680: case 8688: case 8696: case 8704: case 8681: case 8689: case 8697: case 8676: case 8684: case 8692: case 8700: case 8705: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 8677: case 8685: case 8693: case 8701: case 8679: case 8687: case 8695: case 8703: case 8681: case 8689: case 8697: case 8675: case 8683: case 8691: case 8699: case 8705: return false;
				default: return true;
			}
		}
	}
	namespace AcaciaFenceGate
	{
		short AcaciaFenceGate()
		{
			return 8521;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8530: case 8531: case 8532: case 8533: case 8534: case 8535: case 8536: case 8537: return eBlockFace::BLOCK_FACE_XM;
				case 8538: case 8539: case 8540: case 8541: case 8542: case 8543: case 8544: case 8545: return eBlockFace::BLOCK_FACE_XP;
				case 8515: case 8516: case 8517: case 8518: case 8519: case 8520: case 8521: case 8514: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool InWall(short ID)
		{
			switch (ID)
			{
				case 8518: case 8526: case 8534: case 8542: case 8519: case 8527: case 8535: case 8543: case 8520: case 8528: case 8536: case 8544: case 8521: case 8529: case 8537: case 8545: return false;
				default: return true;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 8516: case 8524: case 8532: case 8540: case 8517: case 8525: case 8533: case 8541: case 8520: case 8528: case 8536: case 8544: case 8521: case 8529: case 8537: case 8545: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 8515: case 8523: case 8531: case 8539: case 8517: case 8525: case 8533: case 8541: case 8519: case 8527: case 8535: case 8543: case 8521: case 8529: case 8537: case 8545: return false;
				default: return true;
			}
		}
	}
	namespace AcaciaLeaves
	{
		short AcaciaLeaves()
		{
			return 214;
		}
		unsigned char Distance(short ID)
		{
			switch (ID)
			{
				case 201: case 202: return 1;
				case 203: case 204: return 2;
				case 206: case 205: return 3;
				case 207: case 208: return 4;
				case 209: case 210: return 5;
				case 211: case 212: return 6;
				default: return 7;
			}
		}
		bool Persistent(short ID)
		{
			switch (ID)
			{
				case 206: case 214: case 208: case 202: case 210: case 204: case 212: return false;
				default: return true;
			}
		}
	}
	namespace AcaciaLog
	{
		short AcaciaLog()
		{
			return 86;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 85: return Axis::X;
				case 86: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace AcaciaPlanks
	{
	}
	namespace AcaciaPressurePlate
	{
		short AcaciaPressurePlate()
		{
			return 3882;
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 3882: return false;
				default: return true;
			}
		}
	}
	namespace AcaciaSapling
	{
		short AcaciaSapling()
		{
			return 29;
		}
		unsigned char Stage(short ID)
		{
			switch (ID)
			{
				case 29: return 0;
				default: return 1;
			}
		}
	}
	namespace AcaciaSign
	{
		short AcaciaSign()
		{
			return 3478;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 3478: case 3477: return 0;
				case 3480: case 3479: return 1;
				case 3497: case 3498: return 10;
				case 3499: case 3500: return 11;
				case 3501: case 3502: return 12;
				case 3503: case 3504: return 13;
				case 3505: case 3506: return 14;
				case 3507: case 3508: return 15;
				case 3482: case 3481: return 2;
				case 3483: case 3484: return 3;
				case 3485: case 3486: return 4;
				case 3487: case 3488: return 5;
				case 3489: case 3490: return 6;
				case 3491: case 3492: return 7;
				case 3493: case 3494: return 8;
				default: return 9;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 3478: case 3480: case 3482: case 3484: case 3486: case 3488: case 3490: case 3492: case 3494: case 3496: case 3498: case 3500: case 3502: case 3504: case 3506: case 3508: return false;
				default: return true;
			}
		}
	}
	namespace AcaciaSlab
	{
		short AcaciaSlab()
		{
			return 8327;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8326: case 8327: return Type::Bottom;
				case 8329: case 8328: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8325: case 8329: case 8327: return false;
				default: return true;
			}
		}
	}
	namespace AcaciaStairs
	{
		short AcaciaStairs()
		{
			return 7386;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 7425: case 7426: case 7427: case 7428: case 7429: case 7430: case 7431: case 7432: case 7433: case 7434: case 7415: case 7416: case 7417: case 7418: case 7419: case 7420: case 7421: case 7422: case 7423: case 7424: return eBlockFace::BLOCK_FACE_XM;
				case 7435: case 7436: case 7437: case 7438: case 7439: case 7440: case 7441: case 7442: case 7443: case 7444: case 7445: case 7446: case 7447: case 7448: case 7449: case 7450: case 7451: case 7452: case 7453: case 7454: return eBlockFace::BLOCK_FACE_XP;
				case 7375: case 7376: case 7377: case 7378: case 7379: case 7380: case 7381: case 7382: case 7383: case 7384: case 7385: case 7386: case 7387: case 7388: case 7389: case 7390: case 7391: case 7392: case 7393: case 7394: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 7425: case 7426: case 7427: case 7428: case 7429: case 7430: case 7431: case 7432: case 7433: case 7434: case 7445: case 7446: case 7447: case 7448: case 7385: case 7449: case 7386: case 7450: case 7387: case 7451: case 7388: case 7452: case 7389: case 7453: case 7390: case 7454: case 7391: case 7392: case 7393: case 7394: case 7405: case 7406: case 7407: case 7408: case 7409: case 7410: case 7411: case 7412: case 7413: case 7414: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 7427: case 7428: case 7437: case 7438: case 7377: case 7378: case 7447: case 7448: case 7387: case 7388: case 7397: case 7398: case 7407: case 7408: case 7417: case 7418: return Shape::InnerLeft;
				case 7429: case 7430: case 7439: case 7440: case 7379: case 7380: case 7449: case 7450: case 7389: case 7390: case 7399: case 7400: case 7409: case 7410: case 7419: case 7420: return Shape::InnerRight;
				case 7431: case 7432: case 7441: case 7442: case 7381: case 7382: case 7451: case 7452: case 7391: case 7392: case 7401: case 7402: case 7411: case 7412: case 7421: case 7422: return Shape::OuterLeft;
				case 7433: case 7434: case 7443: case 7444: case 7383: case 7384: case 7453: case 7454: case 7393: case 7394: case 7403: case 7404: case 7413: case 7414: case 7423: case 7424: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7426: case 7428: case 7430: case 7432: case 7434: case 7436: case 7438: case 7376: case 7440: case 7378: case 7442: case 7380: case 7444: case 7382: case 7446: case 7384: case 7448: case 7386: case 7450: case 7388: case 7452: case 7390: case 7454: case 7392: case 7394: case 7396: case 7398: case 7400: case 7402: case 7404: case 7406: case 7408: case 7410: case 7412: case 7414: case 7416: case 7418: case 7420: case 7422: case 7424: return false;
				default: return true;
			}
		}
	}
	namespace AcaciaTrapdoor
	{
		short AcaciaTrapdoor()
		{
			return 4382;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 4400: case 4401: case 4402: case 4403: case 4404: case 4405: case 4406: case 4407: case 4408: case 4409: case 4410: case 4411: case 4412: case 4413: case 4414: case 4399: return eBlockFace::BLOCK_FACE_XM;
				case 4416: case 4417: case 4418: case 4419: case 4420: case 4421: case 4422: case 4423: case 4424: case 4425: case 4426: case 4427: case 4428: case 4429: case 4415: case 4430: return eBlockFace::BLOCK_FACE_XP;
				case 4369: case 4370: case 4371: case 4372: case 4373: case 4374: case 4375: case 4376: case 4377: case 4378: case 4379: case 4380: case 4381: case 4382: case 4367: case 4368: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 4375: case 4391: case 4407: case 4423: case 4376: case 4392: case 4408: case 4424: case 4377: case 4393: case 4409: case 4425: case 4378: case 4394: case 4410: case 4426: case 4379: case 4395: case 4411: case 4427: case 4380: case 4396: case 4412: case 4428: case 4381: case 4397: case 4413: case 4429: case 4382: case 4398: case 4414: case 4430: return Half::Bottom;
				default: return Half::Top;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 4371: case 4387: case 4403: case 4419: case 4372: case 4388: case 4404: case 4420: case 4373: case 4389: case 4405: case 4421: case 4374: case 4390: case 4406: case 4422: case 4379: case 4395: case 4411: case 4427: case 4380: case 4396: case 4412: case 4428: case 4381: case 4397: case 4413: case 4429: case 4382: case 4398: case 4414: case 4430: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 4369: case 4385: case 4401: case 4417: case 4370: case 4386: case 4402: case 4418: case 4373: case 4389: case 4405: case 4421: case 4374: case 4390: case 4406: case 4422: case 4377: case 4393: case 4409: case 4425: case 4378: case 4394: case 4410: case 4426: case 4381: case 4397: case 4413: case 4429: case 4382: case 4398: case 4414: case 4430: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 4384: case 4400: case 4416: case 4370: case 4386: case 4402: case 4418: case 4372: case 4388: case 4404: case 4420: case 4374: case 4390: case 4406: case 4422: case 4376: case 4392: case 4408: case 4424: case 4378: case 4394: case 4410: case 4426: case 4380: case 4396: case 4412: case 4428: case 4382: case 4398: case 4414: case 4368: case 4430: return false;
				default: return true;
			}
		}
	}
	namespace AcaciaWallSign
	{
		short AcaciaWallSign()
		{
			return 3760;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 3764: case 3763: return eBlockFace::BLOCK_FACE_XM;
				case 3765: case 3766: return eBlockFace::BLOCK_FACE_XP;
				case 3759: case 3760: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 3764: case 3760: case 3762: case 3766: return false;
				default: return true;
			}
		}
	}
	namespace AcaciaWood
	{
		short AcaciaWood()
		{
			return 122;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 121: return Axis::X;
				case 122: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace ActivatorRail
	{
		short ActivatorRail()
		{
			return 6829;
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 6829: case 6830: case 6831: case 6832: case 6833: case 6834: return false;
				default: return true;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 6831: case 6825: return Shape::AscendingEast;
				case 6827: case 6833: return Shape::AscendingNorth;
				case 6828: case 6834: return Shape::AscendingSouth;
				case 6826: case 6832: return Shape::AscendingWest;
				case 6830: case 6824: return Shape::EastWest;
				default: return Shape::NorthSouth;
			}
		}
	}
	namespace Air
	{
	}
	namespace Allium
	{
	}
	namespace AncientDebris
	{
	}
	namespace Andesite
	{
	}
	namespace AndesiteSlab
	{
		short AndesiteSlab()
		{
			return 10846;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 10845: case 10846: return Type::Bottom;
				case 10847: case 10848: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10846: case 10844: case 10848: return false;
				default: return true;
			}
		}
	}
	namespace AndesiteStairs
	{
		short AndesiteStairs()
		{
			return 10480;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 10509: case 10510: case 10511: case 10512: case 10513: case 10514: case 10515: case 10516: case 10517: case 10518: case 10519: case 10520: case 10521: case 10522: case 10523: case 10524: case 10525: case 10526: case 10527: case 10528: return eBlockFace::BLOCK_FACE_XM;
				case 10529: case 10530: case 10531: case 10532: case 10533: case 10534: case 10535: case 10536: case 10537: case 10538: case 10539: case 10540: case 10541: case 10542: case 10543: case 10544: case 10545: case 10546: case 10547: case 10548: return eBlockFace::BLOCK_FACE_XP;
				case 10469: case 10470: case 10471: case 10472: case 10473: case 10474: case 10475: case 10476: case 10477: case 10478: case 10479: case 10480: case 10481: case 10482: case 10483: case 10484: case 10485: case 10486: case 10487: case 10488: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 10479: case 10480: case 10481: case 10482: case 10483: case 10484: case 10485: case 10486: case 10487: case 10488: case 10499: case 10500: case 10501: case 10502: case 10503: case 10504: case 10505: case 10506: case 10507: case 10508: case 10519: case 10520: case 10521: case 10522: case 10523: case 10524: case 10525: case 10526: case 10527: case 10528: case 10539: case 10540: case 10541: case 10542: case 10543: case 10544: case 10545: case 10546: case 10547: case 10548: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 10471: case 10472: case 10481: case 10482: case 10491: case 10492: case 10501: case 10502: case 10511: case 10512: case 10521: case 10522: case 10531: case 10532: case 10541: case 10542: return Shape::InnerLeft;
				case 10473: case 10474: case 10483: case 10484: case 10493: case 10494: case 10503: case 10504: case 10513: case 10514: case 10523: case 10524: case 10533: case 10534: case 10543: case 10544: return Shape::InnerRight;
				case 10475: case 10476: case 10485: case 10486: case 10495: case 10496: case 10505: case 10506: case 10515: case 10516: case 10525: case 10526: case 10535: case 10536: case 10545: case 10546: return Shape::OuterLeft;
				case 10477: case 10478: case 10487: case 10488: case 10497: case 10498: case 10507: case 10508: case 10517: case 10518: case 10527: case 10528: case 10537: case 10538: case 10547: case 10548: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10470: case 10472: case 10474: case 10476: case 10478: case 10480: case 10482: case 10484: case 10486: case 10488: case 10490: case 10492: case 10494: case 10496: case 10498: case 10500: case 10502: case 10504: case 10506: case 10508: case 10510: case 10512: case 10514: case 10516: case 10518: case 10520: case 10522: case 10524: case 10526: case 10528: case 10530: case 10532: case 10534: case 10536: case 10538: case 10540: case 10542: case 10544: case 10546: case 10548: return false;
				default: return true;
			}
		}
	}
	namespace AndesiteWall
	{
		short AndesiteWall()
		{
			return 13138;
		}
		enum East East(short ID)
		{
			switch (ID)
			{
				case 13246: case 13250: case 13254: case 13258: case 13262: case 13266: case 13270: case 13274: case 13278: case 13282: case 13286: case 13290: case 13294: case 13298: case 13302: case 13306: case 13310: case 13314: case 13318: case 13322: case 13326: case 13330: case 13334: case 13338: case 13342: case 13346: case 13350: case 13243: case 13247: case 13251: case 13255: case 13259: case 13263: case 13267: case 13271: case 13275: case 13279: case 13283: case 13287: case 13291: case 13295: case 13299: case 13303: case 13307: case 13311: case 13315: case 13319: case 13323: case 13327: case 13331: case 13335: case 13339: case 13343: case 13347: case 13244: case 13248: case 13252: case 13256: case 13260: case 13264: case 13268: case 13272: case 13276: case 13280: case 13284: case 13288: case 13292: case 13296: case 13300: case 13304: case 13308: case 13312: case 13316: case 13320: case 13324: case 13328: case 13332: case 13336: case 13340: case 13344: case 13348: case 13245: case 13249: case 13253: case 13257: case 13261: case 13265: case 13269: case 13273: case 13277: case 13281: case 13285: case 13289: case 13293: case 13297: case 13301: case 13305: case 13309: case 13313: case 13317: case 13321: case 13325: case 13329: case 13333: case 13337: case 13341: case 13345: case 13349: return East::Low;
				case 13138: case 13142: case 13146: case 13150: case 13154: case 13158: case 13162: case 13166: case 13170: case 13174: case 13178: case 13182: case 13186: case 13190: case 13194: case 13198: case 13202: case 13206: case 13210: case 13214: case 13218: case 13222: case 13226: case 13230: case 13234: case 13238: case 13242: case 13135: case 13139: case 13143: case 13147: case 13151: case 13155: case 13159: case 13163: case 13167: case 13171: case 13175: case 13179: case 13183: case 13187: case 13191: case 13195: case 13199: case 13203: case 13207: case 13211: case 13215: case 13219: case 13223: case 13227: case 13231: case 13235: case 13239: case 13136: case 13140: case 13144: case 13148: case 13152: case 13156: case 13160: case 13164: case 13168: case 13172: case 13176: case 13180: case 13184: case 13188: case 13192: case 13196: case 13200: case 13204: case 13208: case 13212: case 13216: case 13220: case 13224: case 13228: case 13232: case 13236: case 13240: case 13137: case 13141: case 13145: case 13149: case 13153: case 13157: case 13161: case 13165: case 13169: case 13173: case 13177: case 13181: case 13185: case 13189: case 13193: case 13197: case 13201: case 13205: case 13209: case 13213: case 13217: case 13221: case 13225: case 13229: case 13233: case 13237: case 13241: return East::None;
				default: return East::Tall;
			}
		}
		enum North North(short ID)
		{
			switch (ID)
			{
				case 13174: case 13178: case 13182: case 13186: case 13190: case 13194: case 13198: case 13202: case 13206: case 13282: case 13286: case 13290: case 13294: case 13298: case 13302: case 13306: case 13310: case 13314: case 13390: case 13394: case 13398: case 13402: case 13406: case 13410: case 13414: case 13418: case 13422: case 13171: case 13175: case 13179: case 13183: case 13187: case 13191: case 13195: case 13199: case 13203: case 13279: case 13283: case 13287: case 13291: case 13295: case 13299: case 13303: case 13307: case 13311: case 13387: case 13391: case 13395: case 13399: case 13403: case 13407: case 13411: case 13415: case 13419: case 13172: case 13176: case 13180: case 13184: case 13188: case 13192: case 13196: case 13200: case 13204: case 13280: case 13284: case 13288: case 13292: case 13296: case 13300: case 13304: case 13308: case 13312: case 13388: case 13392: case 13396: case 13400: case 13404: case 13408: case 13412: case 13416: case 13420: case 13173: case 13177: case 13181: case 13185: case 13189: case 13193: case 13197: case 13201: case 13205: case 13281: case 13285: case 13289: case 13293: case 13297: case 13301: case 13305: case 13309: case 13313: case 13389: case 13393: case 13397: case 13401: case 13405: case 13409: case 13413: case 13417: case 13421: return North::Low;
				case 13138: case 13142: case 13146: case 13150: case 13154: case 13158: case 13162: case 13166: case 13170: case 13246: case 13250: case 13254: case 13258: case 13262: case 13266: case 13270: case 13274: case 13278: case 13354: case 13358: case 13362: case 13366: case 13370: case 13374: case 13378: case 13382: case 13386: case 13135: case 13139: case 13143: case 13147: case 13151: case 13155: case 13159: case 13163: case 13167: case 13243: case 13247: case 13251: case 13255: case 13259: case 13263: case 13267: case 13271: case 13275: case 13351: case 13355: case 13359: case 13363: case 13367: case 13371: case 13375: case 13379: case 13383: case 13136: case 13140: case 13144: case 13148: case 13152: case 13156: case 13160: case 13164: case 13168: case 13244: case 13248: case 13252: case 13256: case 13260: case 13264: case 13268: case 13272: case 13276: case 13352: case 13356: case 13360: case 13364: case 13368: case 13372: case 13376: case 13380: case 13384: case 13137: case 13141: case 13145: case 13149: case 13153: case 13157: case 13161: case 13165: case 13169: case 13245: case 13249: case 13253: case 13257: case 13261: case 13265: case 13269: case 13273: case 13277: case 13353: case 13357: case 13361: case 13365: case 13369: case 13373: case 13377: case 13381: case 13385: return North::None;
				default: return North::Tall;
			}
		}
		enum South South(short ID)
		{
			switch (ID)
			{
				case 13150: case 13154: case 13158: case 13186: case 13190: case 13194: case 13222: case 13226: case 13230: case 13258: case 13262: case 13266: case 13294: case 13298: case 13302: case 13330: case 13334: case 13338: case 13366: case 13370: case 13374: case 13402: case 13406: case 13410: case 13438: case 13442: case 13446: case 13147: case 13151: case 13155: case 13183: case 13187: case 13191: case 13219: case 13223: case 13227: case 13255: case 13259: case 13263: case 13291: case 13295: case 13299: case 13327: case 13331: case 13335: case 13363: case 13367: case 13371: case 13399: case 13403: case 13407: case 13435: case 13439: case 13443: case 13148: case 13152: case 13156: case 13184: case 13188: case 13192: case 13220: case 13224: case 13228: case 13256: case 13260: case 13264: case 13292: case 13296: case 13300: case 13328: case 13332: case 13336: case 13364: case 13368: case 13372: case 13400: case 13404: case 13408: case 13436: case 13440: case 13444: case 13149: case 13153: case 13157: case 13185: case 13189: case 13193: case 13221: case 13225: case 13229: case 13257: case 13261: case 13265: case 13293: case 13297: case 13301: case 13329: case 13333: case 13337: case 13365: case 13369: case 13373: case 13401: case 13405: case 13409: case 13437: case 13441: case 13445: return South::Low;
				case 13138: case 13142: case 13146: case 13174: case 13178: case 13182: case 13210: case 13214: case 13218: case 13246: case 13250: case 13254: case 13282: case 13286: case 13290: case 13318: case 13322: case 13326: case 13354: case 13358: case 13362: case 13390: case 13394: case 13398: case 13426: case 13430: case 13434: case 13135: case 13139: case 13143: case 13171: case 13175: case 13179: case 13207: case 13211: case 13215: case 13243: case 13247: case 13251: case 13279: case 13283: case 13287: case 13315: case 13319: case 13323: case 13351: case 13355: case 13359: case 13387: case 13391: case 13395: case 13423: case 13427: case 13431: case 13136: case 13140: case 13144: case 13172: case 13176: case 13180: case 13208: case 13212: case 13216: case 13244: case 13248: case 13252: case 13280: case 13284: case 13288: case 13316: case 13320: case 13324: case 13352: case 13356: case 13360: case 13388: case 13392: case 13396: case 13424: case 13428: case 13432: case 13137: case 13141: case 13145: case 13173: case 13177: case 13181: case 13209: case 13213: case 13217: case 13245: case 13249: case 13253: case 13281: case 13285: case 13289: case 13317: case 13321: case 13325: case 13353: case 13357: case 13361: case 13389: case 13393: case 13397: case 13425: case 13429: case 13433: return South::None;
				default: return South::Tall;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 13142: case 13146: case 13154: case 13158: case 13166: case 13170: case 13178: case 13182: case 13190: case 13194: case 13202: case 13206: case 13214: case 13218: case 13226: case 13230: case 13238: case 13242: case 13250: case 13254: case 13262: case 13266: case 13274: case 13278: case 13286: case 13290: case 13298: case 13302: case 13310: case 13314: case 13322: case 13326: case 13334: case 13338: case 13346: case 13350: case 13358: case 13362: case 13370: case 13374: case 13382: case 13386: case 13394: case 13398: case 13406: case 13410: case 13418: case 13422: case 13430: case 13434: case 13442: case 13446: case 13454: case 13458: case 13143: case 13155: case 13167: case 13179: case 13191: case 13203: case 13215: case 13227: case 13239: case 13251: case 13263: case 13275: case 13287: case 13299: case 13311: case 13323: case 13335: case 13347: case 13359: case 13371: case 13383: case 13395: case 13407: case 13419: case 13431: case 13443: case 13455: case 13144: case 13156: case 13168: case 13180: case 13192: case 13204: case 13216: case 13228: case 13240: case 13252: case 13264: case 13276: case 13288: case 13300: case 13312: case 13324: case 13336: case 13348: case 13360: case 13372: case 13384: case 13396: case 13408: case 13420: case 13432: case 13444: case 13456: case 13141: case 13145: case 13153: case 13157: case 13165: case 13169: case 13177: case 13181: case 13189: case 13193: case 13201: case 13205: case 13213: case 13217: case 13225: case 13229: case 13237: case 13241: case 13249: case 13253: case 13261: case 13265: case 13273: case 13277: case 13285: case 13289: case 13297: case 13301: case 13309: case 13313: case 13321: case 13325: case 13333: case 13337: case 13345: case 13349: case 13357: case 13361: case 13369: case 13373: case 13381: case 13385: case 13393: case 13397: case 13405: case 13409: case 13417: case 13421: case 13429: case 13433: case 13441: case 13445: case 13453: case 13457: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 13138: case 13146: case 13150: case 13158: case 13162: case 13170: case 13174: case 13182: case 13186: case 13194: case 13198: case 13206: case 13210: case 13218: case 13222: case 13230: case 13234: case 13242: case 13246: case 13254: case 13258: case 13266: case 13270: case 13278: case 13282: case 13290: case 13294: case 13302: case 13306: case 13314: case 13318: case 13326: case 13330: case 13338: case 13342: case 13350: case 13354: case 13362: case 13366: case 13374: case 13378: case 13386: case 13390: case 13398: case 13402: case 13410: case 13414: case 13422: case 13426: case 13434: case 13438: case 13446: case 13450: case 13458: case 13139: case 13151: case 13163: case 13175: case 13187: case 13199: case 13211: case 13223: case 13235: case 13247: case 13259: case 13271: case 13283: case 13295: case 13307: case 13319: case 13331: case 13343: case 13355: case 13367: case 13379: case 13391: case 13403: case 13415: case 13427: case 13439: case 13451: case 13140: case 13144: case 13152: case 13156: case 13164: case 13168: case 13176: case 13180: case 13188: case 13192: case 13200: case 13204: case 13212: case 13216: case 13224: case 13228: case 13236: case 13240: case 13248: case 13252: case 13260: case 13264: case 13272: case 13276: case 13284: case 13288: case 13296: case 13300: case 13308: case 13312: case 13320: case 13324: case 13332: case 13336: case 13344: case 13348: case 13356: case 13360: case 13368: case 13372: case 13380: case 13384: case 13392: case 13396: case 13404: case 13408: case 13416: case 13420: case 13428: case 13432: case 13440: case 13444: case 13452: case 13456: case 13145: case 13157: case 13169: case 13181: case 13193: case 13205: case 13217: case 13229: case 13241: case 13253: case 13265: case 13277: case 13289: case 13301: case 13313: case 13325: case 13337: case 13349: case 13361: case 13373: case 13385: case 13397: case 13409: case 13421: case 13433: case 13445: case 13457: return false;
				default: return true;
			}
		}
		enum West West(short ID)
		{
			switch (ID)
			{
				case 13142: case 13154: case 13166: case 13178: case 13190: case 13202: case 13214: case 13226: case 13238: case 13250: case 13262: case 13274: case 13286: case 13298: case 13310: case 13322: case 13334: case 13346: case 13358: case 13370: case 13382: case 13394: case 13406: case 13418: case 13430: case 13442: case 13454: case 13139: case 13151: case 13163: case 13175: case 13187: case 13199: case 13211: case 13223: case 13235: case 13247: case 13259: case 13271: case 13283: case 13295: case 13307: case 13319: case 13331: case 13343: case 13355: case 13367: case 13379: case 13391: case 13403: case 13415: case 13427: case 13439: case 13451: case 13136: case 13148: case 13160: case 13172: case 13184: case 13196: case 13208: case 13220: case 13232: case 13244: case 13256: case 13268: case 13280: case 13292: case 13304: case 13316: case 13328: case 13340: case 13352: case 13364: case 13376: case 13388: case 13400: case 13412: case 13424: case 13436: case 13448: case 13145: case 13157: case 13169: case 13181: case 13193: case 13205: case 13217: case 13229: case 13241: case 13253: case 13265: case 13277: case 13289: case 13301: case 13313: case 13325: case 13337: case 13349: case 13361: case 13373: case 13385: case 13397: case 13409: case 13421: case 13433: case 13445: case 13457: return West::Low;
				case 13138: case 13150: case 13162: case 13174: case 13186: case 13198: case 13210: case 13222: case 13234: case 13246: case 13258: case 13270: case 13282: case 13294: case 13306: case 13318: case 13330: case 13342: case 13354: case 13366: case 13378: case 13390: case 13402: case 13414: case 13426: case 13438: case 13450: case 13135: case 13147: case 13159: case 13171: case 13183: case 13195: case 13207: case 13219: case 13231: case 13243: case 13255: case 13267: case 13279: case 13291: case 13303: case 13315: case 13327: case 13339: case 13351: case 13363: case 13375: case 13387: case 13399: case 13411: case 13423: case 13435: case 13447: case 13144: case 13156: case 13168: case 13180: case 13192: case 13204: case 13216: case 13228: case 13240: case 13252: case 13264: case 13276: case 13288: case 13300: case 13312: case 13324: case 13336: case 13348: case 13360: case 13372: case 13384: case 13396: case 13408: case 13420: case 13432: case 13444: case 13456: case 13141: case 13153: case 13165: case 13177: case 13189: case 13201: case 13213: case 13225: case 13237: case 13249: case 13261: case 13273: case 13285: case 13297: case 13309: case 13321: case 13333: case 13345: case 13357: case 13369: case 13381: case 13393: case 13405: case 13417: case 13429: case 13441: case 13453: return West::None;
				default: return West::Tall;
			}
		}
	}
	namespace Anvil
	{
		short Anvil()
		{
			return 6610;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6612: return eBlockFace::BLOCK_FACE_XM;
				case 6613: return eBlockFace::BLOCK_FACE_XP;
				case 6610: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace AttachedMelonStem
	{
		short AttachedMelonStem()
		{
			return 4768;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 4770: return eBlockFace::BLOCK_FACE_XM;
				case 4771: return eBlockFace::BLOCK_FACE_XP;
				case 4768: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace AttachedPumpkinStem
	{
		short AttachedPumpkinStem()
		{
			return 4764;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 4766: return eBlockFace::BLOCK_FACE_XM;
				case 4767: return eBlockFace::BLOCK_FACE_XP;
				case 4764: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace AzureBluet
	{
	}
	namespace Bamboo
	{
		short Bamboo()
		{
			return 9652;
		}
		unsigned char Age(short ID)
		{
			switch (ID)
			{
				case 9653: case 9655: case 9657: case 9652: case 9654: case 9656: return 0;
				default: return 1;
			}
		}
		enum Leaves Leaves(short ID)
		{
			switch (ID)
			{
				case 9662: case 9657: case 9663: case 9656: return Leaves::Large;
				case 9653: case 9659: case 9652: case 9658: return Leaves::None;
				default: return Leaves::Small;
			}
		}
		unsigned char Stage(short ID)
		{
			switch (ID)
			{
				case 9660: case 9662: case 9652: case 9654: case 9656: case 9658: return 0;
				default: return 1;
			}
		}
	}
	namespace BambooSapling
	{
	}
	namespace Barrel
	{
		short Barrel()
		{
			return 14792;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 14798: case 14797: return eBlockFace::BLOCK_FACE_XM;
				case 14794: case 14793: return eBlockFace::BLOCK_FACE_XP;
				case 14802: case 14801: return eBlockFace::BLOCK_FACE_YM;
				case 14800: case 14799: return eBlockFace::BLOCK_FACE_YP;
				case 14792: case 14791: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 14792: case 14794: case 14796: case 14798: case 14800: case 14802: return false;
				default: return true;
			}
		}
	}
	namespace Barrier
	{
	}
	namespace Basalt
	{
		short Basalt()
		{
			return 4003;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 4002: return Axis::X;
				case 4003: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace Beacon
	{
	}
	namespace Bedrock
	{
	}
	namespace BeeNest
	{
		short BeeNest()
		{
			return 15776;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 15792: case 15793: case 15788: case 15789: case 15790: case 15791: return eBlockFace::BLOCK_FACE_XM;
				case 15794: case 15795: case 15796: case 15797: case 15798: case 15799: return eBlockFace::BLOCK_FACE_XP;
				case 15776: case 15777: case 15778: case 15779: case 15780: case 15781: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		unsigned char HoneyLevel(short ID)
		{
			switch (ID)
			{
				case 15776: case 15794: case 15788: case 15782: return 0;
				case 15777: case 15795: case 15789: case 15783: return 1;
				case 15784: case 15778: case 15796: case 15790: return 2;
				case 15785: case 15779: case 15797: case 15791: return 3;
				case 15792: case 15786: case 15780: case 15798: return 4;
				default: return 5;
			}
		}
	}
	namespace Beehive
	{
		short Beehive()
		{
			return 15800;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 15815: case 15816: case 15817: case 15812: case 15813: case 15814: return eBlockFace::BLOCK_FACE_XM;
				case 15823: case 15818: case 15819: case 15820: case 15821: case 15822: return eBlockFace::BLOCK_FACE_XP;
				case 15800: case 15801: case 15802: case 15803: case 15804: case 15805: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		unsigned char HoneyLevel(short ID)
		{
			switch (ID)
			{
				case 15800: case 15818: case 15812: case 15806: return 0;
				case 15807: case 15801: case 15819: case 15813: return 1;
				case 15808: case 15802: case 15820: case 15814: return 2;
				case 15815: case 15809: case 15803: case 15821: return 3;
				case 15816: case 15810: case 15804: case 15822: return 4;
				default: return 5;
			}
		}
	}
	namespace Beetroots
	{
		short Beetroots()
		{
			return 9219;
		}
		unsigned char Age(short ID)
		{
			switch (ID)
			{
				case 9219: return 0;
				case 9220: return 1;
				case 9221: return 2;
				default: return 3;
			}
		}
	}
	namespace Bell
	{
		short Bell()
		{
			return 14855;
		}
		enum Attachment Attachment(short ID)
		{
			switch (ID)
			{
				case 14862: case 14863: case 14864: case 14865: case 14866: case 14867: case 14868: case 14869: return Attachment::Ceiling;
				case 14878: case 14879: case 14880: case 14881: case 14882: case 14883: case 14884: case 14885: return Attachment::DoubleWall;
				case 14854: case 14855: case 14856: case 14857: case 14858: case 14859: case 14860: case 14861: return Attachment::Floor;
				default: return Attachment::SingleWall;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 14858: case 14866: case 14874: case 14882: case 14859: case 14867: case 14875: case 14883: return eBlockFace::BLOCK_FACE_XM;
				case 14877: case 14860: case 14868: case 14876: case 14884: case 14861: case 14869: case 14885: return eBlockFace::BLOCK_FACE_XP;
				case 14854: case 14862: case 14870: case 14878: case 14855: case 14863: case 14871: case 14879: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 14877: case 14855: case 14863: case 14871: case 14879: case 14857: case 14865: case 14873: case 14881: case 14859: case 14867: case 14875: case 14883: case 14861: case 14869: case 14885: return false;
				default: return true;
			}
		}
	}
	namespace BirchButton
	{
		short BirchButton()
		{
			return 6403;
		}
		enum Face Face(short ID)
		{
			switch (ID)
			{
				case 6412: case 6416: case 6413: case 6417: case 6410: case 6414: case 6411: case 6415: return Face::Ceiling;
				case 6397: case 6401: case 6394: case 6398: case 6395: case 6399: case 6396: case 6400: return Face::Floor;
				default: return Face::Wall;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6398: case 6406: case 6414: case 6399: case 6407: case 6415: return eBlockFace::BLOCK_FACE_XM;
				case 6408: case 6416: case 6401: case 6409: case 6417: case 6400: return eBlockFace::BLOCK_FACE_XP;
				case 6394: case 6402: case 6410: case 6395: case 6403: case 6411: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 6397: case 6401: case 6405: case 6409: case 6413: case 6417: case 6395: case 6399: case 6403: case 6407: case 6411: case 6415: return false;
				default: return true;
			}
		}
	}
	namespace BirchDoor
	{
		short BirchDoor()
		{
			return 8813;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8834: case 8835: case 8836: case 8837: case 8838: case 8839: case 8840: case 8841: case 8842: case 8843: case 8844: case 8845: case 8846: case 8847: case 8848: case 8849: return eBlockFace::BLOCK_FACE_XM;
				case 8861: case 8862: case 8863: case 8864: case 8850: case 8851: case 8852: case 8853: case 8854: case 8855: case 8856: case 8857: case 8858: case 8859: case 8860: case 8865: return eBlockFace::BLOCK_FACE_XP;
				case 8802: case 8803: case 8804: case 8805: case 8806: case 8807: case 8808: case 8809: case 8810: case 8811: case 8812: case 8813: case 8814: case 8815: case 8816: case 8817: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 8829: case 8861: case 8830: case 8862: case 8831: case 8863: case 8832: case 8864: case 8833: case 8810: case 8842: case 8811: case 8843: case 8812: case 8844: case 8813: case 8845: case 8814: case 8846: case 8815: case 8847: case 8816: case 8848: case 8817: case 8849: case 8826: case 8858: case 8827: case 8859: case 8828: case 8860: case 8865: return Half::Lower;
				default: return Half::Upper;
			}
		}
		enum Hinge Hinge(short ID)
		{
			switch (ID)
			{
				case 8829: case 8861: case 8802: case 8834: case 8803: case 8835: case 8804: case 8836: case 8805: case 8837: case 8810: case 8842: case 8811: case 8843: case 8812: case 8844: case 8813: case 8845: case 8818: case 8850: case 8819: case 8851: case 8820: case 8852: case 8821: case 8853: case 8826: case 8858: case 8827: case 8859: case 8828: case 8860: return Hinge::Left;
				default: return Hinge::Right;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 8829: case 8861: case 8832: case 8864: case 8833: case 8804: case 8836: case 8805: case 8837: case 8808: case 8840: case 8809: case 8841: case 8812: case 8844: case 8813: case 8845: case 8816: case 8848: case 8817: case 8849: case 8820: case 8852: case 8821: case 8853: case 8824: case 8856: case 8825: case 8857: case 8828: case 8860: case 8865: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 8829: case 8861: case 8831: case 8863: case 8833: case 8803: case 8835: case 8805: case 8837: case 8807: case 8839: case 8809: case 8841: case 8811: case 8843: case 8813: case 8845: case 8815: case 8847: case 8817: case 8849: case 8819: case 8851: case 8821: case 8853: case 8823: case 8855: case 8825: case 8857: case 8827: case 8859: case 8865: return false;
				default: return true;
			}
		}
	}
	namespace BirchFence
	{
		short BirchFence()
		{
			return 8641;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 8631: case 8639: case 8632: case 8640: case 8633: case 8626: case 8634: case 8627: case 8635: case 8628: case 8636: case 8629: case 8637: case 8630: case 8638: case 8641: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 8623: case 8639: case 8624: case 8640: case 8625: case 8618: case 8634: case 8619: case 8635: case 8620: case 8636: case 8621: case 8637: case 8622: case 8638: case 8641: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 8615: case 8623: case 8631: case 8639: case 8616: case 8624: case 8632: case 8640: case 8617: case 8625: case 8633: case 8614: case 8622: case 8630: case 8638: case 8641: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8616: case 8624: case 8632: case 8640: case 8617: case 8625: case 8633: case 8612: case 8620: case 8628: case 8636: case 8613: case 8621: case 8629: case 8637: case 8641: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 8615: case 8623: case 8631: case 8639: case 8617: case 8625: case 8633: case 8611: case 8619: case 8627: case 8635: case 8613: case 8621: case 8629: case 8637: case 8641: return false;
				default: return true;
			}
		}
	}
	namespace BirchFenceGate
	{
		short BirchFenceGate()
		{
			return 8457;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8468: case 8469: case 8470: case 8471: case 8472: case 8473: case 8466: case 8467: return eBlockFace::BLOCK_FACE_XM;
				case 8476: case 8477: case 8478: case 8479: case 8480: case 8474: case 8475: case 8481: return eBlockFace::BLOCK_FACE_XP;
				case 8453: case 8454: case 8455: case 8456: case 8457: case 8450: case 8451: case 8452: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool InWall(short ID)
		{
			switch (ID)
			{
				case 8454: case 8462: case 8470: case 8478: case 8455: case 8463: case 8471: case 8479: case 8456: case 8464: case 8472: case 8480: case 8457: case 8465: case 8473: case 8481: return false;
				default: return true;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 8460: case 8468: case 8476: case 8453: case 8461: case 8469: case 8477: case 8456: case 8464: case 8472: case 8480: case 8457: case 8465: case 8473: case 8452: case 8481: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 8453: case 8461: case 8469: case 8477: case 8455: case 8463: case 8471: case 8479: case 8457: case 8465: case 8473: case 8451: case 8459: case 8467: case 8475: case 8481: return false;
				default: return true;
			}
		}
	}
	namespace BirchLeaves
	{
		short BirchLeaves()
		{
			return 186;
		}
		unsigned char Distance(short ID)
		{
			switch (ID)
			{
				case 173: case 174: return 1;
				case 176: case 175: return 2;
				case 177: case 178: return 3;
				case 179: case 180: return 4;
				case 181: case 182: return 5;
				case 183: case 184: return 6;
				default: return 7;
			}
		}
		bool Persistent(short ID)
		{
			switch (ID)
			{
				case 176: case 184: case 178: case 186: case 180: case 174: case 182: return false;
				default: return true;
			}
		}
	}
	namespace BirchLog
	{
		short BirchLog()
		{
			return 80;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 79: return Axis::X;
				case 80: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace BirchPlanks
	{
	}
	namespace BirchPressurePlate
	{
		short BirchPressurePlate()
		{
			return 3878;
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 3878: return false;
				default: return true;
			}
		}
	}
	namespace BirchSapling
	{
		short BirchSapling()
		{
			return 25;
		}
		unsigned char Stage(short ID)
		{
			switch (ID)
			{
				case 25: return 0;
				default: return 1;
			}
		}
	}
	namespace BirchSign
	{
		short BirchSign()
		{
			return 3446;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 3445: case 3446: return 0;
				case 3447: case 3448: return 1;
				case 3466: case 3465: return 10;
				case 3468: case 3467: return 11;
				case 3470: case 3469: return 12;
				case 3472: case 3471: return 13;
				case 3474: case 3473: return 14;
				case 3475: case 3476: return 15;
				case 3449: case 3450: return 2;
				case 3452: case 3451: return 3;
				case 3454: case 3453: return 4;
				case 3456: case 3455: return 5;
				case 3458: case 3457: return 6;
				case 3460: case 3459: return 7;
				case 3462: case 3461: return 8;
				default: return 9;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 3452: case 3454: case 3456: case 3458: case 3460: case 3462: case 3464: case 3466: case 3468: case 3470: case 3472: case 3474: case 3446: case 3448: case 3450: case 3476: return false;
				default: return true;
			}
		}
	}
	namespace BirchSlab
	{
		short BirchSlab()
		{
			return 8315;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8315: case 8314: return Type::Bottom;
				case 8316: case 8317: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8315: case 8313: case 8317: return false;
				default: return true;
			}
		}
	}
	namespace BirchStairs
	{
		short BirchStairs()
		{
			return 5495;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 5524: case 5525: case 5526: case 5527: case 5528: case 5529: case 5530: case 5531: case 5532: case 5533: case 5534: case 5535: case 5536: case 5537: case 5538: case 5539: case 5540: case 5541: case 5542: case 5543: return eBlockFace::BLOCK_FACE_XM;
				case 5544: case 5545: case 5546: case 5547: case 5548: case 5549: case 5550: case 5551: case 5552: case 5553: case 5554: case 5555: case 5556: case 5557: case 5558: case 5559: case 5560: case 5561: case 5562: case 5563: return eBlockFace::BLOCK_FACE_XP;
				case 5484: case 5485: case 5486: case 5487: case 5488: case 5489: case 5490: case 5491: case 5492: case 5493: case 5494: case 5495: case 5496: case 5497: case 5498: case 5499: case 5500: case 5501: case 5502: case 5503: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 5520: case 5521: case 5522: case 5523: case 5534: case 5535: case 5536: case 5537: case 5538: case 5539: case 5540: case 5541: case 5542: case 5543: case 5554: case 5555: case 5556: case 5557: case 5494: case 5558: case 5495: case 5559: case 5496: case 5560: case 5497: case 5561: case 5498: case 5562: case 5499: case 5563: case 5500: case 5501: case 5502: case 5503: case 5514: case 5515: case 5516: case 5517: case 5518: case 5519: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 5526: case 5527: case 5536: case 5537: case 5546: case 5547: case 5486: case 5487: case 5556: case 5557: case 5496: case 5497: case 5506: case 5507: case 5516: case 5517: return Shape::InnerLeft;
				case 5528: case 5529: case 5538: case 5539: case 5548: case 5549: case 5488: case 5489: case 5558: case 5559: case 5498: case 5499: case 5508: case 5509: case 5518: case 5519: return Shape::InnerRight;
				case 5520: case 5521: case 5530: case 5531: case 5540: case 5541: case 5550: case 5551: case 5490: case 5491: case 5560: case 5561: case 5500: case 5501: case 5510: case 5511: return Shape::OuterLeft;
				case 5522: case 5523: case 5532: case 5533: case 5542: case 5543: case 5552: case 5553: case 5492: case 5493: case 5562: case 5563: case 5502: case 5503: case 5512: case 5513: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 5521: case 5523: case 5525: case 5527: case 5529: case 5531: case 5533: case 5535: case 5537: case 5539: case 5541: case 5543: case 5545: case 5547: case 5485: case 5549: case 5487: case 5551: case 5489: case 5553: case 5491: case 5555: case 5493: case 5557: case 5495: case 5559: case 5497: case 5561: case 5499: case 5563: case 5501: case 5503: case 5505: case 5507: case 5509: case 5511: case 5513: case 5515: case 5517: case 5519: return false;
				default: return true;
			}
		}
	}
	namespace BirchTrapdoor
	{
		short BirchTrapdoor()
		{
			return 4254;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 4274: case 4275: case 4276: case 4277: case 4278: case 4279: case 4280: case 4281: case 4282: case 4283: case 4284: case 4285: case 4286: case 4271: case 4272: case 4273: return eBlockFace::BLOCK_FACE_XM;
				case 4290: case 4291: case 4292: case 4293: case 4294: case 4295: case 4296: case 4297: case 4298: case 4299: case 4300: case 4301: case 4287: case 4288: case 4289: case 4302: return eBlockFace::BLOCK_FACE_XP;
				case 4243: case 4244: case 4245: case 4246: case 4247: case 4248: case 4249: case 4250: case 4251: case 4252: case 4253: case 4254: case 4239: case 4240: case 4241: case 4242: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 4247: case 4263: case 4279: case 4295: case 4248: case 4264: case 4280: case 4296: case 4249: case 4265: case 4281: case 4297: case 4250: case 4266: case 4282: case 4298: case 4251: case 4267: case 4283: case 4299: case 4252: case 4268: case 4284: case 4300: case 4253: case 4269: case 4285: case 4301: case 4254: case 4270: case 4286: case 4302: return Half::Bottom;
				default: return Half::Top;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 4243: case 4259: case 4275: case 4291: case 4244: case 4260: case 4276: case 4292: case 4245: case 4261: case 4277: case 4293: case 4246: case 4262: case 4278: case 4294: case 4251: case 4267: case 4283: case 4299: case 4252: case 4268: case 4284: case 4300: case 4253: case 4269: case 4285: case 4301: case 4254: case 4270: case 4286: case 4302: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 4258: case 4274: case 4290: case 4245: case 4261: case 4277: case 4293: case 4246: case 4262: case 4278: case 4294: case 4249: case 4265: case 4281: case 4297: case 4250: case 4266: case 4282: case 4298: case 4253: case 4269: case 4285: case 4301: case 4254: case 4270: case 4286: case 4241: case 4257: case 4273: case 4289: case 4242: case 4302: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 4258: case 4274: case 4290: case 4244: case 4260: case 4276: case 4292: case 4246: case 4262: case 4278: case 4294: case 4248: case 4264: case 4280: case 4296: case 4250: case 4266: case 4282: case 4298: case 4252: case 4268: case 4284: case 4300: case 4254: case 4270: case 4286: case 4240: case 4256: case 4272: case 4288: case 4242: case 4302: return false;
				default: return true;
			}
		}
	}
	namespace BirchWallSign
	{
		short BirchWallSign()
		{
			return 3752;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 3755: case 3756: return eBlockFace::BLOCK_FACE_XM;
				case 3757: case 3758: return eBlockFace::BLOCK_FACE_XP;
				case 3751: case 3752: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 3752: case 3754: case 3756: case 3758: return false;
				default: return true;
			}
		}
	}
	namespace BirchWood
	{
		short BirchWood()
		{
			return 116;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 115: return Axis::X;
				case 116: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace BlackBanner
	{
		short BlackBanner()
		{
			return 8137;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 8137: return 0;
				case 8138: return 1;
				case 8147: return 10;
				case 8148: return 11;
				case 8149: return 12;
				case 8150: return 13;
				case 8151: return 14;
				case 8152: return 15;
				case 8139: return 2;
				case 8140: return 3;
				case 8141: return 4;
				case 8142: return 5;
				case 8143: return 6;
				case 8144: return 7;
				case 8145: return 8;
				default: return 9;
			}
		}
	}
	namespace BlackBed
	{
		short BlackBed()
		{
			return 1292;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1299: case 1300: case 1297: case 1298: return eBlockFace::BLOCK_FACE_XM;
				case 1302: case 1303: case 1301: case 1304: return eBlockFace::BLOCK_FACE_XP;
				case 1291: case 1292: case 1289: case 1290: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Occupied(short ID)
		{
			switch (ID)
			{
				case 1291: case 1295: case 1299: case 1303: case 1292: case 1296: case 1300: case 1304: return false;
				default: return true;
			}
		}
		enum Part Part(short ID)
		{
			switch (ID)
			{
				case 1302: case 1292: case 1296: case 1300: case 1290: case 1294: case 1298: case 1304: return Part::Foot;
				default: return Part::Head;
			}
		}
	}
	namespace BlackCarpet
	{
	}
	namespace BlackConcrete
	{
	}
	namespace BlackConcretePowder
	{
	}
	namespace BlackGlazedTerracotta
	{
		short BlackGlazedTerracotta()
		{
			return 9434;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9436: return eBlockFace::BLOCK_FACE_XM;
				case 9437: return eBlockFace::BLOCK_FACE_XP;
				case 9434: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace BlackShulkerBox
	{
		short BlackShulkerBox()
		{
			return 9372;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9371: return eBlockFace::BLOCK_FACE_XM;
				case 9369: return eBlockFace::BLOCK_FACE_XP;
				case 9373: return eBlockFace::BLOCK_FACE_YM;
				case 9372: return eBlockFace::BLOCK_FACE_YP;
				case 9368: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace BlackStainedGlass
	{
	}
	namespace BlackStainedGlassPane
	{
		short BlackStainedGlassPane()
		{
			return 7374;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 7365: case 7369: case 7373: case 7362: case 7366: case 7370: case 7359: case 7363: case 7367: case 7371: case 7360: case 7364: case 7368: case 7372: case 7361: case 7374: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 7369: case 7373: case 7354: case 7358: case 7370: case 7351: case 7355: case 7367: case 7371: case 7352: case 7356: case 7368: case 7372: case 7353: case 7357: case 7374: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 7365: case 7373: case 7350: case 7358: case 7366: case 7347: case 7355: case 7363: case 7371: case 7348: case 7356: case 7364: case 7372: case 7349: case 7357: case 7374: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7365: case 7369: case 7373: case 7346: case 7350: case 7354: case 7358: case 7362: case 7366: case 7370: case 7345: case 7349: case 7353: case 7357: case 7361: case 7374: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 7346: case 7350: case 7354: case 7358: case 7362: case 7366: case 7370: case 7344: case 7348: case 7352: case 7356: case 7360: case 7364: case 7368: case 7372: case 7374: return false;
				default: return true;
			}
		}
	}
	namespace BlackTerracotta
	{
	}
	namespace BlackWallBanner
	{
		short BlackWallBanner()
		{
			return 8213;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8215: return eBlockFace::BLOCK_FACE_XM;
				case 8216: return eBlockFace::BLOCK_FACE_XP;
				case 8213: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace BlackWool
	{
	}
	namespace Blackstone
	{
	}
	namespace BlackstoneSlab
	{
		short BlackstoneSlab()
		{
			return 16247;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 16246: case 16247: return Type::Bottom;
				case 16249: case 16248: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 16249: case 16247: case 16245: return false;
				default: return true;
			}
		}
	}
	namespace BlackstoneStairs
	{
		short BlackstoneStairs()
		{
			return 15851;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 15880: case 15881: case 15882: case 15883: case 15884: case 15885: case 15886: case 15887: case 15888: case 15889: case 15890: case 15891: case 15892: case 15893: case 15894: case 15895: case 15896: case 15897: case 15898: case 15899: return eBlockFace::BLOCK_FACE_XM;
				case 15900: case 15901: case 15902: case 15903: case 15904: case 15905: case 15906: case 15907: case 15908: case 15909: case 15910: case 15911: case 15912: case 15913: case 15914: case 15915: case 15916: case 15917: case 15918: case 15919: return eBlockFace::BLOCK_FACE_XP;
				case 15840: case 15841: case 15842: case 15843: case 15844: case 15845: case 15846: case 15847: case 15848: case 15849: case 15850: case 15851: case 15852: case 15853: case 15854: case 15855: case 15856: case 15857: case 15858: case 15859: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 15850: case 15851: case 15852: case 15853: case 15854: case 15855: case 15856: case 15857: case 15858: case 15859: case 15870: case 15871: case 15872: case 15873: case 15874: case 15875: case 15876: case 15877: case 15878: case 15879: case 15890: case 15891: case 15892: case 15893: case 15894: case 15895: case 15896: case 15897: case 15898: case 15899: case 15910: case 15911: case 15912: case 15913: case 15914: case 15915: case 15916: case 15917: case 15918: case 15919: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 15842: case 15843: case 15852: case 15853: case 15862: case 15863: case 15872: case 15873: case 15882: case 15883: case 15892: case 15893: case 15902: case 15903: case 15912: case 15913: return Shape::InnerLeft;
				case 15844: case 15845: case 15854: case 15855: case 15864: case 15865: case 15874: case 15875: case 15884: case 15885: case 15894: case 15895: case 15904: case 15905: case 15914: case 15915: return Shape::InnerRight;
				case 15846: case 15847: case 15856: case 15857: case 15866: case 15867: case 15876: case 15877: case 15886: case 15887: case 15896: case 15897: case 15906: case 15907: case 15916: case 15917: return Shape::OuterLeft;
				case 15848: case 15849: case 15858: case 15859: case 15868: case 15869: case 15878: case 15879: case 15888: case 15889: case 15898: case 15899: case 15908: case 15909: case 15918: case 15919: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 15841: case 15843: case 15845: case 15847: case 15849: case 15851: case 15853: case 15855: case 15857: case 15859: case 15861: case 15863: case 15865: case 15867: case 15869: case 15871: case 15873: case 15875: case 15877: case 15879: case 15881: case 15883: case 15885: case 15887: case 15889: case 15891: case 15893: case 15895: case 15897: case 15899: case 15901: case 15903: case 15905: case 15907: case 15909: case 15911: case 15913: case 15915: case 15917: case 15919: return false;
				default: return true;
			}
		}
	}
	namespace BlackstoneWall
	{
		short BlackstoneWall()
		{
			return 15923;
		}
		enum East East(short ID)
		{
			switch (ID)
			{
				case 16029: case 16033: case 16037: case 16041: case 16045: case 16049: case 16053: case 16057: case 16061: case 16065: case 16069: case 16073: case 16077: case 16081: case 16085: case 16089: case 16093: case 16097: case 16101: case 16105: case 16109: case 16113: case 16117: case 16121: case 16125: case 16129: case 16133: case 16030: case 16034: case 16038: case 16042: case 16046: case 16050: case 16054: case 16058: case 16062: case 16066: case 16070: case 16074: case 16078: case 16082: case 16086: case 16090: case 16094: case 16098: case 16102: case 16106: case 16110: case 16114: case 16118: case 16122: case 16126: case 16130: case 16134: case 16031: case 16035: case 16039: case 16043: case 16047: case 16051: case 16055: case 16059: case 16063: case 16067: case 16071: case 16075: case 16079: case 16083: case 16087: case 16091: case 16095: case 16099: case 16103: case 16107: case 16111: case 16115: case 16119: case 16123: case 16127: case 16131: case 16135: case 16028: case 16032: case 16036: case 16040: case 16044: case 16048: case 16052: case 16056: case 16060: case 16064: case 16068: case 16072: case 16076: case 16080: case 16084: case 16088: case 16092: case 16096: case 16100: case 16104: case 16108: case 16112: case 16116: case 16120: case 16124: case 16128: case 16132: return East::Low;
				case 15921: case 15925: case 15929: case 15933: case 15937: case 15941: case 15945: case 15949: case 15953: case 15957: case 15961: case 15965: case 15969: case 15973: case 15977: case 15981: case 15985: case 15989: case 15993: case 15997: case 16001: case 16005: case 16009: case 16013: case 16017: case 16021: case 16025: case 15922: case 15926: case 15930: case 15934: case 15938: case 15942: case 15946: case 15950: case 15954: case 15958: case 15962: case 15966: case 15970: case 15974: case 15978: case 15982: case 15986: case 15990: case 15994: case 15998: case 16002: case 16006: case 16010: case 16014: case 16018: case 16022: case 16026: case 15923: case 15927: case 15931: case 15935: case 15939: case 15943: case 15947: case 15951: case 15955: case 15959: case 15963: case 15967: case 15971: case 15975: case 15979: case 15983: case 15987: case 15991: case 15995: case 15999: case 16003: case 16007: case 16011: case 16015: case 16019: case 16023: case 16027: case 15920: case 15924: case 15928: case 15932: case 15936: case 15940: case 15944: case 15948: case 15952: case 15956: case 15960: case 15964: case 15968: case 15972: case 15976: case 15980: case 15984: case 15988: case 15992: case 15996: case 16000: case 16004: case 16008: case 16012: case 16016: case 16020: case 16024: return East::None;
				default: return East::Tall;
			}
		}
		enum North North(short ID)
		{
			switch (ID)
			{
				case 16172: case 16176: case 16180: case 16184: case 16188: case 16192: case 16196: case 16200: case 16204: case 15957: case 15961: case 15965: case 15969: case 15973: case 15977: case 15981: case 15985: case 15989: case 16065: case 16069: case 16073: case 16077: case 16081: case 16085: case 16089: case 16093: case 16097: case 16173: case 16177: case 16181: case 16185: case 16189: case 16193: case 16197: case 16201: case 16205: case 15958: case 15962: case 15966: case 15970: case 15974: case 15978: case 15982: case 15986: case 15990: case 16066: case 16070: case 16074: case 16078: case 16082: case 16086: case 16090: case 16094: case 16098: case 16174: case 16178: case 16182: case 16186: case 16190: case 16194: case 16198: case 16202: case 16206: case 15959: case 15963: case 15967: case 15971: case 15975: case 15979: case 15983: case 15987: case 15991: case 16067: case 16071: case 16075: case 16079: case 16083: case 16087: case 16091: case 16095: case 16099: case 16175: case 16179: case 16183: case 16187: case 16191: case 16195: case 16199: case 16203: case 16207: case 15956: case 15960: case 15964: case 15968: case 15972: case 15976: case 15980: case 15984: case 15988: case 16064: case 16068: case 16072: case 16076: case 16080: case 16084: case 16088: case 16092: case 16096: return North::Low;
				case 16144: case 16148: case 16152: case 16156: case 16160: case 16164: case 16168: case 15921: case 15925: case 15929: case 15933: case 15937: case 15941: case 15945: case 15949: case 15953: case 16029: case 16033: case 16037: case 16041: case 16045: case 16049: case 16053: case 16057: case 16061: case 16137: case 16141: case 16145: case 16149: case 16153: case 16157: case 16161: case 16165: case 16169: case 15922: case 15926: case 15930: case 15934: case 15938: case 15942: case 15946: case 15950: case 15954: case 16030: case 16034: case 16038: case 16042: case 16046: case 16050: case 16054: case 16058: case 16062: case 16138: case 16142: case 16146: case 16150: case 16154: case 16158: case 16162: case 16166: case 16170: case 15923: case 15927: case 15931: case 15935: case 15939: case 15943: case 15947: case 15951: case 15955: case 16031: case 16035: case 16039: case 16043: case 16047: case 16051: case 16055: case 16059: case 16063: case 16139: case 16143: case 16147: case 16151: case 16155: case 16159: case 16163: case 16167: case 16171: case 15920: case 15924: case 15928: case 15932: case 15936: case 15940: case 15944: case 15948: case 15952: case 16028: case 16032: case 16036: case 16040: case 16044: case 16048: case 16052: case 16056: case 16060: case 16136: case 16140: return North::None;
				default: return North::Tall;
			}
		}
		enum South South(short ID)
		{
			switch (ID)
			{
				case 16148: case 16152: case 16156: case 16184: case 16188: case 16192: case 16220: case 16224: case 16228: case 15933: case 15937: case 15941: case 15969: case 15973: case 15977: case 16005: case 16009: case 16013: case 16041: case 16045: case 16049: case 16077: case 16081: case 16085: case 16113: case 16117: case 16121: case 16149: case 16153: case 16157: case 16185: case 16189: case 16193: case 16221: case 16225: case 16229: case 15934: case 15938: case 15942: case 15970: case 15974: case 15978: case 16006: case 16010: case 16014: case 16042: case 16046: case 16050: case 16078: case 16082: case 16086: case 16114: case 16118: case 16122: case 16150: case 16154: case 16158: case 16186: case 16190: case 16194: case 16222: case 16226: case 16230: case 15935: case 15939: case 15943: case 15971: case 15975: case 15979: case 16007: case 16011: case 16015: case 16043: case 16047: case 16051: case 16079: case 16083: case 16087: case 16115: case 16119: case 16123: case 16151: case 16155: case 16159: case 16187: case 16191: case 16195: case 16223: case 16227: case 16231: case 15932: case 15936: case 15940: case 15968: case 15972: case 15976: case 16004: case 16008: case 16012: case 16040: case 16044: case 16048: case 16076: case 16080: case 16084: case 16112: case 16116: case 16120: return South::Low;
				case 16144: case 16172: case 16176: case 16180: case 16208: case 16212: case 16216: case 15921: case 15925: case 15929: case 15957: case 15961: case 15965: case 15993: case 15997: case 16001: case 16029: case 16033: case 16037: case 16065: case 16069: case 16073: case 16101: case 16105: case 16109: case 16137: case 16141: case 16145: case 16173: case 16177: case 16181: case 16209: case 16213: case 16217: case 15922: case 15926: case 15930: case 15958: case 15962: case 15966: case 15994: case 15998: case 16002: case 16030: case 16034: case 16038: case 16066: case 16070: case 16074: case 16102: case 16106: case 16110: case 16138: case 16142: case 16146: case 16174: case 16178: case 16182: case 16210: case 16214: case 16218: case 15923: case 15927: case 15931: case 15959: case 15963: case 15967: case 15995: case 15999: case 16003: case 16031: case 16035: case 16039: case 16067: case 16071: case 16075: case 16103: case 16107: case 16111: case 16139: case 16143: case 16147: case 16175: case 16179: case 16183: case 16211: case 16215: case 16219: case 15920: case 15924: case 15928: case 15956: case 15960: case 15964: case 15992: case 15996: case 16000: case 16028: case 16032: case 16036: case 16064: case 16068: case 16072: case 16100: case 16104: case 16108: case 16136: case 16140: return South::None;
				default: return South::Tall;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 16144: case 16156: case 16168: case 16180: case 16192: case 16204: case 16216: case 16228: case 16240: case 15929: case 15941: case 15953: case 15965: case 15977: case 15989: case 16001: case 16013: case 16025: case 16037: case 16049: case 16061: case 16073: case 16085: case 16097: case 16109: case 16121: case 16133: case 16145: case 16157: case 16169: case 16181: case 16193: case 16205: case 16217: case 16229: case 16241: case 15926: case 15930: case 15938: case 15942: case 15950: case 15954: case 15962: case 15966: case 15974: case 15978: case 15986: case 15990: case 15998: case 16002: case 16010: case 16014: case 16022: case 16026: case 16034: case 16038: case 16046: case 16050: case 16058: case 16062: case 16070: case 16074: case 16082: case 16086: case 16094: case 16098: case 16106: case 16110: case 16118: case 16122: case 16130: case 16134: case 16142: case 16146: case 16154: case 16158: case 16166: case 16170: case 16178: case 16182: case 16190: case 16194: case 16202: case 16206: case 16214: case 16218: case 16226: case 16230: case 16238: case 16242: case 15927: case 15931: case 15939: case 15943: case 15951: case 15955: case 15963: case 15967: case 15975: case 15979: case 15987: case 15991: case 15999: case 16003: case 16011: case 16015: case 16023: case 16027: case 16035: case 16039: case 16047: case 16051: case 16059: case 16063: case 16071: case 16075: case 16083: case 16087: case 16095: case 16099: case 16107: case 16111: case 16119: case 16123: case 16131: case 16135: case 16143: case 16147: case 16155: case 16159: case 16167: case 16171: case 16179: case 16183: case 16191: case 16195: case 16203: case 16207: case 16215: case 16219: case 16227: case 16231: case 16239: case 16243: case 15928: case 15940: case 15952: case 15964: case 15976: case 15988: case 16000: case 16012: case 16024: case 16036: case 16048: case 16060: case 16072: case 16084: case 16096: case 16108: case 16120: case 16132: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 16152: case 16164: case 16176: case 16188: case 16200: case 16212: case 16224: case 16236: case 15925: case 15929: case 15937: case 15941: case 15949: case 15953: case 15961: case 15965: case 15973: case 15977: case 15985: case 15989: case 15997: case 16001: case 16009: case 16013: case 16021: case 16025: case 16033: case 16037: case 16045: case 16049: case 16057: case 16061: case 16069: case 16073: case 16081: case 16085: case 16093: case 16097: case 16105: case 16109: case 16117: case 16121: case 16129: case 16133: case 16141: case 16145: case 16153: case 16157: case 16165: case 16169: case 16177: case 16181: case 16189: case 16193: case 16201: case 16205: case 16213: case 16217: case 16225: case 16229: case 16237: case 16241: case 15930: case 15942: case 15954: case 15966: case 15978: case 15990: case 16002: case 16014: case 16026: case 16038: case 16050: case 16062: case 16074: case 16086: case 16098: case 16110: case 16122: case 16134: case 16146: case 16158: case 16170: case 16182: case 16194: case 16206: case 16218: case 16230: case 16242: case 15923: case 15931: case 15935: case 15943: case 15947: case 15955: case 15959: case 15967: case 15971: case 15979: case 15983: case 15991: case 15995: case 16003: case 16007: case 16015: case 16019: case 16027: case 16031: case 16039: case 16043: case 16051: case 16055: case 16063: case 16067: case 16075: case 16079: case 16087: case 16091: case 16099: case 16103: case 16111: case 16115: case 16123: case 16127: case 16135: case 16139: case 16147: case 16151: case 16159: case 16163: case 16171: case 16175: case 16183: case 16187: case 16195: case 16199: case 16207: case 16211: case 16219: case 16223: case 16231: case 16235: case 16243: case 15924: case 15936: case 15948: case 15960: case 15972: case 15984: case 15996: case 16008: case 16020: case 16032: case 16044: case 16056: case 16068: case 16080: case 16092: case 16104: case 16116: case 16128: case 16140: return false;
				default: return true;
			}
		}
		enum West West(short ID)
		{
			switch (ID)
			{
				case 16152: case 16164: case 16176: case 16188: case 16200: case 16212: case 16224: case 16236: case 15921: case 15933: case 15945: case 15957: case 15969: case 15981: case 15993: case 16005: case 16017: case 16029: case 16041: case 16053: case 16065: case 16077: case 16089: case 16101: case 16113: case 16125: case 16137: case 16149: case 16161: case 16173: case 16185: case 16197: case 16209: case 16221: case 16233: case 15930: case 15942: case 15954: case 15966: case 15978: case 15990: case 16002: case 16014: case 16026: case 16038: case 16050: case 16062: case 16074: case 16086: case 16098: case 16110: case 16122: case 16134: case 16146: case 16158: case 16170: case 16182: case 16194: case 16206: case 16218: case 16230: case 16242: case 15927: case 15939: case 15951: case 15963: case 15975: case 15987: case 15999: case 16011: case 16023: case 16035: case 16047: case 16059: case 16071: case 16083: case 16095: case 16107: case 16119: case 16131: case 16143: case 16155: case 16167: case 16179: case 16191: case 16203: case 16215: case 16227: case 16239: case 15924: case 15936: case 15948: case 15960: case 15972: case 15984: case 15996: case 16008: case 16020: case 16032: case 16044: case 16056: case 16068: case 16080: case 16092: case 16104: case 16116: case 16128: case 16140: return West::Low;
				case 16148: case 16160: case 16172: case 16184: case 16196: case 16208: case 16220: case 16232: case 15929: case 15941: case 15953: case 15965: case 15977: case 15989: case 16001: case 16013: case 16025: case 16037: case 16049: case 16061: case 16073: case 16085: case 16097: case 16109: case 16121: case 16133: case 16145: case 16157: case 16169: case 16181: case 16193: case 16205: case 16217: case 16229: case 16241: case 15926: case 15938: case 15950: case 15962: case 15974: case 15986: case 15998: case 16010: case 16022: case 16034: case 16046: case 16058: case 16070: case 16082: case 16094: case 16106: case 16118: case 16130: case 16142: case 16154: case 16166: case 16178: case 16190: case 16202: case 16214: case 16226: case 16238: case 15923: case 15935: case 15947: case 15959: case 15971: case 15983: case 15995: case 16007: case 16019: case 16031: case 16043: case 16055: case 16067: case 16079: case 16091: case 16103: case 16115: case 16127: case 16139: case 16151: case 16163: case 16175: case 16187: case 16199: case 16211: case 16223: case 16235: case 15920: case 15932: case 15944: case 15956: case 15968: case 15980: case 15992: case 16004: case 16016: case 16028: case 16040: case 16052: case 16064: case 16076: case 16088: case 16100: case 16112: case 16124: case 16136: return West::None;
				default: return West::Tall;
			}
		}
	}
	namespace BlastFurnace
	{
		short BlastFurnace()
		{
			return 14812;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 14815: case 14816: return eBlockFace::BLOCK_FACE_XM;
				case 14817: case 14818: return eBlockFace::BLOCK_FACE_XP;
				case 14811: case 14812: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Lit(short ID)
		{
			switch (ID)
			{
				case 14814: case 14812: case 14816: case 14818: return false;
				default: return true;
			}
		}
	}
	namespace BlueBanner
	{
		short BlueBanner()
		{
			return 8073;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 8073: return 0;
				case 8074: return 1;
				case 8083: return 10;
				case 8084: return 11;
				case 8085: return 12;
				case 8086: return 13;
				case 8087: return 14;
				case 8088: return 15;
				case 8075: return 2;
				case 8076: return 3;
				case 8077: return 4;
				case 8078: return 5;
				case 8079: return 6;
				case 8080: return 7;
				case 8081: return 8;
				default: return 9;
			}
		}
	}
	namespace BlueBed
	{
		short BlueBed()
		{
			return 1228;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1235: case 1236: case 1233: case 1234: return eBlockFace::BLOCK_FACE_XM;
				case 1239: case 1237: case 1238: case 1240: return eBlockFace::BLOCK_FACE_XP;
				case 1227: case 1228: case 1225: case 1226: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Occupied(short ID)
		{
			switch (ID)
			{
				case 1227: case 1231: case 1235: case 1239: case 1228: case 1232: case 1236: case 1240: return false;
				default: return true;
			}
		}
		enum Part Part(short ID)
		{
			switch (ID)
			{
				case 1228: case 1232: case 1236: case 1226: case 1230: case 1234: case 1238: case 1240: return Part::Foot;
				default: return Part::Head;
			}
		}
	}
	namespace BlueCarpet
	{
	}
	namespace BlueConcrete
	{
	}
	namespace BlueConcretePowder
	{
	}
	namespace BlueGlazedTerracotta
	{
		short BlueGlazedTerracotta()
		{
			return 9418;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9420: return eBlockFace::BLOCK_FACE_XM;
				case 9421: return eBlockFace::BLOCK_FACE_XP;
				case 9418: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace BlueIce
	{
	}
	namespace BlueOrchid
	{
	}
	namespace BlueShulkerBox
	{
		short BlueShulkerBox()
		{
			return 9348;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9347: return eBlockFace::BLOCK_FACE_XM;
				case 9345: return eBlockFace::BLOCK_FACE_XP;
				case 9349: return eBlockFace::BLOCK_FACE_YM;
				case 9348: return eBlockFace::BLOCK_FACE_YP;
				case 9344: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace BlueStainedGlass
	{
	}
	namespace BlueStainedGlassPane
	{
		short BlueStainedGlassPane()
		{
			return 7246;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 7241: case 7245: case 7234: case 7238: case 7242: case 7231: case 7235: case 7239: case 7243: case 7232: case 7236: case 7240: case 7244: case 7233: case 7237: case 7246: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 7241: case 7245: case 7226: case 7230: case 7242: case 7223: case 7227: case 7239: case 7243: case 7224: case 7228: case 7240: case 7244: case 7225: case 7229: case 7246: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 7245: case 7222: case 7230: case 7238: case 7219: case 7227: case 7235: case 7243: case 7220: case 7228: case 7236: case 7244: case 7221: case 7229: case 7237: case 7246: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7241: case 7245: case 7218: case 7222: case 7226: case 7230: case 7234: case 7238: case 7242: case 7217: case 7221: case 7225: case 7229: case 7233: case 7237: case 7246: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 7218: case 7222: case 7226: case 7230: case 7234: case 7238: case 7242: case 7216: case 7220: case 7224: case 7228: case 7232: case 7236: case 7240: case 7244: case 7246: return false;
				default: return true;
			}
		}
	}
	namespace BlueTerracotta
	{
	}
	namespace BlueWallBanner
	{
		short BlueWallBanner()
		{
			return 8197;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8199: return eBlockFace::BLOCK_FACE_XM;
				case 8200: return eBlockFace::BLOCK_FACE_XP;
				case 8197: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace BlueWool
	{
	}
	namespace BoneBlock
	{
		short BoneBlock()
		{
			return 9257;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 9256: return Axis::X;
				case 9257: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace Bookshelf
	{
	}
	namespace BrainCoral
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9533: return false;
				default: return true;
			}
		}
	}
	namespace BrainCoralBlock
	{
	}
	namespace BrainCoralFan
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9553: return false;
				default: return true;
			}
		}
	}
	namespace BrainCoralWallFan
	{
		short BrainCoralWallFan()
		{
			return 9608;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9613: case 9612: return eBlockFace::BLOCK_FACE_XM;
				case 9614: case 9615: return eBlockFace::BLOCK_FACE_XP;
				case 9608: case 9609: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9613: case 9611: case 9609: case 9615: return false;
				default: return true;
			}
		}
	}
	namespace BrewingStand
	{
		short BrewingStand()
		{
			return 5140;
		}
		bool HasBottle_0(short ID)
		{
			switch (ID)
			{
				case 5137: case 5139: case 5138: case 5140: return false;
				default: return true;
			}
		}
		bool HasBottle_1(short ID)
		{
			switch (ID)
			{
				case 5135: case 5139: case 5136: case 5140: return false;
				default: return true;
			}
		}
		bool HasBottle_2(short ID)
		{
			switch (ID)
			{
				case 5134: case 5136: case 5138: case 5140: return false;
				default: return true;
			}
		}
	}
	namespace BrickSlab
	{
		short BrickSlab()
		{
			return 8375;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8374: case 8375: return Type::Bottom;
				case 8376: case 8377: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8375: case 8373: case 8377: return false;
				default: return true;
			}
		}
	}
	namespace BrickStairs
	{
		short BrickStairs()
		{
			return 4863;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 4892: case 4893: case 4894: case 4895: case 4896: case 4897: case 4898: case 4899: case 4900: case 4901: case 4902: case 4903: case 4904: case 4905: case 4906: case 4907: case 4908: case 4909: case 4910: case 4911: return eBlockFace::BLOCK_FACE_XM;
				case 4912: case 4913: case 4914: case 4915: case 4916: case 4917: case 4918: case 4919: case 4920: case 4921: case 4922: case 4923: case 4924: case 4925: case 4926: case 4927: case 4928: case 4929: case 4930: case 4931: return eBlockFace::BLOCK_FACE_XP;
				case 4852: case 4853: case 4854: case 4855: case 4856: case 4857: case 4858: case 4859: case 4860: case 4861: case 4862: case 4863: case 4864: case 4865: case 4866: case 4867: case 4868: case 4869: case 4870: case 4871: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 4885: case 4886: case 4887: case 4888: case 4889: case 4890: case 4891: case 4902: case 4903: case 4904: case 4905: case 4906: case 4907: case 4908: case 4909: case 4910: case 4911: case 4922: case 4923: case 4924: case 4925: case 4862: case 4926: case 4863: case 4927: case 4864: case 4928: case 4865: case 4929: case 4866: case 4930: case 4867: case 4931: case 4868: case 4869: case 4870: case 4871: case 4882: case 4883: case 4884: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 4885: case 4894: case 4895: case 4904: case 4905: case 4914: case 4915: case 4854: case 4855: case 4924: case 4925: case 4864: case 4865: case 4874: case 4875: case 4884: return Shape::InnerLeft;
				case 4886: case 4887: case 4896: case 4897: case 4906: case 4907: case 4916: case 4917: case 4856: case 4857: case 4926: case 4927: case 4866: case 4867: case 4876: case 4877: return Shape::InnerRight;
				case 4888: case 4889: case 4898: case 4899: case 4908: case 4909: case 4918: case 4919: case 4858: case 4859: case 4928: case 4929: case 4868: case 4869: case 4878: case 4879: return Shape::OuterLeft;
				case 4890: case 4891: case 4900: case 4901: case 4910: case 4911: case 4920: case 4921: case 4860: case 4861: case 4930: case 4931: case 4870: case 4871: case 4880: case 4881: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 4885: case 4887: case 4889: case 4891: case 4893: case 4895: case 4897: case 4899: case 4901: case 4903: case 4905: case 4907: case 4909: case 4911: case 4913: case 4915: case 4853: case 4917: case 4855: case 4919: case 4857: case 4921: case 4859: case 4923: case 4861: case 4925: case 4863: case 4927: case 4865: case 4929: case 4867: case 4931: case 4869: case 4871: case 4873: case 4875: case 4877: case 4879: case 4881: case 4883: return false;
				default: return true;
			}
		}
	}
	namespace BrickWall
	{
		short BrickWall()
		{
			return 10870;
		}
		enum East East(short ID)
		{
			switch (ID)
			{
				case 11034: case 11038: case 11042: case 11046: case 11050: case 11054: case 11058: case 11062: case 11066: case 11070: case 11074: case 11078: case 11082: case 10975: case 10979: case 10983: case 10987: case 10991: case 10995: case 10999: case 11003: case 11007: case 11011: case 11015: case 11019: case 11023: case 11027: case 11031: case 11035: case 11039: case 11043: case 11047: case 11051: case 11055: case 11059: case 11063: case 11067: case 11071: case 11075: case 11079: case 10976: case 10980: case 10984: case 10988: case 10992: case 10996: case 11000: case 11004: case 11008: case 11012: case 11016: case 11020: case 11024: case 11028: case 11032: case 11036: case 11040: case 11044: case 11048: case 11052: case 11056: case 11060: case 11064: case 11068: case 11072: case 11076: case 11080: case 10977: case 10981: case 10985: case 10989: case 10993: case 10997: case 11001: case 11005: case 11009: case 11013: case 11017: case 11021: case 11025: case 11029: case 11033: case 11037: case 11041: case 11045: case 11049: case 11053: case 11057: case 11061: case 11065: case 11069: case 11073: case 11077: case 11081: case 10978: case 10982: case 10986: case 10990: case 10994: case 10998: case 11002: case 11006: case 11010: case 11014: case 11018: case 11022: case 11026: case 11030: return East::Low;
				case 10867: case 10871: case 10875: case 10879: case 10883: case 10887: case 10891: case 10895: case 10899: case 10903: case 10907: case 10911: case 10915: case 10919: case 10923: case 10927: case 10931: case 10935: case 10939: case 10943: case 10947: case 10951: case 10955: case 10959: case 10963: case 10967: case 10971: case 10868: case 10872: case 10876: case 10880: case 10884: case 10888: case 10892: case 10896: case 10900: case 10904: case 10908: case 10912: case 10916: case 10920: case 10924: case 10928: case 10932: case 10936: case 10940: case 10944: case 10948: case 10952: case 10956: case 10960: case 10964: case 10968: case 10972: case 10869: case 10873: case 10877: case 10881: case 10885: case 10889: case 10893: case 10897: case 10901: case 10905: case 10909: case 10913: case 10917: case 10921: case 10925: case 10929: case 10933: case 10937: case 10941: case 10945: case 10949: case 10953: case 10957: case 10961: case 10965: case 10969: case 10973: case 10870: case 10874: case 10878: case 10882: case 10886: case 10890: case 10894: case 10898: case 10902: case 10906: case 10910: case 10914: case 10918: case 10922: case 10926: case 10930: case 10934: case 10938: case 10942: case 10946: case 10950: case 10954: case 10958: case 10962: case 10966: case 10970: case 10974: return East::None;
				default: return East::Tall;
			}
		}
		enum North North(short ID)
		{
			switch (ID)
			{
				case 11034: case 11038: case 11042: case 11046: case 11122: case 11126: case 11130: case 11134: case 11138: case 11142: case 11146: case 11150: case 11154: case 10903: case 10907: case 10911: case 10915: case 10919: case 10923: case 10927: case 10931: case 10935: case 11011: case 11015: case 11019: case 11023: case 11027: case 11031: case 11035: case 11039: case 11043: case 11119: case 11123: case 11127: case 11131: case 11135: case 11139: case 11143: case 11147: case 11151: case 10904: case 10908: case 10912: case 10916: case 10920: case 10924: case 10928: case 10932: case 10936: case 11012: case 11016: case 11020: case 11024: case 11028: case 11032: case 11036: case 11040: case 11044: case 11120: case 11124: case 11128: case 11132: case 11136: case 11140: case 11144: case 11148: case 11152: case 10905: case 10909: case 10913: case 10917: case 10921: case 10925: case 10929: case 10933: case 10937: case 11013: case 11017: case 11021: case 11025: case 11029: case 11033: case 11037: case 11041: case 11045: case 11121: case 11125: case 11129: case 11133: case 11137: case 11141: case 11145: case 11149: case 11153: case 10906: case 10910: case 10914: case 10918: case 10922: case 10926: case 10930: case 10934: case 10938: case 11014: case 11018: case 11022: case 11026: case 11030: return North::Low;
				case 11086: case 11090: case 11094: case 11098: case 11102: case 11106: case 11110: case 11114: case 11118: case 10867: case 10871: case 10875: case 10879: case 10883: case 10887: case 10891: case 10895: case 10899: case 10975: case 10979: case 10983: case 10987: case 10991: case 10995: case 10999: case 11003: case 11007: case 11083: case 11087: case 11091: case 11095: case 11099: case 11103: case 11107: case 11111: case 11115: case 10868: case 10872: case 10876: case 10880: case 10884: case 10888: case 10892: case 10896: case 10900: case 10976: case 10980: case 10984: case 10988: case 10992: case 10996: case 11000: case 11004: case 11008: case 11084: case 11088: case 11092: case 11096: case 11100: case 11104: case 11108: case 11112: case 11116: case 10869: case 10873: case 10877: case 10881: case 10885: case 10889: case 10893: case 10897: case 10901: case 10977: case 10981: case 10985: case 10989: case 10993: case 10997: case 11001: case 11005: case 11009: case 11085: case 11089: case 11093: case 11097: case 11101: case 11105: case 11109: case 11113: case 11117: case 10870: case 10874: case 10878: case 10882: case 10886: case 10890: case 10894: case 10898: case 10902: case 10978: case 10982: case 10986: case 10990: case 10994: case 10998: case 11002: case 11006: case 11010: return North::None;
				default: return North::Tall;
			}
		}
		enum South South(short ID)
		{
			switch (ID)
			{
				case 11034: case 11062: case 11066: case 11070: case 11098: case 11102: case 11106: case 11134: case 11138: case 11142: case 11170: case 11174: case 11178: case 10879: case 10883: case 10887: case 10915: case 10919: case 10923: case 10951: case 10955: case 10959: case 10987: case 10991: case 10995: case 11023: case 11027: case 11031: case 11059: case 11063: case 11067: case 11095: case 11099: case 11103: case 11131: case 11135: case 11139: case 11167: case 11171: case 11175: case 10880: case 10884: case 10888: case 10916: case 10920: case 10924: case 10952: case 10956: case 10960: case 10988: case 10992: case 10996: case 11024: case 11028: case 11032: case 11060: case 11064: case 11068: case 11096: case 11100: case 11104: case 11132: case 11136: case 11140: case 11168: case 11172: case 11176: case 10881: case 10885: case 10889: case 10917: case 10921: case 10925: case 10953: case 10957: case 10961: case 10989: case 10993: case 10997: case 11025: case 11029: case 11033: case 11061: case 11065: case 11069: case 11097: case 11101: case 11105: case 11133: case 11137: case 11141: case 11169: case 11173: case 11177: case 10882: case 10886: case 10890: case 10918: case 10922: case 10926: case 10954: case 10958: case 10962: case 10990: case 10994: case 10998: case 11026: case 11030: return South::Low;
				case 11050: case 11054: case 11058: case 11086: case 11090: case 11094: case 11122: case 11126: case 11130: case 11158: case 11162: case 11166: case 10867: case 10871: case 10875: case 10903: case 10907: case 10911: case 10939: case 10943: case 10947: case 10975: case 10979: case 10983: case 11011: case 11015: case 11019: case 11047: case 11051: case 11055: case 11083: case 11087: case 11091: case 11119: case 11123: case 11127: case 11155: case 11159: case 11163: case 10868: case 10872: case 10876: case 10904: case 10908: case 10912: case 10940: case 10944: case 10948: case 10976: case 10980: case 10984: case 11012: case 11016: case 11020: case 11048: case 11052: case 11056: case 11084: case 11088: case 11092: case 11120: case 11124: case 11128: case 11156: case 11160: case 11164: case 10869: case 10873: case 10877: case 10905: case 10909: case 10913: case 10941: case 10945: case 10949: case 10977: case 10981: case 10985: case 11013: case 11017: case 11021: case 11049: case 11053: case 11057: case 11085: case 11089: case 11093: case 11121: case 11125: case 11129: case 11157: case 11161: case 11165: case 10870: case 10874: case 10878: case 10906: case 10910: case 10914: case 10942: case 10946: case 10950: case 10978: case 10982: case 10986: case 11014: case 11018: case 11022: return South::None;
				default: return South::Tall;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 11034: case 11042: case 11046: case 11054: case 11058: case 11066: case 11070: case 11078: case 11082: case 11090: case 11094: case 11102: case 11106: case 11114: case 11118: case 11126: case 11130: case 11138: case 11142: case 11150: case 11154: case 11162: case 11166: case 11174: case 11178: case 11186: case 11190: case 10875: case 10887: case 10899: case 10911: case 10923: case 10935: case 10947: case 10959: case 10971: case 10983: case 10995: case 11007: case 11019: case 11031: case 11043: case 11055: case 11067: case 11079: case 11091: case 11103: case 11115: case 11127: case 11139: case 11151: case 11163: case 11175: case 11187: case 10876: case 10888: case 10900: case 10912: case 10924: case 10936: case 10948: case 10960: case 10972: case 10984: case 10996: case 11008: case 11020: case 11032: case 11044: case 11056: case 11068: case 11080: case 11092: case 11104: case 11116: case 11128: case 11140: case 11152: case 11164: case 11176: case 11188: case 10873: case 10877: case 10885: case 10889: case 10897: case 10901: case 10909: case 10913: case 10921: case 10925: case 10933: case 10937: case 10945: case 10949: case 10957: case 10961: case 10969: case 10973: case 10981: case 10985: case 10993: case 10997: case 11005: case 11009: case 11017: case 11021: case 11029: case 11033: case 11041: case 11045: case 11053: case 11057: case 11065: case 11069: case 11077: case 11081: case 11089: case 11093: case 11101: case 11105: case 11113: case 11117: case 11125: case 11129: case 11137: case 11141: case 11149: case 11153: case 11161: case 11165: case 11173: case 11177: case 11185: case 11189: case 10874: case 10878: case 10886: case 10890: case 10898: case 10902: case 10910: case 10914: case 10922: case 10926: case 10934: case 10938: case 10946: case 10950: case 10958: case 10962: case 10970: case 10974: case 10982: case 10986: case 10994: case 10998: case 11006: case 11010: case 11018: case 11022: case 11030: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 11034: case 11038: case 11046: case 11050: case 11058: case 11062: case 11070: case 11074: case 11082: case 11086: case 11094: case 11098: case 11106: case 11110: case 11118: case 11122: case 11130: case 11134: case 11142: case 11146: case 11154: case 11158: case 11166: case 11170: case 11178: case 11182: case 11190: case 10871: case 10883: case 10895: case 10907: case 10919: case 10931: case 10943: case 10955: case 10967: case 10979: case 10991: case 11003: case 11015: case 11027: case 11039: case 11051: case 11063: case 11075: case 11087: case 11099: case 11111: case 11123: case 11135: case 11147: case 11159: case 11171: case 11183: case 10872: case 10876: case 10884: case 10888: case 10896: case 10900: case 10908: case 10912: case 10920: case 10924: case 10932: case 10936: case 10944: case 10948: case 10956: case 10960: case 10968: case 10972: case 10980: case 10984: case 10992: case 10996: case 11004: case 11008: case 11016: case 11020: case 11028: case 11032: case 11040: case 11044: case 11052: case 11056: case 11064: case 11068: case 11076: case 11080: case 11088: case 11092: case 11100: case 11104: case 11112: case 11116: case 11124: case 11128: case 11136: case 11140: case 11148: case 11152: case 11160: case 11164: case 11172: case 11176: case 11184: case 11188: case 10877: case 10889: case 10901: case 10913: case 10925: case 10937: case 10949: case 10961: case 10973: case 10985: case 10997: case 11009: case 11021: case 11033: case 11045: case 11057: case 11069: case 11081: case 11093: case 11105: case 11117: case 11129: case 11141: case 11153: case 11165: case 11177: case 11189: case 10870: case 10878: case 10882: case 10890: case 10894: case 10902: case 10906: case 10914: case 10918: case 10926: case 10930: case 10938: case 10942: case 10950: case 10954: case 10962: case 10966: case 10974: case 10978: case 10986: case 10990: case 10998: case 11002: case 11010: case 11014: case 11022: case 11026: return false;
				default: return true;
			}
		}
		enum West West(short ID)
		{
			switch (ID)
			{
				case 11042: case 11054: case 11066: case 11078: case 11090: case 11102: case 11114: case 11126: case 11138: case 11150: case 11162: case 11174: case 11186: case 10871: case 10883: case 10895: case 10907: case 10919: case 10931: case 10943: case 10955: case 10967: case 10979: case 10991: case 11003: case 11015: case 11027: case 11039: case 11051: case 11063: case 11075: case 11087: case 11099: case 11111: case 11123: case 11135: case 11147: case 11159: case 11171: case 11183: case 10868: case 10880: case 10892: case 10904: case 10916: case 10928: case 10940: case 10952: case 10964: case 10976: case 10988: case 11000: case 11012: case 11024: case 11036: case 11048: case 11060: case 11072: case 11084: case 11096: case 11108: case 11120: case 11132: case 11144: case 11156: case 11168: case 11180: case 10877: case 10889: case 10901: case 10913: case 10925: case 10937: case 10949: case 10961: case 10973: case 10985: case 10997: case 11009: case 11021: case 11033: case 11045: case 11057: case 11069: case 11081: case 11093: case 11105: case 11117: case 11129: case 11141: case 11153: case 11165: case 11177: case 11189: case 10874: case 10886: case 10898: case 10910: case 10922: case 10934: case 10946: case 10958: case 10970: case 10982: case 10994: case 11006: case 11018: case 11030: return West::Low;
				case 11038: case 11050: case 11062: case 11074: case 11086: case 11098: case 11110: case 11122: case 11134: case 11146: case 11158: case 11170: case 11182: case 10867: case 10879: case 10891: case 10903: case 10915: case 10927: case 10939: case 10951: case 10963: case 10975: case 10987: case 10999: case 11011: case 11023: case 11035: case 11047: case 11059: case 11071: case 11083: case 11095: case 11107: case 11119: case 11131: case 11143: case 11155: case 11167: case 11179: case 10876: case 10888: case 10900: case 10912: case 10924: case 10936: case 10948: case 10960: case 10972: case 10984: case 10996: case 11008: case 11020: case 11032: case 11044: case 11056: case 11068: case 11080: case 11092: case 11104: case 11116: case 11128: case 11140: case 11152: case 11164: case 11176: case 11188: case 10873: case 10885: case 10897: case 10909: case 10921: case 10933: case 10945: case 10957: case 10969: case 10981: case 10993: case 11005: case 11017: case 11029: case 11041: case 11053: case 11065: case 11077: case 11089: case 11101: case 11113: case 11125: case 11137: case 11149: case 11161: case 11173: case 11185: case 10870: case 10882: case 10894: case 10906: case 10918: case 10930: case 10942: case 10954: case 10966: case 10978: case 10990: case 11002: case 11014: case 11026: return West::None;
				default: return West::Tall;
			}
		}
	}
	namespace Bricks
	{
	}
	namespace BrownBanner
	{
		short BrownBanner()
		{
			return 8089;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 8089: return 0;
				case 8090: return 1;
				case 8099: return 10;
				case 8100: return 11;
				case 8101: return 12;
				case 8102: return 13;
				case 8103: return 14;
				case 8104: return 15;
				case 8091: return 2;
				case 8092: return 3;
				case 8093: return 4;
				case 8094: return 5;
				case 8095: return 6;
				case 8096: return 7;
				case 8097: return 8;
				default: return 9;
			}
		}
	}
	namespace BrownBed
	{
		short BrownBed()
		{
			return 1244;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1250: case 1251: case 1252: case 1249: return eBlockFace::BLOCK_FACE_XM;
				case 1254: case 1255: case 1253: case 1256: return eBlockFace::BLOCK_FACE_XP;
				case 1242: case 1243: case 1244: case 1241: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Occupied(short ID)
		{
			switch (ID)
			{
				case 1243: case 1247: case 1251: case 1255: case 1244: case 1248: case 1252: case 1256: return false;
				default: return true;
			}
		}
		enum Part Part(short ID)
		{
			switch (ID)
			{
				case 1242: case 1246: case 1250: case 1254: case 1244: case 1248: case 1252: case 1256: return Part::Foot;
				default: return Part::Head;
			}
		}
	}
	namespace BrownCarpet
	{
	}
	namespace BrownConcrete
	{
	}
	namespace BrownConcretePowder
	{
	}
	namespace BrownGlazedTerracotta
	{
		short BrownGlazedTerracotta()
		{
			return 9422;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9424: return eBlockFace::BLOCK_FACE_XM;
				case 9425: return eBlockFace::BLOCK_FACE_XP;
				case 9422: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace BrownMushroom
	{
	}
	namespace BrownMushroomBlock
	{
		short BrownMushroomBlock()
		{
			return 4505;
		}
		bool Down(short ID)
		{
			switch (ID)
			{
				case 4542: case 4558: case 4543: case 4559: case 4544: case 4560: case 4545: case 4561: case 4546: case 4562: case 4547: case 4563: case 4548: case 4564: case 4549: case 4565: case 4550: case 4566: case 4551: case 4567: case 4552: case 4537: case 4553: case 4538: case 4554: case 4539: case 4555: case 4540: case 4556: case 4541: case 4557: case 4568: return false;
				default: return true;
			}
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 4526: case 4558: case 4527: case 4559: case 4528: case 4560: case 4529: case 4561: case 4530: case 4562: case 4531: case 4563: case 4532: case 4564: case 4533: case 4565: case 4534: case 4566: case 4535: case 4567: case 4536: case 4521: case 4553: case 4522: case 4554: case 4523: case 4555: case 4524: case 4556: case 4525: case 4557: case 4568: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 4513: case 4529: case 4545: case 4561: case 4514: case 4530: case 4546: case 4562: case 4515: case 4531: case 4547: case 4563: case 4516: case 4532: case 4548: case 4564: case 4517: case 4533: case 4549: case 4565: case 4518: case 4534: case 4550: case 4566: case 4519: case 4535: case 4551: case 4567: case 4520: case 4536: case 4552: case 4568: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 4510: case 4526: case 4542: case 4558: case 4511: case 4527: case 4543: case 4559: case 4512: case 4528: case 4544: case 4560: case 4517: case 4533: case 4549: case 4565: case 4518: case 4534: case 4550: case 4566: case 4519: case 4535: case 4551: case 4567: case 4520: case 4536: case 4552: case 4509: case 4525: case 4541: case 4557: case 4568: return false;
				default: return true;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 4511: case 4527: case 4543: case 4559: case 4512: case 4528: case 4544: case 4560: case 4515: case 4531: case 4547: case 4563: case 4516: case 4532: case 4548: case 4564: case 4519: case 4535: case 4551: case 4567: case 4520: case 4536: case 4552: case 4507: case 4523: case 4539: case 4555: case 4508: case 4524: case 4540: case 4556: case 4568: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 4510: case 4526: case 4542: case 4558: case 4512: case 4528: case 4544: case 4560: case 4514: case 4530: case 4546: case 4562: case 4516: case 4532: case 4548: case 4564: case 4518: case 4534: case 4550: case 4566: case 4520: case 4536: case 4552: case 4506: case 4522: case 4538: case 4554: case 4508: case 4524: case 4540: case 4556: case 4568: return false;
				default: return true;
			}
		}
	}
	namespace BrownShulkerBox
	{
		short BrownShulkerBox()
		{
			return 9354;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9353: return eBlockFace::BLOCK_FACE_XM;
				case 9351: return eBlockFace::BLOCK_FACE_XP;
				case 9355: return eBlockFace::BLOCK_FACE_YM;
				case 9354: return eBlockFace::BLOCK_FACE_YP;
				case 9350: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace BrownStainedGlass
	{
	}
	namespace BrownStainedGlassPane
	{
		short BrownStainedGlassPane()
		{
			return 7278;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 7272: case 7276: case 7265: case 7269: case 7273: case 7277: case 7266: case 7270: case 7274: case 7263: case 7267: case 7271: case 7275: case 7264: case 7268: case 7278: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 7272: case 7276: case 7257: case 7261: case 7273: case 7277: case 7258: case 7262: case 7274: case 7255: case 7259: case 7271: case 7275: case 7256: case 7260: case 7278: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 7276: case 7253: case 7261: case 7269: case 7277: case 7254: case 7262: case 7270: case 7251: case 7259: case 7267: case 7275: case 7252: case 7260: case 7268: case 7278: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7249: case 7253: case 7257: case 7261: case 7265: case 7269: case 7273: case 7277: case 7250: case 7254: case 7258: case 7262: case 7266: case 7270: case 7274: case 7278: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 7272: case 7276: case 7250: case 7254: case 7258: case 7262: case 7266: case 7270: case 7274: case 7248: case 7252: case 7256: case 7260: case 7264: case 7268: case 7278: return false;
				default: return true;
			}
		}
	}
	namespace BrownTerracotta
	{
	}
	namespace BrownWallBanner
	{
		short BrownWallBanner()
		{
			return 8201;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8203: return eBlockFace::BLOCK_FACE_XM;
				case 8204: return eBlockFace::BLOCK_FACE_XP;
				case 8201: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace BrownWool
	{
	}
	namespace BubbleColumn
	{
		short BubbleColumn()
		{
			return 9667;
		}
		bool Drag(short ID)
		{
			switch (ID)
			{
				case 9668: return false;
				default: return true;
			}
		}
	}
	namespace BubbleCoral
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9535: return false;
				default: return true;
			}
		}
	}
	namespace BubbleCoralBlock
	{
	}
	namespace BubbleCoralFan
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9555: return false;
				default: return true;
			}
		}
	}
	namespace BubbleCoralWallFan
	{
		short BubbleCoralWallFan()
		{
			return 9616;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9620: case 9621: return eBlockFace::BLOCK_FACE_XM;
				case 9622: case 9623: return eBlockFace::BLOCK_FACE_XP;
				case 9617: case 9616: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9617: case 9621: case 9619: case 9623: return false;
				default: return true;
			}
		}
	}
	namespace Cactus
	{
		short Cactus()
		{
			return 3931;
		}
		unsigned char Age(short ID)
		{
			switch (ID)
			{
				case 3931: return 0;
				case 3932: return 1;
				case 3941: return 10;
				case 3942: return 11;
				case 3943: return 12;
				case 3944: return 13;
				case 3945: return 14;
				case 3946: return 15;
				case 3933: return 2;
				case 3934: return 3;
				case 3935: return 4;
				case 3936: return 5;
				case 3937: return 6;
				case 3938: return 7;
				case 3939: return 8;
				default: return 9;
			}
		}
	}
	namespace Cake
	{
		short Cake()
		{
			return 4024;
		}
		unsigned char Bites(short ID)
		{
			switch (ID)
			{
				case 4024: return 0;
				case 4025: return 1;
				case 4026: return 2;
				case 4027: return 3;
				case 4028: return 4;
				case 4029: return 5;
				default: return 6;
			}
		}
	}
	namespace Campfire
	{
		short Campfire()
		{
			return 14893;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 14908: case 14909: case 14910: case 14911: case 14912: case 14913: case 14906: case 14907: return eBlockFace::BLOCK_FACE_XM;
				case 14916: case 14917: case 14918: case 14919: case 14920: case 14914: case 14915: case 14921: return eBlockFace::BLOCK_FACE_XP;
				case 14893: case 14894: case 14895: case 14896: case 14897: case 14890: case 14891: case 14892: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Lit(short ID)
		{
			switch (ID)
			{
				case 14894: case 14902: case 14910: case 14918: case 14895: case 14903: case 14911: case 14919: case 14896: case 14904: case 14912: case 14920: case 14897: case 14905: case 14913: case 14921: return false;
				default: return true;
			}
		}
		bool SignalFire(short ID)
		{
			switch (ID)
			{
				case 14908: case 14916: case 14893: case 14901: case 14909: case 14917: case 14896: case 14904: case 14912: case 14920: case 14897: case 14905: case 14913: case 14892: case 14900: case 14921: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 14893: case 14901: case 14909: case 14917: case 14895: case 14903: case 14911: case 14919: case 14897: case 14905: case 14913: case 14891: case 14899: case 14907: case 14915: case 14921: return false;
				default: return true;
			}
		}
	}
	namespace Carrots
	{
		short Carrots()
		{
			return 6330;
		}
		unsigned char Age(short ID)
		{
			switch (ID)
			{
				case 6330: return 0;
				case 6331: return 1;
				case 6332: return 2;
				case 6333: return 3;
				case 6334: return 4;
				case 6335: return 5;
				case 6336: return 6;
				default: return 7;
			}
		}
	}
	namespace CartographyTable
	{
	}
	namespace CarvedPumpkin
	{
		short CarvedPumpkin()
		{
			return 4016;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 4018: return eBlockFace::BLOCK_FACE_XM;
				case 4019: return eBlockFace::BLOCK_FACE_XP;
				case 4016: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace Cauldron
	{
		short Cauldron()
		{
			return 5141;
		}
		unsigned char Level(short ID)
		{
			switch (ID)
			{
				case 5141: return 0;
				case 5142: return 1;
				case 5143: return 2;
				default: return 3;
			}
		}
	}
	namespace CaveAir
	{
	}
	namespace Chain
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 4730: return false;
				default: return true;
			}
		}
	}
	namespace ChainCommandBlock
	{
		short ChainCommandBlock()
		{
			return 9243;
		}
		bool Conditional(short ID)
		{
			switch (ID)
			{
				case 9244: case 9246: case 9248: case 9243: case 9245: case 9247: return false;
				default: return true;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9240: case 9246: return eBlockFace::BLOCK_FACE_XM;
				case 9244: case 9238: return eBlockFace::BLOCK_FACE_XP;
				case 9242: case 9248: return eBlockFace::BLOCK_FACE_YM;
				case 9241: case 9247: return eBlockFace::BLOCK_FACE_YP;
				case 9237: case 9243: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace Chest
	{
		short Chest()
		{
			return 2035;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 2046: case 2047: case 2048: case 2050: case 2049: case 2051: return eBlockFace::BLOCK_FACE_XM;
				case 2052: case 2054: case 2056: case 2057: case 2055: case 2053: return eBlockFace::BLOCK_FACE_XP;
				case 2037: case 2038: case 2039: case 2034: case 2035: case 2036: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 2037: case 2042: case 2043: case 2048: case 2054: case 2055: case 2049: case 2036: return Type::Left;
				case 2038: case 2039: case 2044: case 2045: case 2050: case 2056: case 2057: case 2051: return Type::Right;
				default: return Type::Single;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 2037: case 2039: case 2041: case 2043: case 2045: case 2047: case 2057: case 2055: case 2053: case 2049: case 2035: case 2051: return false;
				default: return true;
			}
		}
	}
	namespace ChippedAnvil
	{
		short ChippedAnvil()
		{
			return 6614;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6616: return eBlockFace::BLOCK_FACE_XM;
				case 6617: return eBlockFace::BLOCK_FACE_XP;
				case 6614: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace ChiseledNetherBricks
	{
	}
	namespace ChiseledPolishedBlackstone
	{
	}
	namespace ChiseledQuartzBlock
	{
	}
	namespace ChiseledRedSandstone
	{
	}
	namespace ChiseledSandstone
	{
	}
	namespace ChiseledStoneBricks
	{
	}
	namespace ChorusFlower
	{
		short ChorusFlower()
		{
			return 9128;
		}
		unsigned char Age(short ID)
		{
			switch (ID)
			{
				case 9128: return 0;
				case 9129: return 1;
				case 9130: return 2;
				case 9131: return 3;
				case 9132: return 4;
				default: return 5;
			}
		}
	}
	namespace ChorusPlant
	{
		short ChorusPlant()
		{
			return 9127;
		}
		bool Down(short ID)
		{
			switch (ID)
			{
				case 9113: case 9114: case 9115: case 9116: case 9117: case 9118: case 9119: case 9120: case 9121: case 9122: case 9123: case 9124: case 9125: case 9126: case 9096: case 9097: case 9098: case 9099: case 9100: case 9101: case 9102: case 9103: case 9104: case 9105: case 9106: case 9107: case 9108: case 9109: case 9110: case 9111: case 9112: case 9127: return false;
				default: return true;
			}
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 9081: case 9113: case 9082: case 9114: case 9083: case 9115: case 9084: case 9116: case 9085: case 9117: case 9086: case 9118: case 9087: case 9119: case 9088: case 9120: case 9089: case 9121: case 9090: case 9122: case 9091: case 9123: case 9092: case 9124: case 9093: case 9125: case 9094: case 9126: case 9095: case 9080: case 9112: case 9127: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 9088: case 9120: case 9089: case 9121: case 9090: case 9122: case 9091: case 9123: case 9092: case 9124: case 9093: case 9125: case 9094: case 9126: case 9095: case 9072: case 9104: case 9073: case 9105: case 9074: case 9106: case 9075: case 9107: case 9076: case 9108: case 9077: case 9109: case 9078: case 9110: case 9079: case 9111: case 9127: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 9084: case 9116: case 9085: case 9117: case 9086: case 9118: case 9087: case 9119: case 9092: case 9124: case 9093: case 9125: case 9094: case 9126: case 9095: case 9068: case 9100: case 9069: case 9101: case 9070: case 9102: case 9071: case 9103: case 9076: case 9108: case 9077: case 9109: case 9078: case 9110: case 9079: case 9111: case 9127: return false;
				default: return true;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 9082: case 9114: case 9083: case 9115: case 9086: case 9118: case 9087: case 9119: case 9090: case 9122: case 9091: case 9123: case 9094: case 9126: case 9095: case 9066: case 9098: case 9067: case 9099: case 9070: case 9102: case 9071: case 9103: case 9074: case 9106: case 9075: case 9107: case 9078: case 9110: case 9079: case 9111: case 9127: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 9081: case 9113: case 9083: case 9115: case 9085: case 9117: case 9087: case 9119: case 9089: case 9121: case 9091: case 9123: case 9093: case 9125: case 9095: case 9065: case 9097: case 9067: case 9099: case 9069: case 9101: case 9071: case 9103: case 9073: case 9105: case 9075: case 9107: case 9077: case 9109: case 9079: case 9111: case 9127: return false;
				default: return true;
			}
		}
	}
	namespace Clay
	{
	}
	namespace CoalBlock
	{
	}
	namespace CoalOre
	{
	}
	namespace CoarseDirt
	{
	}
	namespace Cobblestone
	{
	}
	namespace CobblestoneSlab
	{
		short CobblestoneSlab()
		{
			return 8369;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8368: case 8369: return Type::Bottom;
				case 8371: case 8370: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8367: case 8371: case 8369: return false;
				default: return true;
			}
		}
	}
	namespace CobblestoneStairs
	{
		short CobblestoneStairs()
		{
			return 3666;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 3697: case 3698: case 3699: case 3700: case 3701: case 3702: case 3703: case 3704: case 3705: case 3706: case 3707: case 3708: case 3709: case 3710: case 3711: case 3712: case 3713: case 3714: case 3695: case 3696: return eBlockFace::BLOCK_FACE_XM;
				case 3729: case 3730: case 3731: case 3732: case 3733: case 3734: case 3715: case 3716: case 3717: case 3718: case 3719: case 3720: case 3721: case 3722: case 3723: case 3724: case 3725: case 3726: case 3727: case 3728: return eBlockFace::BLOCK_FACE_XP;
				case 3665: case 3666: case 3667: case 3668: case 3669: case 3670: case 3671: case 3672: case 3673: case 3674: case 3655: case 3656: case 3657: case 3658: case 3659: case 3660: case 3661: case 3662: case 3663: case 3664: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 3665: case 3729: case 3666: case 3730: case 3667: case 3731: case 3668: case 3732: case 3669: case 3733: case 3670: case 3734: case 3671: case 3672: case 3673: case 3705: case 3674: case 3706: case 3707: case 3708: case 3709: case 3710: case 3711: case 3712: case 3713: case 3714: case 3685: case 3686: case 3687: case 3688: case 3689: case 3690: case 3691: case 3692: case 3693: case 3725: case 3694: case 3726: case 3727: case 3728: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 3697: case 3698: case 3667: case 3668: case 3707: case 3708: case 3677: case 3678: case 3717: case 3718: case 3687: case 3688: case 3657: case 3658: case 3727: case 3728: return Shape::InnerLeft;
				case 3729: case 3730: case 3699: case 3700: case 3669: case 3670: case 3709: case 3710: case 3679: case 3680: case 3719: case 3720: case 3689: case 3690: case 3659: case 3660: return Shape::InnerRight;
				case 3731: case 3732: case 3701: case 3702: case 3671: case 3672: case 3711: case 3712: case 3681: case 3682: case 3721: case 3722: case 3691: case 3692: case 3661: case 3662: return Shape::OuterLeft;
				case 3733: case 3734: case 3703: case 3704: case 3673: case 3674: case 3713: case 3714: case 3683: case 3684: case 3723: case 3724: case 3693: case 3694: case 3663: case 3664: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 3666: case 3698: case 3730: case 3668: case 3700: case 3732: case 3670: case 3702: case 3734: case 3672: case 3704: case 3674: case 3706: case 3676: case 3708: case 3678: case 3710: case 3680: case 3712: case 3682: case 3714: case 3684: case 3716: case 3686: case 3718: case 3656: case 3688: case 3720: case 3658: case 3690: case 3722: case 3660: case 3692: case 3724: case 3662: case 3694: case 3726: case 3664: case 3696: case 3728: return false;
				default: return true;
			}
		}
	}
	namespace CobblestoneWall
	{
		short CobblestoneWall()
		{
			return 5660;
		}
		enum East East(short ID)
		{
			switch (ID)
			{
				case 5765: case 5767: case 5769: case 5771: case 5773: case 5775: case 5777: case 5779: case 5781: case 5783: case 5785: case 5787: case 5789: case 5791: case 5793: case 5795: case 5797: case 5799: case 5801: case 5803: case 5805: case 5807: case 5809: case 5811: case 5813: case 5815: case 5817: case 5819: case 5821: case 5823: case 5825: case 5827: case 5829: case 5831: case 5833: case 5835: case 5837: case 5839: case 5841: case 5843: case 5845: case 5847: case 5849: case 5851: case 5853: case 5855: case 5857: case 5859: case 5861: case 5863: case 5865: case 5867: case 5869: case 5871: case 5766: case 5768: case 5770: case 5772: case 5774: case 5776: case 5778: case 5780: case 5782: case 5784: case 5786: case 5788: case 5790: case 5792: case 5794: case 5796: case 5798: case 5800: case 5802: case 5804: case 5806: case 5808: case 5810: case 5812: case 5814: case 5816: case 5818: case 5820: case 5822: case 5824: case 5826: case 5828: case 5830: case 5832: case 5834: case 5836: case 5838: case 5840: case 5842: case 5844: case 5846: case 5848: case 5850: case 5852: case 5854: case 5856: case 5858: case 5860: case 5862: case 5864: case 5866: case 5868: case 5870: case 5872: return East::Low;
				case 5657: case 5659: case 5661: case 5663: case 5665: case 5667: case 5669: case 5671: case 5673: case 5675: case 5677: case 5679: case 5681: case 5683: case 5685: case 5687: case 5689: case 5691: case 5693: case 5695: case 5697: case 5699: case 5701: case 5703: case 5705: case 5707: case 5709: case 5711: case 5713: case 5715: case 5717: case 5719: case 5721: case 5723: case 5725: case 5727: case 5729: case 5731: case 5733: case 5735: case 5737: case 5739: case 5741: case 5743: case 5745: case 5747: case 5749: case 5751: case 5753: case 5755: case 5757: case 5759: case 5761: case 5763: case 5658: case 5660: case 5662: case 5664: case 5666: case 5668: case 5670: case 5672: case 5674: case 5676: case 5678: case 5680: case 5682: case 5684: case 5686: case 5688: case 5690: case 5692: case 5694: case 5696: case 5698: case 5700: case 5702: case 5704: case 5706: case 5708: case 5710: case 5712: case 5714: case 5716: case 5718: case 5720: case 5722: case 5724: case 5726: case 5728: case 5730: case 5732: case 5734: case 5736: case 5738: case 5740: case 5742: case 5744: case 5746: case 5748: case 5750: case 5752: case 5754: case 5756: case 5758: case 5760: case 5762: case 5764: return East::None;
				default: return East::Tall;
			}
		}
		enum North North(short ID)
		{
			switch (ID)
			{
				case 5693: case 5695: case 5697: case 5699: case 5701: case 5703: case 5705: case 5707: case 5709: case 5711: case 5713: case 5715: case 5717: case 5719: case 5721: case 5723: case 5725: case 5727: case 5801: case 5803: case 5805: case 5807: case 5809: case 5811: case 5813: case 5815: case 5817: case 5819: case 5821: case 5823: case 5825: case 5827: case 5829: case 5831: case 5833: case 5835: case 5909: case 5911: case 5913: case 5915: case 5917: case 5919: case 5921: case 5923: case 5925: case 5927: case 5929: case 5931: case 5933: case 5935: case 5937: case 5939: case 5941: case 5943: case 5694: case 5696: case 5698: case 5700: case 5702: case 5704: case 5706: case 5708: case 5710: case 5712: case 5714: case 5716: case 5718: case 5720: case 5722: case 5724: case 5726: case 5728: case 5802: case 5804: case 5806: case 5808: case 5810: case 5812: case 5814: case 5816: case 5818: case 5820: case 5822: case 5824: case 5826: case 5828: case 5830: case 5832: case 5834: case 5836: case 5910: case 5912: case 5914: case 5916: case 5918: case 5920: case 5922: case 5924: case 5926: case 5928: case 5930: case 5932: case 5934: case 5936: case 5938: case 5940: case 5942: case 5944: return North::Low;
				case 5657: case 5659: case 5661: case 5663: case 5665: case 5667: case 5669: case 5671: case 5673: case 5675: case 5677: case 5679: case 5681: case 5683: case 5685: case 5687: case 5689: case 5691: case 5765: case 5767: case 5769: case 5771: case 5773: case 5775: case 5777: case 5779: case 5781: case 5783: case 5785: case 5787: case 5789: case 5791: case 5793: case 5795: case 5797: case 5799: case 5873: case 5875: case 5877: case 5879: case 5881: case 5883: case 5885: case 5887: case 5889: case 5891: case 5893: case 5895: case 5897: case 5899: case 5901: case 5903: case 5905: case 5907: case 5658: case 5660: case 5662: case 5664: case 5666: case 5668: case 5670: case 5672: case 5674: case 5676: case 5678: case 5680: case 5682: case 5684: case 5686: case 5688: case 5690: case 5692: case 5766: case 5768: case 5770: case 5772: case 5774: case 5776: case 5778: case 5780: case 5782: case 5784: case 5786: case 5788: case 5790: case 5792: case 5794: case 5796: case 5798: case 5800: case 5874: case 5876: case 5878: case 5880: case 5882: case 5884: case 5886: case 5888: case 5890: case 5892: case 5894: case 5896: case 5898: case 5900: case 5902: case 5904: case 5906: case 5908: return North::None;
				default: return North::Tall;
			}
		}
		enum South South(short ID)
		{
			switch (ID)
			{
				case 5669: case 5671: case 5673: case 5675: case 5677: case 5679: case 5705: case 5707: case 5709: case 5711: case 5713: case 5715: case 5741: case 5743: case 5745: case 5747: case 5749: case 5751: case 5777: case 5779: case 5781: case 5783: case 5785: case 5787: case 5813: case 5815: case 5817: case 5819: case 5821: case 5823: case 5849: case 5851: case 5853: case 5855: case 5857: case 5859: case 5885: case 5887: case 5889: case 5891: case 5893: case 5895: case 5921: case 5923: case 5925: case 5927: case 5929: case 5931: case 5957: case 5959: case 5961: case 5963: case 5965: case 5967: case 5670: case 5672: case 5674: case 5676: case 5678: case 5680: case 5706: case 5708: case 5710: case 5712: case 5714: case 5716: case 5742: case 5744: case 5746: case 5748: case 5750: case 5752: case 5778: case 5780: case 5782: case 5784: case 5786: case 5788: case 5814: case 5816: case 5818: case 5820: case 5822: case 5824: case 5850: case 5852: case 5854: case 5856: case 5858: case 5860: case 5886: case 5888: case 5890: case 5892: case 5894: case 5896: case 5922: case 5924: case 5926: case 5928: case 5930: case 5932: case 5958: case 5960: case 5962: case 5964: case 5966: case 5968: return South::Low;
				case 5657: case 5659: case 5661: case 5663: case 5665: case 5667: case 5693: case 5695: case 5697: case 5699: case 5701: case 5703: case 5729: case 5731: case 5733: case 5735: case 5737: case 5739: case 5765: case 5767: case 5769: case 5771: case 5773: case 5775: case 5801: case 5803: case 5805: case 5807: case 5809: case 5811: case 5837: case 5839: case 5841: case 5843: case 5845: case 5847: case 5873: case 5875: case 5877: case 5879: case 5881: case 5883: case 5909: case 5911: case 5913: case 5915: case 5917: case 5919: case 5945: case 5947: case 5949: case 5951: case 5953: case 5955: case 5658: case 5660: case 5662: case 5664: case 5666: case 5668: case 5694: case 5696: case 5698: case 5700: case 5702: case 5704: case 5730: case 5732: case 5734: case 5736: case 5738: case 5740: case 5766: case 5768: case 5770: case 5772: case 5774: case 5776: case 5802: case 5804: case 5806: case 5808: case 5810: case 5812: case 5838: case 5840: case 5842: case 5844: case 5846: case 5848: case 5874: case 5876: case 5878: case 5880: case 5882: case 5884: case 5910: case 5912: case 5914: case 5916: case 5918: case 5920: case 5946: case 5948: case 5950: case 5952: case 5954: case 5956: return South::None;
				default: return South::Tall;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 5663: case 5665: case 5667: case 5675: case 5677: case 5679: case 5687: case 5689: case 5691: case 5699: case 5701: case 5703: case 5711: case 5713: case 5715: case 5723: case 5725: case 5727: case 5735: case 5737: case 5739: case 5747: case 5749: case 5751: case 5759: case 5761: case 5763: case 5771: case 5773: case 5775: case 5783: case 5785: case 5787: case 5795: case 5797: case 5799: case 5807: case 5809: case 5811: case 5819: case 5821: case 5823: case 5831: case 5833: case 5835: case 5843: case 5845: case 5847: case 5855: case 5857: case 5859: case 5867: case 5869: case 5871: case 5879: case 5881: case 5883: case 5891: case 5893: case 5895: case 5903: case 5905: case 5907: case 5915: case 5917: case 5919: case 5927: case 5929: case 5931: case 5939: case 5941: case 5943: case 5951: case 5953: case 5955: case 5963: case 5965: case 5967: case 5975: case 5977: case 5979: case 5664: case 5666: case 5668: case 5676: case 5678: case 5680: case 5688: case 5690: case 5692: case 5700: case 5702: case 5704: case 5712: case 5714: case 5716: case 5724: case 5726: case 5728: case 5736: case 5738: case 5740: case 5748: case 5750: case 5752: case 5760: case 5762: case 5764: case 5772: case 5774: case 5776: case 5784: case 5786: case 5788: case 5796: case 5798: case 5800: case 5808: case 5810: case 5812: case 5820: case 5822: case 5824: case 5832: case 5834: case 5836: case 5844: case 5846: case 5848: case 5856: case 5858: case 5860: case 5868: case 5870: case 5872: case 5880: case 5882: case 5884: case 5892: case 5894: case 5896: case 5904: case 5906: case 5908: case 5916: case 5918: case 5920: case 5928: case 5930: case 5932: case 5940: case 5942: case 5944: case 5952: case 5954: case 5956: case 5964: case 5966: case 5968: case 5976: case 5978: case 5980: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 5661: case 5667: case 5673: case 5679: case 5685: case 5691: case 5697: case 5703: case 5709: case 5715: case 5721: case 5727: case 5733: case 5739: case 5745: case 5751: case 5757: case 5763: case 5769: case 5775: case 5781: case 5787: case 5793: case 5799: case 5805: case 5811: case 5817: case 5823: case 5829: case 5835: case 5841: case 5847: case 5853: case 5859: case 5865: case 5871: case 5877: case 5883: case 5889: case 5895: case 5901: case 5907: case 5913: case 5919: case 5925: case 5931: case 5937: case 5943: case 5949: case 5955: case 5961: case 5967: case 5973: case 5979: case 5660: case 5662: case 5666: case 5668: case 5672: case 5674: case 5678: case 5680: case 5684: case 5686: case 5690: case 5692: case 5696: case 5698: case 5702: case 5704: case 5708: case 5710: case 5714: case 5716: case 5720: case 5722: case 5726: case 5728: case 5732: case 5734: case 5738: case 5740: case 5744: case 5746: case 5750: case 5752: case 5756: case 5758: case 5762: case 5764: case 5768: case 5770: case 5774: case 5776: case 5780: case 5782: case 5786: case 5788: case 5792: case 5794: case 5798: case 5800: case 5804: case 5806: case 5810: case 5812: case 5816: case 5818: case 5822: case 5824: case 5828: case 5830: case 5834: case 5836: case 5840: case 5842: case 5846: case 5848: case 5852: case 5854: case 5858: case 5860: case 5864: case 5866: case 5870: case 5872: case 5876: case 5878: case 5882: case 5884: case 5888: case 5890: case 5894: case 5896: case 5900: case 5902: case 5906: case 5908: case 5912: case 5914: case 5918: case 5920: case 5924: case 5926: case 5930: case 5932: case 5936: case 5938: case 5942: case 5944: case 5948: case 5950: case 5954: case 5956: case 5960: case 5962: case 5966: case 5968: case 5972: case 5974: case 5978: case 5980: return false;
				default: return true;
			}
		}
		enum West West(short ID)
		{
			switch (ID)
			{
				case 5661: case 5667: case 5673: case 5679: case 5685: case 5691: case 5697: case 5703: case 5709: case 5715: case 5721: case 5727: case 5733: case 5739: case 5745: case 5751: case 5757: case 5763: case 5769: case 5775: case 5781: case 5787: case 5793: case 5799: case 5805: case 5811: case 5817: case 5823: case 5829: case 5835: case 5841: case 5847: case 5853: case 5859: case 5865: case 5871: case 5877: case 5883: case 5889: case 5895: case 5901: case 5907: case 5913: case 5919: case 5925: case 5931: case 5937: case 5943: case 5949: case 5955: case 5961: case 5967: case 5973: case 5979: case 5658: case 5664: case 5670: case 5676: case 5682: case 5688: case 5694: case 5700: case 5706: case 5712: case 5718: case 5724: case 5730: case 5736: case 5742: case 5748: case 5754: case 5760: case 5766: case 5772: case 5778: case 5784: case 5790: case 5796: case 5802: case 5808: case 5814: case 5820: case 5826: case 5832: case 5838: case 5844: case 5850: case 5856: case 5862: case 5868: case 5874: case 5880: case 5886: case 5892: case 5898: case 5904: case 5910: case 5916: case 5922: case 5928: case 5934: case 5940: case 5946: case 5952: case 5958: case 5964: case 5970: case 5976: return West::Low;
				case 5657: case 5663: case 5669: case 5675: case 5681: case 5687: case 5693: case 5699: case 5705: case 5711: case 5717: case 5723: case 5729: case 5735: case 5741: case 5747: case 5753: case 5759: case 5765: case 5771: case 5777: case 5783: case 5789: case 5795: case 5801: case 5807: case 5813: case 5819: case 5825: case 5831: case 5837: case 5843: case 5849: case 5855: case 5861: case 5867: case 5873: case 5879: case 5885: case 5891: case 5897: case 5903: case 5909: case 5915: case 5921: case 5927: case 5933: case 5939: case 5945: case 5951: case 5957: case 5963: case 5969: case 5975: case 5660: case 5666: case 5672: case 5678: case 5684: case 5690: case 5696: case 5702: case 5708: case 5714: case 5720: case 5726: case 5732: case 5738: case 5744: case 5750: case 5756: case 5762: case 5768: case 5774: case 5780: case 5786: case 5792: case 5798: case 5804: case 5810: case 5816: case 5822: case 5828: case 5834: case 5840: case 5846: case 5852: case 5858: case 5864: case 5870: case 5876: case 5882: case 5888: case 5894: case 5900: case 5906: case 5912: case 5918: case 5924: case 5930: case 5936: case 5942: case 5948: case 5954: case 5960: case 5966: case 5972: case 5978: return West::None;
				default: return West::Tall;
			}
		}
	}
	namespace Cobweb
	{
	}
	namespace Cocoa
	{
		short Cocoa()
		{
			return 5158;
		}
		unsigned char Age(short ID)
		{
			switch (ID)
			{
				case 5161: case 5158: case 5159: case 5160: return 0;
				case 5162: case 5163: case 5164: case 5165: return 1;
				default: return 2;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 5164: case 5168: case 5160: return eBlockFace::BLOCK_FACE_XM;
				case 5161: case 5165: case 5169: return eBlockFace::BLOCK_FACE_XP;
				case 5162: case 5166: case 5158: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace CommandBlock
	{
		short CommandBlock()
		{
			return 5650;
		}
		bool Conditional(short ID)
		{
			switch (ID)
			{
				case 5650: case 5651: case 5652: case 5653: case 5654: case 5655: return false;
				default: return true;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 5647: case 5653: return eBlockFace::BLOCK_FACE_XM;
				case 5645: case 5651: return eBlockFace::BLOCK_FACE_XP;
				case 5649: case 5655: return eBlockFace::BLOCK_FACE_YM;
				case 5648: case 5654: return eBlockFace::BLOCK_FACE_YP;
				case 5644: case 5650: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace Comparator
	{
		short Comparator()
		{
			return 6679;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6686: case 6687: case 6688: case 6689: return eBlockFace::BLOCK_FACE_XM;
				case 6691: case 6692: case 6690: case 6693: return eBlockFace::BLOCK_FACE_XP;
				case 6678: case 6679: case 6680: case 6681: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Mode Mode(short ID)
		{
			switch (ID)
			{
				case 6691: case 6678: case 6679: case 6682: case 6683: case 6686: case 6687: case 6690: return Mode::Compare;
				default: return Mode::Subtract;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 6691: case 6679: case 6681: case 6683: case 6685: case 6687: case 6689: case 6693: return false;
				default: return true;
			}
		}
	}
	namespace Composter
	{
		short Composter()
		{
			return 15751;
		}
		unsigned char Level(short ID)
		{
			switch (ID)
			{
				case 15751: return 0;
				case 15752: return 1;
				case 15753: return 2;
				case 15754: return 3;
				case 15755: return 4;
				case 15756: return 5;
				case 15757: return 6;
				case 15758: return 7;
				default: return 8;
			}
		}
	}
	namespace Conduit
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9650: return false;
				default: return true;
			}
		}
	}
	namespace Cornflower
	{
	}
	namespace CrackedNetherBricks
	{
	}
	namespace CrackedPolishedBlackstoneBricks
	{
	}
	namespace CrackedStoneBricks
	{
	}
	namespace CraftingTable
	{
	}
	namespace CreeperHead
	{
		short CreeperHead()
		{
			return 6570;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 6570: return 0;
				case 6571: return 1;
				case 6580: return 10;
				case 6581: return 11;
				case 6582: return 12;
				case 6583: return 13;
				case 6584: return 14;
				case 6585: return 15;
				case 6572: return 2;
				case 6573: return 3;
				case 6574: return 4;
				case 6575: return 5;
				case 6576: return 6;
				case 6577: return 7;
				case 6578: return 8;
				default: return 9;
			}
		}
	}
	namespace CreeperWallHead
	{
		short CreeperWallHead()
		{
			return 6586;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6588: return eBlockFace::BLOCK_FACE_XM;
				case 6589: return eBlockFace::BLOCK_FACE_XP;
				case 6586: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace CrimsonButton
	{
		short CrimsonButton()
		{
			return 15488;
		}
		enum Face Face(short ID)
		{
			switch (ID)
			{
				case 15497: case 15498: case 15499: case 15500: case 15501: case 15502: case 15495: case 15496: return Face::Ceiling;
				case 15482: case 15483: case 15484: case 15485: case 15486: case 15479: case 15480: case 15481: return Face::Floor;
				default: return Face::Wall;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 15483: case 15491: case 15499: case 15484: case 15492: case 15500: return eBlockFace::BLOCK_FACE_XM;
				case 15485: case 15493: case 15501: case 15486: case 15494: case 15502: return eBlockFace::BLOCK_FACE_XP;
				case 15479: case 15487: case 15495: case 15480: case 15488: case 15496: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 15482: case 15490: case 15498: case 15484: case 15492: case 15500: case 15486: case 15494: case 15502: case 15480: case 15488: case 15496: return false;
				default: return true;
			}
		}
	}
	namespace CrimsonDoor
	{
		short CrimsonDoor()
		{
			return 15538;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 15570: case 15571: case 15572: case 15573: case 15574: case 15559: case 15560: case 15561: case 15562: case 15563: case 15564: case 15565: case 15566: case 15567: case 15568: case 15569: return eBlockFace::BLOCK_FACE_XM;
				case 15575: case 15576: case 15577: case 15578: case 15579: case 15580: case 15581: case 15582: case 15583: case 15584: case 15585: case 15586: case 15587: case 15588: case 15589: case 15590: return eBlockFace::BLOCK_FACE_XP;
				case 15539: case 15540: case 15541: case 15542: case 15527: case 15528: case 15529: case 15530: case 15531: case 15532: case 15533: case 15534: case 15535: case 15536: case 15537: case 15538: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 15570: case 15539: case 15571: case 15540: case 15572: case 15541: case 15573: case 15542: case 15574: case 15551: case 15583: case 15552: case 15584: case 15553: case 15585: case 15554: case 15586: case 15555: case 15587: case 15556: case 15588: case 15557: case 15589: case 15558: case 15535: case 15567: case 15536: case 15568: case 15537: case 15569: case 15538: case 15590: return Half::Lower;
				default: return Half::Upper;
			}
		}
		enum Hinge Hinge(short ID)
		{
			switch (ID)
			{
				case 15570: case 15543: case 15575: case 15544: case 15576: case 15545: case 15577: case 15546: case 15578: case 15551: case 15583: case 15552: case 15584: case 15553: case 15585: case 15554: case 15586: case 15527: case 15559: case 15528: case 15560: case 15529: case 15561: case 15530: case 15562: case 15535: case 15567: case 15536: case 15568: case 15537: case 15569: case 15538: return Hinge::Left;
				default: return Hinge::Right;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 15570: case 15541: case 15573: case 15542: case 15574: case 15545: case 15577: case 15546: case 15578: case 15549: case 15581: case 15550: case 15582: case 15553: case 15585: case 15554: case 15586: case 15557: case 15589: case 15558: case 15529: case 15561: case 15530: case 15562: case 15533: case 15565: case 15534: case 15566: case 15537: case 15569: case 15538: case 15590: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 15570: case 15540: case 15572: case 15542: case 15574: case 15544: case 15576: case 15546: case 15578: case 15548: case 15580: case 15550: case 15582: case 15552: case 15584: case 15554: case 15586: case 15556: case 15588: case 15558: case 15528: case 15560: case 15530: case 15562: case 15532: case 15564: case 15534: case 15566: case 15536: case 15568: case 15538: case 15590: return false;
				default: return true;
			}
		}
	}
	namespace CrimsonFence
	{
		short CrimsonFence()
		{
			return 15094;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 15079: case 15087: case 15080: case 15088: case 15081: case 15089: case 15082: case 15090: case 15083: case 15091: case 15084: case 15092: case 15085: case 15093: case 15086: case 15094: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 15071: case 15087: case 15072: case 15088: case 15073: case 15089: case 15074: case 15090: case 15075: case 15091: case 15076: case 15092: case 15077: case 15093: case 15078: case 15094: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 15067: case 15075: case 15083: case 15091: case 15068: case 15076: case 15084: case 15092: case 15069: case 15077: case 15085: case 15093: case 15070: case 15078: case 15086: case 15094: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 15065: case 15073: case 15081: case 15089: case 15066: case 15074: case 15082: case 15090: case 15069: case 15077: case 15085: case 15093: case 15070: case 15078: case 15086: case 15094: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 15064: case 15072: case 15080: case 15088: case 15066: case 15074: case 15082: case 15090: case 15068: case 15076: case 15084: case 15092: case 15070: case 15078: case 15086: case 15094: return false;
				default: return true;
			}
		}
	}
	namespace CrimsonFenceGate
	{
		short CrimsonFenceGate()
		{
			return 15262;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 15273: case 15274: case 15275: case 15276: case 15277: case 15278: case 15271: case 15272: return eBlockFace::BLOCK_FACE_XM;
				case 15280: case 15281: case 15282: case 15283: case 15284: case 15285: case 15279: case 15286: return eBlockFace::BLOCK_FACE_XP;
				case 15257: case 15258: case 15259: case 15260: case 15261: case 15262: case 15255: case 15256: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool InWall(short ID)
		{
			switch (ID)
			{
				case 15259: case 15267: case 15275: case 15283: case 15260: case 15268: case 15276: case 15284: case 15261: case 15269: case 15277: case 15285: case 15262: case 15270: case 15278: case 15286: return false;
				default: return true;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 15257: case 15265: case 15273: case 15281: case 15258: case 15266: case 15274: case 15282: case 15261: case 15269: case 15277: case 15285: case 15262: case 15270: case 15278: case 15286: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 15280: case 15258: case 15266: case 15274: case 15282: case 15260: case 15268: case 15276: case 15284: case 15262: case 15270: case 15278: case 15256: case 15264: case 15272: case 15286: return false;
				default: return true;
			}
		}
	}
	namespace CrimsonFungus
	{
	}
	namespace CrimsonHyphae
	{
		short CrimsonHyphae()
		{
			return 14982;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 14981: return Axis::X;
				case 14982: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace CrimsonNylium
	{
	}
	namespace CrimsonPlanks
	{
	}
	namespace CrimsonPressurePlate
	{
		short CrimsonPressurePlate()
		{
			return 15060;
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 15060: return false;
				default: return true;
			}
		}
	}
	namespace CrimsonRoots
	{
	}
	namespace CrimsonSign
	{
		short CrimsonSign()
		{
			return 15656;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 15655: case 15656: return 0;
				case 15657: case 15658: return 1;
				case 15676: case 15675: return 10;
				case 15677: case 15678: return 11;
				case 15679: case 15680: return 12;
				case 15681: case 15682: return 13;
				case 15683: case 15684: return 14;
				case 15685: case 15686: return 15;
				case 15660: case 15659: return 2;
				case 15661: case 15662: return 3;
				case 15663: case 15664: return 4;
				case 15665: case 15666: return 5;
				case 15668: case 15667: return 6;
				case 15669: case 15670: return 7;
				case 15671: case 15672: return 8;
				default: return 9;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 15660: case 15668: case 15676: case 15684: case 15662: case 15670: case 15678: case 15656: case 15664: case 15672: case 15680: case 15658: case 15666: case 15674: case 15682: case 15686: return false;
				default: return true;
			}
		}
	}
	namespace CrimsonSlab
	{
		short CrimsonSlab()
		{
			return 15050;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 15049: case 15050: return Type::Bottom;
				case 15052: case 15051: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 15052: case 15050: case 15048: return false;
				default: return true;
			}
		}
	}
	namespace CrimsonStairs
	{
		short CrimsonStairs()
		{
			return 15330;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 15359: case 15360: case 15361: case 15362: case 15363: case 15364: case 15365: case 15366: case 15367: case 15368: case 15369: case 15370: case 15371: case 15372: case 15373: case 15374: case 15375: case 15376: case 15377: case 15378: return eBlockFace::BLOCK_FACE_XM;
				case 15379: case 15380: case 15381: case 15382: case 15383: case 15384: case 15385: case 15386: case 15387: case 15388: case 15389: case 15390: case 15391: case 15392: case 15393: case 15394: case 15395: case 15396: case 15397: case 15398: return eBlockFace::BLOCK_FACE_XP;
				case 15319: case 15320: case 15321: case 15322: case 15323: case 15324: case 15325: case 15326: case 15327: case 15328: case 15329: case 15330: case 15331: case 15332: case 15333: case 15334: case 15335: case 15336: case 15337: case 15338: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 15329: case 15330: case 15331: case 15332: case 15333: case 15334: case 15335: case 15336: case 15337: case 15338: case 15349: case 15350: case 15351: case 15352: case 15353: case 15354: case 15355: case 15356: case 15357: case 15358: case 15369: case 15370: case 15371: case 15372: case 15373: case 15374: case 15375: case 15376: case 15377: case 15378: case 15389: case 15390: case 15391: case 15392: case 15393: case 15394: case 15395: case 15396: case 15397: case 15398: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 15321: case 15322: case 15331: case 15332: case 15341: case 15342: case 15351: case 15352: case 15361: case 15362: case 15371: case 15372: case 15381: case 15382: case 15391: case 15392: return Shape::InnerLeft;
				case 15323: case 15324: case 15333: case 15334: case 15343: case 15344: case 15353: case 15354: case 15363: case 15364: case 15373: case 15374: case 15383: case 15384: case 15393: case 15394: return Shape::InnerRight;
				case 15325: case 15326: case 15335: case 15336: case 15345: case 15346: case 15355: case 15356: case 15365: case 15366: case 15375: case 15376: case 15385: case 15386: case 15395: case 15396: return Shape::OuterLeft;
				case 15327: case 15328: case 15337: case 15338: case 15347: case 15348: case 15357: case 15358: case 15367: case 15368: case 15377: case 15378: case 15387: case 15388: case 15397: case 15398: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 15320: case 15322: case 15324: case 15326: case 15328: case 15330: case 15332: case 15334: case 15336: case 15338: case 15340: case 15342: case 15344: case 15346: case 15348: case 15350: case 15352: case 15354: case 15356: case 15358: case 15360: case 15362: case 15364: case 15366: case 15368: case 15370: case 15372: case 15374: case 15376: case 15378: case 15380: case 15382: case 15384: case 15386: case 15388: case 15390: case 15392: case 15394: case 15396: case 15398: return false;
				default: return true;
			}
		}
	}
	namespace CrimsonStem
	{
		short CrimsonStem()
		{
			return 14976;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 14975: return Axis::X;
				case 14976: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace CrimsonTrapdoor
	{
		short CrimsonTrapdoor()
		{
			return 15142;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 15161: case 15162: case 15163: case 15164: case 15165: case 15166: case 15167: case 15168: case 15169: case 15170: case 15171: case 15172: case 15173: case 15174: case 15159: case 15160: return eBlockFace::BLOCK_FACE_XM;
				case 15175: case 15176: case 15177: case 15178: case 15179: case 15180: case 15181: case 15182: case 15183: case 15184: case 15185: case 15186: case 15187: case 15188: case 15189: case 15190: return eBlockFace::BLOCK_FACE_XP;
				case 15129: case 15130: case 15131: case 15132: case 15133: case 15134: case 15135: case 15136: case 15137: case 15138: case 15139: case 15140: case 15141: case 15142: case 15127: case 15128: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 15135: case 15167: case 15136: case 15168: case 15137: case 15169: case 15138: case 15170: case 15139: case 15171: case 15140: case 15172: case 15141: case 15173: case 15142: case 15174: case 15151: case 15183: case 15152: case 15184: case 15153: case 15185: case 15154: case 15186: case 15155: case 15187: case 15156: case 15188: case 15157: case 15189: case 15158: case 15190: return Half::Bottom;
				default: return Half::Top;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 15131: case 15163: case 15132: case 15164: case 15133: case 15165: case 15134: case 15166: case 15139: case 15171: case 15140: case 15172: case 15141: case 15173: case 15142: case 15174: case 15147: case 15179: case 15148: case 15180: case 15149: case 15181: case 15150: case 15182: case 15155: case 15187: case 15156: case 15188: case 15157: case 15189: case 15158: case 15190: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 15129: case 15161: case 15130: case 15162: case 15133: case 15165: case 15134: case 15166: case 15137: case 15169: case 15138: case 15170: case 15141: case 15173: case 15142: case 15174: case 15145: case 15177: case 15146: case 15178: case 15149: case 15181: case 15150: case 15182: case 15153: case 15185: case 15154: case 15186: case 15157: case 15189: case 15158: case 15190: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 15130: case 15162: case 15132: case 15164: case 15134: case 15166: case 15136: case 15168: case 15138: case 15170: case 15140: case 15172: case 15142: case 15174: case 15144: case 15176: case 15146: case 15178: case 15148: case 15180: case 15150: case 15182: case 15152: case 15184: case 15154: case 15186: case 15156: case 15188: case 15158: case 15128: case 15160: case 15190: return false;
				default: return true;
			}
		}
	}
	namespace CrimsonWallSign
	{
		short CrimsonWallSign()
		{
			return 15720;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 15724: case 15723: return eBlockFace::BLOCK_FACE_XM;
				case 15725: case 15726: return eBlockFace::BLOCK_FACE_XP;
				case 15719: case 15720: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 15724: case 15722: case 15720: case 15726: return false;
				default: return true;
			}
		}
	}
	namespace CryingObsidian
	{
	}
	namespace CutRedSandstone
	{
	}
	namespace CutRedSandstoneSlab
	{
		short CutRedSandstoneSlab()
		{
			return 8405;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8404: case 8405: return Type::Bottom;
				case 8406: case 8407: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8403: case 8407: case 8405: return false;
				default: return true;
			}
		}
	}
	namespace CutSandstone
	{
	}
	namespace CutSandstoneSlab
	{
		short CutSandstoneSlab()
		{
			return 8357;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8357: case 8356: return Type::Bottom;
				case 8358: case 8359: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8357: case 8355: case 8359: return false;
				default: return true;
			}
		}
	}
	namespace CyanBanner
	{
		short CyanBanner()
		{
			return 8041;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 8041: return 0;
				case 8042: return 1;
				case 8051: return 10;
				case 8052: return 11;
				case 8053: return 12;
				case 8054: return 13;
				case 8055: return 14;
				case 8056: return 15;
				case 8043: return 2;
				case 8044: return 3;
				case 8045: return 4;
				case 8046: return 5;
				case 8047: return 6;
				case 8048: return 7;
				case 8049: return 8;
				default: return 9;
			}
		}
	}
	namespace CyanBed
	{
		short CyanBed()
		{
			return 1196;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1201: case 1202: case 1203: case 1204: return eBlockFace::BLOCK_FACE_XM;
				case 1205: case 1206: case 1207: case 1208: return eBlockFace::BLOCK_FACE_XP;
				case 1194: case 1195: case 1196: case 1193: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Occupied(short ID)
		{
			switch (ID)
			{
				case 1195: case 1199: case 1203: case 1207: case 1196: case 1200: case 1204: case 1208: return false;
				default: return true;
			}
		}
		enum Part Part(short ID)
		{
			switch (ID)
			{
				case 1194: case 1198: case 1202: case 1206: case 1196: case 1200: case 1204: case 1208: return Part::Foot;
				default: return Part::Head;
			}
		}
	}
	namespace CyanCarpet
	{
	}
	namespace CyanConcrete
	{
	}
	namespace CyanConcretePowder
	{
	}
	namespace CyanGlazedTerracotta
	{
		short CyanGlazedTerracotta()
		{
			return 9410;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9412: return eBlockFace::BLOCK_FACE_XM;
				case 9413: return eBlockFace::BLOCK_FACE_XP;
				case 9410: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace CyanShulkerBox
	{
		short CyanShulkerBox()
		{
			return 9336;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9335: return eBlockFace::BLOCK_FACE_XM;
				case 9333: return eBlockFace::BLOCK_FACE_XP;
				case 9337: return eBlockFace::BLOCK_FACE_YM;
				case 9336: return eBlockFace::BLOCK_FACE_YP;
				case 9332: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace CyanStainedGlass
	{
	}
	namespace CyanStainedGlassPane
	{
		short CyanStainedGlassPane()
		{
			return 7182;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 7179: case 7168: case 7172: case 7176: case 7180: case 7169: case 7173: case 7177: case 7181: case 7170: case 7174: case 7178: case 7167: case 7171: case 7175: case 7182: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 7179: case 7160: case 7164: case 7176: case 7180: case 7161: case 7165: case 7177: case 7181: case 7162: case 7166: case 7178: case 7159: case 7163: case 7175: case 7182: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 7179: case 7156: case 7164: case 7172: case 7180: case 7157: case 7165: case 7173: case 7181: case 7158: case 7166: case 7174: case 7155: case 7163: case 7171: case 7182: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7153: case 7157: case 7161: case 7165: case 7169: case 7173: case 7177: case 7181: case 7154: case 7158: case 7162: case 7166: case 7170: case 7174: case 7178: case 7182: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 7152: case 7156: case 7160: case 7164: case 7168: case 7172: case 7176: case 7180: case 7154: case 7158: case 7162: case 7166: case 7170: case 7174: case 7178: case 7182: return false;
				default: return true;
			}
		}
	}
	namespace CyanTerracotta
	{
	}
	namespace CyanWallBanner
	{
		short CyanWallBanner()
		{
			return 8189;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8191: return eBlockFace::BLOCK_FACE_XM;
				case 8192: return eBlockFace::BLOCK_FACE_XP;
				case 8189: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace CyanWool
	{
	}
	namespace DamagedAnvil
	{
		short DamagedAnvil()
		{
			return 6618;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6620: return eBlockFace::BLOCK_FACE_XM;
				case 6621: return eBlockFace::BLOCK_FACE_XP;
				case 6618: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace Dandelion
	{
	}
	namespace DarkOakButton
	{
		short DarkOakButton()
		{
			return 6475;
		}
		enum Face Face(short ID)
		{
			switch (ID)
			{
				case 6482: case 6486: case 6483: case 6487: case 6484: case 6488: case 6485: case 6489: return Face::Ceiling;
				case 6466: case 6470: case 6467: case 6471: case 6468: case 6472: case 6469: case 6473: return Face::Floor;
				default: return Face::Wall;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6470: case 6478: case 6486: case 6471: case 6479: case 6487: return eBlockFace::BLOCK_FACE_XM;
				case 6472: case 6480: case 6488: case 6473: case 6481: case 6489: return eBlockFace::BLOCK_FACE_XP;
				case 6466: case 6474: case 6482: case 6467: case 6475: case 6483: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 6467: case 6471: case 6475: case 6479: case 6483: case 6487: case 6469: case 6473: case 6477: case 6481: case 6485: case 6489: return false;
				default: return true;
			}
		}
	}
	namespace DarkOakDoor
	{
		short DarkOakDoor()
		{
			return 9005;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9026: case 9027: case 9028: case 9029: case 9030: case 9031: case 9032: case 9033: case 9034: case 9035: case 9036: case 9037: case 9038: case 9039: case 9040: case 9041: return eBlockFace::BLOCK_FACE_XM;
				case 9050: case 9051: case 9052: case 9053: case 9054: case 9055: case 9056: case 9042: case 9043: case 9044: case 9045: case 9046: case 9047: case 9048: case 9049: case 9057: return eBlockFace::BLOCK_FACE_XP;
				case 8994: case 8995: case 8996: case 8997: case 8998: case 8999: case 9000: case 9001: case 9002: case 9003: case 9004: case 9005: case 9006: case 9007: case 9008: case 9009: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 9018: case 9050: case 9019: case 9051: case 9020: case 9052: case 9021: case 9053: case 9022: case 9054: case 9023: case 9055: case 9024: case 9056: case 9025: case 9002: case 9034: case 9003: case 9035: case 9004: case 9036: case 9005: case 9037: case 9006: case 9038: case 9007: case 9039: case 9008: case 9040: case 9009: case 9041: case 9057: return Half::Lower;
				default: return Half::Upper;
			}
		}
		enum Hinge Hinge(short ID)
		{
			switch (ID)
			{
				case 9018: case 9050: case 9019: case 9051: case 9020: case 9052: case 9021: case 9053: case 8994: case 9026: case 8995: case 9027: case 8996: case 9028: case 8997: case 9029: case 9002: case 9034: case 9003: case 9035: case 9004: case 9036: case 9005: case 9037: case 9010: case 9042: case 9011: case 9043: case 9012: case 9044: case 9013: case 9045: return Hinge::Left;
				default: return Hinge::Right;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 9020: case 9052: case 9021: case 9053: case 9024: case 9056: case 9025: case 8996: case 9028: case 8997: case 9029: case 9000: case 9032: case 9001: case 9033: case 9004: case 9036: case 9005: case 9037: case 9008: case 9040: case 9009: case 9041: case 9012: case 9044: case 9013: case 9045: case 9016: case 9048: case 9017: case 9049: case 9057: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 9019: case 9051: case 9021: case 9053: case 9023: case 9055: case 9025: case 8995: case 9027: case 8997: case 9029: case 8999: case 9031: case 9001: case 9033: case 9003: case 9035: case 9005: case 9037: case 9007: case 9039: case 9009: case 9041: case 9011: case 9043: case 9013: case 9045: case 9015: case 9047: case 9017: case 9049: case 9057: return false;
				default: return true;
			}
		}
	}
	namespace DarkOakFence
	{
		short DarkOakFence()
		{
			return 8737;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 8724: case 8732: case 8725: case 8733: case 8726: case 8734: case 8727: case 8735: case 8728: case 8736: case 8729: case 8722: case 8730: case 8723: case 8731: case 8737: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 8716: case 8732: case 8717: case 8733: case 8718: case 8734: case 8719: case 8735: case 8720: case 8736: case 8721: case 8714: case 8730: case 8715: case 8731: case 8737: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 8710: case 8718: case 8726: case 8734: case 8711: case 8719: case 8727: case 8735: case 8712: case 8720: case 8728: case 8736: case 8713: case 8721: case 8729: case 8737: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8708: case 8716: case 8724: case 8732: case 8709: case 8717: case 8725: case 8733: case 8712: case 8720: case 8728: case 8736: case 8713: case 8721: case 8729: case 8737: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 8709: case 8717: case 8725: case 8733: case 8711: case 8719: case 8727: case 8735: case 8713: case 8721: case 8729: case 8707: case 8715: case 8723: case 8731: case 8737: return false;
				default: return true;
			}
		}
	}
	namespace DarkOakFenceGate
	{
		short DarkOakFenceGate()
		{
			return 8553;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8569: case 8562: case 8563: case 8564: case 8565: case 8566: case 8567: case 8568: return eBlockFace::BLOCK_FACE_XM;
				case 8570: case 8571: case 8572: case 8573: case 8574: case 8575: case 8576: case 8577: return eBlockFace::BLOCK_FACE_XP;
				case 8553: case 8546: case 8547: case 8548: case 8549: case 8550: case 8551: case 8552: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool InWall(short ID)
		{
			switch (ID)
			{
				case 8553: case 8561: case 8569: case 8550: case 8558: case 8566: case 8574: case 8551: case 8559: case 8567: case 8575: case 8552: case 8560: case 8568: case 8576: case 8577: return false;
				default: return true;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 8553: case 8561: case 8569: case 8548: case 8556: case 8564: case 8572: case 8549: case 8557: case 8565: case 8573: case 8552: case 8560: case 8568: case 8576: case 8577: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 8553: case 8561: case 8569: case 8547: case 8555: case 8563: case 8571: case 8549: case 8557: case 8565: case 8573: case 8551: case 8559: case 8567: case 8575: case 8577: return false;
				default: return true;
			}
		}
	}
	namespace DarkOakLeaves
	{
		short DarkOakLeaves()
		{
			return 228;
		}
		unsigned char Distance(short ID)
		{
			switch (ID)
			{
				case 215: case 216: return 1;
				case 217: case 218: return 2;
				case 219: case 220: return 3;
				case 221: case 222: return 4;
				case 223: case 224: return 5;
				case 225: case 226: return 6;
				default: return 7;
			}
		}
		bool Persistent(short ID)
		{
			switch (ID)
			{
				case 228: case 222: case 216: case 224: case 218: case 226: case 220: return false;
				default: return true;
			}
		}
	}
	namespace DarkOakLog
	{
		short DarkOakLog()
		{
			return 89;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 88: return Axis::X;
				case 89: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace DarkOakPlanks
	{
	}
	namespace DarkOakPressurePlate
	{
		short DarkOakPressurePlate()
		{
			return 3884;
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 3884: return false;
				default: return true;
			}
		}
	}
	namespace DarkOakSapling
	{
		short DarkOakSapling()
		{
			return 31;
		}
		unsigned char Stage(short ID)
		{
			switch (ID)
			{
				case 31: return 0;
				default: return 1;
			}
		}
	}
	namespace DarkOakSign
	{
		short DarkOakSign()
		{
			return 3542;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 3542: case 3541: return 0;
				case 3544: case 3543: return 1;
				case 3561: case 3562: return 10;
				case 3563: case 3564: return 11;
				case 3565: case 3566: return 12;
				case 3567: case 3568: return 13;
				case 3569: case 3570: return 14;
				case 3571: case 3572: return 15;
				case 3545: case 3546: return 2;
				case 3547: case 3548: return 3;
				case 3549: case 3550: return 4;
				case 3551: case 3552: return 5;
				case 3553: case 3554: return 6;
				case 3555: case 3556: return 7;
				case 3557: case 3558: return 8;
				default: return 9;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 3542: case 3544: case 3546: case 3548: case 3550: case 3552: case 3554: case 3556: case 3558: case 3560: case 3562: case 3564: case 3566: case 3568: case 3570: case 3572: return false;
				default: return true;
			}
		}
	}
	namespace DarkOakSlab
	{
		short DarkOakSlab()
		{
			return 8333;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8332: case 8333: return Type::Bottom;
				case 8334: case 8335: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8333: case 8331: case 8335: return false;
				default: return true;
			}
		}
	}
	namespace DarkOakStairs
	{
		short DarkOakStairs()
		{
			return 7466;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 7495: case 7496: case 7497: case 7498: case 7499: case 7500: case 7501: case 7502: case 7503: case 7504: case 7505: case 7506: case 7507: case 7508: case 7509: case 7510: case 7511: case 7512: case 7513: case 7514: return eBlockFace::BLOCK_FACE_XM;
				case 7515: case 7516: case 7517: case 7518: case 7519: case 7520: case 7521: case 7522: case 7523: case 7524: case 7525: case 7526: case 7527: case 7528: case 7529: case 7530: case 7531: case 7532: case 7533: case 7534: return eBlockFace::BLOCK_FACE_XP;
				case 7455: case 7456: case 7457: case 7458: case 7459: case 7460: case 7461: case 7462: case 7463: case 7464: case 7465: case 7466: case 7467: case 7468: case 7469: case 7470: case 7471: case 7472: case 7473: case 7474: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 7489: case 7490: case 7491: case 7492: case 7493: case 7494: case 7505: case 7506: case 7507: case 7508: case 7509: case 7510: case 7511: case 7512: case 7513: case 7514: case 7525: case 7526: case 7527: case 7528: case 7465: case 7529: case 7466: case 7530: case 7467: case 7531: case 7468: case 7532: case 7469: case 7533: case 7470: case 7534: case 7471: case 7472: case 7473: case 7474: case 7485: case 7486: case 7487: case 7488: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 7497: case 7498: case 7507: case 7508: case 7517: case 7518: case 7457: case 7458: case 7527: case 7528: case 7467: case 7468: case 7477: case 7478: case 7487: case 7488: return Shape::InnerLeft;
				case 7489: case 7490: case 7499: case 7500: case 7509: case 7510: case 7519: case 7520: case 7459: case 7460: case 7529: case 7530: case 7469: case 7470: case 7479: case 7480: return Shape::InnerRight;
				case 7491: case 7492: case 7501: case 7502: case 7511: case 7512: case 7521: case 7522: case 7461: case 7462: case 7531: case 7532: case 7471: case 7472: case 7481: case 7482: return Shape::OuterLeft;
				case 7493: case 7494: case 7503: case 7504: case 7513: case 7514: case 7523: case 7524: case 7463: case 7464: case 7533: case 7534: case 7473: case 7474: case 7483: case 7484: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7490: case 7492: case 7494: case 7496: case 7498: case 7500: case 7502: case 7504: case 7506: case 7508: case 7510: case 7512: case 7514: case 7516: case 7518: case 7456: case 7520: case 7458: case 7522: case 7460: case 7524: case 7462: case 7526: case 7464: case 7528: case 7466: case 7530: case 7468: case 7532: case 7470: case 7534: case 7472: case 7474: case 7476: case 7478: case 7480: case 7482: case 7484: case 7486: case 7488: return false;
				default: return true;
			}
		}
	}
	namespace DarkOakTrapdoor
	{
		short DarkOakTrapdoor()
		{
			return 4446;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 4463: case 4464: case 4465: case 4466: case 4467: case 4468: case 4469: case 4470: case 4471: case 4472: case 4473: case 4474: case 4475: case 4476: case 4477: case 4478: return eBlockFace::BLOCK_FACE_XM;
				case 4479: case 4480: case 4481: case 4482: case 4483: case 4484: case 4485: case 4486: case 4487: case 4488: case 4489: case 4490: case 4491: case 4492: case 4493: case 4494: return eBlockFace::BLOCK_FACE_XP;
				case 4432: case 4433: case 4434: case 4435: case 4436: case 4437: case 4438: case 4439: case 4440: case 4441: case 4442: case 4443: case 4444: case 4445: case 4446: case 4431: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 4439: case 4455: case 4471: case 4487: case 4440: case 4456: case 4472: case 4488: case 4441: case 4457: case 4473: case 4489: case 4442: case 4458: case 4474: case 4490: case 4443: case 4459: case 4475: case 4491: case 4444: case 4460: case 4476: case 4492: case 4445: case 4461: case 4477: case 4493: case 4446: case 4462: case 4478: case 4494: return Half::Bottom;
				default: return Half::Top;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 4435: case 4451: case 4467: case 4483: case 4436: case 4452: case 4468: case 4484: case 4437: case 4453: case 4469: case 4485: case 4438: case 4454: case 4470: case 4486: case 4443: case 4459: case 4475: case 4491: case 4444: case 4460: case 4476: case 4492: case 4445: case 4461: case 4477: case 4493: case 4446: case 4462: case 4478: case 4494: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 4433: case 4449: case 4465: case 4481: case 4434: case 4450: case 4466: case 4482: case 4437: case 4453: case 4469: case 4485: case 4438: case 4454: case 4470: case 4486: case 4441: case 4457: case 4473: case 4489: case 4442: case 4458: case 4474: case 4490: case 4445: case 4461: case 4477: case 4493: case 4446: case 4462: case 4478: case 4494: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 4432: case 4448: case 4464: case 4480: case 4434: case 4450: case 4466: case 4482: case 4436: case 4452: case 4468: case 4484: case 4438: case 4454: case 4470: case 4486: case 4440: case 4456: case 4472: case 4488: case 4442: case 4458: case 4474: case 4490: case 4444: case 4460: case 4476: case 4492: case 4446: case 4462: case 4478: case 4494: return false;
				default: return true;
			}
		}
	}
	namespace DarkOakWallSign
	{
		short DarkOakWallSign()
		{
			return 3776;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 3779: case 3780: return eBlockFace::BLOCK_FACE_XM;
				case 3781: case 3782: return eBlockFace::BLOCK_FACE_XP;
				case 3775: case 3776: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 3778: case 3780: case 3776: case 3782: return false;
				default: return true;
			}
		}
	}
	namespace DarkOakWood
	{
		short DarkOakWood()
		{
			return 125;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 124: return Axis::X;
				case 125: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace DarkPrismarine
	{
	}
	namespace DarkPrismarineSlab
	{
		short DarkPrismarineSlab()
		{
			return 7859;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 7858: case 7859: return Type::Bottom;
				case 7860: case 7861: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7857: case 7859: case 7861: return false;
				default: return true;
			}
		}
	}
	namespace DarkPrismarineStairs
	{
		short DarkPrismarineStairs()
		{
			return 7775;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 7806: case 7807: case 7808: case 7809: case 7810: case 7811: case 7812: case 7813: case 7814: case 7815: case 7816: case 7817: case 7818: case 7819: case 7820: case 7821: case 7822: case 7823: case 7804: case 7805: return eBlockFace::BLOCK_FACE_XM;
				case 7824: case 7825: case 7826: case 7827: case 7828: case 7829: case 7830: case 7831: case 7832: case 7833: case 7834: case 7835: case 7836: case 7837: case 7838: case 7839: case 7840: case 7841: case 7842: case 7843: return eBlockFace::BLOCK_FACE_XP;
				case 7764: case 7765: case 7766: case 7767: case 7768: case 7769: case 7770: case 7771: case 7772: case 7773: case 7774: case 7775: case 7776: case 7777: case 7778: case 7779: case 7780: case 7781: case 7782: case 7783: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 7814: case 7815: case 7816: case 7817: case 7818: case 7819: case 7820: case 7821: case 7822: case 7823: case 7834: case 7835: case 7836: case 7837: case 7774: case 7838: case 7775: case 7839: case 7776: case 7840: case 7777: case 7841: case 7778: case 7842: case 7779: case 7843: case 7780: case 7781: case 7782: case 7783: case 7794: case 7795: case 7796: case 7797: case 7798: case 7799: case 7800: case 7801: case 7802: case 7803: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 7806: case 7807: case 7816: case 7817: case 7826: case 7827: case 7766: case 7767: case 7836: case 7837: case 7776: case 7777: case 7786: case 7787: case 7796: case 7797: return Shape::InnerLeft;
				case 7808: case 7809: case 7818: case 7819: case 7828: case 7829: case 7768: case 7769: case 7838: case 7839: case 7778: case 7779: case 7788: case 7789: case 7798: case 7799: return Shape::InnerRight;
				case 7810: case 7811: case 7820: case 7821: case 7830: case 7831: case 7770: case 7771: case 7840: case 7841: case 7780: case 7781: case 7790: case 7791: case 7800: case 7801: return Shape::OuterLeft;
				case 7812: case 7813: case 7822: case 7823: case 7832: case 7833: case 7772: case 7773: case 7842: case 7843: case 7782: case 7783: case 7792: case 7793: case 7802: case 7803: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7807: case 7809: case 7811: case 7813: case 7815: case 7817: case 7819: case 7821: case 7823: case 7825: case 7827: case 7765: case 7829: case 7767: case 7831: case 7769: case 7833: case 7771: case 7835: case 7773: case 7837: case 7775: case 7839: case 7777: case 7841: case 7779: case 7843: case 7781: case 7783: case 7785: case 7787: case 7789: case 7791: case 7793: case 7795: case 7797: case 7799: case 7801: case 7803: case 7805: return false;
				default: return true;
			}
		}
	}
	namespace DaylightDetector
	{
		short DaylightDetector()
		{
			return 6710;
		}
		bool Inverted(short ID)
		{
			switch (ID)
			{
				case 6714: case 6718: case 6722: case 6711: case 6715: case 6719: case 6723: case 6712: case 6716: case 6720: case 6724: case 6713: case 6717: case 6721: case 6710: case 6725: return false;
				default: return true;
			}
		}
		unsigned char Power(short ID)
		{
			switch (ID)
			{
				case 6694: case 6710: return 0;
				case 6695: case 6711: return 1;
				case 6704: case 6720: return 10;
				case 6705: case 6721: return 11;
				case 6722: case 6706: return 12;
				case 6707: case 6723: return 13;
				case 6708: case 6724: return 14;
				case 6709: case 6725: return 15;
				case 6696: case 6712: return 2;
				case 6697: case 6713: return 3;
				case 6714: case 6698: return 4;
				case 6699: case 6715: return 5;
				case 6700: case 6716: return 6;
				case 6701: case 6717: return 7;
				case 6718: case 6702: return 8;
				default: return 9;
			}
		}
	}
	namespace DeadBrainCoral
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9523: return false;
				default: return true;
			}
		}
	}
	namespace DeadBrainCoralBlock
	{
	}
	namespace DeadBrainCoralFan
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9543: return false;
				default: return true;
			}
		}
	}
	namespace DeadBrainCoralWallFan
	{
		short DeadBrainCoralWallFan()
		{
			return 9568;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9572: case 9573: return eBlockFace::BLOCK_FACE_XM;
				case 9574: case 9575: return eBlockFace::BLOCK_FACE_XP;
				case 9568: case 9569: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9571: case 9569: case 9573: case 9575: return false;
				default: return true;
			}
		}
	}
	namespace DeadBubbleCoral
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9525: return false;
				default: return true;
			}
		}
	}
	namespace DeadBubbleCoralBlock
	{
	}
	namespace DeadBubbleCoralFan
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9545: return false;
				default: return true;
			}
		}
	}
	namespace DeadBubbleCoralWallFan
	{
		short DeadBubbleCoralWallFan()
		{
			return 9576;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9580: case 9581: return eBlockFace::BLOCK_FACE_XM;
				case 9582: case 9583: return eBlockFace::BLOCK_FACE_XP;
				case 9576: case 9577: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9579: case 9577: case 9581: case 9583: return false;
				default: return true;
			}
		}
	}
	namespace DeadBush
	{
	}
	namespace DeadFireCoral
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9527: return false;
				default: return true;
			}
		}
	}
	namespace DeadFireCoralBlock
	{
	}
	namespace DeadFireCoralFan
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9547: return false;
				default: return true;
			}
		}
	}
	namespace DeadFireCoralWallFan
	{
		short DeadFireCoralWallFan()
		{
			return 9584;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9589: case 9588: return eBlockFace::BLOCK_FACE_XM;
				case 9590: case 9591: return eBlockFace::BLOCK_FACE_XP;
				case 9585: case 9584: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9585: case 9589: case 9587: case 9591: return false;
				default: return true;
			}
		}
	}
	namespace DeadHornCoral
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9529: return false;
				default: return true;
			}
		}
	}
	namespace DeadHornCoralBlock
	{
	}
	namespace DeadHornCoralFan
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9549: return false;
				default: return true;
			}
		}
	}
	namespace DeadHornCoralWallFan
	{
		short DeadHornCoralWallFan()
		{
			return 9592;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9596: case 9597: return eBlockFace::BLOCK_FACE_XM;
				case 9598: case 9599: return eBlockFace::BLOCK_FACE_XP;
				case 9592: case 9593: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9593: case 9597: case 9595: case 9599: return false;
				default: return true;
			}
		}
	}
	namespace DeadTubeCoral
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9521: return false;
				default: return true;
			}
		}
	}
	namespace DeadTubeCoralBlock
	{
	}
	namespace DeadTubeCoralFan
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9541: return false;
				default: return true;
			}
		}
	}
	namespace DeadTubeCoralWallFan
	{
		short DeadTubeCoralWallFan()
		{
			return 9560;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9564: case 9565: return eBlockFace::BLOCK_FACE_XM;
				case 9566: case 9567: return eBlockFace::BLOCK_FACE_XP;
				case 9561: case 9560: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9561: case 9565: case 9563: case 9567: return false;
				default: return true;
			}
		}
	}
	namespace DetectorRail
	{
		short DetectorRail()
		{
			return 1323;
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 1325: case 1326: case 1323: case 1327: case 1324: case 1328: return false;
				default: return true;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 1325: case 1319: return Shape::AscendingEast;
				case 1321: case 1327: return Shape::AscendingNorth;
				case 1322: case 1328: return Shape::AscendingSouth;
				case 1326: case 1320: return Shape::AscendingWest;
				case 1318: case 1324: return Shape::EastWest;
				default: return Shape::NorthSouth;
			}
		}
	}
	namespace DiamondBlock
	{
	}
	namespace DiamondOre
	{
	}
	namespace Diorite
	{
	}
	namespace DioriteSlab
	{
		short DioriteSlab()
		{
			return 10864;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 10863: case 10864: return Type::Bottom;
				case 10866: case 10865: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10866: case 10864: case 10862: return false;
				default: return true;
			}
		}
	}
	namespace DioriteStairs
	{
		short DioriteStairs()
		{
			return 10720;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 10749: case 10750: case 10751: case 10752: case 10753: case 10754: case 10755: case 10756: case 10757: case 10758: case 10759: case 10760: case 10761: case 10762: case 10763: case 10764: case 10765: case 10766: case 10767: case 10768: return eBlockFace::BLOCK_FACE_XM;
				case 10769: case 10770: case 10771: case 10772: case 10773: case 10774: case 10775: case 10776: case 10777: case 10778: case 10779: case 10780: case 10781: case 10782: case 10783: case 10784: case 10785: case 10786: case 10787: case 10788: return eBlockFace::BLOCK_FACE_XP;
				case 10722: case 10723: case 10724: case 10725: case 10726: case 10727: case 10728: case 10709: case 10710: case 10711: case 10712: case 10713: case 10714: case 10715: case 10716: case 10717: case 10718: case 10719: case 10720: case 10721: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 10722: case 10723: case 10724: case 10725: case 10726: case 10727: case 10728: case 10739: case 10740: case 10741: case 10742: case 10743: case 10744: case 10745: case 10746: case 10747: case 10748: case 10759: case 10760: case 10761: case 10762: case 10763: case 10764: case 10765: case 10766: case 10767: case 10768: case 10779: case 10780: case 10781: case 10782: case 10783: case 10784: case 10785: case 10786: case 10787: case 10788: case 10719: case 10720: case 10721: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 10722: case 10731: case 10732: case 10741: case 10742: case 10751: case 10752: case 10761: case 10762: case 10771: case 10772: case 10781: case 10782: case 10711: case 10712: case 10721: return Shape::InnerLeft;
				case 10723: case 10724: case 10733: case 10734: case 10743: case 10744: case 10753: case 10754: case 10763: case 10764: case 10773: case 10774: case 10783: case 10784: case 10713: case 10714: return Shape::InnerRight;
				case 10725: case 10726: case 10735: case 10736: case 10745: case 10746: case 10755: case 10756: case 10765: case 10766: case 10775: case 10776: case 10785: case 10786: case 10715: case 10716: return Shape::OuterLeft;
				case 10727: case 10728: case 10737: case 10738: case 10747: case 10748: case 10757: case 10758: case 10767: case 10768: case 10777: case 10778: case 10787: case 10788: case 10717: case 10718: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10722: case 10724: case 10726: case 10728: case 10730: case 10732: case 10734: case 10736: case 10738: case 10740: case 10742: case 10744: case 10746: case 10748: case 10750: case 10752: case 10754: case 10756: case 10758: case 10760: case 10762: case 10764: case 10766: case 10768: case 10770: case 10772: case 10774: case 10776: case 10778: case 10780: case 10782: case 10784: case 10786: case 10788: case 10710: case 10712: case 10714: case 10716: case 10718: case 10720: return false;
				default: return true;
			}
		}
	}
	namespace DioriteWall
	{
		short DioriteWall()
		{
			return 14434;
		}
		enum East East(short ID)
		{
			switch (ID)
			{
				case 14611: case 14615: case 14619: case 14623: case 14627: case 14631: case 14635: case 14639: case 14643: case 14540: case 14544: case 14548: case 14552: case 14556: case 14560: case 14564: case 14568: case 14572: case 14576: case 14580: case 14584: case 14588: case 14592: case 14596: case 14600: case 14604: case 14608: case 14612: case 14616: case 14620: case 14624: case 14628: case 14632: case 14636: case 14640: case 14644: case 14541: case 14545: case 14549: case 14553: case 14557: case 14561: case 14565: case 14569: case 14573: case 14577: case 14581: case 14585: case 14589: case 14593: case 14597: case 14601: case 14605: case 14609: case 14613: case 14617: case 14621: case 14625: case 14629: case 14633: case 14637: case 14641: case 14645: case 14542: case 14546: case 14550: case 14554: case 14558: case 14562: case 14566: case 14570: case 14574: case 14578: case 14582: case 14586: case 14590: case 14594: case 14598: case 14602: case 14606: case 14610: case 14614: case 14618: case 14622: case 14626: case 14630: case 14634: case 14638: case 14642: case 14646: case 14539: case 14543: case 14547: case 14551: case 14555: case 14559: case 14563: case 14567: case 14571: case 14575: case 14579: case 14583: case 14587: case 14591: case 14595: case 14599: case 14603: case 14607: return East::Low;
				case 14432: case 14436: case 14440: case 14444: case 14448: case 14452: case 14456: case 14460: case 14464: case 14468: case 14472: case 14476: case 14480: case 14484: case 14488: case 14492: case 14496: case 14500: case 14504: case 14508: case 14512: case 14516: case 14520: case 14524: case 14528: case 14532: case 14536: case 14433: case 14437: case 14441: case 14445: case 14449: case 14453: case 14457: case 14461: case 14465: case 14469: case 14473: case 14477: case 14481: case 14485: case 14489: case 14493: case 14497: case 14501: case 14505: case 14509: case 14513: case 14517: case 14521: case 14525: case 14529: case 14533: case 14537: case 14434: case 14438: case 14442: case 14446: case 14450: case 14454: case 14458: case 14462: case 14466: case 14470: case 14474: case 14478: case 14482: case 14486: case 14490: case 14494: case 14498: case 14502: case 14506: case 14510: case 14514: case 14518: case 14522: case 14526: case 14530: case 14534: case 14538: case 14431: case 14435: case 14439: case 14443: case 14447: case 14451: case 14455: case 14459: case 14463: case 14467: case 14471: case 14475: case 14479: case 14483: case 14487: case 14491: case 14495: case 14499: case 14503: case 14507: case 14511: case 14515: case 14519: case 14523: case 14527: case 14531: case 14535: return East::None;
				default: return East::Tall;
			}
		}
		enum North North(short ID)
		{
			switch (ID)
			{
				case 14683: case 14687: case 14691: case 14695: case 14699: case 14703: case 14707: case 14711: case 14715: case 14468: case 14472: case 14476: case 14480: case 14484: case 14488: case 14492: case 14496: case 14500: case 14576: case 14580: case 14584: case 14588: case 14592: case 14596: case 14600: case 14604: case 14608: case 14684: case 14688: case 14692: case 14696: case 14700: case 14704: case 14708: case 14712: case 14716: case 14469: case 14473: case 14477: case 14481: case 14485: case 14489: case 14493: case 14497: case 14501: case 14577: case 14581: case 14585: case 14589: case 14593: case 14597: case 14601: case 14605: case 14609: case 14685: case 14689: case 14693: case 14697: case 14701: case 14705: case 14709: case 14713: case 14717: case 14470: case 14474: case 14478: case 14482: case 14486: case 14490: case 14494: case 14498: case 14502: case 14578: case 14582: case 14586: case 14590: case 14594: case 14598: case 14602: case 14606: case 14610: case 14686: case 14690: case 14694: case 14698: case 14702: case 14706: case 14710: case 14714: case 14718: case 14467: case 14471: case 14475: case 14479: case 14483: case 14487: case 14491: case 14495: case 14499: case 14575: case 14579: case 14583: case 14587: case 14591: case 14595: case 14599: case 14603: case 14607: return North::Low;
				case 14647: case 14651: case 14655: case 14659: case 14663: case 14667: case 14671: case 14675: case 14679: case 14432: case 14436: case 14440: case 14444: case 14448: case 14452: case 14456: case 14460: case 14464: case 14540: case 14544: case 14548: case 14552: case 14556: case 14560: case 14564: case 14568: case 14572: case 14648: case 14652: case 14656: case 14660: case 14664: case 14668: case 14672: case 14676: case 14680: case 14433: case 14437: case 14441: case 14445: case 14449: case 14453: case 14457: case 14461: case 14465: case 14541: case 14545: case 14549: case 14553: case 14557: case 14561: case 14565: case 14569: case 14573: case 14649: case 14653: case 14657: case 14661: case 14665: case 14669: case 14673: case 14677: case 14681: case 14434: case 14438: case 14442: case 14446: case 14450: case 14454: case 14458: case 14462: case 14466: case 14542: case 14546: case 14550: case 14554: case 14558: case 14562: case 14566: case 14570: case 14574: case 14650: case 14654: case 14658: case 14662: case 14666: case 14670: case 14674: case 14678: case 14682: case 14431: case 14435: case 14439: case 14443: case 14447: case 14451: case 14455: case 14459: case 14463: case 14539: case 14543: case 14547: case 14551: case 14555: case 14559: case 14563: case 14567: case 14571: return North::None;
				default: return North::Tall;
			}
		}
		enum South South(short ID)
		{
			switch (ID)
			{
				case 14623: case 14627: case 14631: case 14659: case 14663: case 14667: case 14695: case 14699: case 14703: case 14731: case 14735: case 14739: case 14444: case 14448: case 14452: case 14480: case 14484: case 14488: case 14516: case 14520: case 14524: case 14552: case 14556: case 14560: case 14588: case 14592: case 14596: case 14624: case 14628: case 14632: case 14660: case 14664: case 14668: case 14696: case 14700: case 14704: case 14732: case 14736: case 14740: case 14445: case 14449: case 14453: case 14481: case 14485: case 14489: case 14517: case 14521: case 14525: case 14553: case 14557: case 14561: case 14589: case 14593: case 14597: case 14625: case 14629: case 14633: case 14661: case 14665: case 14669: case 14697: case 14701: case 14705: case 14733: case 14737: case 14741: case 14446: case 14450: case 14454: case 14482: case 14486: case 14490: case 14518: case 14522: case 14526: case 14554: case 14558: case 14562: case 14590: case 14594: case 14598: case 14626: case 14630: case 14634: case 14662: case 14666: case 14670: case 14698: case 14702: case 14706: case 14734: case 14738: case 14742: case 14443: case 14447: case 14451: case 14479: case 14483: case 14487: case 14515: case 14519: case 14523: case 14551: case 14555: case 14559: case 14587: case 14591: case 14595: return South::Low;
				case 14611: case 14615: case 14619: case 14647: case 14651: case 14655: case 14683: case 14687: case 14691: case 14719: case 14723: case 14727: case 14432: case 14436: case 14440: case 14468: case 14472: case 14476: case 14504: case 14508: case 14512: case 14540: case 14544: case 14548: case 14576: case 14580: case 14584: case 14612: case 14616: case 14620: case 14648: case 14652: case 14656: case 14684: case 14688: case 14692: case 14720: case 14724: case 14728: case 14433: case 14437: case 14441: case 14469: case 14473: case 14477: case 14505: case 14509: case 14513: case 14541: case 14545: case 14549: case 14577: case 14581: case 14585: case 14613: case 14617: case 14621: case 14649: case 14653: case 14657: case 14685: case 14689: case 14693: case 14721: case 14725: case 14729: case 14434: case 14438: case 14442: case 14470: case 14474: case 14478: case 14506: case 14510: case 14514: case 14542: case 14546: case 14550: case 14578: case 14582: case 14586: case 14614: case 14618: case 14622: case 14650: case 14654: case 14658: case 14686: case 14690: case 14694: case 14722: case 14726: case 14730: case 14431: case 14435: case 14439: case 14467: case 14471: case 14475: case 14503: case 14507: case 14511: case 14539: case 14543: case 14547: case 14575: case 14579: case 14583: return South::None;
				default: return South::Tall;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 14619: case 14631: case 14643: case 14655: case 14667: case 14679: case 14691: case 14703: case 14715: case 14727: case 14739: case 14751: case 14440: case 14452: case 14464: case 14476: case 14488: case 14500: case 14512: case 14524: case 14536: case 14548: case 14560: case 14572: case 14584: case 14596: case 14608: case 14620: case 14632: case 14644: case 14656: case 14668: case 14680: case 14692: case 14704: case 14716: case 14728: case 14740: case 14752: case 14437: case 14441: case 14449: case 14453: case 14461: case 14465: case 14473: case 14477: case 14485: case 14489: case 14497: case 14501: case 14509: case 14513: case 14521: case 14525: case 14533: case 14537: case 14545: case 14549: case 14557: case 14561: case 14569: case 14573: case 14581: case 14585: case 14593: case 14597: case 14605: case 14609: case 14617: case 14621: case 14629: case 14633: case 14641: case 14645: case 14653: case 14657: case 14665: case 14669: case 14677: case 14681: case 14689: case 14693: case 14701: case 14705: case 14713: case 14717: case 14725: case 14729: case 14737: case 14741: case 14749: case 14753: case 14438: case 14442: case 14450: case 14454: case 14462: case 14466: case 14474: case 14478: case 14486: case 14490: case 14498: case 14502: case 14510: case 14514: case 14522: case 14526: case 14534: case 14538: case 14546: case 14550: case 14558: case 14562: case 14570: case 14574: case 14582: case 14586: case 14594: case 14598: case 14606: case 14610: case 14618: case 14622: case 14630: case 14634: case 14642: case 14646: case 14654: case 14658: case 14666: case 14670: case 14678: case 14682: case 14690: case 14694: case 14702: case 14706: case 14714: case 14718: case 14726: case 14730: case 14738: case 14742: case 14750: case 14754: case 14439: case 14451: case 14463: case 14475: case 14487: case 14499: case 14511: case 14523: case 14535: case 14547: case 14559: case 14571: case 14583: case 14595: case 14607: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 14615: case 14627: case 14639: case 14651: case 14663: case 14675: case 14687: case 14699: case 14711: case 14723: case 14735: case 14747: case 14436: case 14440: case 14448: case 14452: case 14460: case 14464: case 14472: case 14476: case 14484: case 14488: case 14496: case 14500: case 14508: case 14512: case 14520: case 14524: case 14532: case 14536: case 14544: case 14548: case 14556: case 14560: case 14568: case 14572: case 14580: case 14584: case 14592: case 14596: case 14604: case 14608: case 14616: case 14620: case 14628: case 14632: case 14640: case 14644: case 14652: case 14656: case 14664: case 14668: case 14676: case 14680: case 14688: case 14692: case 14700: case 14704: case 14712: case 14716: case 14724: case 14728: case 14736: case 14740: case 14748: case 14752: case 14441: case 14453: case 14465: case 14477: case 14489: case 14501: case 14513: case 14525: case 14537: case 14549: case 14561: case 14573: case 14585: case 14597: case 14609: case 14621: case 14633: case 14645: case 14657: case 14669: case 14681: case 14693: case 14705: case 14717: case 14729: case 14741: case 14753: case 14434: case 14442: case 14446: case 14454: case 14458: case 14466: case 14470: case 14478: case 14482: case 14490: case 14494: case 14502: case 14506: case 14514: case 14518: case 14526: case 14530: case 14538: case 14542: case 14550: case 14554: case 14562: case 14566: case 14574: case 14578: case 14586: case 14590: case 14598: case 14602: case 14610: case 14614: case 14622: case 14626: case 14634: case 14638: case 14646: case 14650: case 14658: case 14662: case 14670: case 14674: case 14682: case 14686: case 14694: case 14698: case 14706: case 14710: case 14718: case 14722: case 14730: case 14734: case 14742: case 14746: case 14754: case 14435: case 14447: case 14459: case 14471: case 14483: case 14495: case 14507: case 14519: case 14531: case 14543: case 14555: case 14567: case 14579: case 14591: case 14603: return false;
				default: return true;
			}
		}
		enum West West(short ID)
		{
			switch (ID)
			{
				case 14615: case 14627: case 14639: case 14651: case 14663: case 14675: case 14687: case 14699: case 14711: case 14723: case 14735: case 14747: case 14432: case 14444: case 14456: case 14468: case 14480: case 14492: case 14504: case 14516: case 14528: case 14540: case 14552: case 14564: case 14576: case 14588: case 14600: case 14612: case 14624: case 14636: case 14648: case 14660: case 14672: case 14684: case 14696: case 14708: case 14720: case 14732: case 14744: case 14441: case 14453: case 14465: case 14477: case 14489: case 14501: case 14513: case 14525: case 14537: case 14549: case 14561: case 14573: case 14585: case 14597: case 14609: case 14621: case 14633: case 14645: case 14657: case 14669: case 14681: case 14693: case 14705: case 14717: case 14729: case 14741: case 14753: case 14438: case 14450: case 14462: case 14474: case 14486: case 14498: case 14510: case 14522: case 14534: case 14546: case 14558: case 14570: case 14582: case 14594: case 14606: case 14618: case 14630: case 14642: case 14654: case 14666: case 14678: case 14690: case 14702: case 14714: case 14726: case 14738: case 14750: case 14435: case 14447: case 14459: case 14471: case 14483: case 14495: case 14507: case 14519: case 14531: case 14543: case 14555: case 14567: case 14579: case 14591: case 14603: return West::Low;
				case 14611: case 14623: case 14635: case 14647: case 14659: case 14671: case 14683: case 14695: case 14707: case 14719: case 14731: case 14743: case 14440: case 14452: case 14464: case 14476: case 14488: case 14500: case 14512: case 14524: case 14536: case 14548: case 14560: case 14572: case 14584: case 14596: case 14608: case 14620: case 14632: case 14644: case 14656: case 14668: case 14680: case 14692: case 14704: case 14716: case 14728: case 14740: case 14752: case 14437: case 14449: case 14461: case 14473: case 14485: case 14497: case 14509: case 14521: case 14533: case 14545: case 14557: case 14569: case 14581: case 14593: case 14605: case 14617: case 14629: case 14641: case 14653: case 14665: case 14677: case 14689: case 14701: case 14713: case 14725: case 14737: case 14749: case 14434: case 14446: case 14458: case 14470: case 14482: case 14494: case 14506: case 14518: case 14530: case 14542: case 14554: case 14566: case 14578: case 14590: case 14602: case 14614: case 14626: case 14638: case 14650: case 14662: case 14674: case 14686: case 14698: case 14710: case 14722: case 14734: case 14746: case 14431: case 14443: case 14455: case 14467: case 14479: case 14491: case 14503: case 14515: case 14527: case 14539: case 14551: case 14563: case 14575: case 14587: case 14599: return West::None;
				default: return West::Tall;
			}
		}
	}
	namespace Dirt
	{
	}
	namespace Dispenser
	{
		short Dispenser()
		{
			return 235;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 240: case 241: return eBlockFace::BLOCK_FACE_XM;
				case 236: case 237: return eBlockFace::BLOCK_FACE_XP;
				case 244: case 245: return eBlockFace::BLOCK_FACE_YM;
				case 243: case 242: return eBlockFace::BLOCK_FACE_YP;
				case 234: case 235: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Triggered(short ID)
		{
			switch (ID)
			{
				case 243: case 237: case 245: case 239: case 241: case 235: return false;
				default: return true;
			}
		}
	}
	namespace DragonEgg
	{
	}
	namespace DragonHead
	{
		short DragonHead()
		{
			return 6590;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 6590: return 0;
				case 6591: return 1;
				case 6600: return 10;
				case 6601: return 11;
				case 6602: return 12;
				case 6603: return 13;
				case 6604: return 14;
				case 6605: return 15;
				case 6592: return 2;
				case 6593: return 3;
				case 6594: return 4;
				case 6595: return 5;
				case 6596: return 6;
				case 6597: return 7;
				case 6598: return 8;
				default: return 9;
			}
		}
	}
	namespace DragonWallHead
	{
		short DragonWallHead()
		{
			return 6606;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6608: return eBlockFace::BLOCK_FACE_XM;
				case 6609: return eBlockFace::BLOCK_FACE_XP;
				case 6606: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace DriedKelpBlock
	{
	}
	namespace Dropper
	{
		short Dropper()
		{
			return 6836;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6841: case 6842: return eBlockFace::BLOCK_FACE_XM;
				case 6837: case 6838: return eBlockFace::BLOCK_FACE_XP;
				case 6845: case 6846: return eBlockFace::BLOCK_FACE_YM;
				case 6843: case 6844: return eBlockFace::BLOCK_FACE_YP;
				case 6835: case 6836: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Triggered(short ID)
		{
			switch (ID)
			{
				case 6842: case 6844: case 6846: case 6836: case 6838: case 6840: return false;
				default: return true;
			}
		}
	}
	namespace EmeraldBlock
	{
	}
	namespace EmeraldOre
	{
	}
	namespace EnchantingTable
	{
	}
	namespace EndGateway
	{
	}
	namespace EndPortal
	{
	}
	namespace EndPortalFrame
	{
		short EndPortalFrame()
		{
			return 5150;
		}
		bool Eye(short ID)
		{
			switch (ID)
			{
				case 5151: case 5150: case 5152: case 5153: return false;
				default: return true;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 5148: case 5152: return eBlockFace::BLOCK_FACE_XM;
				case 5149: case 5153: return eBlockFace::BLOCK_FACE_XP;
				case 5146: case 5150: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace EndRod
	{
		short EndRod()
		{
			return 9062;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9061: return eBlockFace::BLOCK_FACE_XM;
				case 9059: return eBlockFace::BLOCK_FACE_XP;
				case 9063: return eBlockFace::BLOCK_FACE_YM;
				case 9062: return eBlockFace::BLOCK_FACE_YP;
				case 9058: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace EndStone
	{
	}
	namespace EndStoneBrickSlab
	{
		short EndStoneBrickSlab()
		{
			return 10822;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 10821: case 10822: return Type::Bottom;
				case 10824: case 10823: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10824: case 10822: case 10820: return false;
				default: return true;
			}
		}
	}
	namespace EndStoneBrickStairs
	{
		short EndStoneBrickStairs()
		{
			return 10080;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 10109: case 10110: case 10111: case 10112: case 10113: case 10114: case 10115: case 10116: case 10117: case 10118: case 10119: case 10120: case 10121: case 10122: case 10123: case 10124: case 10125: case 10126: case 10127: case 10128: return eBlockFace::BLOCK_FACE_XM;
				case 10129: case 10130: case 10131: case 10132: case 10133: case 10134: case 10135: case 10136: case 10137: case 10138: case 10139: case 10140: case 10141: case 10142: case 10143: case 10144: case 10145: case 10146: case 10147: case 10148: return eBlockFace::BLOCK_FACE_XP;
				case 10087: case 10088: case 10069: case 10070: case 10071: case 10072: case 10073: case 10074: case 10075: case 10076: case 10077: case 10078: case 10079: case 10080: case 10081: case 10082: case 10083: case 10084: case 10085: case 10086: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 10087: case 10088: case 10099: case 10100: case 10101: case 10102: case 10103: case 10104: case 10105: case 10106: case 10107: case 10108: case 10119: case 10120: case 10121: case 10122: case 10123: case 10124: case 10125: case 10126: case 10127: case 10128: case 10139: case 10140: case 10141: case 10142: case 10143: case 10144: case 10145: case 10146: case 10147: case 10148: case 10079: case 10080: case 10081: case 10082: case 10083: case 10084: case 10085: case 10086: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 10091: case 10092: case 10101: case 10102: case 10111: case 10112: case 10121: case 10122: case 10131: case 10132: case 10141: case 10142: case 10071: case 10072: case 10081: case 10082: return Shape::InnerLeft;
				case 10093: case 10094: case 10103: case 10104: case 10113: case 10114: case 10123: case 10124: case 10133: case 10134: case 10143: case 10144: case 10073: case 10074: case 10083: case 10084: return Shape::InnerRight;
				case 10095: case 10096: case 10105: case 10106: case 10115: case 10116: case 10125: case 10126: case 10135: case 10136: case 10145: case 10146: case 10075: case 10076: case 10085: case 10086: return Shape::OuterLeft;
				case 10087: case 10088: case 10097: case 10098: case 10107: case 10108: case 10117: case 10118: case 10127: case 10128: case 10137: case 10138: case 10147: case 10148: case 10077: case 10078: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10088: case 10090: case 10092: case 10094: case 10096: case 10098: case 10100: case 10102: case 10104: case 10106: case 10108: case 10110: case 10112: case 10114: case 10116: case 10118: case 10120: case 10122: case 10124: case 10126: case 10128: case 10130: case 10132: case 10134: case 10136: case 10138: case 10140: case 10142: case 10144: case 10146: case 10148: case 10070: case 10072: case 10074: case 10076: case 10078: case 10080: case 10082: case 10084: case 10086: return false;
				default: return true;
			}
		}
	}
	namespace EndStoneBrickWall
	{
		short EndStoneBrickWall()
		{
			return 14110;
		}
		enum East East(short ID)
		{
			switch (ID)
			{
				case 14216: case 14220: case 14224: case 14228: case 14232: case 14236: case 14240: case 14244: case 14248: case 14252: case 14256: case 14260: case 14264: case 14268: case 14272: case 14276: case 14280: case 14284: case 14288: case 14292: case 14296: case 14300: case 14304: case 14308: case 14312: case 14316: case 14320: case 14217: case 14221: case 14225: case 14229: case 14233: case 14237: case 14241: case 14245: case 14249: case 14253: case 14257: case 14261: case 14265: case 14269: case 14273: case 14277: case 14281: case 14285: case 14289: case 14293: case 14297: case 14301: case 14305: case 14309: case 14313: case 14317: case 14321: case 14218: case 14222: case 14226: case 14230: case 14234: case 14238: case 14242: case 14246: case 14250: case 14254: case 14258: case 14262: case 14266: case 14270: case 14274: case 14278: case 14282: case 14286: case 14290: case 14294: case 14298: case 14302: case 14306: case 14310: case 14314: case 14318: case 14322: case 14215: case 14219: case 14223: case 14227: case 14231: case 14235: case 14239: case 14243: case 14247: case 14251: case 14255: case 14259: case 14263: case 14267: case 14271: case 14275: case 14279: case 14283: case 14287: case 14291: case 14295: case 14299: case 14303: case 14307: case 14311: case 14315: case 14319: return East::Low;
				case 14108: case 14112: case 14116: case 14120: case 14124: case 14128: case 14132: case 14136: case 14140: case 14144: case 14148: case 14152: case 14156: case 14160: case 14164: case 14168: case 14172: case 14176: case 14180: case 14184: case 14188: case 14192: case 14196: case 14200: case 14204: case 14208: case 14212: case 14109: case 14113: case 14117: case 14121: case 14125: case 14129: case 14133: case 14137: case 14141: case 14145: case 14149: case 14153: case 14157: case 14161: case 14165: case 14169: case 14173: case 14177: case 14181: case 14185: case 14189: case 14193: case 14197: case 14201: case 14205: case 14209: case 14213: case 14110: case 14114: case 14118: case 14122: case 14126: case 14130: case 14134: case 14138: case 14142: case 14146: case 14150: case 14154: case 14158: case 14162: case 14166: case 14170: case 14174: case 14178: case 14182: case 14186: case 14190: case 14194: case 14198: case 14202: case 14206: case 14210: case 14214: case 14107: case 14111: case 14115: case 14119: case 14123: case 14127: case 14131: case 14135: case 14139: case 14143: case 14147: case 14151: case 14155: case 14159: case 14163: case 14167: case 14171: case 14175: case 14179: case 14183: case 14187: case 14191: case 14195: case 14199: case 14203: case 14207: case 14211: return East::None;
				default: return East::Tall;
			}
		}
		enum North North(short ID)
		{
			switch (ID)
			{
				case 14144: case 14148: case 14152: case 14156: case 14160: case 14164: case 14168: case 14172: case 14176: case 14252: case 14256: case 14260: case 14264: case 14268: case 14272: case 14276: case 14280: case 14284: case 14360: case 14364: case 14368: case 14372: case 14376: case 14380: case 14384: case 14388: case 14392: case 14145: case 14149: case 14153: case 14157: case 14161: case 14165: case 14169: case 14173: case 14177: case 14253: case 14257: case 14261: case 14265: case 14269: case 14273: case 14277: case 14281: case 14285: case 14361: case 14365: case 14369: case 14373: case 14377: case 14381: case 14385: case 14389: case 14393: case 14146: case 14150: case 14154: case 14158: case 14162: case 14166: case 14170: case 14174: case 14178: case 14254: case 14258: case 14262: case 14266: case 14270: case 14274: case 14278: case 14282: case 14286: case 14362: case 14366: case 14370: case 14374: case 14378: case 14382: case 14386: case 14390: case 14394: case 14143: case 14147: case 14151: case 14155: case 14159: case 14163: case 14167: case 14171: case 14175: case 14251: case 14255: case 14259: case 14263: case 14267: case 14271: case 14275: case 14279: case 14283: case 14359: case 14363: case 14367: case 14371: case 14375: case 14379: case 14383: case 14387: case 14391: return North::Low;
				case 14108: case 14112: case 14116: case 14120: case 14124: case 14128: case 14132: case 14136: case 14140: case 14216: case 14220: case 14224: case 14228: case 14232: case 14236: case 14240: case 14244: case 14248: case 14324: case 14328: case 14332: case 14336: case 14340: case 14344: case 14348: case 14352: case 14356: case 14109: case 14113: case 14117: case 14121: case 14125: case 14129: case 14133: case 14137: case 14141: case 14217: case 14221: case 14225: case 14229: case 14233: case 14237: case 14241: case 14245: case 14249: case 14325: case 14329: case 14333: case 14337: case 14341: case 14345: case 14349: case 14353: case 14357: case 14110: case 14114: case 14118: case 14122: case 14126: case 14130: case 14134: case 14138: case 14142: case 14218: case 14222: case 14226: case 14230: case 14234: case 14238: case 14242: case 14246: case 14250: case 14326: case 14330: case 14334: case 14338: case 14342: case 14346: case 14350: case 14354: case 14358: case 14107: case 14111: case 14115: case 14119: case 14123: case 14127: case 14131: case 14135: case 14139: case 14215: case 14219: case 14223: case 14227: case 14231: case 14235: case 14239: case 14243: case 14247: case 14323: case 14327: case 14331: case 14335: case 14339: case 14343: case 14347: case 14351: case 14355: return North::None;
				default: return North::Tall;
			}
		}
		enum South South(short ID)
		{
			switch (ID)
			{
				case 14120: case 14124: case 14128: case 14156: case 14160: case 14164: case 14192: case 14196: case 14200: case 14228: case 14232: case 14236: case 14264: case 14268: case 14272: case 14300: case 14304: case 14308: case 14336: case 14340: case 14344: case 14372: case 14376: case 14380: case 14408: case 14412: case 14416: case 14121: case 14125: case 14129: case 14157: case 14161: case 14165: case 14193: case 14197: case 14201: case 14229: case 14233: case 14237: case 14265: case 14269: case 14273: case 14301: case 14305: case 14309: case 14337: case 14341: case 14345: case 14373: case 14377: case 14381: case 14409: case 14413: case 14417: case 14122: case 14126: case 14130: case 14158: case 14162: case 14166: case 14194: case 14198: case 14202: case 14230: case 14234: case 14238: case 14266: case 14270: case 14274: case 14302: case 14306: case 14310: case 14338: case 14342: case 14346: case 14374: case 14378: case 14382: case 14410: case 14414: case 14418: case 14119: case 14123: case 14127: case 14155: case 14159: case 14163: case 14191: case 14195: case 14199: case 14227: case 14231: case 14235: case 14263: case 14267: case 14271: case 14299: case 14303: case 14307: case 14335: case 14339: case 14343: case 14371: case 14375: case 14379: case 14407: case 14411: case 14415: return South::Low;
				case 14108: case 14112: case 14116: case 14144: case 14148: case 14152: case 14180: case 14184: case 14188: case 14216: case 14220: case 14224: case 14252: case 14256: case 14260: case 14288: case 14292: case 14296: case 14324: case 14328: case 14332: case 14360: case 14364: case 14368: case 14396: case 14400: case 14404: case 14109: case 14113: case 14117: case 14145: case 14149: case 14153: case 14181: case 14185: case 14189: case 14217: case 14221: case 14225: case 14253: case 14257: case 14261: case 14289: case 14293: case 14297: case 14325: case 14329: case 14333: case 14361: case 14365: case 14369: case 14397: case 14401: case 14405: case 14110: case 14114: case 14118: case 14146: case 14150: case 14154: case 14182: case 14186: case 14190: case 14218: case 14222: case 14226: case 14254: case 14258: case 14262: case 14290: case 14294: case 14298: case 14326: case 14330: case 14334: case 14362: case 14366: case 14370: case 14398: case 14402: case 14406: case 14107: case 14111: case 14115: case 14143: case 14147: case 14151: case 14179: case 14183: case 14187: case 14215: case 14219: case 14223: case 14251: case 14255: case 14259: case 14287: case 14291: case 14295: case 14323: case 14327: case 14331: case 14359: case 14363: case 14367: case 14395: case 14399: case 14403: return South::None;
				default: return South::Tall;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 14116: case 14128: case 14140: case 14152: case 14164: case 14176: case 14188: case 14200: case 14212: case 14224: case 14236: case 14248: case 14260: case 14272: case 14284: case 14296: case 14308: case 14320: case 14332: case 14344: case 14356: case 14368: case 14380: case 14392: case 14404: case 14416: case 14428: case 14113: case 14117: case 14125: case 14129: case 14137: case 14141: case 14149: case 14153: case 14161: case 14165: case 14173: case 14177: case 14185: case 14189: case 14197: case 14201: case 14209: case 14213: case 14221: case 14225: case 14233: case 14237: case 14245: case 14249: case 14257: case 14261: case 14269: case 14273: case 14281: case 14285: case 14293: case 14297: case 14305: case 14309: case 14317: case 14321: case 14329: case 14333: case 14341: case 14345: case 14353: case 14357: case 14365: case 14369: case 14377: case 14381: case 14389: case 14393: case 14401: case 14405: case 14413: case 14417: case 14425: case 14429: case 14114: case 14118: case 14126: case 14130: case 14138: case 14142: case 14150: case 14154: case 14162: case 14166: case 14174: case 14178: case 14186: case 14190: case 14198: case 14202: case 14210: case 14214: case 14222: case 14226: case 14234: case 14238: case 14246: case 14250: case 14258: case 14262: case 14270: case 14274: case 14282: case 14286: case 14294: case 14298: case 14306: case 14310: case 14318: case 14322: case 14330: case 14334: case 14342: case 14346: case 14354: case 14358: case 14366: case 14370: case 14378: case 14382: case 14390: case 14394: case 14402: case 14406: case 14414: case 14418: case 14426: case 14430: case 14115: case 14127: case 14139: case 14151: case 14163: case 14175: case 14187: case 14199: case 14211: case 14223: case 14235: case 14247: case 14259: case 14271: case 14283: case 14295: case 14307: case 14319: case 14331: case 14343: case 14355: case 14367: case 14379: case 14391: case 14403: case 14415: case 14427: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 14112: case 14116: case 14124: case 14128: case 14136: case 14140: case 14148: case 14152: case 14160: case 14164: case 14172: case 14176: case 14184: case 14188: case 14196: case 14200: case 14208: case 14212: case 14220: case 14224: case 14232: case 14236: case 14244: case 14248: case 14256: case 14260: case 14268: case 14272: case 14280: case 14284: case 14292: case 14296: case 14304: case 14308: case 14316: case 14320: case 14328: case 14332: case 14340: case 14344: case 14352: case 14356: case 14364: case 14368: case 14376: case 14380: case 14388: case 14392: case 14400: case 14404: case 14412: case 14416: case 14424: case 14428: case 14117: case 14129: case 14141: case 14153: case 14165: case 14177: case 14189: case 14201: case 14213: case 14225: case 14237: case 14249: case 14261: case 14273: case 14285: case 14297: case 14309: case 14321: case 14333: case 14345: case 14357: case 14369: case 14381: case 14393: case 14405: case 14417: case 14429: case 14110: case 14118: case 14122: case 14130: case 14134: case 14142: case 14146: case 14154: case 14158: case 14166: case 14170: case 14178: case 14182: case 14190: case 14194: case 14202: case 14206: case 14214: case 14218: case 14226: case 14230: case 14238: case 14242: case 14250: case 14254: case 14262: case 14266: case 14274: case 14278: case 14286: case 14290: case 14298: case 14302: case 14310: case 14314: case 14322: case 14326: case 14334: case 14338: case 14346: case 14350: case 14358: case 14362: case 14370: case 14374: case 14382: case 14386: case 14394: case 14398: case 14406: case 14410: case 14418: case 14422: case 14430: case 14111: case 14123: case 14135: case 14147: case 14159: case 14171: case 14183: case 14195: case 14207: case 14219: case 14231: case 14243: case 14255: case 14267: case 14279: case 14291: case 14303: case 14315: case 14327: case 14339: case 14351: case 14363: case 14375: case 14387: case 14399: case 14411: case 14423: return false;
				default: return true;
			}
		}
		enum West West(short ID)
		{
			switch (ID)
			{
				case 14108: case 14120: case 14132: case 14144: case 14156: case 14168: case 14180: case 14192: case 14204: case 14216: case 14228: case 14240: case 14252: case 14264: case 14276: case 14288: case 14300: case 14312: case 14324: case 14336: case 14348: case 14360: case 14372: case 14384: case 14396: case 14408: case 14420: case 14117: case 14129: case 14141: case 14153: case 14165: case 14177: case 14189: case 14201: case 14213: case 14225: case 14237: case 14249: case 14261: case 14273: case 14285: case 14297: case 14309: case 14321: case 14333: case 14345: case 14357: case 14369: case 14381: case 14393: case 14405: case 14417: case 14429: case 14114: case 14126: case 14138: case 14150: case 14162: case 14174: case 14186: case 14198: case 14210: case 14222: case 14234: case 14246: case 14258: case 14270: case 14282: case 14294: case 14306: case 14318: case 14330: case 14342: case 14354: case 14366: case 14378: case 14390: case 14402: case 14414: case 14426: case 14111: case 14123: case 14135: case 14147: case 14159: case 14171: case 14183: case 14195: case 14207: case 14219: case 14231: case 14243: case 14255: case 14267: case 14279: case 14291: case 14303: case 14315: case 14327: case 14339: case 14351: case 14363: case 14375: case 14387: case 14399: case 14411: case 14423: return West::Low;
				case 14116: case 14128: case 14140: case 14152: case 14164: case 14176: case 14188: case 14200: case 14212: case 14224: case 14236: case 14248: case 14260: case 14272: case 14284: case 14296: case 14308: case 14320: case 14332: case 14344: case 14356: case 14368: case 14380: case 14392: case 14404: case 14416: case 14428: case 14113: case 14125: case 14137: case 14149: case 14161: case 14173: case 14185: case 14197: case 14209: case 14221: case 14233: case 14245: case 14257: case 14269: case 14281: case 14293: case 14305: case 14317: case 14329: case 14341: case 14353: case 14365: case 14377: case 14389: case 14401: case 14413: case 14425: case 14110: case 14122: case 14134: case 14146: case 14158: case 14170: case 14182: case 14194: case 14206: case 14218: case 14230: case 14242: case 14254: case 14266: case 14278: case 14290: case 14302: case 14314: case 14326: case 14338: case 14350: case 14362: case 14374: case 14386: case 14398: case 14410: case 14422: case 14107: case 14119: case 14131: case 14143: case 14155: case 14167: case 14179: case 14191: case 14203: case 14215: case 14227: case 14239: case 14251: case 14263: case 14275: case 14287: case 14299: case 14311: case 14323: case 14335: case 14347: case 14359: case 14371: case 14383: case 14395: case 14407: case 14419: return West::None;
				default: return West::Tall;
			}
		}
	}
	namespace EndStoneBricks
	{
	}
	namespace EnderChest
	{
		short EnderChest()
		{
			return 5252;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 5256: case 5255: return eBlockFace::BLOCK_FACE_XM;
				case 5257: case 5258: return eBlockFace::BLOCK_FACE_XP;
				case 5252: case 5251: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 5252: case 5254: case 5256: case 5258: return false;
				default: return true;
			}
		}
	}
	namespace Farmland
	{
		short Farmland()
		{
			return 3365;
		}
		unsigned char Moisture(short ID)
		{
			switch (ID)
			{
				case 3365: return 0;
				case 3366: return 1;
				case 3367: return 2;
				case 3368: return 3;
				case 3369: return 4;
				case 3370: return 5;
				case 3371: return 6;
				default: return 7;
			}
		}
	}
	namespace Fern
	{
	}
	namespace Fire
	{
		short Fire()
		{
			return 1471;
		}
		unsigned char Age(short ID)
		{
			switch (ID)
			{
				case 1440: case 1441: case 1442: case 1443: case 1444: case 1445: case 1446: case 1447: case 1448: case 1449: case 1450: case 1451: case 1452: case 1453: case 1454: case 1455: case 1456: case 1457: case 1458: case 1459: case 1460: case 1461: case 1462: case 1463: case 1464: case 1465: case 1466: case 1467: case 1468: case 1469: case 1470: case 1471: return 0;
				case 1472: case 1473: case 1474: case 1475: case 1476: case 1477: case 1478: case 1479: case 1480: case 1481: case 1482: case 1483: case 1484: case 1485: case 1486: case 1487: case 1488: case 1489: case 1490: case 1491: case 1492: case 1493: case 1494: case 1495: case 1496: case 1497: case 1498: case 1499: case 1500: case 1501: case 1502: case 1503: return 1;
				case 1769: case 1770: case 1771: case 1772: case 1773: case 1774: case 1775: case 1776: case 1777: case 1778: case 1779: case 1780: case 1781: case 1782: case 1783: case 1784: case 1785: case 1786: case 1787: case 1788: case 1789: case 1790: case 1791: case 1760: case 1761: case 1762: case 1763: case 1764: case 1765: case 1766: case 1767: case 1768: return 10;
				case 1792: case 1793: case 1794: case 1795: case 1796: case 1797: case 1798: case 1799: case 1800: case 1801: case 1802: case 1803: case 1804: case 1805: case 1806: case 1807: case 1808: case 1809: case 1810: case 1811: case 1812: case 1813: case 1814: case 1815: case 1816: case 1817: case 1818: case 1819: case 1820: case 1821: case 1822: case 1823: return 11;
				case 1824: case 1825: case 1826: case 1827: case 1828: case 1829: case 1830: case 1831: case 1832: case 1833: case 1834: case 1835: case 1836: case 1837: case 1838: case 1839: case 1840: case 1841: case 1842: case 1843: case 1844: case 1845: case 1846: case 1847: case 1848: case 1849: case 1850: case 1851: case 1852: case 1853: case 1854: case 1855: return 12;
				case 1856: case 1857: case 1858: case 1859: case 1860: case 1861: case 1862: case 1863: case 1864: case 1865: case 1866: case 1867: case 1868: case 1869: case 1870: case 1871: case 1872: case 1873: case 1874: case 1875: case 1876: case 1877: case 1878: case 1879: case 1880: case 1881: case 1882: case 1883: case 1884: case 1885: case 1886: case 1887: return 13;
				case 1888: case 1889: case 1890: case 1891: case 1892: case 1893: case 1894: case 1895: case 1896: case 1897: case 1898: case 1899: case 1900: case 1901: case 1902: case 1903: case 1904: case 1905: case 1906: case 1907: case 1908: case 1909: case 1910: case 1911: case 1912: case 1913: case 1914: case 1915: case 1916: case 1917: case 1918: case 1919: return 14;
				case 1920: case 1921: case 1922: case 1923: case 1924: case 1925: case 1926: case 1927: case 1928: case 1929: case 1930: case 1931: case 1932: case 1933: case 1934: case 1935: case 1936: case 1937: case 1938: case 1939: case 1940: case 1941: case 1942: case 1943: case 1944: case 1945: case 1946: case 1947: case 1948: case 1949: case 1950: case 1951: return 15;
				case 1513: case 1514: case 1515: case 1516: case 1517: case 1518: case 1519: case 1520: case 1521: case 1522: case 1523: case 1524: case 1525: case 1526: case 1527: case 1528: case 1529: case 1530: case 1531: case 1532: case 1533: case 1534: case 1535: case 1504: case 1505: case 1506: case 1507: case 1508: case 1509: case 1510: case 1511: case 1512: return 2;
				case 1536: case 1537: case 1538: case 1539: case 1540: case 1541: case 1542: case 1543: case 1544: case 1545: case 1546: case 1547: case 1548: case 1549: case 1550: case 1551: case 1552: case 1553: case 1554: case 1555: case 1556: case 1557: case 1558: case 1559: case 1560: case 1561: case 1562: case 1563: case 1564: case 1565: case 1566: case 1567: return 3;
				case 1568: case 1569: case 1570: case 1571: case 1572: case 1573: case 1574: case 1575: case 1576: case 1577: case 1578: case 1579: case 1580: case 1581: case 1582: case 1583: case 1584: case 1585: case 1586: case 1587: case 1588: case 1589: case 1590: case 1591: case 1592: case 1593: case 1594: case 1595: case 1596: case 1597: case 1598: case 1599: return 4;
				case 1600: case 1601: case 1602: case 1603: case 1604: case 1605: case 1606: case 1607: case 1608: case 1609: case 1610: case 1611: case 1612: case 1613: case 1614: case 1615: case 1616: case 1617: case 1618: case 1619: case 1620: case 1621: case 1622: case 1623: case 1624: case 1625: case 1626: case 1627: case 1628: case 1629: case 1630: case 1631: return 5;
				case 1632: case 1633: case 1634: case 1635: case 1636: case 1637: case 1638: case 1639: case 1640: case 1641: case 1642: case 1643: case 1644: case 1645: case 1646: case 1647: case 1648: case 1649: case 1650: case 1651: case 1652: case 1653: case 1654: case 1655: case 1656: case 1657: case 1658: case 1659: case 1660: case 1661: case 1662: case 1663: return 6;
				case 1664: case 1665: case 1666: case 1667: case 1668: case 1669: case 1670: case 1671: case 1672: case 1673: case 1674: case 1675: case 1676: case 1677: case 1678: case 1679: case 1680: case 1681: case 1682: case 1683: case 1684: case 1685: case 1686: case 1687: case 1688: case 1689: case 1690: case 1691: case 1692: case 1693: case 1694: case 1695: return 7;
				case 1696: case 1697: case 1698: case 1699: case 1700: case 1701: case 1702: case 1703: case 1704: case 1705: case 1706: case 1707: case 1708: case 1709: case 1710: case 1711: case 1712: case 1713: case 1714: case 1715: case 1716: case 1717: case 1718: case 1719: case 1720: case 1721: case 1722: case 1723: case 1724: case 1725: case 1726: case 1727: return 8;
				default: return 9;
			}
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 1520: case 1776: case 1521: case 1777: case 1522: case 1778: case 1523: case 1779: case 1524: case 1780: case 1525: case 1781: case 1526: case 1782: case 1527: case 1783: case 1528: case 1784: case 1529: case 1785: case 1530: case 1786: case 1531: case 1787: case 1532: case 1788: case 1533: case 1789: case 1534: case 1790: case 1535: case 1791: case 1552: case 1808: case 1553: case 1809: case 1554: case 1810: case 1555: case 1811: case 1556: case 1812: case 1557: case 1813: case 1558: case 1814: case 1559: case 1815: case 1560: case 1816: case 1561: case 1817: case 1562: case 1818: case 1563: case 1819: case 1564: case 1820: case 1565: case 1821: case 1566: case 1822: case 1567: case 1823: case 1584: case 1840: case 1585: case 1841: case 1586: case 1842: case 1587: case 1843: case 1588: case 1844: case 1589: case 1845: case 1590: case 1846: case 1591: case 1847: case 1592: case 1848: case 1593: case 1849: case 1594: case 1850: case 1595: case 1851: case 1596: case 1852: case 1597: case 1853: case 1598: case 1854: case 1599: case 1855: case 1616: case 1872: case 1617: case 1873: case 1618: case 1874: case 1619: case 1875: case 1620: case 1876: case 1621: case 1877: case 1622: case 1878: case 1623: case 1879: case 1624: case 1880: case 1625: case 1881: case 1626: case 1882: case 1627: case 1883: case 1628: case 1884: case 1629: case 1885: case 1630: case 1886: case 1631: case 1887: case 1648: case 1904: case 1649: case 1905: case 1650: case 1906: case 1651: case 1907: case 1652: case 1908: case 1653: case 1909: case 1654: case 1910: case 1655: case 1911: case 1656: case 1912: case 1657: case 1913: case 1658: case 1914: case 1659: case 1915: case 1660: case 1916: case 1661: case 1917: case 1662: case 1918: case 1663: case 1919: case 1680: case 1936: case 1681: case 1937: case 1682: case 1938: case 1683: case 1939: case 1684: case 1940: case 1685: case 1941: case 1686: case 1942: case 1687: case 1943: case 1688: case 1944: case 1689: case 1945: case 1690: case 1946: case 1691: case 1947: case 1692: case 1948: case 1693: case 1949: case 1694: case 1950: case 1695: case 1456: case 1712: case 1457: case 1713: case 1458: case 1714: case 1459: case 1715: case 1460: case 1716: case 1461: case 1717: case 1462: case 1718: case 1463: case 1719: case 1464: case 1720: case 1465: case 1721: case 1466: case 1722: case 1467: case 1723: case 1468: case 1724: case 1469: case 1725: case 1470: case 1726: case 1471: case 1727: case 1488: case 1744: case 1489: case 1745: case 1490: case 1746: case 1491: case 1747: case 1492: case 1748: case 1493: case 1749: case 1494: case 1750: case 1495: case 1751: case 1496: case 1752: case 1497: case 1753: case 1498: case 1754: case 1499: case 1755: case 1500: case 1756: case 1501: case 1757: case 1502: case 1758: case 1503: case 1759: case 1951: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 1513: case 1769: case 1514: case 1770: case 1515: case 1771: case 1516: case 1772: case 1517: case 1773: case 1518: case 1774: case 1519: case 1775: case 1528: case 1784: case 1529: case 1785: case 1530: case 1786: case 1531: case 1787: case 1532: case 1788: case 1533: case 1789: case 1534: case 1790: case 1535: case 1791: case 1544: case 1800: case 1545: case 1801: case 1546: case 1802: case 1547: case 1803: case 1548: case 1804: case 1549: case 1805: case 1550: case 1806: case 1551: case 1807: case 1560: case 1816: case 1561: case 1817: case 1562: case 1818: case 1563: case 1819: case 1564: case 1820: case 1565: case 1821: case 1566: case 1822: case 1567: case 1823: case 1576: case 1832: case 1577: case 1833: case 1578: case 1834: case 1579: case 1835: case 1580: case 1836: case 1581: case 1837: case 1582: case 1838: case 1583: case 1839: case 1592: case 1848: case 1593: case 1849: case 1594: case 1850: case 1595: case 1851: case 1596: case 1852: case 1597: case 1853: case 1598: case 1854: case 1599: case 1855: case 1608: case 1864: case 1609: case 1865: case 1610: case 1866: case 1611: case 1867: case 1612: case 1868: case 1613: case 1869: case 1614: case 1870: case 1615: case 1871: case 1624: case 1880: case 1625: case 1881: case 1626: case 1882: case 1627: case 1883: case 1628: case 1884: case 1629: case 1885: case 1630: case 1886: case 1631: case 1887: case 1640: case 1896: case 1641: case 1897: case 1642: case 1898: case 1643: case 1899: case 1644: case 1900: case 1645: case 1901: case 1646: case 1902: case 1647: case 1903: case 1656: case 1912: case 1657: case 1913: case 1658: case 1914: case 1659: case 1915: case 1660: case 1916: case 1661: case 1917: case 1662: case 1918: case 1663: case 1919: case 1672: case 1928: case 1673: case 1929: case 1674: case 1930: case 1675: case 1931: case 1676: case 1932: case 1677: case 1933: case 1678: case 1934: case 1679: case 1935: case 1688: case 1944: case 1689: case 1945: case 1690: case 1946: case 1691: case 1947: case 1692: case 1948: case 1693: case 1949: case 1694: case 1950: case 1695: case 1448: case 1704: case 1449: case 1705: case 1450: case 1706: case 1451: case 1707: case 1452: case 1708: case 1453: case 1709: case 1454: case 1710: case 1455: case 1711: case 1464: case 1720: case 1465: case 1721: case 1466: case 1722: case 1467: case 1723: case 1468: case 1724: case 1469: case 1725: case 1470: case 1726: case 1471: case 1727: case 1480: case 1736: case 1481: case 1737: case 1482: case 1738: case 1483: case 1739: case 1484: case 1740: case 1485: case 1741: case 1486: case 1742: case 1487: case 1743: case 1496: case 1752: case 1497: case 1753: case 1498: case 1754: case 1499: case 1755: case 1500: case 1756: case 1501: case 1757: case 1502: case 1758: case 1503: case 1759: case 1512: case 1768: case 1951: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 1516: case 1772: case 1517: case 1773: case 1518: case 1774: case 1519: case 1775: case 1524: case 1780: case 1525: case 1781: case 1526: case 1782: case 1527: case 1783: case 1532: case 1788: case 1533: case 1789: case 1534: case 1790: case 1535: case 1791: case 1540: case 1796: case 1541: case 1797: case 1542: case 1798: case 1543: case 1799: case 1548: case 1804: case 1549: case 1805: case 1550: case 1806: case 1551: case 1807: case 1556: case 1812: case 1557: case 1813: case 1558: case 1814: case 1559: case 1815: case 1564: case 1820: case 1565: case 1821: case 1566: case 1822: case 1567: case 1823: case 1572: case 1828: case 1573: case 1829: case 1574: case 1830: case 1575: case 1831: case 1580: case 1836: case 1581: case 1837: case 1582: case 1838: case 1583: case 1839: case 1588: case 1844: case 1589: case 1845: case 1590: case 1846: case 1591: case 1847: case 1596: case 1852: case 1597: case 1853: case 1598: case 1854: case 1599: case 1855: case 1604: case 1860: case 1605: case 1861: case 1606: case 1862: case 1607: case 1863: case 1612: case 1868: case 1613: case 1869: case 1614: case 1870: case 1615: case 1871: case 1620: case 1876: case 1621: case 1877: case 1622: case 1878: case 1623: case 1879: case 1628: case 1884: case 1629: case 1885: case 1630: case 1886: case 1631: case 1887: case 1636: case 1892: case 1637: case 1893: case 1638: case 1894: case 1639: case 1895: case 1644: case 1900: case 1645: case 1901: case 1646: case 1902: case 1647: case 1903: case 1652: case 1908: case 1653: case 1909: case 1654: case 1910: case 1655: case 1911: case 1660: case 1916: case 1661: case 1917: case 1662: case 1918: case 1663: case 1919: case 1668: case 1924: case 1669: case 1925: case 1670: case 1926: case 1671: case 1927: case 1676: case 1932: case 1677: case 1933: case 1678: case 1934: case 1679: case 1935: case 1684: case 1940: case 1685: case 1941: case 1686: case 1942: case 1687: case 1943: case 1692: case 1948: case 1693: case 1949: case 1694: case 1950: case 1695: case 1444: case 1700: case 1445: case 1701: case 1446: case 1702: case 1447: case 1703: case 1452: case 1708: case 1453: case 1709: case 1454: case 1710: case 1455: case 1711: case 1460: case 1716: case 1461: case 1717: case 1462: case 1718: case 1463: case 1719: case 1468: case 1724: case 1469: case 1725: case 1470: case 1726: case 1471: case 1727: case 1476: case 1732: case 1477: case 1733: case 1478: case 1734: case 1479: case 1735: case 1484: case 1740: case 1485: case 1741: case 1486: case 1742: case 1487: case 1743: case 1492: case 1748: case 1493: case 1749: case 1494: case 1750: case 1495: case 1751: case 1500: case 1756: case 1501: case 1757: case 1502: case 1758: case 1503: case 1759: case 1508: case 1764: case 1509: case 1765: case 1510: case 1766: case 1511: case 1767: case 1951: return false;
				default: return true;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 1514: case 1770: case 1515: case 1771: case 1518: case 1774: case 1519: case 1775: case 1522: case 1778: case 1523: case 1779: case 1526: case 1782: case 1527: case 1783: case 1530: case 1786: case 1531: case 1787: case 1534: case 1790: case 1535: case 1791: case 1538: case 1794: case 1539: case 1795: case 1542: case 1798: case 1543: case 1799: case 1546: case 1802: case 1547: case 1803: case 1550: case 1806: case 1551: case 1807: case 1554: case 1810: case 1555: case 1811: case 1558: case 1814: case 1559: case 1815: case 1562: case 1818: case 1563: case 1819: case 1566: case 1822: case 1567: case 1823: case 1570: case 1826: case 1571: case 1827: case 1574: case 1830: case 1575: case 1831: case 1578: case 1834: case 1579: case 1835: case 1582: case 1838: case 1583: case 1839: case 1586: case 1842: case 1587: case 1843: case 1590: case 1846: case 1591: case 1847: case 1594: case 1850: case 1595: case 1851: case 1598: case 1854: case 1599: case 1855: case 1602: case 1858: case 1603: case 1859: case 1606: case 1862: case 1607: case 1863: case 1610: case 1866: case 1611: case 1867: case 1614: case 1870: case 1615: case 1871: case 1618: case 1874: case 1619: case 1875: case 1622: case 1878: case 1623: case 1879: case 1626: case 1882: case 1627: case 1883: case 1630: case 1886: case 1631: case 1887: case 1634: case 1890: case 1635: case 1891: case 1638: case 1894: case 1639: case 1895: case 1642: case 1898: case 1643: case 1899: case 1646: case 1902: case 1647: case 1903: case 1650: case 1906: case 1651: case 1907: case 1654: case 1910: case 1655: case 1911: case 1658: case 1914: case 1659: case 1915: case 1662: case 1918: case 1663: case 1919: case 1666: case 1922: case 1667: case 1923: case 1670: case 1926: case 1671: case 1927: case 1674: case 1930: case 1675: case 1931: case 1678: case 1934: case 1679: case 1935: case 1682: case 1938: case 1683: case 1939: case 1686: case 1942: case 1687: case 1943: case 1690: case 1946: case 1691: case 1947: case 1694: case 1950: case 1695: case 1442: case 1698: case 1443: case 1699: case 1446: case 1702: case 1447: case 1703: case 1450: case 1706: case 1451: case 1707: case 1454: case 1710: case 1455: case 1711: case 1458: case 1714: case 1459: case 1715: case 1462: case 1718: case 1463: case 1719: case 1466: case 1722: case 1467: case 1723: case 1470: case 1726: case 1471: case 1727: case 1474: case 1730: case 1475: case 1731: case 1478: case 1734: case 1479: case 1735: case 1482: case 1738: case 1483: case 1739: case 1486: case 1742: case 1487: case 1743: case 1490: case 1746: case 1491: case 1747: case 1494: case 1750: case 1495: case 1751: case 1498: case 1754: case 1499: case 1755: case 1502: case 1758: case 1503: case 1759: case 1506: case 1762: case 1507: case 1763: case 1510: case 1766: case 1511: case 1767: case 1951: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 1513: case 1769: case 1515: case 1771: case 1517: case 1773: case 1519: case 1775: case 1521: case 1777: case 1523: case 1779: case 1525: case 1781: case 1527: case 1783: case 1529: case 1785: case 1531: case 1787: case 1533: case 1789: case 1535: case 1791: case 1537: case 1793: case 1539: case 1795: case 1541: case 1797: case 1543: case 1799: case 1545: case 1801: case 1547: case 1803: case 1549: case 1805: case 1551: case 1807: case 1553: case 1809: case 1555: case 1811: case 1557: case 1813: case 1559: case 1815: case 1561: case 1817: case 1563: case 1819: case 1565: case 1821: case 1567: case 1823: case 1569: case 1825: case 1571: case 1827: case 1573: case 1829: case 1575: case 1831: case 1577: case 1833: case 1579: case 1835: case 1581: case 1837: case 1583: case 1839: case 1585: case 1841: case 1587: case 1843: case 1589: case 1845: case 1591: case 1847: case 1593: case 1849: case 1595: case 1851: case 1597: case 1853: case 1599: case 1855: case 1601: case 1857: case 1603: case 1859: case 1605: case 1861: case 1607: case 1863: case 1609: case 1865: case 1611: case 1867: case 1613: case 1869: case 1615: case 1871: case 1617: case 1873: case 1619: case 1875: case 1621: case 1877: case 1623: case 1879: case 1625: case 1881: case 1627: case 1883: case 1629: case 1885: case 1631: case 1887: case 1633: case 1889: case 1635: case 1891: case 1637: case 1893: case 1639: case 1895: case 1641: case 1897: case 1643: case 1899: case 1645: case 1901: case 1647: case 1903: case 1649: case 1905: case 1651: case 1907: case 1653: case 1909: case 1655: case 1911: case 1657: case 1913: case 1659: case 1915: case 1661: case 1917: case 1663: case 1919: case 1665: case 1921: case 1667: case 1923: case 1669: case 1925: case 1671: case 1927: case 1673: case 1929: case 1675: case 1931: case 1677: case 1933: case 1679: case 1935: case 1681: case 1937: case 1683: case 1939: case 1685: case 1941: case 1687: case 1943: case 1689: case 1945: case 1691: case 1947: case 1693: case 1949: case 1695: case 1441: case 1697: case 1443: case 1699: case 1445: case 1701: case 1447: case 1703: case 1449: case 1705: case 1451: case 1707: case 1453: case 1709: case 1455: case 1711: case 1457: case 1713: case 1459: case 1715: case 1461: case 1717: case 1463: case 1719: case 1465: case 1721: case 1467: case 1723: case 1469: case 1725: case 1471: case 1727: case 1473: case 1729: case 1475: case 1731: case 1477: case 1733: case 1479: case 1735: case 1481: case 1737: case 1483: case 1739: case 1485: case 1741: case 1487: case 1743: case 1489: case 1745: case 1491: case 1747: case 1493: case 1749: case 1495: case 1751: case 1497: case 1753: case 1499: case 1755: case 1501: case 1757: case 1503: case 1759: case 1505: case 1761: case 1507: case 1763: case 1509: case 1765: case 1511: case 1767: case 1951: return false;
				default: return true;
			}
		}
	}
	namespace FireCoral
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9537: return false;
				default: return true;
			}
		}
	}
	namespace FireCoralBlock
	{
	}
	namespace FireCoralFan
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9557: return false;
				default: return true;
			}
		}
	}
	namespace FireCoralWallFan
	{
		short FireCoralWallFan()
		{
			return 9624;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9628: case 9629: return eBlockFace::BLOCK_FACE_XM;
				case 9630: case 9631: return eBlockFace::BLOCK_FACE_XP;
				case 9624: case 9625: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9627: case 9625: case 9629: case 9631: return false;
				default: return true;
			}
		}
	}
	namespace FletchingTable
	{
	}
	namespace FlowerPot
	{
	}
	namespace FrostedIce
	{
		short FrostedIce()
		{
			return 9249;
		}
		unsigned char Age(short ID)
		{
			switch (ID)
			{
				case 9249: return 0;
				case 9250: return 1;
				case 9251: return 2;
				default: return 3;
			}
		}
	}
	namespace Furnace
	{
		short Furnace()
		{
			return 3374;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 3377: case 3378: return eBlockFace::BLOCK_FACE_XM;
				case 3379: case 3380: return eBlockFace::BLOCK_FACE_XP;
				case 3373: case 3374: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Lit(short ID)
		{
			switch (ID)
			{
				case 3374: case 3376: case 3378: case 3380: return false;
				default: return true;
			}
		}
	}
	namespace GildedBlackstone
	{
	}
	namespace Glass
	{
	}
	namespace GlassPane
	{
		short GlassPane()
		{
			return 4762;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 4761: case 4750: case 4754: case 4758: case 4747: case 4751: case 4755: case 4759: case 4748: case 4752: case 4756: case 4760: case 4749: case 4753: case 4757: case 4762: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 4761: case 4742: case 4746: case 4758: case 4739: case 4743: case 4755: case 4759: case 4740: case 4744: case 4756: case 4760: case 4741: case 4745: case 4757: case 4762: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 4761: case 4738: case 4746: case 4754: case 4735: case 4743: case 4751: case 4759: case 4736: case 4744: case 4752: case 4760: case 4737: case 4745: case 4753: case 4762: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 4761: case 4734: case 4738: case 4742: case 4746: case 4750: case 4754: case 4758: case 4733: case 4737: case 4741: case 4745: case 4749: case 4753: case 4757: case 4762: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 4734: case 4738: case 4742: case 4746: case 4750: case 4754: case 4758: case 4732: case 4736: case 4740: case 4744: case 4748: case 4752: case 4756: case 4760: case 4762: return false;
				default: return true;
			}
		}
	}
	namespace Glowstone
	{
	}
	namespace GoldBlock
	{
	}
	namespace GoldOre
	{
	}
	namespace Granite
	{
	}
	namespace GraniteSlab
	{
		short GraniteSlab()
		{
			return 10840;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 10839: case 10840: return Type::Bottom;
				case 10842: case 10841: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10838: case 10842: case 10840: return false;
				default: return true;
			}
		}
	}
	namespace GraniteStairs
	{
		short GraniteStairs()
		{
			return 10400;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 10429: case 10430: case 10431: case 10432: case 10433: case 10434: case 10435: case 10436: case 10437: case 10438: case 10439: case 10440: case 10441: case 10442: case 10443: case 10444: case 10445: case 10446: case 10447: case 10448: return eBlockFace::BLOCK_FACE_XM;
				case 10468: case 10449: case 10450: case 10451: case 10452: case 10453: case 10454: case 10455: case 10456: case 10457: case 10458: case 10459: case 10460: case 10461: case 10462: case 10463: case 10464: case 10465: case 10466: case 10467: return eBlockFace::BLOCK_FACE_XP;
				case 10389: case 10390: case 10391: case 10392: case 10393: case 10394: case 10395: case 10396: case 10397: case 10398: case 10399: case 10400: case 10401: case 10402: case 10403: case 10404: case 10405: case 10406: case 10407: case 10408: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 10468: case 10399: case 10400: case 10401: case 10402: case 10403: case 10404: case 10405: case 10406: case 10407: case 10408: case 10419: case 10420: case 10421: case 10422: case 10423: case 10424: case 10425: case 10426: case 10427: case 10428: case 10439: case 10440: case 10441: case 10442: case 10443: case 10444: case 10445: case 10446: case 10447: case 10448: case 10459: case 10460: case 10461: case 10462: case 10463: case 10464: case 10465: case 10466: case 10467: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 10391: case 10392: case 10401: case 10402: case 10411: case 10412: case 10421: case 10422: case 10431: case 10432: case 10441: case 10442: case 10451: case 10452: case 10461: case 10462: return Shape::InnerLeft;
				case 10393: case 10394: case 10403: case 10404: case 10413: case 10414: case 10423: case 10424: case 10433: case 10434: case 10443: case 10444: case 10453: case 10454: case 10463: case 10464: return Shape::InnerRight;
				case 10395: case 10396: case 10405: case 10406: case 10415: case 10416: case 10425: case 10426: case 10435: case 10436: case 10445: case 10446: case 10455: case 10456: case 10465: case 10466: return Shape::OuterLeft;
				case 10468: case 10397: case 10398: case 10407: case 10408: case 10417: case 10418: case 10427: case 10428: case 10437: case 10438: case 10447: case 10448: case 10457: case 10458: case 10467: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10468: case 10390: case 10392: case 10394: case 10396: case 10398: case 10400: case 10402: case 10404: case 10406: case 10408: case 10410: case 10412: case 10414: case 10416: case 10418: case 10420: case 10422: case 10424: case 10426: case 10428: case 10430: case 10432: case 10434: case 10436: case 10438: case 10440: case 10442: case 10444: case 10446: case 10448: case 10450: case 10452: case 10454: case 10456: case 10458: case 10460: case 10462: case 10464: case 10466: return false;
				default: return true;
			}
		}
	}
	namespace GraniteWall
	{
		short GraniteWall()
		{
			return 12166;
		}
		enum East East(short ID)
		{
			switch (ID)
			{
				case 12272: case 12276: case 12280: case 12284: case 12288: case 12292: case 12296: case 12300: case 12304: case 12308: case 12312: case 12316: case 12320: case 12324: case 12328: case 12332: case 12336: case 12340: case 12344: case 12348: case 12352: case 12356: case 12360: case 12364: case 12368: case 12372: case 12376: case 12273: case 12277: case 12281: case 12285: case 12289: case 12293: case 12297: case 12301: case 12305: case 12309: case 12313: case 12317: case 12321: case 12325: case 12329: case 12333: case 12337: case 12341: case 12345: case 12349: case 12353: case 12357: case 12361: case 12365: case 12369: case 12373: case 12377: case 12274: case 12278: case 12282: case 12286: case 12290: case 12294: case 12298: case 12302: case 12306: case 12310: case 12314: case 12318: case 12322: case 12326: case 12330: case 12334: case 12338: case 12342: case 12346: case 12350: case 12354: case 12358: case 12362: case 12366: case 12370: case 12374: case 12378: case 12271: case 12275: case 12279: case 12283: case 12287: case 12291: case 12295: case 12299: case 12303: case 12307: case 12311: case 12315: case 12319: case 12323: case 12327: case 12331: case 12335: case 12339: case 12343: case 12347: case 12351: case 12355: case 12359: case 12363: case 12367: case 12371: case 12375: return East::Low;
				case 12164: case 12168: case 12172: case 12176: case 12180: case 12184: case 12188: case 12192: case 12196: case 12200: case 12204: case 12208: case 12212: case 12216: case 12220: case 12224: case 12228: case 12232: case 12236: case 12240: case 12244: case 12248: case 12252: case 12256: case 12260: case 12264: case 12268: case 12165: case 12169: case 12173: case 12177: case 12181: case 12185: case 12189: case 12193: case 12197: case 12201: case 12205: case 12209: case 12213: case 12217: case 12221: case 12225: case 12229: case 12233: case 12237: case 12241: case 12245: case 12249: case 12253: case 12257: case 12261: case 12265: case 12269: case 12166: case 12170: case 12174: case 12178: case 12182: case 12186: case 12190: case 12194: case 12198: case 12202: case 12206: case 12210: case 12214: case 12218: case 12222: case 12226: case 12230: case 12234: case 12238: case 12242: case 12246: case 12250: case 12254: case 12258: case 12262: case 12266: case 12270: case 12163: case 12167: case 12171: case 12175: case 12179: case 12183: case 12187: case 12191: case 12195: case 12199: case 12203: case 12207: case 12211: case 12215: case 12219: case 12223: case 12227: case 12231: case 12235: case 12239: case 12243: case 12247: case 12251: case 12255: case 12259: case 12263: case 12267: return East::None;
				default: return East::Tall;
			}
		}
		enum North North(short ID)
		{
			switch (ID)
			{
				case 12200: case 12204: case 12208: case 12212: case 12216: case 12220: case 12224: case 12228: case 12232: case 12308: case 12312: case 12316: case 12320: case 12324: case 12328: case 12332: case 12336: case 12340: case 12416: case 12420: case 12424: case 12428: case 12432: case 12436: case 12440: case 12444: case 12448: case 12201: case 12205: case 12209: case 12213: case 12217: case 12221: case 12225: case 12229: case 12233: case 12309: case 12313: case 12317: case 12321: case 12325: case 12329: case 12333: case 12337: case 12341: case 12417: case 12421: case 12425: case 12429: case 12433: case 12437: case 12441: case 12445: case 12449: case 12202: case 12206: case 12210: case 12214: case 12218: case 12222: case 12226: case 12230: case 12234: case 12310: case 12314: case 12318: case 12322: case 12326: case 12330: case 12334: case 12338: case 12342: case 12418: case 12422: case 12426: case 12430: case 12434: case 12438: case 12442: case 12446: case 12450: case 12199: case 12203: case 12207: case 12211: case 12215: case 12219: case 12223: case 12227: case 12231: case 12307: case 12311: case 12315: case 12319: case 12323: case 12327: case 12331: case 12335: case 12339: case 12415: case 12419: case 12423: case 12427: case 12431: case 12435: case 12439: case 12443: case 12447: return North::Low;
				case 12164: case 12168: case 12172: case 12176: case 12180: case 12184: case 12188: case 12192: case 12196: case 12272: case 12276: case 12280: case 12284: case 12288: case 12292: case 12296: case 12300: case 12304: case 12380: case 12384: case 12388: case 12392: case 12396: case 12400: case 12404: case 12408: case 12412: case 12165: case 12169: case 12173: case 12177: case 12181: case 12185: case 12189: case 12193: case 12197: case 12273: case 12277: case 12281: case 12285: case 12289: case 12293: case 12297: case 12301: case 12305: case 12381: case 12385: case 12389: case 12393: case 12397: case 12401: case 12405: case 12409: case 12413: case 12166: case 12170: case 12174: case 12178: case 12182: case 12186: case 12190: case 12194: case 12198: case 12274: case 12278: case 12282: case 12286: case 12290: case 12294: case 12298: case 12302: case 12306: case 12382: case 12386: case 12390: case 12394: case 12398: case 12402: case 12406: case 12410: case 12414: case 12163: case 12167: case 12171: case 12175: case 12179: case 12183: case 12187: case 12191: case 12195: case 12271: case 12275: case 12279: case 12283: case 12287: case 12291: case 12295: case 12299: case 12303: case 12379: case 12383: case 12387: case 12391: case 12395: case 12399: case 12403: case 12407: case 12411: return North::None;
				default: return North::Tall;
			}
		}
		enum South South(short ID)
		{
			switch (ID)
			{
				case 12176: case 12180: case 12184: case 12212: case 12216: case 12220: case 12248: case 12252: case 12256: case 12284: case 12288: case 12292: case 12320: case 12324: case 12328: case 12356: case 12360: case 12364: case 12392: case 12396: case 12400: case 12428: case 12432: case 12436: case 12464: case 12468: case 12472: case 12177: case 12181: case 12185: case 12213: case 12217: case 12221: case 12249: case 12253: case 12257: case 12285: case 12289: case 12293: case 12321: case 12325: case 12329: case 12357: case 12361: case 12365: case 12393: case 12397: case 12401: case 12429: case 12433: case 12437: case 12465: case 12469: case 12473: case 12178: case 12182: case 12186: case 12214: case 12218: case 12222: case 12250: case 12254: case 12258: case 12286: case 12290: case 12294: case 12322: case 12326: case 12330: case 12358: case 12362: case 12366: case 12394: case 12398: case 12402: case 12430: case 12434: case 12438: case 12466: case 12470: case 12474: case 12175: case 12179: case 12183: case 12211: case 12215: case 12219: case 12247: case 12251: case 12255: case 12283: case 12287: case 12291: case 12319: case 12323: case 12327: case 12355: case 12359: case 12363: case 12391: case 12395: case 12399: case 12427: case 12431: case 12435: case 12463: case 12467: case 12471: return South::Low;
				case 12164: case 12168: case 12172: case 12200: case 12204: case 12208: case 12236: case 12240: case 12244: case 12272: case 12276: case 12280: case 12308: case 12312: case 12316: case 12344: case 12348: case 12352: case 12380: case 12384: case 12388: case 12416: case 12420: case 12424: case 12452: case 12456: case 12460: case 12165: case 12169: case 12173: case 12201: case 12205: case 12209: case 12237: case 12241: case 12245: case 12273: case 12277: case 12281: case 12309: case 12313: case 12317: case 12345: case 12349: case 12353: case 12381: case 12385: case 12389: case 12417: case 12421: case 12425: case 12453: case 12457: case 12461: case 12166: case 12170: case 12174: case 12202: case 12206: case 12210: case 12238: case 12242: case 12246: case 12274: case 12278: case 12282: case 12310: case 12314: case 12318: case 12346: case 12350: case 12354: case 12382: case 12386: case 12390: case 12418: case 12422: case 12426: case 12454: case 12458: case 12462: case 12163: case 12167: case 12171: case 12199: case 12203: case 12207: case 12235: case 12239: case 12243: case 12271: case 12275: case 12279: case 12307: case 12311: case 12315: case 12343: case 12347: case 12351: case 12379: case 12383: case 12387: case 12415: case 12419: case 12423: case 12451: case 12455: case 12459: return South::None;
				default: return South::Tall;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 12172: case 12184: case 12196: case 12208: case 12220: case 12232: case 12244: case 12256: case 12268: case 12280: case 12292: case 12304: case 12316: case 12328: case 12340: case 12352: case 12364: case 12376: case 12388: case 12400: case 12412: case 12424: case 12436: case 12448: case 12460: case 12472: case 12484: case 12169: case 12173: case 12181: case 12185: case 12193: case 12197: case 12205: case 12209: case 12217: case 12221: case 12229: case 12233: case 12241: case 12245: case 12253: case 12257: case 12265: case 12269: case 12277: case 12281: case 12289: case 12293: case 12301: case 12305: case 12313: case 12317: case 12325: case 12329: case 12337: case 12341: case 12349: case 12353: case 12361: case 12365: case 12373: case 12377: case 12385: case 12389: case 12397: case 12401: case 12409: case 12413: case 12421: case 12425: case 12433: case 12437: case 12445: case 12449: case 12457: case 12461: case 12469: case 12473: case 12481: case 12485: case 12170: case 12174: case 12182: case 12186: case 12194: case 12198: case 12206: case 12210: case 12218: case 12222: case 12230: case 12234: case 12242: case 12246: case 12254: case 12258: case 12266: case 12270: case 12278: case 12282: case 12290: case 12294: case 12302: case 12306: case 12314: case 12318: case 12326: case 12330: case 12338: case 12342: case 12350: case 12354: case 12362: case 12366: case 12374: case 12378: case 12386: case 12390: case 12398: case 12402: case 12410: case 12414: case 12422: case 12426: case 12434: case 12438: case 12446: case 12450: case 12458: case 12462: case 12470: case 12474: case 12482: case 12486: case 12171: case 12183: case 12195: case 12207: case 12219: case 12231: case 12243: case 12255: case 12267: case 12279: case 12291: case 12303: case 12315: case 12327: case 12339: case 12351: case 12363: case 12375: case 12387: case 12399: case 12411: case 12423: case 12435: case 12447: case 12459: case 12471: case 12483: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 12168: case 12172: case 12180: case 12184: case 12192: case 12196: case 12204: case 12208: case 12216: case 12220: case 12228: case 12232: case 12240: case 12244: case 12252: case 12256: case 12264: case 12268: case 12276: case 12280: case 12288: case 12292: case 12300: case 12304: case 12312: case 12316: case 12324: case 12328: case 12336: case 12340: case 12348: case 12352: case 12360: case 12364: case 12372: case 12376: case 12384: case 12388: case 12396: case 12400: case 12408: case 12412: case 12420: case 12424: case 12432: case 12436: case 12444: case 12448: case 12456: case 12460: case 12468: case 12472: case 12480: case 12484: case 12173: case 12185: case 12197: case 12209: case 12221: case 12233: case 12245: case 12257: case 12269: case 12281: case 12293: case 12305: case 12317: case 12329: case 12341: case 12353: case 12365: case 12377: case 12389: case 12401: case 12413: case 12425: case 12437: case 12449: case 12461: case 12473: case 12485: case 12166: case 12174: case 12178: case 12186: case 12190: case 12198: case 12202: case 12210: case 12214: case 12222: case 12226: case 12234: case 12238: case 12246: case 12250: case 12258: case 12262: case 12270: case 12274: case 12282: case 12286: case 12294: case 12298: case 12306: case 12310: case 12318: case 12322: case 12330: case 12334: case 12342: case 12346: case 12354: case 12358: case 12366: case 12370: case 12378: case 12382: case 12390: case 12394: case 12402: case 12406: case 12414: case 12418: case 12426: case 12430: case 12438: case 12442: case 12450: case 12454: case 12462: case 12466: case 12474: case 12478: case 12486: case 12167: case 12179: case 12191: case 12203: case 12215: case 12227: case 12239: case 12251: case 12263: case 12275: case 12287: case 12299: case 12311: case 12323: case 12335: case 12347: case 12359: case 12371: case 12383: case 12395: case 12407: case 12419: case 12431: case 12443: case 12455: case 12467: case 12479: return false;
				default: return true;
			}
		}
		enum West West(short ID)
		{
			switch (ID)
			{
				case 12164: case 12176: case 12188: case 12200: case 12212: case 12224: case 12236: case 12248: case 12260: case 12272: case 12284: case 12296: case 12308: case 12320: case 12332: case 12344: case 12356: case 12368: case 12380: case 12392: case 12404: case 12416: case 12428: case 12440: case 12452: case 12464: case 12476: case 12173: case 12185: case 12197: case 12209: case 12221: case 12233: case 12245: case 12257: case 12269: case 12281: case 12293: case 12305: case 12317: case 12329: case 12341: case 12353: case 12365: case 12377: case 12389: case 12401: case 12413: case 12425: case 12437: case 12449: case 12461: case 12473: case 12485: case 12170: case 12182: case 12194: case 12206: case 12218: case 12230: case 12242: case 12254: case 12266: case 12278: case 12290: case 12302: case 12314: case 12326: case 12338: case 12350: case 12362: case 12374: case 12386: case 12398: case 12410: case 12422: case 12434: case 12446: case 12458: case 12470: case 12482: case 12167: case 12179: case 12191: case 12203: case 12215: case 12227: case 12239: case 12251: case 12263: case 12275: case 12287: case 12299: case 12311: case 12323: case 12335: case 12347: case 12359: case 12371: case 12383: case 12395: case 12407: case 12419: case 12431: case 12443: case 12455: case 12467: case 12479: return West::Low;
				case 12172: case 12184: case 12196: case 12208: case 12220: case 12232: case 12244: case 12256: case 12268: case 12280: case 12292: case 12304: case 12316: case 12328: case 12340: case 12352: case 12364: case 12376: case 12388: case 12400: case 12412: case 12424: case 12436: case 12448: case 12460: case 12472: case 12484: case 12169: case 12181: case 12193: case 12205: case 12217: case 12229: case 12241: case 12253: case 12265: case 12277: case 12289: case 12301: case 12313: case 12325: case 12337: case 12349: case 12361: case 12373: case 12385: case 12397: case 12409: case 12421: case 12433: case 12445: case 12457: case 12469: case 12481: case 12166: case 12178: case 12190: case 12202: case 12214: case 12226: case 12238: case 12250: case 12262: case 12274: case 12286: case 12298: case 12310: case 12322: case 12334: case 12346: case 12358: case 12370: case 12382: case 12394: case 12406: case 12418: case 12430: case 12442: case 12454: case 12466: case 12478: case 12163: case 12175: case 12187: case 12199: case 12211: case 12223: case 12235: case 12247: case 12259: case 12271: case 12283: case 12295: case 12307: case 12319: case 12331: case 12343: case 12355: case 12367: case 12379: case 12391: case 12403: case 12415: case 12427: case 12439: case 12451: case 12463: case 12475: return West::None;
				default: return West::Tall;
			}
		}
	}
	namespace Grass
	{
	}
	namespace GrassBlock
	{
		short GrassBlock()
		{
			return 9;
		}
		bool Snowy(short ID)
		{
			switch (ID)
			{
				case 9: return false;
				default: return true;
			}
		}
	}
	namespace GrassPath
	{
	}
	namespace Gravel
	{
	}
	namespace GrayBanner
	{
		short GrayBanner()
		{
			return 8009;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 8009: return 0;
				case 8010: return 1;
				case 8019: return 10;
				case 8020: return 11;
				case 8021: return 12;
				case 8022: return 13;
				case 8023: return 14;
				case 8024: return 15;
				case 8011: return 2;
				case 8012: return 3;
				case 8013: return 4;
				case 8014: return 5;
				case 8015: return 6;
				case 8016: return 7;
				case 8017: return 8;
				default: return 9;
			}
		}
	}
	namespace GrayBed
	{
		short GrayBed()
		{
			return 1164;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1171: case 1172: case 1169: case 1170: return eBlockFace::BLOCK_FACE_XM;
				case 1175: case 1173: case 1174: case 1176: return eBlockFace::BLOCK_FACE_XP;
				case 1164: case 1161: case 1162: case 1163: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Occupied(short ID)
		{
			switch (ID)
			{
				case 1167: case 1171: case 1175: case 1164: case 1168: case 1172: case 1163: case 1176: return false;
				default: return true;
			}
		}
		enum Part Part(short ID)
		{
			switch (ID)
			{
				case 1164: case 1168: case 1172: case 1162: case 1166: case 1170: case 1174: case 1176: return Part::Foot;
				default: return Part::Head;
			}
		}
	}
	namespace GrayCarpet
	{
	}
	namespace GrayConcrete
	{
	}
	namespace GrayConcretePowder
	{
	}
	namespace GrayGlazedTerracotta
	{
		short GrayGlazedTerracotta()
		{
			return 9402;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9404: return eBlockFace::BLOCK_FACE_XM;
				case 9405: return eBlockFace::BLOCK_FACE_XP;
				case 9402: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace GrayShulkerBox
	{
		short GrayShulkerBox()
		{
			return 9324;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9323: return eBlockFace::BLOCK_FACE_XM;
				case 9321: return eBlockFace::BLOCK_FACE_XP;
				case 9325: return eBlockFace::BLOCK_FACE_YM;
				case 9324: return eBlockFace::BLOCK_FACE_YP;
				case 9320: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace GrayStainedGlass
	{
	}
	namespace GrayStainedGlassPane
	{
		short GrayStainedGlassPane()
		{
			return 7118;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 7117: case 7106: case 7110: case 7114: case 7103: case 7107: case 7111: case 7115: case 7104: case 7108: case 7112: case 7116: case 7105: case 7109: case 7113: case 7118: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 7117: case 7098: case 7102: case 7114: case 7095: case 7099: case 7111: case 7115: case 7096: case 7100: case 7112: case 7116: case 7097: case 7101: case 7113: case 7118: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 7117: case 7094: case 7102: case 7110: case 7091: case 7099: case 7107: case 7115: case 7092: case 7100: case 7108: case 7116: case 7093: case 7101: case 7109: case 7118: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7117: case 7090: case 7094: case 7098: case 7102: case 7106: case 7110: case 7114: case 7089: case 7093: case 7097: case 7101: case 7105: case 7109: case 7113: case 7118: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 7090: case 7094: case 7098: case 7102: case 7106: case 7110: case 7114: case 7088: case 7092: case 7096: case 7100: case 7104: case 7108: case 7112: case 7116: case 7118: return false;
				default: return true;
			}
		}
	}
	namespace GrayTerracotta
	{
	}
	namespace GrayWallBanner
	{
		short GrayWallBanner()
		{
			return 8181;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8183: return eBlockFace::BLOCK_FACE_XM;
				case 8184: return eBlockFace::BLOCK_FACE_XP;
				case 8181: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace GrayWool
	{
	}
	namespace GreenBanner
	{
		short GreenBanner()
		{
			return 8105;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 8105: return 0;
				case 8106: return 1;
				case 8115: return 10;
				case 8116: return 11;
				case 8117: return 12;
				case 8118: return 13;
				case 8119: return 14;
				case 8120: return 15;
				case 8107: return 2;
				case 8108: return 3;
				case 8109: return 4;
				case 8110: return 5;
				case 8111: return 6;
				case 8112: return 7;
				case 8113: return 8;
				default: return 9;
			}
		}
	}
	namespace GreenBed
	{
		short GreenBed()
		{
			return 1260;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1265: case 1266: case 1267: case 1268: return eBlockFace::BLOCK_FACE_XM;
				case 1269: case 1270: case 1271: case 1272: return eBlockFace::BLOCK_FACE_XP;
				case 1257: case 1258: case 1259: case 1260: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Occupied(short ID)
		{
			switch (ID)
			{
				case 1259: case 1263: case 1267: case 1271: case 1260: case 1264: case 1268: case 1272: return false;
				default: return true;
			}
		}
		enum Part Part(short ID)
		{
			switch (ID)
			{
				case 1258: case 1262: case 1266: case 1270: case 1260: case 1264: case 1268: case 1272: return Part::Foot;
				default: return Part::Head;
			}
		}
	}
	namespace GreenCarpet
	{
	}
	namespace GreenConcrete
	{
	}
	namespace GreenConcretePowder
	{
	}
	namespace GreenGlazedTerracotta
	{
		short GreenGlazedTerracotta()
		{
			return 9426;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9428: return eBlockFace::BLOCK_FACE_XM;
				case 9429: return eBlockFace::BLOCK_FACE_XP;
				case 9426: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace GreenShulkerBox
	{
		short GreenShulkerBox()
		{
			return 9360;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9359: return eBlockFace::BLOCK_FACE_XM;
				case 9357: return eBlockFace::BLOCK_FACE_XP;
				case 9361: return eBlockFace::BLOCK_FACE_YM;
				case 9360: return eBlockFace::BLOCK_FACE_YP;
				case 9356: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace GreenStainedGlass
	{
	}
	namespace GreenStainedGlassPane
	{
		short GreenStainedGlassPane()
		{
			return 7310;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 7303: case 7307: case 7296: case 7300: case 7304: case 7308: case 7297: case 7301: case 7305: case 7309: case 7298: case 7302: case 7306: case 7295: case 7299: case 7310: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 7303: case 7307: case 7288: case 7292: case 7304: case 7308: case 7289: case 7293: case 7305: case 7309: case 7290: case 7294: case 7306: case 7287: case 7291: case 7310: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 7307: case 7284: case 7292: case 7300: case 7308: case 7285: case 7293: case 7301: case 7309: case 7286: case 7294: case 7302: case 7283: case 7291: case 7299: case 7310: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7281: case 7285: case 7289: case 7293: case 7297: case 7301: case 7305: case 7309: case 7282: case 7286: case 7290: case 7294: case 7298: case 7302: case 7306: case 7310: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 7280: case 7284: case 7288: case 7292: case 7296: case 7300: case 7304: case 7308: case 7282: case 7286: case 7290: case 7294: case 7298: case 7302: case 7306: case 7310: return false;
				default: return true;
			}
		}
	}
	namespace GreenTerracotta
	{
	}
	namespace GreenWallBanner
	{
		short GreenWallBanner()
		{
			return 8205;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8207: return eBlockFace::BLOCK_FACE_XM;
				case 8208: return eBlockFace::BLOCK_FACE_XP;
				case 8205: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace GreenWool
	{
	}
	namespace Grindstone
	{
		short Grindstone()
		{
			return 14825;
		}
		enum Face Face(short ID)
		{
			switch (ID)
			{
				case 14830: case 14832: case 14829: case 14831: return Face::Ceiling;
				case 14822: case 14824: case 14821: case 14823: return Face::Floor;
				default: return Face::Wall;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 14823: case 14827: case 14831: return eBlockFace::BLOCK_FACE_XM;
				case 14824: case 14828: case 14832: return eBlockFace::BLOCK_FACE_XP;
				case 14821: case 14825: case 14829: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace HayBale
	{
		short HayBale()
		{
			return 7864;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 7863: return Axis::X;
				case 7864: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace HeavyWeightedPressurePlate
	{
		short HeavyWeightedPressurePlate()
		{
			return 6662;
		}
		unsigned char Power(short ID)
		{
			switch (ID)
			{
				case 6662: return 0;
				case 6663: return 1;
				case 6672: return 10;
				case 6673: return 11;
				case 6674: return 12;
				case 6675: return 13;
				case 6676: return 14;
				case 6677: return 15;
				case 6664: return 2;
				case 6665: return 3;
				case 6666: return 4;
				case 6667: return 5;
				case 6668: return 6;
				case 6669: return 7;
				case 6670: return 8;
				default: return 9;
			}
		}
	}
	namespace HoneyBlock
	{
	}
	namespace HoneycombBlock
	{
	}
	namespace Hopper
	{
		short Hopper()
		{
			return 6728;
		}
		bool Enabled(short ID)
		{
			switch (ID)
			{
				case 6736: case 6737: case 6733: case 6734: case 6735: return false;
				default: return true;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6736: case 6731: return eBlockFace::BLOCK_FACE_XM;
				case 6737: case 6732: return eBlockFace::BLOCK_FACE_XP;
				case 6728: case 6733: return eBlockFace::BLOCK_FACE_YM;
				case 6729: case 6734: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace HornCoral
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9539: return false;
				default: return true;
			}
		}
	}
	namespace HornCoralBlock
	{
	}
	namespace HornCoralFan
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9559: return false;
				default: return true;
			}
		}
	}
	namespace HornCoralWallFan
	{
		short HornCoralWallFan()
		{
			return 9632;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9636: case 9637: return eBlockFace::BLOCK_FACE_XM;
				case 9638: case 9639: return eBlockFace::BLOCK_FACE_XP;
				case 9632: case 9633: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9635: case 9633: case 9637: case 9639: return false;
				default: return true;
			}
		}
	}
	namespace Ice
	{
	}
	namespace InfestedChiseledStoneBricks
	{
	}
	namespace InfestedCobblestone
	{
	}
	namespace InfestedCrackedStoneBricks
	{
	}
	namespace InfestedMossyStoneBricks
	{
	}
	namespace InfestedStone
	{
	}
	namespace InfestedStoneBricks
	{
	}
	namespace IronBars
	{
		short IronBars()
		{
			return 4728;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 4715: case 4719: case 4723: case 4727: case 4716: case 4720: case 4724: case 4713: case 4717: case 4721: case 4725: case 4714: case 4718: case 4722: case 4726: case 4728: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 4707: case 4711: case 4723: case 4727: case 4708: case 4712: case 4724: case 4705: case 4709: case 4721: case 4725: case 4706: case 4710: case 4722: case 4726: case 4728: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 4703: case 4711: case 4719: case 4727: case 4704: case 4712: case 4720: case 4701: case 4709: case 4717: case 4725: case 4702: case 4710: case 4718: case 4726: case 4728: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 4699: case 4703: case 4707: case 4711: case 4715: case 4719: case 4723: case 4727: case 4700: case 4704: case 4708: case 4712: case 4716: case 4720: case 4724: case 4728: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 4700: case 4704: case 4708: case 4712: case 4716: case 4720: case 4724: case 4698: case 4702: case 4706: case 4710: case 4714: case 4718: case 4722: case 4726: case 4728: return false;
				default: return true;
			}
		}
	}
	namespace IronBlock
	{
	}
	namespace IronDoor
	{
		short IronDoor()
		{
			return 3820;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 3847: case 3855: case 3848: case 3856: case 3841: case 3849: case 3842: case 3850: case 3843: case 3851: case 3844: case 3852: case 3845: case 3853: case 3846: case 3854: return eBlockFace::BLOCK_FACE_XM;
				case 3862: case 3870: case 3863: case 3871: case 3864: case 3857: case 3865: case 3858: case 3866: case 3859: case 3867: case 3860: case 3868: case 3861: case 3869: case 3872: return eBlockFace::BLOCK_FACE_XP;
				case 3815: case 3823: case 3816: case 3824: case 3809: case 3817: case 3810: case 3818: case 3811: case 3819: case 3812: case 3820: case 3813: case 3821: case 3814: case 3822: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 3870: case 3823: case 3839: case 3855: case 3871: case 3824: case 3840: case 3856: case 3817: case 3833: case 3849: case 3865: case 3818: case 3834: case 3850: case 3866: case 3819: case 3835: case 3851: case 3867: case 3820: case 3836: case 3852: case 3868: case 3821: case 3837: case 3853: case 3869: case 3822: case 3838: case 3854: case 3872: return Half::Lower;
				default: return Half::Upper;
			}
		}
		enum Hinge Hinge(short ID)
		{
			switch (ID)
			{
				case 3809: case 3817: case 3825: case 3833: case 3841: case 3849: case 3857: case 3865: case 3810: case 3818: case 3826: case 3834: case 3842: case 3850: case 3858: case 3866: case 3811: case 3819: case 3827: case 3835: case 3843: case 3851: case 3859: case 3867: case 3812: case 3820: case 3828: case 3836: case 3844: case 3852: case 3860: case 3868: return Hinge::Left;
				default: return Hinge::Right;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 3815: case 3823: case 3831: case 3839: case 3847: case 3855: case 3863: case 3871: case 3816: case 3824: case 3832: case 3840: case 3848: case 3856: case 3864: case 3811: case 3819: case 3827: case 3835: case 3843: case 3851: case 3859: case 3867: case 3812: case 3820: case 3828: case 3836: case 3844: case 3852: case 3860: case 3868: case 3872: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 3862: case 3870: case 3816: case 3824: case 3832: case 3840: case 3848: case 3856: case 3864: case 3810: case 3818: case 3826: case 3834: case 3842: case 3850: case 3858: case 3866: case 3812: case 3820: case 3828: case 3836: case 3844: case 3852: case 3860: case 3868: case 3814: case 3822: case 3830: case 3838: case 3846: case 3854: case 3872: return false;
				default: return true;
			}
		}
	}
	namespace IronOre
	{
	}
	namespace IronTrapdoor
	{
		short IronTrapdoor()
		{
			return 7552;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 7582: case 7583: case 7584: case 7569: case 7570: case 7571: case 7572: case 7573: case 7574: case 7575: case 7576: case 7577: case 7578: case 7579: case 7580: case 7581: return eBlockFace::BLOCK_FACE_XM;
				case 7597: case 7598: case 7599: case 7585: case 7586: case 7587: case 7588: case 7589: case 7590: case 7591: case 7592: case 7593: case 7594: case 7595: case 7596: case 7600: return eBlockFace::BLOCK_FACE_XP;
				case 7550: case 7551: case 7552: case 7537: case 7538: case 7539: case 7540: case 7541: case 7542: case 7543: case 7544: case 7545: case 7546: case 7547: case 7548: case 7549: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 7597: case 7550: case 7566: case 7582: case 7598: case 7551: case 7567: case 7583: case 7599: case 7552: case 7568: case 7584: case 7545: case 7561: case 7577: case 7593: case 7546: case 7562: case 7578: case 7594: case 7547: case 7563: case 7579: case 7595: case 7548: case 7564: case 7580: case 7596: case 7549: case 7565: case 7581: case 7600: return Half::Bottom;
				default: return Half::Top;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 7597: case 7550: case 7566: case 7582: case 7598: case 7551: case 7567: case 7583: case 7599: case 7552: case 7568: case 7584: case 7541: case 7557: case 7573: case 7589: case 7542: case 7558: case 7574: case 7590: case 7543: case 7559: case 7575: case 7591: case 7544: case 7560: case 7576: case 7592: case 7549: case 7565: case 7581: case 7600: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 7551: case 7567: case 7583: case 7599: case 7552: case 7568: case 7584: case 7539: case 7555: case 7571: case 7587: case 7540: case 7556: case 7572: case 7588: case 7543: case 7559: case 7575: case 7591: case 7544: case 7560: case 7576: case 7592: case 7547: case 7563: case 7579: case 7595: case 7548: case 7564: case 7580: case 7596: case 7600: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7550: case 7566: case 7582: case 7598: case 7552: case 7568: case 7584: case 7538: case 7554: case 7570: case 7586: case 7540: case 7556: case 7572: case 7588: case 7542: case 7558: case 7574: case 7590: case 7544: case 7560: case 7576: case 7592: case 7546: case 7562: case 7578: case 7594: case 7548: case 7564: case 7580: case 7596: case 7600: return false;
				default: return true;
			}
		}
	}
	namespace JackOLantern
	{
		short JackOLantern()
		{
			return 4020;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 4022: return eBlockFace::BLOCK_FACE_XM;
				case 4023: return eBlockFace::BLOCK_FACE_XP;
				case 4020: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace Jigsaw
	{
		short Jigsaw()
		{
			return 15749;
		}
		enum Orientation Orientation(short ID)
		{
			switch (ID)
			{
				case 15739: return Orientation::DownEast;
				case 15740: return Orientation::DownNorth;
				case 15741: return Orientation::DownSouth;
				case 15742: return Orientation::DownWest;
				case 15748: return Orientation::EastUp;
				case 15749: return Orientation::NorthUp;
				case 15750: return Orientation::SouthUp;
				case 15743: return Orientation::UpEast;
				case 15744: return Orientation::UpNorth;
				case 15745: return Orientation::UpSouth;
				case 15746: return Orientation::UpWest;
				default: return Orientation::WestUp;
			}
		}
	}
	namespace Jukebox
	{
		short Jukebox()
		{
			return 3965;
		}
		bool HasRecord(short ID)
		{
			switch (ID)
			{
				case 3965: return false;
				default: return true;
			}
		}
	}
	namespace JungleButton
	{
		short JungleButton()
		{
			return 6427;
		}
		enum Face Face(short ID)
		{
			switch (ID)
			{
				case 6435: case 6439: case 6436: case 6440: case 6437: case 6441: case 6434: case 6438: return Face::Ceiling;
				case 6420: case 6424: case 6421: case 6425: case 6418: case 6422: case 6419: case 6423: return Face::Floor;
				default: return Face::Wall;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6439: case 6422: case 6430: case 6438: case 6423: case 6431: return eBlockFace::BLOCK_FACE_XM;
				case 6424: case 6432: case 6440: case 6425: case 6433: case 6441: return eBlockFace::BLOCK_FACE_XP;
				case 6435: case 6418: case 6426: case 6434: case 6419: case 6427: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 6435: case 6439: case 6421: case 6425: case 6429: case 6433: case 6437: case 6441: case 6419: case 6423: case 6427: case 6431: return false;
				default: return true;
			}
		}
	}
	namespace JungleDoor
	{
		short JungleDoor()
		{
			return 8877;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8898: case 8899: case 8900: case 8901: case 8902: case 8903: case 8904: case 8905: case 8906: case 8907: case 8908: case 8909: case 8910: case 8911: case 8912: case 8913: return eBlockFace::BLOCK_FACE_XM;
				case 8924: case 8925: case 8926: case 8927: case 8928: case 8914: case 8915: case 8916: case 8917: case 8918: case 8919: case 8920: case 8921: case 8922: case 8923: case 8929: return eBlockFace::BLOCK_FACE_XP;
				case 8866: case 8867: case 8868: case 8869: case 8870: case 8871: case 8872: case 8873: case 8874: case 8875: case 8876: case 8877: case 8878: case 8879: case 8880: case 8881: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 8892: case 8924: case 8893: case 8925: case 8894: case 8926: case 8895: case 8927: case 8896: case 8928: case 8897: case 8874: case 8906: case 8875: case 8907: case 8876: case 8908: case 8877: case 8909: case 8878: case 8910: case 8879: case 8911: case 8880: case 8912: case 8881: case 8913: case 8890: case 8922: case 8891: case 8923: case 8929: return Half::Lower;
				default: return Half::Upper;
			}
		}
		enum Hinge Hinge(short ID)
		{
			switch (ID)
			{
				case 8892: case 8924: case 8893: case 8925: case 8866: case 8898: case 8867: case 8899: case 8868: case 8900: case 8869: case 8901: case 8874: case 8906: case 8875: case 8907: case 8876: case 8908: case 8877: case 8909: case 8882: case 8914: case 8883: case 8915: case 8884: case 8916: case 8885: case 8917: case 8890: case 8922: case 8891: case 8923: return Hinge::Left;
				default: return Hinge::Right;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 8892: case 8924: case 8893: case 8925: case 8896: case 8928: case 8897: case 8868: case 8900: case 8869: case 8901: case 8872: case 8904: case 8873: case 8905: case 8876: case 8908: case 8877: case 8909: case 8880: case 8912: case 8881: case 8913: case 8884: case 8916: case 8885: case 8917: case 8888: case 8920: case 8889: case 8921: case 8929: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 8893: case 8925: case 8895: case 8927: case 8897: case 8867: case 8899: case 8869: case 8901: case 8871: case 8903: case 8873: case 8905: case 8875: case 8907: case 8877: case 8909: case 8879: case 8911: case 8881: case 8913: case 8883: case 8915: case 8885: case 8917: case 8887: case 8919: case 8889: case 8921: case 8891: case 8923: case 8929: return false;
				default: return true;
			}
		}
	}
	namespace JungleFence
	{
		short JungleFence()
		{
			return 8673;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 8662: case 8670: case 8663: case 8671: case 8664: case 8672: case 8665: case 8658: case 8666: case 8659: case 8667: case 8660: case 8668: case 8661: case 8669: case 8673: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 8654: case 8670: case 8655: case 8671: case 8656: case 8672: case 8657: case 8650: case 8666: case 8651: case 8667: case 8652: case 8668: case 8653: case 8669: case 8673: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 8646: case 8654: case 8662: case 8670: case 8647: case 8655: case 8663: case 8671: case 8648: case 8656: case 8664: case 8672: case 8649: case 8657: case 8665: case 8673: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8648: case 8656: case 8664: case 8672: case 8649: case 8657: case 8665: case 8644: case 8652: case 8660: case 8668: case 8645: case 8653: case 8661: case 8669: case 8673: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 8647: case 8655: case 8663: case 8671: case 8649: case 8657: case 8665: case 8643: case 8651: case 8659: case 8667: case 8645: case 8653: case 8661: case 8669: case 8673: return false;
				default: return true;
			}
		}
	}
	namespace JungleFenceGate
	{
		short JungleFenceGate()
		{
			return 8489;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8499: case 8500: case 8501: case 8502: case 8503: case 8504: case 8505: case 8498: return eBlockFace::BLOCK_FACE_XM;
				case 8507: case 8508: case 8509: case 8510: case 8511: case 8512: case 8506: case 8513: return eBlockFace::BLOCK_FACE_XP;
				case 8484: case 8485: case 8486: case 8487: case 8488: case 8489: case 8482: case 8483: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool InWall(short ID)
		{
			switch (ID)
			{
				case 8486: case 8494: case 8502: case 8510: case 8487: case 8495: case 8503: case 8511: case 8488: case 8496: case 8504: case 8512: case 8489: case 8497: case 8505: case 8513: return false;
				default: return true;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 8484: case 8492: case 8500: case 8508: case 8485: case 8493: case 8501: case 8509: case 8488: case 8496: case 8504: case 8512: case 8489: case 8497: case 8505: case 8513: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 8491: case 8499: case 8507: case 8485: case 8493: case 8501: case 8509: case 8487: case 8495: case 8503: case 8511: case 8489: case 8497: case 8505: case 8483: case 8513: return false;
				default: return true;
			}
		}
	}
	namespace JungleLeaves
	{
		short JungleLeaves()
		{
			return 200;
		}
		unsigned char Distance(short ID)
		{
			switch (ID)
			{
				case 187: case 188: return 1;
				case 189: case 190: return 2;
				case 191: case 192: return 3;
				case 193: case 194: return 4;
				case 195: case 196: return 5;
				case 198: case 197: return 6;
				default: return 7;
			}
		}
		bool Persistent(short ID)
		{
			switch (ID)
			{
				case 198: case 192: case 200: case 194: case 188: case 196: case 190: return false;
				default: return true;
			}
		}
	}
	namespace JungleLog
	{
		short JungleLog()
		{
			return 83;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 82: return Axis::X;
				case 83: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace JunglePlanks
	{
	}
	namespace JunglePressurePlate
	{
		short JunglePressurePlate()
		{
			return 3880;
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 3880: return false;
				default: return true;
			}
		}
	}
	namespace JungleSapling
	{
		short JungleSapling()
		{
			return 27;
		}
		unsigned char Stage(short ID)
		{
			switch (ID)
			{
				case 27: return 0;
				default: return 1;
			}
		}
	}
	namespace JungleSign
	{
		short JungleSign()
		{
			return 3510;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 3509: case 3510: return 0;
				case 3511: case 3512: return 1;
				case 3530: case 3529: return 10;
				case 3532: case 3531: return 11;
				case 3534: case 3533: return 12;
				case 3536: case 3535: return 13;
				case 3538: case 3537: return 14;
				case 3539: case 3540: return 15;
				case 3514: case 3513: return 2;
				case 3516: case 3515: return 3;
				case 3518: case 3517: return 4;
				case 3520: case 3519: return 5;
				case 3522: case 3521: return 6;
				case 3524: case 3523: return 7;
				case 3526: case 3525: return 8;
				default: return 9;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 3514: case 3516: case 3518: case 3520: case 3522: case 3524: case 3526: case 3528: case 3530: case 3532: case 3534: case 3536: case 3538: case 3510: case 3512: case 3540: return false;
				default: return true;
			}
		}
	}
	namespace JungleSlab
	{
		short JungleSlab()
		{
			return 8321;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8320: case 8321: return Type::Bottom;
				case 8322: case 8323: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8319: case 8323: case 8321: return false;
				default: return true;
			}
		}
	}
	namespace JungleStairs
	{
		short JungleStairs()
		{
			return 5575;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 5604: case 5605: case 5606: case 5607: case 5608: case 5609: case 5610: case 5611: case 5612: case 5613: case 5614: case 5615: case 5616: case 5617: case 5618: case 5619: case 5620: case 5621: case 5622: case 5623: return eBlockFace::BLOCK_FACE_XM;
				case 5624: case 5625: case 5626: case 5627: case 5628: case 5629: case 5630: case 5631: case 5632: case 5633: case 5634: case 5635: case 5636: case 5637: case 5638: case 5639: case 5640: case 5641: case 5642: case 5643: return eBlockFace::BLOCK_FACE_XP;
				case 5564: case 5565: case 5566: case 5567: case 5568: case 5569: case 5570: case 5571: case 5572: case 5573: case 5574: case 5575: case 5576: case 5577: case 5578: case 5579: case 5580: case 5581: case 5582: case 5583: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 5594: case 5595: case 5596: case 5597: case 5598: case 5599: case 5600: case 5601: case 5602: case 5603: case 5614: case 5615: case 5616: case 5617: case 5618: case 5619: case 5620: case 5621: case 5622: case 5623: case 5634: case 5635: case 5636: case 5637: case 5574: case 5638: case 5575: case 5639: case 5576: case 5640: case 5577: case 5641: case 5578: case 5642: case 5579: case 5643: case 5580: case 5581: case 5582: case 5583: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 5586: case 5587: case 5596: case 5597: case 5606: case 5607: case 5616: case 5617: case 5626: case 5627: case 5566: case 5567: case 5636: case 5637: case 5576: case 5577: return Shape::InnerLeft;
				case 5588: case 5589: case 5598: case 5599: case 5608: case 5609: case 5618: case 5619: case 5628: case 5629: case 5568: case 5569: case 5638: case 5639: case 5578: case 5579: return Shape::InnerRight;
				case 5590: case 5591: case 5600: case 5601: case 5610: case 5611: case 5620: case 5621: case 5630: case 5631: case 5570: case 5571: case 5640: case 5641: case 5580: case 5581: return Shape::OuterLeft;
				case 5592: case 5593: case 5602: case 5603: case 5612: case 5613: case 5622: case 5623: case 5632: case 5633: case 5572: case 5573: case 5642: case 5643: case 5582: case 5583: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 5585: case 5587: case 5589: case 5591: case 5593: case 5595: case 5597: case 5599: case 5601: case 5603: case 5605: case 5607: case 5609: case 5611: case 5613: case 5615: case 5617: case 5619: case 5621: case 5623: case 5625: case 5627: case 5565: case 5629: case 5567: case 5631: case 5569: case 5633: case 5571: case 5635: case 5573: case 5637: case 5575: case 5639: case 5577: case 5641: case 5579: case 5643: case 5581: case 5583: return false;
				default: return true;
			}
		}
	}
	namespace JungleTrapdoor
	{
		short JungleTrapdoor()
		{
			return 4318;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 4337: case 4338: case 4339: case 4340: case 4341: case 4342: case 4343: case 4344: case 4345: case 4346: case 4347: case 4348: case 4349: case 4350: case 4335: case 4336: return eBlockFace::BLOCK_FACE_XM;
				case 4353: case 4354: case 4355: case 4356: case 4357: case 4358: case 4359: case 4360: case 4361: case 4362: case 4363: case 4364: case 4365: case 4351: case 4352: case 4366: return eBlockFace::BLOCK_FACE_XP;
				case 4306: case 4307: case 4308: case 4309: case 4310: case 4311: case 4312: case 4313: case 4314: case 4315: case 4316: case 4317: case 4318: case 4303: case 4304: case 4305: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 4311: case 4327: case 4343: case 4359: case 4312: case 4328: case 4344: case 4360: case 4313: case 4329: case 4345: case 4361: case 4314: case 4330: case 4346: case 4362: case 4315: case 4331: case 4347: case 4363: case 4316: case 4332: case 4348: case 4364: case 4317: case 4333: case 4349: case 4365: case 4318: case 4334: case 4350: case 4366: return Half::Bottom;
				default: return Half::Top;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 4307: case 4323: case 4339: case 4355: case 4308: case 4324: case 4340: case 4356: case 4309: case 4325: case 4341: case 4357: case 4310: case 4326: case 4342: case 4358: case 4315: case 4331: case 4347: case 4363: case 4316: case 4332: case 4348: case 4364: case 4317: case 4333: case 4349: case 4365: case 4318: case 4334: case 4350: case 4366: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 4321: case 4337: case 4353: case 4306: case 4322: case 4338: case 4354: case 4309: case 4325: case 4341: case 4357: case 4310: case 4326: case 4342: case 4358: case 4313: case 4329: case 4345: case 4361: case 4314: case 4330: case 4346: case 4362: case 4317: case 4333: case 4349: case 4365: case 4318: case 4334: case 4350: case 4305: case 4366: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 4306: case 4322: case 4338: case 4354: case 4308: case 4324: case 4340: case 4356: case 4310: case 4326: case 4342: case 4358: case 4312: case 4328: case 4344: case 4360: case 4314: case 4330: case 4346: case 4362: case 4316: case 4332: case 4348: case 4364: case 4318: case 4334: case 4350: case 4304: case 4320: case 4336: case 4352: case 4366: return false;
				default: return true;
			}
		}
	}
	namespace JungleWallSign
	{
		short JungleWallSign()
		{
			return 3768;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 3771: case 3772: return eBlockFace::BLOCK_FACE_XM;
				case 3773: case 3774: return eBlockFace::BLOCK_FACE_XP;
				case 3767: case 3768: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 3772: case 3768: case 3770: case 3774: return false;
				default: return true;
			}
		}
	}
	namespace JungleWood
	{
		short JungleWood()
		{
			return 119;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 118: return Axis::X;
				case 119: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace Kelp
	{
		short Kelp()
		{
			return 9470;
		}
		unsigned char Age(short ID)
		{
			switch (ID)
			{
				case 9470: return 0;
				case 9471: return 1;
				case 9480: return 10;
				case 9481: return 11;
				case 9482: return 12;
				case 9483: return 13;
				case 9484: return 14;
				case 9485: return 15;
				case 9486: return 16;
				case 9487: return 17;
				case 9488: return 18;
				case 9489: return 19;
				case 9472: return 2;
				case 9490: return 20;
				case 9491: return 21;
				case 9492: return 22;
				case 9493: return 23;
				case 9494: return 24;
				case 9495: return 25;
				case 9473: return 3;
				case 9474: return 4;
				case 9475: return 5;
				case 9476: return 6;
				case 9477: return 7;
				case 9478: return 8;
				default: return 9;
			}
		}
	}
	namespace KelpPlant
	{
	}
	namespace Ladder
	{
		short Ladder()
		{
			return 3638;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 3641: case 3642: return eBlockFace::BLOCK_FACE_XM;
				case 3643: case 3644: return eBlockFace::BLOCK_FACE_XP;
				case 3638: case 3637: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 3638: case 3640: case 3642: case 3644: return false;
				default: return true;
			}
		}
	}
	namespace Lantern
	{
		short Lantern()
		{
			return 14887;
		}
		bool Hanging(short ID)
		{
			switch (ID)
			{
				case 14887: return false;
				default: return true;
			}
		}
	}
	namespace LapisBlock
	{
	}
	namespace LapisOre
	{
	}
	namespace LargeFern
	{
		short LargeFern()
		{
			return 7896;
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 7896: return Half::Lower;
				default: return Half::Upper;
			}
		}
	}
	namespace Lava
	{
		short Lava()
		{
			return 50;
		}
		unsigned char Level(short ID)
		{
			switch (ID)
			{
				case 50: return 0;
				case 51: return 1;
				case 60: return 10;
				case 61: return 11;
				case 62: return 12;
				case 63: return 13;
				case 64: return 14;
				case 65: return 15;
				case 52: return 2;
				case 53: return 3;
				case 54: return 4;
				case 55: return 5;
				case 56: return 6;
				case 57: return 7;
				case 58: return 8;
				default: return 9;
			}
		}
	}
	namespace Lectern
	{
		short Lectern()
		{
			return 14836;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 14841: case 14843: case 14842: case 14844: return eBlockFace::BLOCK_FACE_XM;
				case 14845: case 14847: case 14846: case 14848: return eBlockFace::BLOCK_FACE_XP;
				case 14835: case 14834: case 14836: case 14833: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool HasBook(short ID)
		{
			switch (ID)
			{
				case 14835: case 14839: case 14843: case 14847: case 14836: case 14840: case 14844: case 14848: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 14834: case 14836: case 14838: case 14840: case 14842: case 14844: case 14846: case 14848: return false;
				default: return true;
			}
		}
	}
	namespace Lever
	{
		short Lever()
		{
			return 3792;
		}
		enum Face Face(short ID)
		{
			switch (ID)
			{
				case 3799: case 3801: case 3803: case 3805: case 3800: case 3802: case 3804: case 3806: return Face::Ceiling;
				case 3784: case 3786: case 3788: case 3790: case 3783: case 3785: case 3787: case 3789: return Face::Floor;
				default: return Face::Wall;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 3795: case 3803: case 3788: case 3796: case 3804: case 3787: return eBlockFace::BLOCK_FACE_XM;
				case 3797: case 3805: case 3790: case 3798: case 3806: case 3789: return eBlockFace::BLOCK_FACE_XP;
				case 3799: case 3784: case 3792: case 3800: case 3783: case 3791: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 3784: case 3786: case 3788: case 3790: case 3792: case 3794: case 3796: case 3798: case 3800: case 3802: case 3804: case 3806: return false;
				default: return true;
			}
		}
	}
	namespace LightBlueBanner
	{
		short LightBlueBanner()
		{
			return 7945;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 7945: return 0;
				case 7946: return 1;
				case 7955: return 10;
				case 7956: return 11;
				case 7957: return 12;
				case 7958: return 13;
				case 7959: return 14;
				case 7960: return 15;
				case 7947: return 2;
				case 7948: return 3;
				case 7949: return 4;
				case 7950: return 5;
				case 7951: return 6;
				case 7952: return 7;
				case 7953: return 8;
				default: return 9;
			}
		}
	}
	namespace LightBlueBed
	{
		short LightBlueBed()
		{
			return 1100;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1107: case 1108: case 1105: case 1106: return eBlockFace::BLOCK_FACE_XM;
				case 1111: case 1109: case 1110: case 1112: return eBlockFace::BLOCK_FACE_XP;
				case 1100: case 1097: case 1098: case 1099: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Occupied(short ID)
		{
			switch (ID)
			{
				case 1107: case 1111: case 1100: case 1104: case 1108: case 1099: case 1103: case 1112: return false;
				default: return true;
			}
		}
		enum Part Part(short ID)
		{
			switch (ID)
			{
				case 1100: case 1104: case 1108: case 1098: case 1102: case 1106: case 1110: case 1112: return Part::Foot;
				default: return Part::Head;
			}
		}
	}
	namespace LightBlueCarpet
	{
	}
	namespace LightBlueConcrete
	{
	}
	namespace LightBlueConcretePowder
	{
	}
	namespace LightBlueGlazedTerracotta
	{
		short LightBlueGlazedTerracotta()
		{
			return 9386;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9388: return eBlockFace::BLOCK_FACE_XM;
				case 9389: return eBlockFace::BLOCK_FACE_XP;
				case 9386: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace LightBlueShulkerBox
	{
		short LightBlueShulkerBox()
		{
			return 9300;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9299: return eBlockFace::BLOCK_FACE_XM;
				case 9297: return eBlockFace::BLOCK_FACE_XP;
				case 9301: return eBlockFace::BLOCK_FACE_YM;
				case 9300: return eBlockFace::BLOCK_FACE_YP;
				case 9296: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace LightBlueStainedGlass
	{
	}
	namespace LightBlueStainedGlassPane
	{
		short LightBlueStainedGlassPane()
		{
			return 6990;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 6978: case 6982: case 6986: case 6975: case 6979: case 6983: case 6987: case 6976: case 6980: case 6984: case 6988: case 6977: case 6981: case 6985: case 6989: case 6990: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 6970: case 6974: case 6986: case 6967: case 6971: case 6983: case 6987: case 6968: case 6972: case 6984: case 6988: case 6969: case 6973: case 6985: case 6989: case 6990: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 6966: case 6974: case 6982: case 6963: case 6971: case 6979: case 6987: case 6964: case 6972: case 6980: case 6988: case 6965: case 6973: case 6981: case 6989: case 6990: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 6962: case 6966: case 6970: case 6974: case 6978: case 6982: case 6986: case 6961: case 6965: case 6969: case 6973: case 6977: case 6981: case 6985: case 6989: case 6990: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 6962: case 6966: case 6970: case 6974: case 6978: case 6982: case 6986: case 6960: case 6964: case 6968: case 6972: case 6976: case 6980: case 6984: case 6988: case 6990: return false;
				default: return true;
			}
		}
	}
	namespace LightBlueTerracotta
	{
	}
	namespace LightBlueWallBanner
	{
		short LightBlueWallBanner()
		{
			return 8165;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8167: return eBlockFace::BLOCK_FACE_XM;
				case 8168: return eBlockFace::BLOCK_FACE_XP;
				case 8165: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace LightBlueWool
	{
	}
	namespace LightGrayBanner
	{
		short LightGrayBanner()
		{
			return 8025;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 8025: return 0;
				case 8026: return 1;
				case 8035: return 10;
				case 8036: return 11;
				case 8037: return 12;
				case 8038: return 13;
				case 8039: return 14;
				case 8040: return 15;
				case 8027: return 2;
				case 8028: return 3;
				case 8029: return 4;
				case 8030: return 5;
				case 8031: return 6;
				case 8032: return 7;
				case 8033: return 8;
				default: return 9;
			}
		}
	}
	namespace LightGrayBed
	{
		short LightGrayBed()
		{
			return 1180;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1186: case 1187: case 1188: case 1185: return eBlockFace::BLOCK_FACE_XM;
				case 1190: case 1191: case 1189: case 1192: return eBlockFace::BLOCK_FACE_XP;
				case 1179: case 1180: case 1177: case 1178: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Occupied(short ID)
		{
			switch (ID)
			{
				case 1179: case 1183: case 1187: case 1191: case 1180: case 1184: case 1188: case 1192: return false;
				default: return true;
			}
		}
		enum Part Part(short ID)
		{
			switch (ID)
			{
				case 1182: case 1186: case 1190: case 1180: case 1184: case 1188: case 1178: case 1192: return Part::Foot;
				default: return Part::Head;
			}
		}
	}
	namespace LightGrayCarpet
	{
	}
	namespace LightGrayConcrete
	{
	}
	namespace LightGrayConcretePowder
	{
	}
	namespace LightGrayGlazedTerracotta
	{
		short LightGrayGlazedTerracotta()
		{
			return 9406;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9408: return eBlockFace::BLOCK_FACE_XM;
				case 9409: return eBlockFace::BLOCK_FACE_XP;
				case 9406: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace LightGrayShulkerBox
	{
		short LightGrayShulkerBox()
		{
			return 9330;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9329: return eBlockFace::BLOCK_FACE_XM;
				case 9327: return eBlockFace::BLOCK_FACE_XP;
				case 9331: return eBlockFace::BLOCK_FACE_YM;
				case 9330: return eBlockFace::BLOCK_FACE_YP;
				case 9326: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace LightGrayStainedGlass
	{
	}
	namespace LightGrayStainedGlassPane
	{
		short LightGrayStainedGlassPane()
		{
			return 7150;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 7148: case 7137: case 7141: case 7145: case 7149: case 7138: case 7142: case 7146: case 7135: case 7139: case 7143: case 7147: case 7136: case 7140: case 7144: case 7150: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 7148: case 7129: case 7133: case 7145: case 7149: case 7130: case 7134: case 7146: case 7127: case 7131: case 7143: case 7147: case 7128: case 7132: case 7144: case 7150: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 7148: case 7125: case 7133: case 7141: case 7149: case 7126: case 7134: case 7142: case 7123: case 7131: case 7139: case 7147: case 7124: case 7132: case 7140: case 7150: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7121: case 7125: case 7129: case 7133: case 7137: case 7141: case 7145: case 7149: case 7122: case 7126: case 7130: case 7134: case 7138: case 7142: case 7146: case 7150: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 7148: case 7122: case 7126: case 7130: case 7134: case 7138: case 7142: case 7146: case 7120: case 7124: case 7128: case 7132: case 7136: case 7140: case 7144: case 7150: return false;
				default: return true;
			}
		}
	}
	namespace LightGrayTerracotta
	{
	}
	namespace LightGrayWallBanner
	{
		short LightGrayWallBanner()
		{
			return 8185;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8187: return eBlockFace::BLOCK_FACE_XM;
				case 8188: return eBlockFace::BLOCK_FACE_XP;
				case 8185: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace LightGrayWool
	{
	}
	namespace LightWeightedPressurePlate
	{
		short LightWeightedPressurePlate()
		{
			return 6646;
		}
		unsigned char Power(short ID)
		{
			switch (ID)
			{
				case 6646: return 0;
				case 6647: return 1;
				case 6656: return 10;
				case 6657: return 11;
				case 6658: return 12;
				case 6659: return 13;
				case 6660: return 14;
				case 6661: return 15;
				case 6648: return 2;
				case 6649: return 3;
				case 6650: return 4;
				case 6651: return 5;
				case 6652: return 6;
				case 6653: return 7;
				case 6654: return 8;
				default: return 9;
			}
		}
	}
	namespace Lilac
	{
		short Lilac()
		{
			return 7888;
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 7888: return Half::Lower;
				default: return Half::Upper;
			}
		}
	}
	namespace LilyOfTheValley
	{
	}
	namespace LilyPad
	{
	}
	namespace LimeBanner
	{
		short LimeBanner()
		{
			return 7977;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 7977: return 0;
				case 7978: return 1;
				case 7987: return 10;
				case 7988: return 11;
				case 7989: return 12;
				case 7990: return 13;
				case 7991: return 14;
				case 7992: return 15;
				case 7979: return 2;
				case 7980: return 3;
				case 7981: return 4;
				case 7982: return 5;
				case 7983: return 6;
				case 7984: return 7;
				case 7985: return 8;
				default: return 9;
			}
		}
	}
	namespace LimeBed
	{
		short LimeBed()
		{
			return 1132;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1137: case 1138: case 1139: case 1140: return eBlockFace::BLOCK_FACE_XM;
				case 1141: case 1142: case 1143: case 1144: return eBlockFace::BLOCK_FACE_XP;
				case 1130: case 1131: case 1132: case 1129: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Occupied(short ID)
		{
			switch (ID)
			{
				case 1131: case 1135: case 1139: case 1143: case 1132: case 1136: case 1140: case 1144: return false;
				default: return true;
			}
		}
		enum Part Part(short ID)
		{
			switch (ID)
			{
				case 1130: case 1134: case 1138: case 1142: case 1132: case 1136: case 1140: case 1144: return Part::Foot;
				default: return Part::Head;
			}
		}
	}
	namespace LimeCarpet
	{
	}
	namespace LimeConcrete
	{
	}
	namespace LimeConcretePowder
	{
	}
	namespace LimeGlazedTerracotta
	{
		short LimeGlazedTerracotta()
		{
			return 9394;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9396: return eBlockFace::BLOCK_FACE_XM;
				case 9397: return eBlockFace::BLOCK_FACE_XP;
				case 9394: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace LimeShulkerBox
	{
		short LimeShulkerBox()
		{
			return 9312;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9311: return eBlockFace::BLOCK_FACE_XM;
				case 9309: return eBlockFace::BLOCK_FACE_XP;
				case 9313: return eBlockFace::BLOCK_FACE_YM;
				case 9312: return eBlockFace::BLOCK_FACE_YP;
				case 9308: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace LimeStainedGlass
	{
	}
	namespace LimeStainedGlassPane
	{
		short LimeStainedGlassPane()
		{
			return 7054;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 7040: case 7044: case 7048: case 7052: case 7041: case 7045: case 7049: case 7053: case 7042: case 7046: case 7050: case 7039: case 7043: case 7047: case 7051: case 7054: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 7032: case 7036: case 7048: case 7052: case 7033: case 7037: case 7049: case 7053: case 7034: case 7038: case 7050: case 7031: case 7035: case 7047: case 7051: case 7054: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 7028: case 7036: case 7044: case 7052: case 7029: case 7037: case 7045: case 7053: case 7030: case 7038: case 7046: case 7027: case 7035: case 7043: case 7051: case 7054: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7025: case 7029: case 7033: case 7037: case 7041: case 7045: case 7049: case 7053: case 7026: case 7030: case 7034: case 7038: case 7042: case 7046: case 7050: case 7054: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 7024: case 7028: case 7032: case 7036: case 7040: case 7044: case 7048: case 7052: case 7026: case 7030: case 7034: case 7038: case 7042: case 7046: case 7050: case 7054: return false;
				default: return true;
			}
		}
	}
	namespace LimeTerracotta
	{
	}
	namespace LimeWallBanner
	{
		short LimeWallBanner()
		{
			return 8173;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8175: return eBlockFace::BLOCK_FACE_XM;
				case 8176: return eBlockFace::BLOCK_FACE_XP;
				case 8173: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace LimeWool
	{
	}
	namespace Lodestone
	{
	}
	namespace Loom
	{
		short Loom()
		{
			return 14787;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 14789: return eBlockFace::BLOCK_FACE_XM;
				case 14790: return eBlockFace::BLOCK_FACE_XP;
				case 14787: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace MagentaBanner
	{
		short MagentaBanner()
		{
			return 7929;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 7929: return 0;
				case 7930: return 1;
				case 7939: return 10;
				case 7940: return 11;
				case 7941: return 12;
				case 7942: return 13;
				case 7943: return 14;
				case 7944: return 15;
				case 7931: return 2;
				case 7932: return 3;
				case 7933: return 4;
				case 7934: return 5;
				case 7935: return 6;
				case 7936: return 7;
				case 7937: return 8;
				default: return 9;
			}
		}
	}
	namespace MagentaBed
	{
		short MagentaBed()
		{
			return 1084;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1092: case 1089: case 1090: case 1091: return eBlockFace::BLOCK_FACE_XM;
				case 1093: case 1094: case 1095: case 1096: return eBlockFace::BLOCK_FACE_XP;
				case 1081: case 1082: case 1083: case 1084: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Occupied(short ID)
		{
			switch (ID)
			{
				case 1092: case 1083: case 1087: case 1091: case 1095: case 1084: case 1088: case 1096: return false;
				default: return true;
			}
		}
		enum Part Part(short ID)
		{
			switch (ID)
			{
				case 1092: case 1082: case 1086: case 1090: case 1094: case 1084: case 1088: case 1096: return Part::Foot;
				default: return Part::Head;
			}
		}
	}
	namespace MagentaCarpet
	{
	}
	namespace MagentaConcrete
	{
	}
	namespace MagentaConcretePowder
	{
	}
	namespace MagentaGlazedTerracotta
	{
		short MagentaGlazedTerracotta()
		{
			return 9382;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9384: return eBlockFace::BLOCK_FACE_XM;
				case 9385: return eBlockFace::BLOCK_FACE_XP;
				case 9382: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace MagentaShulkerBox
	{
		short MagentaShulkerBox()
		{
			return 9294;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9293: return eBlockFace::BLOCK_FACE_XM;
				case 9291: return eBlockFace::BLOCK_FACE_XP;
				case 9295: return eBlockFace::BLOCK_FACE_YM;
				case 9294: return eBlockFace::BLOCK_FACE_YP;
				case 9290: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace MagentaStainedGlass
	{
	}
	namespace MagentaStainedGlassPane
	{
		short MagentaStainedGlassPane()
		{
			return 6958;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 6943: case 6947: case 6951: case 6955: case 6944: case 6948: case 6952: case 6956: case 6945: case 6949: case 6953: case 6957: case 6946: case 6950: case 6954: case 6958: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 6935: case 6939: case 6951: case 6955: case 6936: case 6940: case 6952: case 6956: case 6937: case 6941: case 6953: case 6957: case 6938: case 6942: case 6954: case 6958: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 6931: case 6939: case 6947: case 6955: case 6932: case 6940: case 6948: case 6956: case 6933: case 6941: case 6949: case 6957: case 6934: case 6942: case 6950: case 6958: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 6929: case 6933: case 6937: case 6941: case 6945: case 6949: case 6953: case 6957: case 6930: case 6934: case 6938: case 6942: case 6946: case 6950: case 6954: case 6958: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 6928: case 6932: case 6936: case 6940: case 6944: case 6948: case 6952: case 6956: case 6930: case 6934: case 6938: case 6942: case 6946: case 6950: case 6954: case 6958: return false;
				default: return true;
			}
		}
	}
	namespace MagentaTerracotta
	{
	}
	namespace MagentaWallBanner
	{
		short MagentaWallBanner()
		{
			return 8161;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8163: return eBlockFace::BLOCK_FACE_XM;
				case 8164: return eBlockFace::BLOCK_FACE_XP;
				case 8161: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace MagentaWool
	{
	}
	namespace MagmaBlock
	{
	}
	namespace Melon
	{
	}
	namespace MelonStem
	{
		short MelonStem()
		{
			return 4780;
		}
		unsigned char Age(short ID)
		{
			switch (ID)
			{
				case 4780: return 0;
				case 4781: return 1;
				case 4782: return 2;
				case 4783: return 3;
				case 4784: return 4;
				case 4785: return 5;
				case 4786: return 6;
				default: return 7;
			}
		}
	}
	namespace MossyCobblestone
	{
	}
	namespace MossyCobblestoneSlab
	{
		short MossyCobblestoneSlab()
		{
			return 10816;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 10815: case 10816: return Type::Bottom;
				case 10817: case 10818: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10814: case 10818: case 10816: return false;
				default: return true;
			}
		}
	}
	namespace MossyCobblestoneStairs
	{
		short MossyCobblestoneStairs()
		{
			return 10000;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 10029: case 10030: case 10031: case 10032: case 10033: case 10034: case 10035: case 10036: case 10037: case 10038: case 10039: case 10040: case 10041: case 10042: case 10043: case 10044: case 10045: case 10046: case 10047: case 10048: return eBlockFace::BLOCK_FACE_XM;
				case 10049: case 10050: case 10051: case 10052: case 10053: case 10054: case 10055: case 10056: case 10057: case 10058: case 10059: case 10060: case 10061: case 10062: case 10063: case 10064: case 10065: case 10066: case 10067: case 10068: return eBlockFace::BLOCK_FACE_XP;
				case 9989: case 9990: case 9991: case 9992: case 9993: case 9994: case 9995: case 9996: case 9997: case 9998: case 9999: case 10000: case 10001: case 10002: case 10003: case 10004: case 10005: case 10006: case 10007: case 10008: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 9999: case 10000: case 10001: case 10002: case 10003: case 10004: case 10005: case 10006: case 10007: case 10008: case 10019: case 10020: case 10021: case 10022: case 10023: case 10024: case 10025: case 10026: case 10027: case 10028: case 10039: case 10040: case 10041: case 10042: case 10043: case 10044: case 10045: case 10046: case 10047: case 10048: case 10059: case 10060: case 10061: case 10062: case 10063: case 10064: case 10065: case 10066: case 10067: case 10068: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 9991: case 9992: case 10001: case 10002: case 10011: case 10012: case 10021: case 10022: case 10031: case 10032: case 10041: case 10042: case 10051: case 10052: case 10061: case 10062: return Shape::InnerLeft;
				case 9993: case 9994: case 10003: case 10004: case 10013: case 10014: case 10023: case 10024: case 10033: case 10034: case 10043: case 10044: case 10053: case 10054: case 10063: case 10064: return Shape::InnerRight;
				case 9995: case 9996: case 10005: case 10006: case 10015: case 10016: case 10025: case 10026: case 10035: case 10036: case 10045: case 10046: case 10055: case 10056: case 10065: case 10066: return Shape::OuterLeft;
				case 9997: case 9998: case 10007: case 10008: case 10017: case 10018: case 10027: case 10028: case 10037: case 10038: case 10047: case 10048: case 10057: case 10058: case 10067: case 10068: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9990: case 9992: case 9994: case 9996: case 9998: case 10000: case 10002: case 10004: case 10006: case 10008: case 10010: case 10012: case 10014: case 10016: case 10018: case 10020: case 10022: case 10024: case 10026: case 10028: case 10030: case 10032: case 10034: case 10036: case 10038: case 10040: case 10042: case 10044: case 10046: case 10048: case 10050: case 10052: case 10054: case 10056: case 10058: case 10060: case 10062: case 10064: case 10066: case 10068: return false;
				default: return true;
			}
		}
	}
	namespace MossyCobblestoneWall
	{
		short MossyCobblestoneWall()
		{
			return 5984;
		}
		enum East East(short ID)
		{
			switch (ID)
			{
				case 6090: case 6092: case 6094: case 6096: case 6098: case 6100: case 6102: case 6104: case 6106: case 6108: case 6110: case 6112: case 6114: case 6116: case 6118: case 6120: case 6122: case 6124: case 6126: case 6128: case 6130: case 6132: case 6134: case 6136: case 6138: case 6140: case 6142: case 6144: case 6146: case 6148: case 6150: case 6152: case 6154: case 6156: case 6158: case 6160: case 6162: case 6164: case 6166: case 6168: case 6170: case 6172: case 6174: case 6176: case 6178: case 6180: case 6182: case 6184: case 6186: case 6188: case 6190: case 6192: case 6194: case 6196: case 6089: case 6091: case 6093: case 6095: case 6097: case 6099: case 6101: case 6103: case 6105: case 6107: case 6109: case 6111: case 6113: case 6115: case 6117: case 6119: case 6121: case 6123: case 6125: case 6127: case 6129: case 6131: case 6133: case 6135: case 6137: case 6139: case 6141: case 6143: case 6145: case 6147: case 6149: case 6151: case 6153: case 6155: case 6157: case 6159: case 6161: case 6163: case 6165: case 6167: case 6169: case 6171: case 6173: case 6175: case 6177: case 6179: case 6181: case 6183: case 6185: case 6187: case 6189: case 6191: case 6193: case 6195: return East::Low;
				case 6036: case 6038: case 6040: case 6042: case 6044: case 6046: case 6048: case 6050: case 6052: case 6054: case 6056: case 6058: case 6060: case 6062: case 6064: case 6066: case 6068: case 6070: case 6072: case 6074: case 6076: case 6078: case 6080: case 6082: case 6084: case 6086: case 6088: case 5981: case 5983: case 5985: case 5987: case 5989: case 5991: case 5993: case 5995: case 5997: case 5999: case 6001: case 6003: case 6005: case 6007: case 6009: case 6011: case 6013: case 6015: case 6017: case 6019: case 6021: case 6023: case 6025: case 6027: case 6029: case 6031: case 6033: case 6035: case 6037: case 6039: case 6041: case 6043: case 6045: case 6047: case 6049: case 6051: case 6053: case 6055: case 6057: case 6059: case 6061: case 6063: case 6065: case 6067: case 6069: case 6071: case 6073: case 6075: case 6077: case 6079: case 6081: case 6083: case 6085: case 6087: case 5982: case 5984: case 5986: case 5988: case 5990: case 5992: case 5994: case 5996: case 5998: case 6000: case 6002: case 6004: case 6006: case 6008: case 6010: case 6012: case 6014: case 6016: case 6018: case 6020: case 6022: case 6024: case 6026: case 6028: case 6030: case 6032: case 6034: return East::None;
				default: return East::Tall;
			}
		}
		enum North North(short ID)
		{
			switch (ID)
			{
				case 6036: case 6038: case 6040: case 6042: case 6044: case 6046: case 6048: case 6050: case 6052: case 6126: case 6128: case 6130: case 6132: case 6134: case 6136: case 6138: case 6140: case 6142: case 6144: case 6146: case 6148: case 6150: case 6152: case 6154: case 6156: case 6158: case 6160: case 6234: case 6236: case 6238: case 6240: case 6242: case 6244: case 6246: case 6248: case 6250: case 6252: case 6254: case 6256: case 6258: case 6260: case 6262: case 6264: case 6266: case 6268: case 6017: case 6019: case 6021: case 6023: case 6025: case 6027: case 6029: case 6031: case 6033: case 6035: case 6037: case 6039: case 6041: case 6043: case 6045: case 6047: case 6049: case 6051: case 6125: case 6127: case 6129: case 6131: case 6133: case 6135: case 6137: case 6139: case 6141: case 6143: case 6145: case 6147: case 6149: case 6151: case 6153: case 6155: case 6157: case 6159: case 6233: case 6235: case 6237: case 6239: case 6241: case 6243: case 6245: case 6247: case 6249: case 6251: case 6253: case 6255: case 6257: case 6259: case 6261: case 6263: case 6265: case 6267: case 6018: case 6020: case 6022: case 6024: case 6026: case 6028: case 6030: case 6032: case 6034: return North::Low;
				case 6090: case 6092: case 6094: case 6096: case 6098: case 6100: case 6102: case 6104: case 6106: case 6108: case 6110: case 6112: case 6114: case 6116: case 6118: case 6120: case 6122: case 6124: case 6198: case 6200: case 6202: case 6204: case 6206: case 6208: case 6210: case 6212: case 6214: case 6216: case 6218: case 6220: case 6222: case 6224: case 6226: case 6228: case 6230: case 6232: case 5981: case 5983: case 5985: case 5987: case 5989: case 5991: case 5993: case 5995: case 5997: case 5999: case 6001: case 6003: case 6005: case 6007: case 6009: case 6011: case 6013: case 6015: case 6089: case 6091: case 6093: case 6095: case 6097: case 6099: case 6101: case 6103: case 6105: case 6107: case 6109: case 6111: case 6113: case 6115: case 6117: case 6119: case 6121: case 6123: case 6197: case 6199: case 6201: case 6203: case 6205: case 6207: case 6209: case 6211: case 6213: case 6215: case 6217: case 6219: case 6221: case 6223: case 6225: case 6227: case 6229: case 6231: case 5982: case 5984: case 5986: case 5988: case 5990: case 5992: case 5994: case 5996: case 5998: case 6000: case 6002: case 6004: case 6006: case 6008: case 6010: case 6012: case 6014: case 6016: return North::None;
				default: return North::Tall;
			}
		}
		enum South South(short ID)
		{
			switch (ID)
			{
				case 6036: case 6038: case 6040: case 6066: case 6068: case 6070: case 6072: case 6074: case 6076: case 6102: case 6104: case 6106: case 6108: case 6110: case 6112: case 6138: case 6140: case 6142: case 6144: case 6146: case 6148: case 6174: case 6176: case 6178: case 6180: case 6182: case 6184: case 6210: case 6212: case 6214: case 6216: case 6218: case 6220: case 6246: case 6248: case 6250: case 6252: case 6254: case 6256: case 6282: case 6284: case 6286: case 6288: case 6290: case 6292: case 5993: case 5995: case 5997: case 5999: case 6001: case 6003: case 6029: case 6031: case 6033: case 6035: case 6037: case 6039: case 6065: case 6067: case 6069: case 6071: case 6073: case 6075: case 6101: case 6103: case 6105: case 6107: case 6109: case 6111: case 6137: case 6139: case 6141: case 6143: case 6145: case 6147: case 6173: case 6175: case 6177: case 6179: case 6181: case 6183: case 6209: case 6211: case 6213: case 6215: case 6217: case 6219: case 6245: case 6247: case 6249: case 6251: case 6253: case 6255: case 6281: case 6283: case 6285: case 6287: case 6289: case 6291: case 5994: case 5996: case 5998: case 6000: case 6002: case 6004: case 6030: case 6032: case 6034: return South::Low;
				case 6054: case 6056: case 6058: case 6060: case 6062: case 6064: case 6090: case 6092: case 6094: case 6096: case 6098: case 6100: case 6126: case 6128: case 6130: case 6132: case 6134: case 6136: case 6162: case 6164: case 6166: case 6168: case 6170: case 6172: case 6198: case 6200: case 6202: case 6204: case 6206: case 6208: case 6234: case 6236: case 6238: case 6240: case 6242: case 6244: case 6270: case 6272: case 6274: case 6276: case 6278: case 6280: case 5981: case 5983: case 5985: case 5987: case 5989: case 5991: case 6017: case 6019: case 6021: case 6023: case 6025: case 6027: case 6053: case 6055: case 6057: case 6059: case 6061: case 6063: case 6089: case 6091: case 6093: case 6095: case 6097: case 6099: case 6125: case 6127: case 6129: case 6131: case 6133: case 6135: case 6161: case 6163: case 6165: case 6167: case 6169: case 6171: case 6197: case 6199: case 6201: case 6203: case 6205: case 6207: case 6233: case 6235: case 6237: case 6239: case 6241: case 6243: case 6269: case 6271: case 6273: case 6275: case 6277: case 6279: case 5982: case 5984: case 5986: case 5988: case 5990: case 5992: case 6018: case 6020: case 6022: case 6024: case 6026: case 6028: return South::None;
				default: return South::Tall;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 6036: case 6038: case 6040: case 6048: case 6050: case 6052: case 6060: case 6062: case 6064: case 6072: case 6074: case 6076: case 6084: case 6086: case 6088: case 6096: case 6098: case 6100: case 6108: case 6110: case 6112: case 6120: case 6122: case 6124: case 6132: case 6134: case 6136: case 6144: case 6146: case 6148: case 6156: case 6158: case 6160: case 6168: case 6170: case 6172: case 6180: case 6182: case 6184: case 6192: case 6194: case 6196: case 6204: case 6206: case 6208: case 6216: case 6218: case 6220: case 6228: case 6230: case 6232: case 6240: case 6242: case 6244: case 6252: case 6254: case 6256: case 6264: case 6266: case 6268: case 6276: case 6278: case 6280: case 6288: case 6290: case 6292: case 6300: case 6302: case 6304: case 5987: case 5989: case 5991: case 5999: case 6001: case 6003: case 6011: case 6013: case 6015: case 6023: case 6025: case 6027: case 6035: case 6037: case 6039: case 6047: case 6049: case 6051: case 6059: case 6061: case 6063: case 6071: case 6073: case 6075: case 6083: case 6085: case 6087: case 6095: case 6097: case 6099: case 6107: case 6109: case 6111: case 6119: case 6121: case 6123: case 6131: case 6133: case 6135: case 6143: case 6145: case 6147: case 6155: case 6157: case 6159: case 6167: case 6169: case 6171: case 6179: case 6181: case 6183: case 6191: case 6193: case 6195: case 6203: case 6205: case 6207: case 6215: case 6217: case 6219: case 6227: case 6229: case 6231: case 6239: case 6241: case 6243: case 6251: case 6253: case 6255: case 6263: case 6265: case 6267: case 6275: case 6277: case 6279: case 6287: case 6289: case 6291: case 6299: case 6301: case 6303: case 5988: case 5990: case 5992: case 6000: case 6002: case 6004: case 6012: case 6014: case 6016: case 6024: case 6026: case 6028: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 6038: case 6040: case 6044: case 6046: case 6050: case 6052: case 6056: case 6058: case 6062: case 6064: case 6068: case 6070: case 6074: case 6076: case 6080: case 6082: case 6086: case 6088: case 6092: case 6094: case 6098: case 6100: case 6104: case 6106: case 6110: case 6112: case 6116: case 6118: case 6122: case 6124: case 6128: case 6130: case 6134: case 6136: case 6140: case 6142: case 6146: case 6148: case 6152: case 6154: case 6158: case 6160: case 6164: case 6166: case 6170: case 6172: case 6176: case 6178: case 6182: case 6184: case 6188: case 6190: case 6194: case 6196: case 6200: case 6202: case 6206: case 6208: case 6212: case 6214: case 6218: case 6220: case 6224: case 6226: case 6230: case 6232: case 6236: case 6238: case 6242: case 6244: case 6248: case 6250: case 6254: case 6256: case 6260: case 6262: case 6266: case 6268: case 6272: case 6274: case 6278: case 6280: case 6284: case 6286: case 6290: case 6292: case 6296: case 6298: case 6302: case 6304: case 5985: case 5991: case 5997: case 6003: case 6009: case 6015: case 6021: case 6027: case 6033: case 6039: case 6045: case 6051: case 6057: case 6063: case 6069: case 6075: case 6081: case 6087: case 6093: case 6099: case 6105: case 6111: case 6117: case 6123: case 6129: case 6135: case 6141: case 6147: case 6153: case 6159: case 6165: case 6171: case 6177: case 6183: case 6189: case 6195: case 6201: case 6207: case 6213: case 6219: case 6225: case 6231: case 6237: case 6243: case 6249: case 6255: case 6261: case 6267: case 6273: case 6279: case 6285: case 6291: case 6297: case 6303: case 5984: case 5986: case 5990: case 5992: case 5996: case 5998: case 6002: case 6004: case 6008: case 6010: case 6014: case 6016: case 6020: case 6022: case 6026: case 6028: case 6032: case 6034: return false;
				default: return true;
			}
		}
		enum West West(short ID)
		{
			switch (ID)
			{
				case 6036: case 6042: case 6048: case 6054: case 6060: case 6066: case 6072: case 6078: case 6084: case 6090: case 6096: case 6102: case 6108: case 6114: case 6120: case 6126: case 6132: case 6138: case 6144: case 6150: case 6156: case 6162: case 6168: case 6174: case 6180: case 6186: case 6192: case 6198: case 6204: case 6210: case 6216: case 6222: case 6228: case 6234: case 6240: case 6246: case 6252: case 6258: case 6264: case 6270: case 6276: case 6282: case 6288: case 6294: case 6300: case 5985: case 5991: case 5997: case 6003: case 6009: case 6015: case 6021: case 6027: case 6033: case 6039: case 6045: case 6051: case 6057: case 6063: case 6069: case 6075: case 6081: case 6087: case 6093: case 6099: case 6105: case 6111: case 6117: case 6123: case 6129: case 6135: case 6141: case 6147: case 6153: case 6159: case 6165: case 6171: case 6177: case 6183: case 6189: case 6195: case 6201: case 6207: case 6213: case 6219: case 6225: case 6231: case 6237: case 6243: case 6249: case 6255: case 6261: case 6267: case 6273: case 6279: case 6285: case 6291: case 6297: case 6303: case 5982: case 5988: case 5994: case 6000: case 6006: case 6012: case 6018: case 6024: case 6030: return West::Low;
				case 6038: case 6044: case 6050: case 6056: case 6062: case 6068: case 6074: case 6080: case 6086: case 6092: case 6098: case 6104: case 6110: case 6116: case 6122: case 6128: case 6134: case 6140: case 6146: case 6152: case 6158: case 6164: case 6170: case 6176: case 6182: case 6188: case 6194: case 6200: case 6206: case 6212: case 6218: case 6224: case 6230: case 6236: case 6242: case 6248: case 6254: case 6260: case 6266: case 6272: case 6278: case 6284: case 6290: case 6296: case 6302: case 5981: case 5987: case 5993: case 5999: case 6005: case 6011: case 6017: case 6023: case 6029: case 6035: case 6041: case 6047: case 6053: case 6059: case 6065: case 6071: case 6077: case 6083: case 6089: case 6095: case 6101: case 6107: case 6113: case 6119: case 6125: case 6131: case 6137: case 6143: case 6149: case 6155: case 6161: case 6167: case 6173: case 6179: case 6185: case 6191: case 6197: case 6203: case 6209: case 6215: case 6221: case 6227: case 6233: case 6239: case 6245: case 6251: case 6257: case 6263: case 6269: case 6275: case 6281: case 6287: case 6293: case 6299: case 5984: case 5990: case 5996: case 6002: case 6008: case 6014: case 6020: case 6026: case 6032: return West::None;
				default: return West::Tall;
			}
		}
	}
	namespace MossyStoneBrickSlab
	{
		short MossyStoneBrickSlab()
		{
			return 10804;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 10803: case 10804: return Type::Bottom;
				case 10805: case 10806: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10804: case 10802: case 10806: return false;
				default: return true;
			}
		}
	}
	namespace MossyStoneBrickStairs
	{
		short MossyStoneBrickStairs()
		{
			return 9840;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9869: case 9870: case 9871: case 9872: case 9873: case 9874: case 9875: case 9876: case 9877: case 9878: case 9879: case 9880: case 9881: case 9882: case 9883: case 9884: case 9885: case 9886: case 9887: case 9888: return eBlockFace::BLOCK_FACE_XM;
				case 9889: case 9890: case 9891: case 9892: case 9893: case 9894: case 9895: case 9896: case 9897: case 9898: case 9899: case 9900: case 9901: case 9902: case 9903: case 9904: case 9905: case 9906: case 9907: case 9908: return eBlockFace::BLOCK_FACE_XP;
				case 9833: case 9834: case 9835: case 9836: case 9837: case 9838: case 9839: case 9840: case 9841: case 9842: case 9843: case 9844: case 9845: case 9846: case 9847: case 9848: case 9829: case 9830: case 9831: case 9832: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 9839: case 9840: case 9841: case 9842: case 9843: case 9844: case 9845: case 9846: case 9847: case 9848: case 9859: case 9860: case 9861: case 9862: case 9863: case 9864: case 9865: case 9866: case 9867: case 9868: case 9879: case 9880: case 9881: case 9882: case 9883: case 9884: case 9885: case 9886: case 9887: case 9888: case 9899: case 9900: case 9901: case 9902: case 9903: case 9904: case 9905: case 9906: case 9907: case 9908: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 9841: case 9842: case 9851: case 9852: case 9861: case 9862: case 9871: case 9872: case 9881: case 9882: case 9891: case 9892: case 9901: case 9902: case 9831: case 9832: return Shape::InnerLeft;
				case 9833: case 9834: case 9843: case 9844: case 9853: case 9854: case 9863: case 9864: case 9873: case 9874: case 9883: case 9884: case 9893: case 9894: case 9903: case 9904: return Shape::InnerRight;
				case 9835: case 9836: case 9845: case 9846: case 9855: case 9856: case 9865: case 9866: case 9875: case 9876: case 9885: case 9886: case 9895: case 9896: case 9905: case 9906: return Shape::OuterLeft;
				case 9837: case 9838: case 9847: case 9848: case 9857: case 9858: case 9867: case 9868: case 9877: case 9878: case 9887: case 9888: case 9897: case 9898: case 9907: case 9908: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9834: case 9836: case 9838: case 9840: case 9842: case 9844: case 9846: case 9848: case 9850: case 9852: case 9854: case 9856: case 9858: case 9860: case 9862: case 9864: case 9866: case 9868: case 9870: case 9872: case 9874: case 9876: case 9878: case 9880: case 9882: case 9884: case 9886: case 9888: case 9890: case 9892: case 9894: case 9896: case 9898: case 9900: case 9902: case 9904: case 9906: case 9908: case 9830: case 9832: return false;
				default: return true;
			}
		}
	}
	namespace MossyStoneBrickWall
	{
		short MossyStoneBrickWall()
		{
			return 11842;
		}
		enum East East(short ID)
		{
			switch (ID)
			{
				case 11949: case 11953: case 11957: case 11961: case 11965: case 11969: case 11973: case 11977: case 11981: case 11985: case 11989: case 11993: case 11997: case 12001: case 12005: case 12009: case 12013: case 12017: case 12021: case 12025: case 12029: case 12033: case 12037: case 12041: case 12045: case 12049: case 12053: case 11950: case 11954: case 11958: case 11962: case 11966: case 11970: case 11974: case 11978: case 11982: case 11986: case 11990: case 11994: case 11998: case 12002: case 12006: case 12010: case 12014: case 12018: case 12022: case 12026: case 12030: case 12034: case 12038: case 12042: case 12046: case 12050: case 12054: case 11947: case 11951: case 11955: case 11959: case 11963: case 11967: case 11971: case 11975: case 11979: case 11983: case 11987: case 11991: case 11995: case 11999: case 12003: case 12007: case 12011: case 12015: case 12019: case 12023: case 12027: case 12031: case 12035: case 12039: case 12043: case 12047: case 12051: case 11948: case 11952: case 11956: case 11960: case 11964: case 11968: case 11972: case 11976: case 11980: case 11984: case 11988: case 11992: case 11996: case 12000: case 12004: case 12008: case 12012: case 12016: case 12020: case 12024: case 12028: case 12032: case 12036: case 12040: case 12044: case 12048: case 12052: return East::Low;
				case 11841: case 11845: case 11849: case 11853: case 11857: case 11861: case 11865: case 11869: case 11873: case 11877: case 11881: case 11885: case 11889: case 11893: case 11897: case 11901: case 11905: case 11909: case 11913: case 11917: case 11921: case 11925: case 11929: case 11933: case 11937: case 11941: case 11945: case 11842: case 11846: case 11850: case 11854: case 11858: case 11862: case 11866: case 11870: case 11874: case 11878: case 11882: case 11886: case 11890: case 11894: case 11898: case 11902: case 11906: case 11910: case 11914: case 11918: case 11922: case 11926: case 11930: case 11934: case 11938: case 11942: case 11946: case 11839: case 11843: case 11847: case 11851: case 11855: case 11859: case 11863: case 11867: case 11871: case 11875: case 11879: case 11883: case 11887: case 11891: case 11895: case 11899: case 11903: case 11907: case 11911: case 11915: case 11919: case 11923: case 11927: case 11931: case 11935: case 11939: case 11943: case 11840: case 11844: case 11848: case 11852: case 11856: case 11860: case 11864: case 11868: case 11872: case 11876: case 11880: case 11884: case 11888: case 11892: case 11896: case 11900: case 11904: case 11908: case 11912: case 11916: case 11920: case 11924: case 11928: case 11932: case 11936: case 11940: case 11944: return East::None;
				default: return East::Tall;
			}
		}
		enum North North(short ID)
		{
			switch (ID)
			{
				case 12092: case 12096: case 12100: case 12104: case 12108: case 12112: case 12116: case 12120: case 12124: case 11877: case 11881: case 11885: case 11889: case 11893: case 11897: case 11901: case 11905: case 11909: case 11985: case 11989: case 11993: case 11997: case 12001: case 12005: case 12009: case 12013: case 12017: case 12093: case 12097: case 12101: case 12105: case 12109: case 12113: case 12117: case 12121: case 12125: case 11878: case 11882: case 11886: case 11890: case 11894: case 11898: case 11902: case 11906: case 11910: case 11986: case 11990: case 11994: case 11998: case 12002: case 12006: case 12010: case 12014: case 12018: case 12094: case 12098: case 12102: case 12106: case 12110: case 12114: case 12118: case 12122: case 12126: case 11875: case 11879: case 11883: case 11887: case 11891: case 11895: case 11899: case 11903: case 11907: case 11983: case 11987: case 11991: case 11995: case 11999: case 12003: case 12007: case 12011: case 12015: case 12091: case 12095: case 12099: case 12103: case 12107: case 12111: case 12115: case 12119: case 12123: case 11876: case 11880: case 11884: case 11888: case 11892: case 11896: case 11900: case 11904: case 11908: case 11984: case 11988: case 11992: case 11996: case 12000: case 12004: case 12008: case 12012: case 12016: return North::Low;
				case 12056: case 12060: case 12064: case 12068: case 12072: case 12076: case 12080: case 12084: case 12088: case 11841: case 11845: case 11849: case 11853: case 11857: case 11861: case 11865: case 11869: case 11873: case 11949: case 11953: case 11957: case 11961: case 11965: case 11969: case 11973: case 11977: case 11981: case 12057: case 12061: case 12065: case 12069: case 12073: case 12077: case 12081: case 12085: case 12089: case 11842: case 11846: case 11850: case 11854: case 11858: case 11862: case 11866: case 11870: case 11874: case 11950: case 11954: case 11958: case 11962: case 11966: case 11970: case 11974: case 11978: case 11982: case 12058: case 12062: case 12066: case 12070: case 12074: case 12078: case 12082: case 12086: case 12090: case 11839: case 11843: case 11847: case 11851: case 11855: case 11859: case 11863: case 11867: case 11871: case 11947: case 11951: case 11955: case 11959: case 11963: case 11967: case 11971: case 11975: case 11979: case 12055: case 12059: case 12063: case 12067: case 12071: case 12075: case 12079: case 12083: case 12087: case 11840: case 11844: case 11848: case 11852: case 11856: case 11860: case 11864: case 11868: case 11872: case 11948: case 11952: case 11956: case 11960: case 11964: case 11968: case 11972: case 11976: case 11980: return North::None;
				default: return North::Tall;
			}
		}
		enum South South(short ID)
		{
			switch (ID)
			{
				case 12068: case 12072: case 12076: case 12104: case 12108: case 12112: case 12140: case 12144: case 12148: case 11853: case 11857: case 11861: case 11889: case 11893: case 11897: case 11925: case 11929: case 11933: case 11961: case 11965: case 11969: case 11997: case 12001: case 12005: case 12033: case 12037: case 12041: case 12069: case 12073: case 12077: case 12105: case 12109: case 12113: case 12141: case 12145: case 12149: case 11854: case 11858: case 11862: case 11890: case 11894: case 11898: case 11926: case 11930: case 11934: case 11962: case 11966: case 11970: case 11998: case 12002: case 12006: case 12034: case 12038: case 12042: case 12070: case 12074: case 12078: case 12106: case 12110: case 12114: case 12142: case 12146: case 12150: case 11851: case 11855: case 11859: case 11887: case 11891: case 11895: case 11923: case 11927: case 11931: case 11959: case 11963: case 11967: case 11995: case 11999: case 12003: case 12031: case 12035: case 12039: case 12067: case 12071: case 12075: case 12103: case 12107: case 12111: case 12139: case 12143: case 12147: case 11852: case 11856: case 11860: case 11888: case 11892: case 11896: case 11924: case 11928: case 11932: case 11960: case 11964: case 11968: case 11996: case 12000: case 12004: case 12032: case 12036: case 12040: return South::Low;
				case 12056: case 12060: case 12064: case 12092: case 12096: case 12100: case 12128: case 12132: case 12136: case 11841: case 11845: case 11849: case 11877: case 11881: case 11885: case 11913: case 11917: case 11921: case 11949: case 11953: case 11957: case 11985: case 11989: case 11993: case 12021: case 12025: case 12029: case 12057: case 12061: case 12065: case 12093: case 12097: case 12101: case 12129: case 12133: case 12137: case 11842: case 11846: case 11850: case 11878: case 11882: case 11886: case 11914: case 11918: case 11922: case 11950: case 11954: case 11958: case 11986: case 11990: case 11994: case 12022: case 12026: case 12030: case 12058: case 12062: case 12066: case 12094: case 12098: case 12102: case 12130: case 12134: case 12138: case 11839: case 11843: case 11847: case 11875: case 11879: case 11883: case 11911: case 11915: case 11919: case 11947: case 11951: case 11955: case 11983: case 11987: case 11991: case 12019: case 12023: case 12027: case 12055: case 12059: case 12063: case 12091: case 12095: case 12099: case 12127: case 12131: case 12135: case 11840: case 11844: case 11848: case 11876: case 11880: case 11884: case 11912: case 11916: case 11920: case 11948: case 11952: case 11956: case 11984: case 11988: case 11992: case 12020: case 12024: case 12028: return South::None;
				default: return South::Tall;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 12064: case 12076: case 12088: case 12100: case 12112: case 12124: case 12136: case 12148: case 12160: case 11845: case 11849: case 11857: case 11861: case 11869: case 11873: case 11881: case 11885: case 11893: case 11897: case 11905: case 11909: case 11917: case 11921: case 11929: case 11933: case 11941: case 11945: case 11953: case 11957: case 11965: case 11969: case 11977: case 11981: case 11989: case 11993: case 12001: case 12005: case 12013: case 12017: case 12025: case 12029: case 12037: case 12041: case 12049: case 12053: case 12061: case 12065: case 12073: case 12077: case 12085: case 12089: case 12097: case 12101: case 12109: case 12113: case 12121: case 12125: case 12133: case 12137: case 12145: case 12149: case 12157: case 12161: case 11846: case 11850: case 11858: case 11862: case 11870: case 11874: case 11882: case 11886: case 11894: case 11898: case 11906: case 11910: case 11918: case 11922: case 11930: case 11934: case 11942: case 11946: case 11954: case 11958: case 11966: case 11970: case 11978: case 11982: case 11990: case 11994: case 12002: case 12006: case 12014: case 12018: case 12026: case 12030: case 12038: case 12042: case 12050: case 12054: case 12062: case 12066: case 12074: case 12078: case 12086: case 12090: case 12098: case 12102: case 12110: case 12114: case 12122: case 12126: case 12134: case 12138: case 12146: case 12150: case 12158: case 12162: case 11847: case 11859: case 11871: case 11883: case 11895: case 11907: case 11919: case 11931: case 11943: case 11955: case 11967: case 11979: case 11991: case 12003: case 12015: case 12027: case 12039: case 12051: case 12063: case 12075: case 12087: case 12099: case 12111: case 12123: case 12135: case 12147: case 12159: case 11848: case 11860: case 11872: case 11884: case 11896: case 11908: case 11920: case 11932: case 11944: case 11956: case 11968: case 11980: case 11992: case 12004: case 12016: case 12028: case 12040: case 12052: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 12060: case 12064: case 12072: case 12076: case 12084: case 12088: case 12096: case 12100: case 12108: case 12112: case 12120: case 12124: case 12132: case 12136: case 12144: case 12148: case 12156: case 12160: case 11849: case 11861: case 11873: case 11885: case 11897: case 11909: case 11921: case 11933: case 11945: case 11957: case 11969: case 11981: case 11993: case 12005: case 12017: case 12029: case 12041: case 12053: case 12065: case 12077: case 12089: case 12101: case 12113: case 12125: case 12137: case 12149: case 12161: case 11842: case 11850: case 11854: case 11862: case 11866: case 11874: case 11878: case 11886: case 11890: case 11898: case 11902: case 11910: case 11914: case 11922: case 11926: case 11934: case 11938: case 11946: case 11950: case 11958: case 11962: case 11970: case 11974: case 11982: case 11986: case 11994: case 11998: case 12006: case 12010: case 12018: case 12022: case 12030: case 12034: case 12042: case 12046: case 12054: case 12058: case 12066: case 12070: case 12078: case 12082: case 12090: case 12094: case 12102: case 12106: case 12114: case 12118: case 12126: case 12130: case 12138: case 12142: case 12150: case 12154: case 12162: case 11843: case 11855: case 11867: case 11879: case 11891: case 11903: case 11915: case 11927: case 11939: case 11951: case 11963: case 11975: case 11987: case 11999: case 12011: case 12023: case 12035: case 12047: case 12059: case 12071: case 12083: case 12095: case 12107: case 12119: case 12131: case 12143: case 12155: case 11844: case 11848: case 11856: case 11860: case 11868: case 11872: case 11880: case 11884: case 11892: case 11896: case 11904: case 11908: case 11916: case 11920: case 11928: case 11932: case 11940: case 11944: case 11952: case 11956: case 11964: case 11968: case 11976: case 11980: case 11988: case 11992: case 12000: case 12004: case 12012: case 12016: case 12024: case 12028: case 12036: case 12040: case 12048: case 12052: return false;
				default: return true;
			}
		}
		enum West West(short ID)
		{
			switch (ID)
			{
				case 12056: case 12068: case 12080: case 12092: case 12104: case 12116: case 12128: case 12140: case 12152: case 11849: case 11861: case 11873: case 11885: case 11897: case 11909: case 11921: case 11933: case 11945: case 11957: case 11969: case 11981: case 11993: case 12005: case 12017: case 12029: case 12041: case 12053: case 12065: case 12077: case 12089: case 12101: case 12113: case 12125: case 12137: case 12149: case 12161: case 11846: case 11858: case 11870: case 11882: case 11894: case 11906: case 11918: case 11930: case 11942: case 11954: case 11966: case 11978: case 11990: case 12002: case 12014: case 12026: case 12038: case 12050: case 12062: case 12074: case 12086: case 12098: case 12110: case 12122: case 12134: case 12146: case 12158: case 11843: case 11855: case 11867: case 11879: case 11891: case 11903: case 11915: case 11927: case 11939: case 11951: case 11963: case 11975: case 11987: case 11999: case 12011: case 12023: case 12035: case 12047: case 12059: case 12071: case 12083: case 12095: case 12107: case 12119: case 12131: case 12143: case 12155: case 11840: case 11852: case 11864: case 11876: case 11888: case 11900: case 11912: case 11924: case 11936: case 11948: case 11960: case 11972: case 11984: case 11996: case 12008: case 12020: case 12032: case 12044: return West::Low;
				case 12064: case 12076: case 12088: case 12100: case 12112: case 12124: case 12136: case 12148: case 12160: case 11845: case 11857: case 11869: case 11881: case 11893: case 11905: case 11917: case 11929: case 11941: case 11953: case 11965: case 11977: case 11989: case 12001: case 12013: case 12025: case 12037: case 12049: case 12061: case 12073: case 12085: case 12097: case 12109: case 12121: case 12133: case 12145: case 12157: case 11842: case 11854: case 11866: case 11878: case 11890: case 11902: case 11914: case 11926: case 11938: case 11950: case 11962: case 11974: case 11986: case 11998: case 12010: case 12022: case 12034: case 12046: case 12058: case 12070: case 12082: case 12094: case 12106: case 12118: case 12130: case 12142: case 12154: case 11839: case 11851: case 11863: case 11875: case 11887: case 11899: case 11911: case 11923: case 11935: case 11947: case 11959: case 11971: case 11983: case 11995: case 12007: case 12019: case 12031: case 12043: case 12055: case 12067: case 12079: case 12091: case 12103: case 12115: case 12127: case 12139: case 12151: case 11848: case 11860: case 11872: case 11884: case 11896: case 11908: case 11920: case 11932: case 11944: case 11956: case 11968: case 11980: case 11992: case 12004: case 12016: case 12028: case 12040: case 12052: return West::None;
				default: return West::Tall;
			}
		}
	}
	namespace MossyStoneBricks
	{
	}
	namespace MovingPiston
	{
		short MovingPiston()
		{
			return 1400;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1407: case 1406: return eBlockFace::BLOCK_FACE_XM;
				case 1402: case 1403: return eBlockFace::BLOCK_FACE_XP;
				case 1411: case 1410: return eBlockFace::BLOCK_FACE_YM;
				case 1408: case 1409: return eBlockFace::BLOCK_FACE_YP;
				case 1400: case 1401: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 1400: case 1404: case 1408: case 1402: case 1406: case 1410: return Type::Normal;
				default: return Type::Sticky;
			}
		}
	}
	namespace MushroomStem
	{
		short MushroomStem()
		{
			return 4633;
		}
		bool Down(short ID)
		{
			switch (ID)
			{
				case 4668: case 4684: case 4669: case 4685: case 4670: case 4686: case 4671: case 4687: case 4672: case 4688: case 4673: case 4689: case 4674: case 4690: case 4675: case 4691: case 4676: case 4692: case 4677: case 4693: case 4678: case 4694: case 4679: case 4695: case 4680: case 4665: case 4681: case 4666: case 4682: case 4667: case 4683: case 4696: return false;
				default: return true;
			}
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 4652: case 4684: case 4653: case 4685: case 4654: case 4686: case 4655: case 4687: case 4656: case 4688: case 4657: case 4689: case 4658: case 4690: case 4659: case 4691: case 4660: case 4692: case 4661: case 4693: case 4662: case 4694: case 4663: case 4695: case 4664: case 4649: case 4681: case 4650: case 4682: case 4651: case 4683: case 4696: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 4641: case 4657: case 4673: case 4689: case 4642: case 4658: case 4674: case 4690: case 4643: case 4659: case 4675: case 4691: case 4644: case 4660: case 4676: case 4692: case 4645: case 4661: case 4677: case 4693: case 4646: case 4662: case 4678: case 4694: case 4647: case 4663: case 4679: case 4695: case 4648: case 4664: case 4680: case 4696: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 4637: case 4653: case 4669: case 4685: case 4638: case 4654: case 4670: case 4686: case 4639: case 4655: case 4671: case 4687: case 4640: case 4656: case 4672: case 4688: case 4645: case 4661: case 4677: case 4693: case 4646: case 4662: case 4678: case 4694: case 4647: case 4663: case 4679: case 4695: case 4648: case 4664: case 4680: case 4696: return false;
				default: return true;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 4636: case 4652: case 4668: case 4684: case 4639: case 4655: case 4671: case 4687: case 4640: case 4656: case 4672: case 4688: case 4643: case 4659: case 4675: case 4691: case 4644: case 4660: case 4676: case 4692: case 4647: case 4663: case 4679: case 4695: case 4648: case 4664: case 4680: case 4635: case 4651: case 4667: case 4683: case 4696: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 4636: case 4652: case 4668: case 4684: case 4638: case 4654: case 4670: case 4686: case 4640: case 4656: case 4672: case 4688: case 4642: case 4658: case 4674: case 4690: case 4644: case 4660: case 4676: case 4692: case 4646: case 4662: case 4678: case 4694: case 4648: case 4664: case 4680: case 4634: case 4650: case 4666: case 4682: case 4696: return false;
				default: return true;
			}
		}
	}
	namespace Mycelium
	{
		short Mycelium()
		{
			return 5013;
		}
		bool Snowy(short ID)
		{
			switch (ID)
			{
				case 5013: return false;
				default: return true;
			}
		}
	}
	namespace NetherBrickFence
	{
		short NetherBrickFence()
		{
			return 5047;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 5040: case 5044: case 5033: case 5037: case 5041: case 5045: case 5034: case 5038: case 5042: case 5046: case 5035: case 5039: case 5043: case 5032: case 5036: case 5047: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 5040: case 5044: case 5025: case 5029: case 5041: case 5045: case 5026: case 5030: case 5042: case 5046: case 5027: case 5031: case 5043: case 5024: case 5028: case 5047: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 5044: case 5021: case 5029: case 5037: case 5045: case 5022: case 5030: case 5038: case 5046: case 5023: case 5031: case 5039: case 5020: case 5028: case 5036: case 5047: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 5018: case 5022: case 5026: case 5030: case 5034: case 5038: case 5042: case 5046: case 5019: case 5023: case 5027: case 5031: case 5035: case 5039: case 5043: case 5047: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 5017: case 5021: case 5025: case 5029: case 5033: case 5037: case 5041: case 5045: case 5019: case 5023: case 5027: case 5031: case 5035: case 5039: case 5043: case 5047: return false;
				default: return true;
			}
		}
	}
	namespace NetherBrickSlab
	{
		short NetherBrickSlab()
		{
			return 8387;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8386: case 8387: return Type::Bottom;
				case 8388: case 8389: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8385: case 8389: case 8387: return false;
				default: return true;
			}
		}
	}
	namespace NetherBrickStairs
	{
		short NetherBrickStairs()
		{
			return 5059;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 5088: case 5089: case 5090: case 5091: case 5092: case 5093: case 5094: case 5095: case 5096: case 5097: case 5098: case 5099: case 5100: case 5101: case 5102: case 5103: case 5104: case 5105: case 5106: case 5107: return eBlockFace::BLOCK_FACE_XM;
				case 5108: case 5109: case 5110: case 5111: case 5112: case 5113: case 5114: case 5115: case 5116: case 5117: case 5118: case 5119: case 5120: case 5121: case 5122: case 5123: case 5124: case 5125: case 5126: case 5127: return eBlockFace::BLOCK_FACE_XP;
				case 5048: case 5049: case 5050: case 5051: case 5052: case 5053: case 5054: case 5055: case 5056: case 5057: case 5058: case 5059: case 5060: case 5061: case 5062: case 5063: case 5064: case 5065: case 5066: case 5067: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 5078: case 5079: case 5080: case 5081: case 5082: case 5083: case 5084: case 5085: case 5086: case 5087: case 5098: case 5099: case 5100: case 5101: case 5102: case 5103: case 5104: case 5105: case 5106: case 5107: case 5118: case 5119: case 5120: case 5121: case 5058: case 5122: case 5059: case 5123: case 5060: case 5124: case 5061: case 5125: case 5062: case 5126: case 5063: case 5127: case 5064: case 5065: case 5066: case 5067: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 5080: case 5081: case 5090: case 5091: case 5100: case 5101: case 5110: case 5111: case 5050: case 5051: case 5120: case 5121: case 5060: case 5061: case 5070: case 5071: return Shape::InnerLeft;
				case 5082: case 5083: case 5092: case 5093: case 5102: case 5103: case 5112: case 5113: case 5052: case 5053: case 5122: case 5123: case 5062: case 5063: case 5072: case 5073: return Shape::InnerRight;
				case 5084: case 5085: case 5094: case 5095: case 5104: case 5105: case 5114: case 5115: case 5054: case 5055: case 5124: case 5125: case 5064: case 5065: case 5074: case 5075: return Shape::OuterLeft;
				case 5076: case 5077: case 5086: case 5087: case 5096: case 5097: case 5106: case 5107: case 5116: case 5117: case 5056: case 5057: case 5126: case 5127: case 5066: case 5067: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 5077: case 5079: case 5081: case 5083: case 5085: case 5087: case 5089: case 5091: case 5093: case 5095: case 5097: case 5099: case 5101: case 5103: case 5105: case 5107: case 5109: case 5111: case 5049: case 5113: case 5051: case 5115: case 5053: case 5117: case 5055: case 5119: case 5057: case 5121: case 5059: case 5123: case 5061: case 5125: case 5063: case 5127: case 5065: case 5067: case 5069: case 5071: case 5073: case 5075: return false;
				default: return true;
			}
		}
	}
	namespace NetherBrickWall
	{
		short NetherBrickWall()
		{
			return 12814;
		}
		enum East East(short ID)
		{
			switch (ID)
			{
				case 12919: case 12923: case 12927: case 12931: case 12935: case 12939: case 12943: case 12947: case 12951: case 12955: case 12959: case 12963: case 12967: case 12971: case 12975: case 12979: case 12983: case 12987: case 12991: case 12995: case 12999: case 13003: case 13007: case 13011: case 13015: case 13019: case 13023: case 12920: case 12924: case 12928: case 12932: case 12936: case 12940: case 12944: case 12948: case 12952: case 12956: case 12960: case 12964: case 12968: case 12972: case 12976: case 12980: case 12984: case 12988: case 12992: case 12996: case 13000: case 13004: case 13008: case 13012: case 13016: case 13020: case 13024: case 12921: case 12925: case 12929: case 12933: case 12937: case 12941: case 12945: case 12949: case 12953: case 12957: case 12961: case 12965: case 12969: case 12973: case 12977: case 12981: case 12985: case 12989: case 12993: case 12997: case 13001: case 13005: case 13009: case 13013: case 13017: case 13021: case 13025: case 12922: case 12926: case 12930: case 12934: case 12938: case 12942: case 12946: case 12950: case 12954: case 12958: case 12962: case 12966: case 12970: case 12974: case 12978: case 12982: case 12986: case 12990: case 12994: case 12998: case 13002: case 13006: case 13010: case 13014: case 13018: case 13022: case 13026: return East::Low;
				case 12811: case 12815: case 12819: case 12823: case 12827: case 12831: case 12835: case 12839: case 12843: case 12847: case 12851: case 12855: case 12859: case 12863: case 12867: case 12871: case 12875: case 12879: case 12883: case 12887: case 12891: case 12895: case 12899: case 12903: case 12907: case 12911: case 12915: case 12812: case 12816: case 12820: case 12824: case 12828: case 12832: case 12836: case 12840: case 12844: case 12848: case 12852: case 12856: case 12860: case 12864: case 12868: case 12872: case 12876: case 12880: case 12884: case 12888: case 12892: case 12896: case 12900: case 12904: case 12908: case 12912: case 12916: case 12813: case 12817: case 12821: case 12825: case 12829: case 12833: case 12837: case 12841: case 12845: case 12849: case 12853: case 12857: case 12861: case 12865: case 12869: case 12873: case 12877: case 12881: case 12885: case 12889: case 12893: case 12897: case 12901: case 12905: case 12909: case 12913: case 12917: case 12814: case 12818: case 12822: case 12826: case 12830: case 12834: case 12838: case 12842: case 12846: case 12850: case 12854: case 12858: case 12862: case 12866: case 12870: case 12874: case 12878: case 12882: case 12886: case 12890: case 12894: case 12898: case 12902: case 12906: case 12910: case 12914: case 12918: return East::None;
				default: return East::Tall;
			}
		}
		enum North North(short ID)
		{
			switch (ID)
			{
				case 13078: case 13082: case 13086: case 13090: case 13094: case 13098: case 12847: case 12851: case 12855: case 12859: case 12863: case 12867: case 12871: case 12875: case 12879: case 12955: case 12959: case 12963: case 12967: case 12971: case 12975: case 12979: case 12983: case 12987: case 13063: case 13067: case 13071: case 13075: case 13079: case 13083: case 13087: case 13091: case 13095: case 12848: case 12852: case 12856: case 12860: case 12864: case 12868: case 12872: case 12876: case 12880: case 12956: case 12960: case 12964: case 12968: case 12972: case 12976: case 12980: case 12984: case 12988: case 13064: case 13068: case 13072: case 13076: case 13080: case 13084: case 13088: case 13092: case 13096: case 12849: case 12853: case 12857: case 12861: case 12865: case 12869: case 12873: case 12877: case 12881: case 12957: case 12961: case 12965: case 12969: case 12973: case 12977: case 12981: case 12985: case 12989: case 13065: case 13069: case 13073: case 13077: case 13081: case 13085: case 13089: case 13093: case 13097: case 12850: case 12854: case 12858: case 12862: case 12866: case 12870: case 12874: case 12878: case 12882: case 12958: case 12962: case 12966: case 12970: case 12974: case 12978: case 12982: case 12986: case 12990: case 13066: case 13070: case 13074: return North::Low;
				case 12811: case 12815: case 12819: case 12823: case 12827: case 12831: case 12835: case 12839: case 12843: case 12919: case 12923: case 12927: case 12931: case 12935: case 12939: case 12943: case 12947: case 12951: case 13027: case 13031: case 13035: case 13039: case 13043: case 13047: case 13051: case 13055: case 13059: case 12812: case 12816: case 12820: case 12824: case 12828: case 12832: case 12836: case 12840: case 12844: case 12920: case 12924: case 12928: case 12932: case 12936: case 12940: case 12944: case 12948: case 12952: case 13028: case 13032: case 13036: case 13040: case 13044: case 13048: case 13052: case 13056: case 13060: case 12813: case 12817: case 12821: case 12825: case 12829: case 12833: case 12837: case 12841: case 12845: case 12921: case 12925: case 12929: case 12933: case 12937: case 12941: case 12945: case 12949: case 12953: case 13029: case 13033: case 13037: case 13041: case 13045: case 13049: case 13053: case 13057: case 13061: case 12814: case 12818: case 12822: case 12826: case 12830: case 12834: case 12838: case 12842: case 12846: case 12922: case 12926: case 12930: case 12934: case 12938: case 12942: case 12946: case 12950: case 12954: case 13030: case 13034: case 13038: case 13042: case 13046: case 13050: case 13054: case 13058: case 13062: return North::None;
				default: return North::Tall;
			}
		}
		enum South South(short ID)
		{
			switch (ID)
			{
				case 13078: case 13082: case 13086: case 13114: case 13118: case 13122: case 12823: case 12827: case 12831: case 12859: case 12863: case 12867: case 12895: case 12899: case 12903: case 12931: case 12935: case 12939: case 12967: case 12971: case 12975: case 13003: case 13007: case 13011: case 13039: case 13043: case 13047: case 13075: case 13079: case 13083: case 13111: case 13115: case 13119: case 12824: case 12828: case 12832: case 12860: case 12864: case 12868: case 12896: case 12900: case 12904: case 12932: case 12936: case 12940: case 12968: case 12972: case 12976: case 13004: case 13008: case 13012: case 13040: case 13044: case 13048: case 13076: case 13080: case 13084: case 13112: case 13116: case 13120: case 12825: case 12829: case 12833: case 12861: case 12865: case 12869: case 12897: case 12901: case 12905: case 12933: case 12937: case 12941: case 12969: case 12973: case 12977: case 13005: case 13009: case 13013: case 13041: case 13045: case 13049: case 13077: case 13081: case 13085: case 13113: case 13117: case 13121: case 12826: case 12830: case 12834: case 12862: case 12866: case 12870: case 12898: case 12902: case 12906: case 12934: case 12938: case 12942: case 12970: case 12974: case 12978: case 13006: case 13010: case 13014: case 13042: case 13046: case 13050: return South::Low;
				case 13102: case 13106: case 13110: case 12811: case 12815: case 12819: case 12847: case 12851: case 12855: case 12883: case 12887: case 12891: case 12919: case 12923: case 12927: case 12955: case 12959: case 12963: case 12991: case 12995: case 12999: case 13027: case 13031: case 13035: case 13063: case 13067: case 13071: case 13099: case 13103: case 13107: case 12812: case 12816: case 12820: case 12848: case 12852: case 12856: case 12884: case 12888: case 12892: case 12920: case 12924: case 12928: case 12956: case 12960: case 12964: case 12992: case 12996: case 13000: case 13028: case 13032: case 13036: case 13064: case 13068: case 13072: case 13100: case 13104: case 13108: case 12813: case 12817: case 12821: case 12849: case 12853: case 12857: case 12885: case 12889: case 12893: case 12921: case 12925: case 12929: case 12957: case 12961: case 12965: case 12993: case 12997: case 13001: case 13029: case 13033: case 13037: case 13065: case 13069: case 13073: case 13101: case 13105: case 13109: case 12814: case 12818: case 12822: case 12850: case 12854: case 12858: case 12886: case 12890: case 12894: case 12922: case 12926: case 12930: case 12958: case 12962: case 12966: case 12994: case 12998: case 13002: case 13030: case 13034: case 13038: case 13066: case 13070: case 13074: return South::None;
				default: return South::Tall;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 13082: case 13086: case 13094: case 13098: case 13106: case 13110: case 13118: case 13122: case 13130: case 13134: case 12819: case 12831: case 12843: case 12855: case 12867: case 12879: case 12891: case 12903: case 12915: case 12927: case 12939: case 12951: case 12963: case 12975: case 12987: case 12999: case 13011: case 13023: case 13035: case 13047: case 13059: case 13071: case 13083: case 13095: case 13107: case 13119: case 13131: case 12820: case 12832: case 12844: case 12856: case 12868: case 12880: case 12892: case 12904: case 12916: case 12928: case 12940: case 12952: case 12964: case 12976: case 12988: case 13000: case 13012: case 13024: case 13036: case 13048: case 13060: case 13072: case 13084: case 13096: case 13108: case 13120: case 13132: case 12817: case 12821: case 12829: case 12833: case 12841: case 12845: case 12853: case 12857: case 12865: case 12869: case 12877: case 12881: case 12889: case 12893: case 12901: case 12905: case 12913: case 12917: case 12925: case 12929: case 12937: case 12941: case 12949: case 12953: case 12961: case 12965: case 12973: case 12977: case 12985: case 12989: case 12997: case 13001: case 13009: case 13013: case 13021: case 13025: case 13033: case 13037: case 13045: case 13049: case 13057: case 13061: case 13069: case 13073: case 13081: case 13085: case 13093: case 13097: case 13105: case 13109: case 13117: case 13121: case 13129: case 13133: case 12818: case 12822: case 12830: case 12834: case 12842: case 12846: case 12854: case 12858: case 12866: case 12870: case 12878: case 12882: case 12890: case 12894: case 12902: case 12906: case 12914: case 12918: case 12926: case 12930: case 12938: case 12942: case 12950: case 12954: case 12962: case 12966: case 12974: case 12978: case 12986: case 12990: case 12998: case 13002: case 13010: case 13014: case 13022: case 13026: case 13034: case 13038: case 13046: case 13050: case 13058: case 13062: case 13070: case 13074: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 13078: case 13086: case 13090: case 13098: case 13102: case 13110: case 13114: case 13122: case 13126: case 13134: case 12815: case 12827: case 12839: case 12851: case 12863: case 12875: case 12887: case 12899: case 12911: case 12923: case 12935: case 12947: case 12959: case 12971: case 12983: case 12995: case 13007: case 13019: case 13031: case 13043: case 13055: case 13067: case 13079: case 13091: case 13103: case 13115: case 13127: case 12816: case 12820: case 12828: case 12832: case 12840: case 12844: case 12852: case 12856: case 12864: case 12868: case 12876: case 12880: case 12888: case 12892: case 12900: case 12904: case 12912: case 12916: case 12924: case 12928: case 12936: case 12940: case 12948: case 12952: case 12960: case 12964: case 12972: case 12976: case 12984: case 12988: case 12996: case 13000: case 13008: case 13012: case 13020: case 13024: case 13032: case 13036: case 13044: case 13048: case 13056: case 13060: case 13068: case 13072: case 13080: case 13084: case 13092: case 13096: case 13104: case 13108: case 13116: case 13120: case 13128: case 13132: case 12821: case 12833: case 12845: case 12857: case 12869: case 12881: case 12893: case 12905: case 12917: case 12929: case 12941: case 12953: case 12965: case 12977: case 12989: case 13001: case 13013: case 13025: case 13037: case 13049: case 13061: case 13073: case 13085: case 13097: case 13109: case 13121: case 13133: case 12814: case 12822: case 12826: case 12834: case 12838: case 12846: case 12850: case 12858: case 12862: case 12870: case 12874: case 12882: case 12886: case 12894: case 12898: case 12906: case 12910: case 12918: case 12922: case 12930: case 12934: case 12942: case 12946: case 12954: case 12958: case 12966: case 12970: case 12978: case 12982: case 12990: case 12994: case 13002: case 13006: case 13014: case 13018: case 13026: case 13030: case 13038: case 13042: case 13050: case 13054: case 13062: case 13066: case 13074: return false;
				default: return true;
			}
		}
		enum West West(short ID)
		{
			switch (ID)
			{
				case 13082: case 13094: case 13106: case 13118: case 13130: case 12815: case 12827: case 12839: case 12851: case 12863: case 12875: case 12887: case 12899: case 12911: case 12923: case 12935: case 12947: case 12959: case 12971: case 12983: case 12995: case 13007: case 13019: case 13031: case 13043: case 13055: case 13067: case 13079: case 13091: case 13103: case 13115: case 13127: case 12812: case 12824: case 12836: case 12848: case 12860: case 12872: case 12884: case 12896: case 12908: case 12920: case 12932: case 12944: case 12956: case 12968: case 12980: case 12992: case 13004: case 13016: case 13028: case 13040: case 13052: case 13064: case 13076: case 13088: case 13100: case 13112: case 13124: case 12821: case 12833: case 12845: case 12857: case 12869: case 12881: case 12893: case 12905: case 12917: case 12929: case 12941: case 12953: case 12965: case 12977: case 12989: case 13001: case 13013: case 13025: case 13037: case 13049: case 13061: case 13073: case 13085: case 13097: case 13109: case 13121: case 13133: case 12818: case 12830: case 12842: case 12854: case 12866: case 12878: case 12890: case 12902: case 12914: case 12926: case 12938: case 12950: case 12962: case 12974: case 12986: case 12998: case 13010: case 13022: case 13034: case 13046: case 13058: case 13070: return West::Low;
				case 13078: case 13090: case 13102: case 13114: case 13126: case 12811: case 12823: case 12835: case 12847: case 12859: case 12871: case 12883: case 12895: case 12907: case 12919: case 12931: case 12943: case 12955: case 12967: case 12979: case 12991: case 13003: case 13015: case 13027: case 13039: case 13051: case 13063: case 13075: case 13087: case 13099: case 13111: case 13123: case 12820: case 12832: case 12844: case 12856: case 12868: case 12880: case 12892: case 12904: case 12916: case 12928: case 12940: case 12952: case 12964: case 12976: case 12988: case 13000: case 13012: case 13024: case 13036: case 13048: case 13060: case 13072: case 13084: case 13096: case 13108: case 13120: case 13132: case 12817: case 12829: case 12841: case 12853: case 12865: case 12877: case 12889: case 12901: case 12913: case 12925: case 12937: case 12949: case 12961: case 12973: case 12985: case 12997: case 13009: case 13021: case 13033: case 13045: case 13057: case 13069: case 13081: case 13093: case 13105: case 13117: case 13129: case 12814: case 12826: case 12838: case 12850: case 12862: case 12874: case 12886: case 12898: case 12910: case 12922: case 12934: case 12946: case 12958: case 12970: case 12982: case 12994: case 13006: case 13018: case 13030: case 13042: case 13054: case 13066: return West::None;
				default: return West::Tall;
			}
		}
	}
	namespace NetherBricks
	{
	}
	namespace NetherGoldOre
	{
	}
	namespace NetherPortal
	{
		short NetherPortal()
		{
			return 4014;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 4014: return Axis::X;
				default: return Axis::Z;
			}
		}
	}
	namespace NetherQuartzOre
	{
	}
	namespace NetherSprouts
	{
	}
	namespace NetherWart
	{
		short NetherWart()
		{
			return 5128;
		}
		unsigned char Age(short ID)
		{
			switch (ID)
			{
				case 5128: return 0;
				case 5129: return 1;
				case 5130: return 2;
				default: return 3;
			}
		}
	}
	namespace NetherWartBlock
	{
	}
	namespace NetheriteBlock
	{
	}
	namespace Netherrack
	{
	}
	namespace NoteBlock
	{
		short NoteBlock()
		{
			return 250;
		}
		enum Instrument Instrument(short ID)
		{
			switch (ID)
			{
				case 949: case 950: case 951: case 952: case 953: case 954: case 955: case 956: case 957: case 958: case 959: case 960: case 961: case 962: case 963: case 964: case 965: case 966: case 967: case 968: case 969: case 970: case 971: case 972: case 973: case 974: case 975: case 976: case 977: case 978: case 979: case 980: case 981: case 982: case 983: case 984: case 985: case 986: case 987: case 988: case 989: case 990: case 991: case 992: case 993: case 994: case 995: case 996: case 997: case 998: return Instrument::Banjo;
				case 299: case 300: case 301: case 302: case 303: case 304: case 305: case 306: case 307: case 308: case 309: case 310: case 311: case 312: case 313: case 314: case 315: case 316: case 317: case 318: case 319: case 320: case 321: case 322: case 323: case 324: case 325: case 326: case 327: case 328: case 329: case 330: case 331: case 332: case 333: case 334: case 335: case 336: case 337: case 338: case 339: case 340: case 341: case 342: case 343: case 344: case 345: case 346: case 347: case 348: return Instrument::Basedrum;
				case 449: case 450: case 451: case 452: case 453: case 454: case 455: case 456: case 457: case 458: case 459: case 460: case 461: case 462: case 463: case 464: case 465: case 466: case 467: case 468: case 469: case 470: case 471: case 472: case 473: case 474: case 475: case 476: case 477: case 478: case 479: case 480: case 481: case 482: case 483: case 484: case 485: case 486: case 487: case 488: case 489: case 490: case 491: case 492: case 493: case 494: case 495: case 496: case 497: case 498: return Instrument::Bass;
				case 549: case 550: case 551: case 552: case 553: case 554: case 555: case 556: case 557: case 558: case 559: case 560: case 561: case 562: case 563: case 564: case 565: case 566: case 567: case 568: case 569: case 570: case 571: case 572: case 573: case 574: case 575: case 576: case 577: case 578: case 579: case 580: case 581: case 582: case 583: case 584: case 585: case 586: case 587: case 588: case 589: case 590: case 591: case 592: case 593: case 594: case 595: case 596: case 597: case 598: return Instrument::Bell;
				case 899: case 900: case 901: case 902: case 903: case 904: case 905: case 906: case 907: case 908: case 909: case 910: case 911: case 912: case 913: case 914: case 915: case 916: case 917: case 918: case 919: case 920: case 921: case 922: case 923: case 924: case 925: case 926: case 927: case 928: case 929: case 930: case 931: case 932: case 933: case 934: case 935: case 936: case 937: case 938: case 939: case 940: case 941: case 942: case 943: case 944: case 945: case 946: case 947: case 948: return Instrument::Bit;
				case 649: case 650: case 651: case 652: case 653: case 654: case 655: case 656: case 657: case 658: case 659: case 660: case 661: case 662: case 663: case 664: case 665: case 666: case 667: case 668: case 669: case 670: case 671: case 672: case 673: case 674: case 675: case 676: case 677: case 678: case 679: case 680: case 681: case 682: case 683: case 684: case 685: case 686: case 687: case 688: case 689: case 690: case 691: case 692: case 693: case 694: case 695: case 696: case 697: case 698: return Instrument::Chime;
				case 799: case 800: case 801: case 802: case 803: case 804: case 805: case 806: case 807: case 808: case 809: case 810: case 811: case 812: case 813: case 814: case 815: case 816: case 817: case 818: case 819: case 820: case 821: case 822: case 823: case 824: case 825: case 826: case 827: case 828: case 829: case 830: case 831: case 832: case 833: case 834: case 835: case 836: case 837: case 838: case 839: case 840: case 841: case 842: case 843: case 844: case 845: case 846: case 847: case 848: return Instrument::CowBell;
				case 849: case 850: case 851: case 852: case 853: case 854: case 855: case 856: case 857: case 858: case 859: case 860: case 861: case 862: case 863: case 864: case 865: case 866: case 867: case 868: case 869: case 870: case 871: case 872: case 873: case 874: case 875: case 876: case 877: case 878: case 879: case 880: case 881: case 882: case 883: case 884: case 885: case 886: case 887: case 888: case 889: case 890: case 891: case 892: case 893: case 894: case 895: case 896: case 897: case 898: return Instrument::Didgeridoo;
				case 499: case 500: case 501: case 502: case 503: case 504: case 505: case 506: case 507: case 508: case 509: case 510: case 511: case 512: case 513: case 514: case 515: case 516: case 517: case 518: case 519: case 520: case 521: case 522: case 523: case 524: case 525: case 526: case 527: case 528: case 529: case 530: case 531: case 532: case 533: case 534: case 535: case 536: case 537: case 538: case 539: case 540: case 541: case 542: case 543: case 544: case 545: case 546: case 547: case 548: return Instrument::Flute;
				case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 625: case 626: case 627: case 628: case 629: case 630: case 631: case 632: case 633: case 634: case 635: case 636: case 637: case 638: case 639: case 640: case 641: case 642: case 643: case 644: case 645: case 646: case 647: case 648: return Instrument::Guitar;
				case 249: case 250: case 251: case 252: case 253: case 254: case 255: case 256: case 257: case 258: case 259: case 260: case 261: case 262: case 263: case 264: case 265: case 266: case 267: case 268: case 269: case 270: case 271: case 272: case 273: case 274: case 275: case 276: case 277: case 278: case 279: case 280: case 281: case 282: case 283: case 284: case 285: case 286: case 287: case 288: case 289: case 290: case 291: case 292: case 293: case 294: case 295: case 296: case 297: case 298: return Instrument::Harp;
				case 399: case 400: case 401: case 402: case 403: case 404: case 405: case 406: case 407: case 408: case 409: case 410: case 411: case 412: case 413: case 414: case 415: case 416: case 417: case 418: case 419: case 420: case 421: case 422: case 423: case 424: case 425: case 426: case 427: case 428: case 429: case 430: case 431: case 432: case 433: case 434: case 435: case 436: case 437: case 438: case 439: case 440: case 441: case 442: case 443: case 444: case 445: case 446: case 447: case 448: return Instrument::Hat;
				case 749: case 750: case 751: case 752: case 753: case 754: case 755: case 756: case 757: case 758: case 759: case 760: case 761: case 762: case 763: case 764: case 765: case 766: case 767: case 768: case 769: case 770: case 771: case 772: case 773: case 774: case 775: case 776: case 777: case 778: case 779: case 780: case 781: case 782: case 783: case 784: case 785: case 786: case 787: case 788: case 789: case 790: case 791: case 792: case 793: case 794: case 795: case 796: case 797: case 798: return Instrument::IronXylophone;
				case 999: case 1000: case 1001: case 1002: case 1003: case 1004: case 1005: case 1006: case 1007: case 1008: case 1009: case 1010: case 1011: case 1012: case 1013: case 1014: case 1015: case 1016: case 1017: case 1018: case 1019: case 1020: case 1021: case 1022: case 1023: case 1024: case 1045: case 1046: case 1047: case 1048: case 1025: case 1026: case 1027: case 1028: case 1029: case 1030: case 1031: case 1032: case 1033: case 1034: case 1035: case 1036: case 1037: case 1038: case 1039: case 1040: case 1041: case 1042: case 1043: case 1044: return Instrument::Pling;
				case 349: case 350: case 351: case 352: case 353: case 354: case 355: case 356: case 357: case 358: case 359: case 360: case 361: case 362: case 363: case 364: case 365: case 366: case 367: case 368: case 369: case 370: case 371: case 372: case 373: case 374: case 375: case 376: case 377: case 378: case 379: case 380: case 381: case 382: case 383: case 384: case 385: case 386: case 387: case 388: case 389: case 390: case 391: case 392: case 393: case 394: case 395: case 396: case 397: case 398: return Instrument::Snare;
				default: return Instrument::Xylophone;
			}
		}
		unsigned char Note(short ID)
		{
			switch (ID)
			{
				case 249: case 250: case 299: case 300: case 349: case 350: case 399: case 400: case 449: case 450: case 499: case 500: case 549: case 550: case 599: case 600: case 649: case 650: case 699: case 700: case 749: case 750: case 799: case 800: case 849: case 850: case 899: case 900: case 949: case 950: case 999: case 1000: return 0;
				case 251: case 252: case 301: case 302: case 351: case 352: case 401: case 402: case 451: case 452: case 501: case 502: case 551: case 552: case 601: case 602: case 651: case 652: case 701: case 702: case 751: case 752: case 801: case 802: case 851: case 852: case 901: case 902: case 951: case 952: case 1001: case 1002: return 1;
				case 269: case 270: case 319: case 320: case 369: case 370: case 419: case 420: case 469: case 470: case 519: case 520: case 569: case 570: case 619: case 620: case 669: case 670: case 719: case 720: case 769: case 770: case 819: case 820: case 869: case 870: case 919: case 920: case 969: case 970: case 1019: case 1020: return 10;
				case 271: case 272: case 321: case 322: case 371: case 372: case 421: case 422: case 471: case 472: case 521: case 522: case 571: case 572: case 621: case 622: case 671: case 672: case 721: case 722: case 771: case 772: case 821: case 822: case 871: case 872: case 921: case 922: case 971: case 972: case 1021: case 1022: return 11;
				case 273: case 274: case 323: case 324: case 373: case 374: case 423: case 424: case 473: case 474: case 523: case 524: case 573: case 574: case 623: case 624: case 673: case 674: case 723: case 724: case 773: case 774: case 823: case 824: case 873: case 874: case 923: case 924: case 973: case 974: case 1023: case 1024: return 12;
				case 275: case 276: case 325: case 326: case 375: case 376: case 425: case 426: case 475: case 476: case 525: case 526: case 575: case 576: case 625: case 626: case 675: case 676: case 725: case 726: case 775: case 776: case 825: case 826: case 875: case 876: case 925: case 926: case 975: case 976: case 1025: case 1026: return 13;
				case 277: case 278: case 327: case 328: case 377: case 378: case 427: case 428: case 477: case 478: case 527: case 528: case 577: case 578: case 627: case 628: case 677: case 678: case 727: case 728: case 777: case 778: case 827: case 828: case 877: case 878: case 927: case 928: case 977: case 978: case 1027: case 1028: return 14;
				case 279: case 280: case 329: case 330: case 379: case 380: case 429: case 430: case 479: case 480: case 529: case 530: case 579: case 580: case 629: case 630: case 679: case 680: case 729: case 730: case 779: case 780: case 829: case 830: case 879: case 880: case 929: case 930: case 979: case 980: case 1029: case 1030: return 15;
				case 281: case 282: case 331: case 332: case 381: case 382: case 431: case 432: case 481: case 482: case 531: case 532: case 581: case 582: case 631: case 632: case 681: case 682: case 731: case 732: case 781: case 782: case 831: case 832: case 881: case 882: case 931: case 932: case 981: case 982: case 1031: case 1032: return 16;
				case 283: case 284: case 333: case 334: case 383: case 384: case 433: case 434: case 483: case 484: case 533: case 534: case 583: case 584: case 633: case 634: case 683: case 684: case 733: case 734: case 783: case 784: case 833: case 834: case 883: case 884: case 933: case 934: case 983: case 984: case 1033: case 1034: return 17;
				case 285: case 286: case 335: case 336: case 385: case 386: case 435: case 436: case 485: case 486: case 535: case 536: case 585: case 586: case 635: case 636: case 685: case 686: case 735: case 736: case 785: case 786: case 835: case 836: case 885: case 886: case 935: case 936: case 985: case 986: case 1035: case 1036: return 18;
				case 287: case 288: case 337: case 338: case 387: case 388: case 437: case 438: case 487: case 488: case 537: case 538: case 587: case 588: case 637: case 638: case 687: case 688: case 737: case 738: case 787: case 788: case 837: case 838: case 887: case 888: case 937: case 938: case 987: case 988: case 1037: case 1038: return 19;
				case 253: case 254: case 303: case 304: case 353: case 354: case 403: case 404: case 453: case 454: case 503: case 504: case 553: case 554: case 603: case 604: case 653: case 654: case 703: case 704: case 753: case 754: case 803: case 804: case 853: case 854: case 903: case 904: case 953: case 954: case 1003: case 1004: return 2;
				case 289: case 290: case 339: case 340: case 389: case 390: case 439: case 440: case 489: case 490: case 539: case 540: case 589: case 590: case 639: case 640: case 689: case 690: case 739: case 740: case 789: case 790: case 839: case 840: case 889: case 890: case 939: case 940: case 989: case 990: case 1039: case 1040: return 20;
				case 291: case 292: case 341: case 342: case 391: case 392: case 441: case 442: case 491: case 492: case 541: case 542: case 591: case 592: case 641: case 642: case 691: case 692: case 741: case 742: case 791: case 792: case 841: case 842: case 891: case 892: case 941: case 942: case 991: case 992: case 1041: case 1042: return 21;
				case 293: case 294: case 343: case 344: case 393: case 394: case 443: case 444: case 493: case 494: case 543: case 544: case 593: case 594: case 643: case 644: case 693: case 694: case 743: case 744: case 793: case 794: case 843: case 844: case 893: case 894: case 943: case 944: case 993: case 994: case 1043: case 1044: return 22;
				case 295: case 296: case 345: case 346: case 395: case 396: case 445: case 446: case 495: case 496: case 545: case 546: case 595: case 596: case 645: case 646: case 695: case 696: case 745: case 746: case 795: case 796: case 845: case 846: case 895: case 896: case 945: case 946: case 995: case 996: case 1045: case 1046: return 23;
				case 297: case 298: case 347: case 348: case 397: case 398: case 447: case 448: case 497: case 498: case 547: case 548: case 597: case 598: case 647: case 648: case 697: case 698: case 747: case 748: case 797: case 798: case 847: case 848: case 897: case 898: case 947: case 948: case 997: case 998: case 1047: case 1048: return 24;
				case 255: case 256: case 305: case 306: case 355: case 356: case 405: case 406: case 455: case 456: case 505: case 506: case 555: case 556: case 605: case 606: case 655: case 656: case 705: case 706: case 755: case 756: case 805: case 806: case 855: case 856: case 905: case 906: case 955: case 956: case 1005: case 1006: return 3;
				case 257: case 258: case 307: case 308: case 357: case 358: case 407: case 408: case 457: case 458: case 507: case 508: case 557: case 558: case 607: case 608: case 657: case 658: case 707: case 708: case 757: case 758: case 807: case 808: case 857: case 858: case 907: case 908: case 957: case 958: case 1007: case 1008: return 4;
				case 259: case 260: case 309: case 310: case 359: case 360: case 409: case 410: case 459: case 460: case 509: case 510: case 559: case 560: case 609: case 610: case 659: case 660: case 709: case 710: case 759: case 760: case 809: case 810: case 859: case 860: case 909: case 910: case 959: case 960: case 1009: case 1010: return 5;
				case 261: case 262: case 311: case 312: case 361: case 362: case 411: case 412: case 461: case 462: case 511: case 512: case 561: case 562: case 611: case 612: case 661: case 662: case 711: case 712: case 761: case 762: case 811: case 812: case 861: case 862: case 911: case 912: case 961: case 962: case 1011: case 1012: return 6;
				case 263: case 264: case 313: case 314: case 363: case 364: case 413: case 414: case 463: case 464: case 513: case 514: case 563: case 564: case 613: case 614: case 663: case 664: case 713: case 714: case 763: case 764: case 813: case 814: case 863: case 864: case 913: case 914: case 963: case 964: case 1013: case 1014: return 7;
				case 265: case 266: case 315: case 316: case 365: case 366: case 415: case 416: case 465: case 466: case 515: case 516: case 565: case 566: case 615: case 616: case 665: case 666: case 715: case 716: case 765: case 766: case 815: case 816: case 865: case 866: case 915: case 916: case 965: case 966: case 1015: case 1016: return 8;
				default: return 9;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 250: case 252: case 254: case 256: case 258: case 260: case 262: case 264: case 266: case 268: case 270: case 272: case 274: case 276: case 278: case 280: case 282: case 284: case 286: case 288: case 290: case 292: case 294: case 296: case 298: case 300: case 302: case 304: case 306: case 308: case 310: case 312: case 314: case 316: case 318: case 320: case 322: case 324: case 326: case 328: case 330: case 332: case 334: case 336: case 338: case 340: case 342: case 344: case 346: case 348: case 350: case 352: case 354: case 356: case 358: case 360: case 362: case 364: case 366: case 368: case 370: case 372: case 374: case 376: case 378: case 380: case 382: case 384: case 386: case 388: case 390: case 392: case 394: case 396: case 398: case 400: case 402: case 404: case 406: case 408: case 410: case 412: case 414: case 416: case 418: case 420: case 422: case 424: case 426: case 428: case 430: case 432: case 434: case 436: case 438: case 440: case 442: case 444: case 446: case 448: case 450: case 452: case 454: case 456: case 458: case 460: case 462: case 464: case 466: case 468: case 470: case 472: case 474: case 476: case 478: case 480: case 482: case 484: case 486: case 488: case 490: case 492: case 494: case 496: case 498: case 500: case 502: case 504: case 506: case 508: case 510: case 512: case 514: case 516: case 518: case 520: case 522: case 524: case 526: case 528: case 530: case 532: case 534: case 536: case 538: case 540: case 542: case 544: case 546: case 548: case 550: case 552: case 554: case 556: case 558: case 560: case 562: case 564: case 566: case 568: case 570: case 572: case 574: case 576: case 578: case 580: case 582: case 584: case 586: case 588: case 590: case 592: case 594: case 596: case 598: case 600: case 602: case 604: case 606: case 608: case 610: case 612: case 614: case 616: case 618: case 620: case 622: case 624: case 626: case 628: case 630: case 632: case 634: case 636: case 638: case 640: case 642: case 644: case 646: case 648: case 650: case 652: case 654: case 656: case 658: case 660: case 662: case 664: case 666: case 668: case 670: case 672: case 674: case 676: case 678: case 680: case 682: case 684: case 686: case 688: case 690: case 692: case 694: case 696: case 698: case 700: case 702: case 704: case 706: case 708: case 710: case 712: case 714: case 716: case 718: case 720: case 722: case 724: case 726: case 728: case 730: case 732: case 734: case 736: case 738: case 740: case 742: case 744: case 746: case 748: case 750: case 752: case 754: case 756: case 758: case 760: case 762: case 764: case 766: case 768: case 770: case 772: case 774: case 776: case 778: case 780: case 782: case 784: case 786: case 788: case 790: case 792: case 794: case 796: case 798: case 800: case 802: case 804: case 806: case 808: case 810: case 812: case 814: case 816: case 818: case 820: case 822: case 824: case 826: case 828: case 830: case 832: case 834: case 836: case 838: case 840: case 842: case 844: case 846: case 848: case 850: case 852: case 854: case 856: case 858: case 860: case 862: case 864: case 866: case 868: case 870: case 872: case 874: case 876: case 878: case 880: case 882: case 884: case 886: case 888: case 890: case 892: case 894: case 896: case 898: case 900: case 902: case 904: case 906: case 908: case 910: case 912: case 914: case 916: case 918: case 920: case 922: case 924: case 926: case 928: case 930: case 932: case 934: case 936: case 938: case 940: case 942: case 944: case 946: case 948: case 950: case 952: case 954: case 956: case 958: case 960: case 962: case 964: case 966: case 968: case 970: case 972: case 974: case 976: case 978: case 980: case 982: case 984: case 986: case 988: case 990: case 992: case 994: case 996: case 998: case 1000: case 1002: case 1004: case 1006: case 1008: case 1010: case 1012: case 1014: case 1016: case 1018: case 1020: case 1022: case 1024: case 1046: case 1048: case 1026: case 1028: case 1030: case 1032: case 1034: case 1036: case 1038: case 1040: case 1042: case 1044: return false;
				default: return true;
			}
		}
	}
	namespace OakButton
	{
		short OakButton()
		{
			return 6355;
		}
		enum Face Face(short ID)
		{
			switch (ID)
			{
				case 6362: case 6366: case 6363: case 6367: case 6364: case 6368: case 6365: case 6369: return Face::Ceiling;
				case 6346: case 6350: case 6347: case 6351: case 6348: case 6352: case 6349: case 6353: return Face::Floor;
				default: return Face::Wall;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6350: case 6358: case 6366: case 6351: case 6359: case 6367: return eBlockFace::BLOCK_FACE_XM;
				case 6352: case 6360: case 6368: case 6353: case 6361: case 6369: return eBlockFace::BLOCK_FACE_XP;
				case 6346: case 6354: case 6362: case 6347: case 6355: case 6363: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 6347: case 6351: case 6355: case 6359: case 6363: case 6367: case 6349: case 6353: case 6357: case 6361: case 6365: case 6369: return false;
				default: return true;
			}
		}
	}
	namespace OakDoor
	{
		short OakDoor()
		{
			return 3584;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 3610: case 3618: case 3611: case 3619: case 3612: case 3620: case 3605: case 3613: case 3606: case 3614: case 3607: case 3615: case 3608: case 3616: case 3609: case 3617: return eBlockFace::BLOCK_FACE_XM;
				case 3626: case 3634: case 3627: case 3635: case 3628: case 3621: case 3629: case 3622: case 3630: case 3623: case 3631: case 3624: case 3632: case 3625: case 3633: case 3636: return eBlockFace::BLOCK_FACE_XP;
				case 3579: case 3587: case 3580: case 3588: case 3573: case 3581: case 3574: case 3582: case 3575: case 3583: case 3576: case 3584: case 3577: case 3585: case 3578: case 3586: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 3618: case 3634: case 3587: case 3603: case 3619: case 3635: case 3588: case 3604: case 3620: case 3581: case 3597: case 3613: case 3629: case 3582: case 3598: case 3614: case 3630: case 3583: case 3599: case 3615: case 3631: case 3584: case 3600: case 3616: case 3632: case 3585: case 3601: case 3617: case 3633: case 3586: case 3602: case 3636: return Half::Lower;
				default: return Half::Upper;
			}
		}
		enum Hinge Hinge(short ID)
		{
			switch (ID)
			{
				case 3573: case 3581: case 3589: case 3597: case 3605: case 3613: case 3621: case 3629: case 3574: case 3582: case 3590: case 3598: case 3606: case 3614: case 3622: case 3630: case 3575: case 3583: case 3591: case 3599: case 3607: case 3615: case 3623: case 3631: case 3576: case 3584: case 3592: case 3600: case 3608: case 3616: case 3624: case 3632: return Hinge::Left;
				default: return Hinge::Right;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 3579: case 3587: case 3595: case 3603: case 3611: case 3619: case 3627: case 3635: case 3580: case 3588: case 3596: case 3604: case 3612: case 3620: case 3628: case 3575: case 3583: case 3591: case 3599: case 3607: case 3615: case 3623: case 3631: case 3576: case 3584: case 3592: case 3600: case 3608: case 3616: case 3624: case 3632: case 3636: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 3610: case 3618: case 3626: case 3634: case 3580: case 3588: case 3596: case 3604: case 3612: case 3620: case 3628: case 3574: case 3582: case 3590: case 3598: case 3606: case 3614: case 3622: case 3630: case 3576: case 3584: case 3592: case 3600: case 3608: case 3616: case 3624: case 3632: case 3578: case 3586: case 3594: case 3602: case 3636: return false;
				default: return true;
			}
		}
	}
	namespace OakFence
	{
		short OakFence()
		{
			return 3997;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 3983: case 3985: case 3987: case 3989: case 3991: case 3993: case 3995: case 3982: case 3984: case 3986: case 3988: case 3990: case 3992: case 3994: case 3996: case 3997: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 3979: case 3981: case 3991: case 3993: case 3995: case 3974: case 3976: case 3978: case 3980: case 3990: case 3992: case 3994: case 3996: case 3975: case 3977: case 3997: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 3979: case 3981: case 3987: case 3989: case 3995: case 3970: case 3972: case 3978: case 3980: case 3986: case 3988: case 3994: case 3996: case 3971: case 3973: case 3997: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 3981: case 3985: case 3989: case 3993: case 3968: case 3972: case 3976: case 3980: case 3984: case 3988: case 3992: case 3996: case 3969: case 3973: case 3977: case 3997: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 3979: case 3981: case 3983: case 3985: case 3987: case 3989: case 3991: case 3993: case 3995: case 3967: case 3969: case 3971: case 3973: case 3975: case 3977: case 3997: return false;
				default: return true;
			}
		}
	}
	namespace OakFenceGate
	{
		short OakFenceGate()
		{
			return 4827;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 4839: case 4843: case 4836: case 4840: case 4837: case 4841: case 4838: case 4842: return eBlockFace::BLOCK_FACE_XM;
				case 4847: case 4844: case 4848: case 4845: case 4849: case 4846: case 4850: case 4851: return eBlockFace::BLOCK_FACE_XP;
				case 4823: case 4827: case 4820: case 4824: case 4821: case 4825: case 4822: case 4826: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool InWall(short ID)
		{
			switch (ID)
			{
				case 4827: case 4835: case 4843: case 4824: case 4832: case 4840: case 4848: case 4825: case 4833: case 4841: case 4849: case 4826: case 4834: case 4842: case 4850: case 4851: return false;
				default: return true;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 4823: case 4827: case 4831: case 4835: case 4839: case 4843: case 4847: case 4822: case 4826: case 4830: case 4834: case 4838: case 4842: case 4846: case 4850: case 4851: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 4823: case 4827: case 4831: case 4835: case 4839: case 4843: case 4847: case 4821: case 4825: case 4829: case 4833: case 4837: case 4841: case 4845: case 4849: case 4851: return false;
				default: return true;
			}
		}
	}
	namespace OakLeaves
	{
		short OakLeaves()
		{
			return 158;
		}
		unsigned char Distance(short ID)
		{
			switch (ID)
			{
				case 146: case 145: return 1;
				case 147: case 148: return 2;
				case 149: case 150: return 3;
				case 151: case 152: return 4;
				case 153: case 154: return 5;
				case 155: case 156: return 6;
				default: return 7;
			}
		}
		bool Persistent(short ID)
		{
			switch (ID)
			{
				case 146: case 154: case 148: case 156: case 150: case 158: case 152: return false;
				default: return true;
			}
		}
	}
	namespace OakLog
	{
		short OakLog()
		{
			return 74;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 73: return Axis::X;
				case 74: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace OakPlanks
	{
	}
	namespace OakPressurePlate
	{
		short OakPressurePlate()
		{
			return 3874;
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 3874: return false;
				default: return true;
			}
		}
	}
	namespace OakSapling
	{
		short OakSapling()
		{
			return 21;
		}
		unsigned char Stage(short ID)
		{
			switch (ID)
			{
				case 21: return 0;
				default: return 1;
			}
		}
	}
	namespace OakSign
	{
		short OakSign()
		{
			return 3382;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 3381: case 3382: return 0;
				case 3383: case 3384: return 1;
				case 3402: case 3401: return 10;
				case 3404: case 3403: return 11;
				case 3406: case 3405: return 12;
				case 3408: case 3407: return 13;
				case 3410: case 3409: return 14;
				case 3411: case 3412: return 15;
				case 3385: case 3386: return 2;
				case 3387: case 3388: return 3;
				case 3390: case 3389: return 4;
				case 3392: case 3391: return 5;
				case 3394: case 3393: return 6;
				case 3396: case 3395: return 7;
				case 3398: case 3397: return 8;
				default: return 9;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 3390: case 3392: case 3394: case 3396: case 3398: case 3400: case 3402: case 3404: case 3406: case 3408: case 3410: case 3382: case 3384: case 3386: case 3388: case 3412: return false;
				default: return true;
			}
		}
	}
	namespace OakSlab
	{
		short OakSlab()
		{
			return 8303;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8302: case 8303: return Type::Bottom;
				case 8304: case 8305: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8301: case 8305: case 8303: return false;
				default: return true;
			}
		}
	}
	namespace OakStairs
	{
		short OakStairs()
		{
			return 1965;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 2000: case 2001: case 2002: case 2003: case 2004: case 2005: case 2006: case 2007: case 2008: case 2009: case 1994: case 2010: case 1995: case 2011: case 1996: case 2012: case 1997: case 2013: case 1998: case 1999: return eBlockFace::BLOCK_FACE_XM;
				case 2031: case 2016: case 2032: case 2017: case 2033: case 2018: case 2019: case 2020: case 2021: case 2022: case 2023: case 2024: case 2025: case 2026: case 2027: case 2028: case 2029: case 2014: case 2030: case 2015: return eBlockFace::BLOCK_FACE_XP;
				case 1968: case 1969: case 1954: case 1970: case 1955: case 1971: case 1956: case 1972: case 1957: case 1973: case 1958: case 1959: case 1960: case 1961: case 1962: case 1963: case 1964: case 1965: case 1966: case 1967: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 2031: case 1968: case 1984: case 2032: case 1969: case 1985: case 2033: case 1970: case 1986: case 1971: case 1987: case 1972: case 1988: case 2004: case 1973: case 1989: case 2005: case 1990: case 2006: case 1991: case 2007: case 1992: case 2008: case 2024: case 1993: case 2009: case 2025: case 2010: case 2026: case 2011: case 2027: case 1964: case 2012: case 2028: case 1965: case 2013: case 2029: case 1966: case 2030: case 1967: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 2016: case 2017: case 1986: case 1987: case 1956: case 1957: case 2006: case 2007: case 1976: case 1977: case 2026: case 2027: case 1996: case 1997: case 1966: case 1967: return Shape::InnerLeft;
				case 1968: case 1969: case 2018: case 2019: case 1988: case 1989: case 1958: case 1959: case 2008: case 2009: case 1978: case 1979: case 2028: case 2029: case 1998: case 1999: return Shape::InnerRight;
				case 2031: case 2000: case 2001: case 1970: case 1971: case 2020: case 2021: case 1990: case 1991: case 1960: case 1961: case 2010: case 2011: case 1980: case 1981: case 2030: return Shape::OuterLeft;
				case 2032: case 2033: case 2002: case 2003: case 1972: case 1973: case 2022: case 2023: case 1992: case 1993: case 1962: case 1963: case 2012: case 2013: case 1982: case 1983: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 2031: case 1969: case 1985: case 2001: case 2017: case 2033: case 1955: case 1971: case 1987: case 2003: case 2019: case 1957: case 1973: case 1989: case 2005: case 2021: case 1959: case 1975: case 1991: case 2007: case 2023: case 1961: case 1977: case 1993: case 2009: case 2025: case 1963: case 1979: case 1995: case 2011: case 2027: case 1965: case 1981: case 1997: case 2013: case 2029: case 1967: case 1983: case 1999: case 2015: return false;
				default: return true;
			}
		}
	}
	namespace OakTrapdoor
	{
		short OakTrapdoor()
		{
			return 4126;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 4148: case 4149: case 4150: case 4151: case 4152: case 4153: case 4154: case 4155: case 4156: case 4157: case 4158: case 4143: case 4144: case 4145: case 4146: case 4147: return eBlockFace::BLOCK_FACE_XM;
				case 4164: case 4165: case 4166: case 4167: case 4168: case 4169: case 4170: case 4171: case 4172: case 4173: case 4159: case 4160: case 4161: case 4162: case 4163: case 4174: return eBlockFace::BLOCK_FACE_XP;
				case 4117: case 4118: case 4119: case 4120: case 4121: case 4122: case 4123: case 4124: case 4125: case 4126: case 4111: case 4112: case 4113: case 4114: case 4115: case 4116: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 4119: case 4135: case 4151: case 4167: case 4120: case 4136: case 4152: case 4168: case 4121: case 4137: case 4153: case 4169: case 4122: case 4138: case 4154: case 4170: case 4123: case 4139: case 4155: case 4171: case 4124: case 4140: case 4156: case 4172: case 4125: case 4141: case 4157: case 4173: case 4126: case 4142: case 4158: case 4174: return Half::Bottom;
				default: return Half::Top;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 4132: case 4148: case 4164: case 4117: case 4133: case 4149: case 4165: case 4118: case 4134: case 4150: case 4166: case 4123: case 4139: case 4155: case 4171: case 4124: case 4140: case 4156: case 4172: case 4125: case 4141: case 4157: case 4173: case 4126: case 4142: case 4158: case 4115: case 4131: case 4147: case 4163: case 4116: case 4174: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 4117: case 4133: case 4149: case 4165: case 4118: case 4134: case 4150: case 4166: case 4121: case 4137: case 4153: case 4169: case 4122: case 4138: case 4154: case 4170: case 4125: case 4141: case 4157: case 4173: case 4126: case 4142: case 4158: case 4113: case 4129: case 4145: case 4161: case 4114: case 4130: case 4146: case 4162: case 4174: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 4132: case 4148: case 4164: case 4118: case 4134: case 4150: case 4166: case 4120: case 4136: case 4152: case 4168: case 4122: case 4138: case 4154: case 4170: case 4124: case 4140: case 4156: case 4172: case 4126: case 4142: case 4158: case 4112: case 4128: case 4144: case 4160: case 4114: case 4130: case 4146: case 4162: case 4116: case 4174: return false;
				default: return true;
			}
		}
	}
	namespace OakWallSign
	{
		short OakWallSign()
		{
			return 3736;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 3739: case 3740: return eBlockFace::BLOCK_FACE_XM;
				case 3741: case 3742: return eBlockFace::BLOCK_FACE_XP;
				case 3736: case 3735: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 3736: case 3738: case 3740: case 3742: return false;
				default: return true;
			}
		}
	}
	namespace OakWood
	{
		short OakWood()
		{
			return 110;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 109: return Axis::X;
				case 110: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace Observer
	{
		short Observer()
		{
			return 9265;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9267: case 9266: return eBlockFace::BLOCK_FACE_XM;
				case 9263: case 9262: return eBlockFace::BLOCK_FACE_XP;
				case 9270: case 9271: return eBlockFace::BLOCK_FACE_YM;
				case 9269: case 9268: return eBlockFace::BLOCK_FACE_YP;
				case 9261: case 9260: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 9261: case 9263: case 9265: case 9267: case 9269: case 9271: return false;
				default: return true;
			}
		}
	}
	namespace Obsidian
	{
	}
	namespace OrangeBanner
	{
		short OrangeBanner()
		{
			return 7913;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 7913: return 0;
				case 7914: return 1;
				case 7923: return 10;
				case 7924: return 11;
				case 7925: return 12;
				case 7926: return 13;
				case 7927: return 14;
				case 7928: return 15;
				case 7915: return 2;
				case 7916: return 3;
				case 7917: return 4;
				case 7918: return 5;
				case 7919: return 6;
				case 7920: return 7;
				case 7921: return 8;
				default: return 9;
			}
		}
	}
	namespace OrangeBed
	{
		short OrangeBed()
		{
			return 1068;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1074: case 1075: case 1076: case 1073: return eBlockFace::BLOCK_FACE_XM;
				case 1077: case 1078: case 1079: case 1080: return eBlockFace::BLOCK_FACE_XP;
				case 1066: case 1067: case 1068: case 1065: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Occupied(short ID)
		{
			switch (ID)
			{
				case 1067: case 1071: case 1075: case 1079: case 1068: case 1072: case 1076: case 1080: return false;
				default: return true;
			}
		}
		enum Part Part(short ID)
		{
			switch (ID)
			{
				case 1066: case 1070: case 1074: case 1078: case 1068: case 1072: case 1076: case 1080: return Part::Foot;
				default: return Part::Head;
			}
		}
	}
	namespace OrangeCarpet
	{
	}
	namespace OrangeConcrete
	{
	}
	namespace OrangeConcretePowder
	{
	}
	namespace OrangeGlazedTerracotta
	{
		short OrangeGlazedTerracotta()
		{
			return 9378;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9380: return eBlockFace::BLOCK_FACE_XM;
				case 9381: return eBlockFace::BLOCK_FACE_XP;
				case 9378: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace OrangeShulkerBox
	{
		short OrangeShulkerBox()
		{
			return 9288;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9287: return eBlockFace::BLOCK_FACE_XM;
				case 9285: return eBlockFace::BLOCK_FACE_XP;
				case 9289: return eBlockFace::BLOCK_FACE_YM;
				case 9288: return eBlockFace::BLOCK_FACE_YP;
				case 9284: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace OrangeStainedGlass
	{
	}
	namespace OrangeStainedGlassPane
	{
		short OrangeStainedGlassPane()
		{
			return 6926;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 6912: case 6916: case 6920: case 6924: case 6913: case 6917: case 6921: case 6925: case 6914: case 6918: case 6922: case 6911: case 6915: case 6919: case 6923: case 6926: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 6904: case 6908: case 6920: case 6924: case 6905: case 6909: case 6921: case 6925: case 6906: case 6910: case 6922: case 6903: case 6907: case 6919: case 6923: case 6926: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 6900: case 6908: case 6916: case 6924: case 6901: case 6909: case 6917: case 6925: case 6902: case 6910: case 6918: case 6899: case 6907: case 6915: case 6923: case 6926: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 6897: case 6901: case 6905: case 6909: case 6913: case 6917: case 6921: case 6925: case 6898: case 6902: case 6906: case 6910: case 6914: case 6918: case 6922: case 6926: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 6900: case 6904: case 6908: case 6912: case 6916: case 6920: case 6924: case 6898: case 6902: case 6906: case 6910: case 6914: case 6918: case 6922: case 6896: case 6926: return false;
				default: return true;
			}
		}
	}
	namespace OrangeTerracotta
	{
	}
	namespace OrangeTulip
	{
	}
	namespace OrangeWallBanner
	{
		short OrangeWallBanner()
		{
			return 8157;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8159: return eBlockFace::BLOCK_FACE_XM;
				case 8160: return eBlockFace::BLOCK_FACE_XP;
				case 8157: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace OrangeWool
	{
	}
	namespace OxeyeDaisy
	{
	}
	namespace PackedIce
	{
	}
	namespace Peony
	{
		short Peony()
		{
			return 7892;
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 7892: return Half::Lower;
				default: return Half::Upper;
			}
		}
	}
	namespace PetrifiedOakSlab
	{
		short PetrifiedOakSlab()
		{
			return 8363;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8362: case 8363: return Type::Bottom;
				case 8364: case 8365: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8361: case 8365: case 8363: return false;
				default: return true;
			}
		}
	}
	namespace PinkBanner
	{
		short PinkBanner()
		{
			return 7993;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 7993: return 0;
				case 7994: return 1;
				case 8003: return 10;
				case 8004: return 11;
				case 8005: return 12;
				case 8006: return 13;
				case 8007: return 14;
				case 8008: return 15;
				case 7995: return 2;
				case 7996: return 3;
				case 7997: return 4;
				case 7998: return 5;
				case 7999: return 6;
				case 8000: return 7;
				case 8001: return 8;
				default: return 9;
			}
		}
	}
	namespace PinkBed
	{
		short PinkBed()
		{
			return 1148;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1156: case 1153: case 1154: case 1155: return eBlockFace::BLOCK_FACE_XM;
				case 1157: case 1158: case 1159: case 1160: return eBlockFace::BLOCK_FACE_XP;
				case 1145: case 1146: case 1147: case 1148: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Occupied(short ID)
		{
			switch (ID)
			{
				case 1152: case 1156: case 1147: case 1151: case 1155: case 1159: case 1148: case 1160: return false;
				default: return true;
			}
		}
		enum Part Part(short ID)
		{
			switch (ID)
			{
				case 1152: case 1156: case 1146: case 1150: case 1154: case 1158: case 1148: case 1160: return Part::Foot;
				default: return Part::Head;
			}
		}
	}
	namespace PinkCarpet
	{
	}
	namespace PinkConcrete
	{
	}
	namespace PinkConcretePowder
	{
	}
	namespace PinkGlazedTerracotta
	{
		short PinkGlazedTerracotta()
		{
			return 9398;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9400: return eBlockFace::BLOCK_FACE_XM;
				case 9401: return eBlockFace::BLOCK_FACE_XP;
				case 9398: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace PinkShulkerBox
	{
		short PinkShulkerBox()
		{
			return 9318;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9317: return eBlockFace::BLOCK_FACE_XM;
				case 9315: return eBlockFace::BLOCK_FACE_XP;
				case 9319: return eBlockFace::BLOCK_FACE_YM;
				case 9318: return eBlockFace::BLOCK_FACE_YP;
				case 9314: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace PinkStainedGlass
	{
	}
	namespace PinkStainedGlassPane
	{
		short PinkStainedGlassPane()
		{
			return 7086;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 7071: case 7075: case 7079: case 7083: case 7072: case 7076: case 7080: case 7084: case 7073: case 7077: case 7081: case 7085: case 7074: case 7078: case 7082: case 7086: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 7063: case 7067: case 7079: case 7083: case 7064: case 7068: case 7080: case 7084: case 7065: case 7069: case 7081: case 7085: case 7066: case 7070: case 7082: case 7086: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 7059: case 7067: case 7075: case 7083: case 7060: case 7068: case 7076: case 7084: case 7061: case 7069: case 7077: case 7085: case 7062: case 7070: case 7078: case 7086: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7057: case 7061: case 7065: case 7069: case 7073: case 7077: case 7081: case 7085: case 7058: case 7062: case 7066: case 7070: case 7074: case 7078: case 7082: case 7086: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 7056: case 7060: case 7064: case 7068: case 7072: case 7076: case 7080: case 7084: case 7058: case 7062: case 7066: case 7070: case 7074: case 7078: case 7082: case 7086: return false;
				default: return true;
			}
		}
	}
	namespace PinkTerracotta
	{
	}
	namespace PinkTulip
	{
	}
	namespace PinkWallBanner
	{
		short PinkWallBanner()
		{
			return 8177;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8179: return eBlockFace::BLOCK_FACE_XM;
				case 8180: return eBlockFace::BLOCK_FACE_XP;
				case 8177: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace PinkWool
	{
	}
	namespace Piston
	{
		short Piston()
		{
			return 1354;
		}
		bool Extended(short ID)
		{
			switch (ID)
			{
				case 1355: case 1359: case 1356: case 1357: case 1354: case 1358: return false;
				default: return true;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1351: case 1357: return eBlockFace::BLOCK_FACE_XM;
				case 1355: case 1349: return eBlockFace::BLOCK_FACE_XP;
				case 1359: case 1353: return eBlockFace::BLOCK_FACE_YM;
				case 1352: case 1358: return eBlockFace::BLOCK_FACE_YP;
				case 1348: case 1354: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace PistonHead
	{
		short PistonHead()
		{
			return 1362;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1372: case 1373: case 1374: case 1375: return eBlockFace::BLOCK_FACE_XM;
				case 1364: case 1365: case 1366: case 1367: return eBlockFace::BLOCK_FACE_XP;
				case 1380: case 1381: case 1382: case 1383: return eBlockFace::BLOCK_FACE_YM;
				case 1376: case 1377: case 1378: case 1379: return eBlockFace::BLOCK_FACE_YP;
				case 1360: case 1361: case 1362: case 1363: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Short(short ID)
		{
			switch (ID)
			{
				case 1362: case 1363: case 1366: case 1367: case 1370: case 1371: case 1374: case 1375: case 1378: case 1379: case 1382: case 1383: return false;
				default: return true;
			}
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 1360: case 1362: case 1364: case 1366: case 1368: case 1370: case 1372: case 1374: case 1376: case 1378: case 1380: case 1382: return Type::Normal;
				default: return Type::Sticky;
			}
		}
	}
	namespace PlayerHead
	{
		short PlayerHead()
		{
			return 6550;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 6550: return 0;
				case 6551: return 1;
				case 6560: return 10;
				case 6561: return 11;
				case 6562: return 12;
				case 6563: return 13;
				case 6564: return 14;
				case 6565: return 15;
				case 6552: return 2;
				case 6553: return 3;
				case 6554: return 4;
				case 6555: return 5;
				case 6556: return 6;
				case 6557: return 7;
				case 6558: return 8;
				default: return 9;
			}
		}
	}
	namespace PlayerWallHead
	{
		short PlayerWallHead()
		{
			return 6566;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6568: return eBlockFace::BLOCK_FACE_XM;
				case 6569: return eBlockFace::BLOCK_FACE_XP;
				case 6566: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace Podzol
	{
		short Podzol()
		{
			return 13;
		}
		bool Snowy(short ID)
		{
			switch (ID)
			{
				case 13: return false;
				default: return true;
			}
		}
	}
	namespace PolishedAndesite
	{
	}
	namespace PolishedAndesiteSlab
	{
		short PolishedAndesiteSlab()
		{
			return 10858;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 10857: case 10858: return Type::Bottom;
				case 10859: case 10860: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10856: case 10860: case 10858: return false;
				default: return true;
			}
		}
	}
	namespace PolishedAndesiteStairs
	{
		short PolishedAndesiteStairs()
		{
			return 10640;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 10669: case 10670: case 10671: case 10672: case 10673: case 10674: case 10675: case 10676: case 10677: case 10678: case 10679: case 10680: case 10681: case 10682: case 10683: case 10684: case 10685: case 10686: case 10687: case 10688: return eBlockFace::BLOCK_FACE_XM;
				case 10689: case 10690: case 10691: case 10692: case 10693: case 10694: case 10695: case 10696: case 10697: case 10698: case 10699: case 10700: case 10701: case 10702: case 10703: case 10704: case 10705: case 10706: case 10707: case 10708: return eBlockFace::BLOCK_FACE_XP;
				case 10629: case 10630: case 10631: case 10632: case 10633: case 10634: case 10635: case 10636: case 10637: case 10638: case 10639: case 10640: case 10641: case 10642: case 10643: case 10644: case 10645: case 10646: case 10647: case 10648: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 10639: case 10640: case 10641: case 10642: case 10643: case 10644: case 10645: case 10646: case 10647: case 10648: case 10659: case 10660: case 10661: case 10662: case 10663: case 10664: case 10665: case 10666: case 10667: case 10668: case 10679: case 10680: case 10681: case 10682: case 10683: case 10684: case 10685: case 10686: case 10687: case 10688: case 10699: case 10700: case 10701: case 10702: case 10703: case 10704: case 10705: case 10706: case 10707: case 10708: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 10631: case 10632: case 10641: case 10642: case 10651: case 10652: case 10661: case 10662: case 10671: case 10672: case 10681: case 10682: case 10691: case 10692: case 10701: case 10702: return Shape::InnerLeft;
				case 10633: case 10634: case 10643: case 10644: case 10653: case 10654: case 10663: case 10664: case 10673: case 10674: case 10683: case 10684: case 10693: case 10694: case 10703: case 10704: return Shape::InnerRight;
				case 10635: case 10636: case 10645: case 10646: case 10655: case 10656: case 10665: case 10666: case 10675: case 10676: case 10685: case 10686: case 10695: case 10696: case 10705: case 10706: return Shape::OuterLeft;
				case 10637: case 10638: case 10647: case 10648: case 10657: case 10658: case 10667: case 10668: case 10677: case 10678: case 10687: case 10688: case 10697: case 10698: case 10707: case 10708: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10630: case 10632: case 10634: case 10636: case 10638: case 10640: case 10642: case 10644: case 10646: case 10648: case 10650: case 10652: case 10654: case 10656: case 10658: case 10660: case 10662: case 10664: case 10666: case 10668: case 10670: case 10672: case 10674: case 10676: case 10678: case 10680: case 10682: case 10684: case 10686: case 10688: case 10690: case 10692: case 10694: case 10696: case 10698: case 10700: case 10702: case 10704: case 10706: case 10708: return false;
				default: return true;
			}
		}
	}
	namespace PolishedBasalt
	{
		short PolishedBasalt()
		{
			return 4006;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 4005: return Axis::X;
				case 4006: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace PolishedBlackstone
	{
	}
	namespace PolishedBlackstoneBrickSlab
	{
		short PolishedBlackstoneBrickSlab()
		{
			return 16257;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 16256: case 16257: return Type::Bottom;
				case 16258: case 16259: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 16257: case 16255: case 16259: return false;
				default: return true;
			}
		}
	}
	namespace PolishedBlackstoneBrickStairs
	{
		short PolishedBlackstoneBrickStairs()
		{
			return 16271;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 16310: case 16311: case 16312: case 16313: case 16314: case 16315: case 16316: case 16317: case 16318: case 16319: case 16300: case 16301: case 16302: case 16303: case 16304: case 16305: case 16306: case 16307: case 16308: case 16309: return eBlockFace::BLOCK_FACE_XM;
				case 16320: case 16321: case 16322: case 16323: case 16324: case 16325: case 16326: case 16327: case 16328: case 16329: case 16330: case 16331: case 16332: case 16333: case 16334: case 16335: case 16336: case 16337: case 16338: case 16339: return eBlockFace::BLOCK_FACE_XP;
				case 16260: case 16261: case 16262: case 16263: case 16264: case 16265: case 16266: case 16267: case 16268: case 16269: case 16270: case 16271: case 16272: case 16273: case 16274: case 16275: case 16276: case 16277: case 16278: case 16279: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 16310: case 16311: case 16312: case 16313: case 16314: case 16315: case 16316: case 16317: case 16318: case 16319: case 16330: case 16331: case 16332: case 16333: case 16334: case 16335: case 16336: case 16337: case 16338: case 16339: case 16270: case 16271: case 16272: case 16273: case 16274: case 16275: case 16276: case 16277: case 16278: case 16279: case 16290: case 16291: case 16292: case 16293: case 16294: case 16295: case 16296: case 16297: case 16298: case 16299: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 16312: case 16313: case 16322: case 16323: case 16332: case 16333: case 16262: case 16263: case 16272: case 16273: case 16282: case 16283: case 16292: case 16293: case 16302: case 16303: return Shape::InnerLeft;
				case 16314: case 16315: case 16324: case 16325: case 16334: case 16335: case 16264: case 16265: case 16274: case 16275: case 16284: case 16285: case 16294: case 16295: case 16304: case 16305: return Shape::InnerRight;
				case 16316: case 16317: case 16326: case 16327: case 16336: case 16337: case 16266: case 16267: case 16276: case 16277: case 16286: case 16287: case 16296: case 16297: case 16306: case 16307: return Shape::OuterLeft;
				case 16318: case 16319: case 16328: case 16329: case 16338: case 16339: case 16268: case 16269: case 16278: case 16279: case 16288: case 16289: case 16298: case 16299: case 16308: case 16309: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 16311: case 16313: case 16315: case 16317: case 16319: case 16321: case 16323: case 16325: case 16327: case 16329: case 16331: case 16333: case 16335: case 16337: case 16339: case 16261: case 16263: case 16265: case 16267: case 16269: case 16271: case 16273: case 16275: case 16277: case 16279: case 16281: case 16283: case 16285: case 16287: case 16289: case 16291: case 16293: case 16295: case 16297: case 16299: case 16301: case 16303: case 16305: case 16307: case 16309: return false;
				default: return true;
			}
		}
	}
	namespace PolishedBlackstoneBrickWall
	{
		short PolishedBlackstoneBrickWall()
		{
			return 16343;
		}
		enum East East(short ID)
		{
			switch (ID)
			{
				case 16455: case 16463: case 16471: case 16479: case 16487: case 16495: case 16503: case 16511: case 16519: case 16527: case 16535: case 16543: case 16551: case 16448: case 16456: case 16464: case 16472: case 16480: case 16488: case 16496: case 16504: case 16512: case 16520: case 16528: case 16536: case 16544: case 16552: case 16449: case 16457: case 16465: case 16473: case 16481: case 16489: case 16497: case 16505: case 16513: case 16521: case 16529: case 16537: case 16545: case 16553: case 16450: case 16458: case 16466: case 16474: case 16482: case 16490: case 16498: case 16506: case 16514: case 16522: case 16530: case 16538: case 16546: case 16554: case 16451: case 16459: case 16467: case 16475: case 16483: case 16491: case 16499: case 16507: case 16515: case 16523: case 16531: case 16539: case 16547: case 16555: case 16452: case 16460: case 16468: case 16476: case 16484: case 16492: case 16500: case 16508: case 16516: case 16524: case 16532: case 16540: case 16548: case 16453: case 16461: case 16469: case 16477: case 16485: case 16493: case 16501: case 16509: case 16517: case 16525: case 16533: case 16541: case 16549: case 16454: case 16462: case 16470: case 16478: case 16486: case 16494: case 16502: case 16510: case 16518: case 16526: case 16534: case 16542: case 16550: return East::Low;
				case 16415: case 16423: case 16431: case 16439: case 16447: case 16340: case 16344: case 16348: case 16352: case 16356: case 16360: case 16364: case 16368: case 16372: case 16376: case 16380: case 16384: case 16392: case 16400: case 16408: case 16416: case 16424: case 16432: case 16440: case 16385: case 16393: case 16401: case 16409: case 16417: case 16425: case 16433: case 16441: case 16341: case 16345: case 16349: case 16353: case 16357: case 16361: case 16365: case 16369: case 16373: case 16377: case 16381: case 16386: case 16394: case 16402: case 16410: case 16418: case 16426: case 16434: case 16442: case 16387: case 16395: case 16403: case 16411: case 16419: case 16427: case 16435: case 16443: case 16342: case 16346: case 16350: case 16354: case 16358: case 16362: case 16366: case 16370: case 16374: case 16378: case 16382: case 16388: case 16396: case 16404: case 16412: case 16420: case 16428: case 16436: case 16444: case 16389: case 16397: case 16405: case 16413: case 16421: case 16429: case 16437: case 16445: case 16343: case 16347: case 16351: case 16355: case 16359: case 16363: case 16367: case 16371: case 16375: case 16379: case 16383: case 16390: case 16398: case 16406: case 16414: case 16422: case 16430: case 16438: case 16446: case 16391: case 16399: case 16407: return East::None;
				default: return East::Tall;
			}
		}
		enum North North(short ID)
		{
			switch (ID)
			{
				case 16487: case 16495: case 16503: case 16511: case 16519: case 16599: case 16607: case 16615: case 16623: case 16376: case 16380: case 16384: case 16392: case 16400: case 16408: case 16488: case 16496: case 16504: case 16512: case 16592: case 16600: case 16608: case 16616: case 16624: case 16385: case 16393: case 16401: case 16409: case 16489: case 16497: case 16505: case 16513: case 16593: case 16601: case 16609: case 16617: case 16625: case 16377: case 16381: case 16386: case 16394: case 16402: case 16410: case 16490: case 16498: case 16506: case 16514: case 16594: case 16602: case 16610: case 16618: case 16626: case 16387: case 16395: case 16403: case 16411: case 16491: case 16499: case 16507: case 16515: case 16595: case 16603: case 16611: case 16619: case 16627: case 16378: case 16382: case 16388: case 16396: case 16404: case 16484: case 16492: case 16500: case 16508: case 16516: case 16596: case 16604: case 16612: case 16620: case 16389: case 16397: case 16405: case 16485: case 16493: case 16501: case 16509: case 16517: case 16597: case 16605: case 16613: case 16621: case 16379: case 16383: case 16390: case 16398: case 16406: case 16486: case 16494: case 16502: case 16510: case 16518: case 16598: case 16606: case 16614: case 16622: case 16391: case 16399: case 16407: return North::Low;
				case 16455: case 16463: case 16471: case 16479: case 16559: case 16567: case 16575: case 16583: case 16591: case 16340: case 16344: case 16348: case 16352: case 16356: case 16360: case 16364: case 16368: case 16372: case 16448: case 16456: case 16464: case 16472: case 16480: case 16560: case 16568: case 16576: case 16584: case 16449: case 16457: case 16465: case 16473: case 16481: case 16561: case 16569: case 16577: case 16585: case 16341: case 16345: case 16349: case 16353: case 16357: case 16361: case 16365: case 16369: case 16373: case 16450: case 16458: case 16466: case 16474: case 16482: case 16562: case 16570: case 16578: case 16586: case 16451: case 16459: case 16467: case 16475: case 16483: case 16563: case 16571: case 16579: case 16587: case 16342: case 16346: case 16350: case 16354: case 16358: case 16362: case 16366: case 16370: case 16374: case 16452: case 16460: case 16468: case 16476: case 16556: case 16564: case 16572: case 16580: case 16588: case 16453: case 16461: case 16469: case 16477: case 16557: case 16565: case 16573: case 16581: case 16589: case 16343: case 16347: case 16351: case 16355: case 16359: case 16363: case 16367: case 16371: case 16375: case 16454: case 16462: case 16470: case 16478: case 16558: case 16566: case 16574: case 16582: case 16590: return North::None;
				default: return North::Tall;
			}
		}
		enum South South(short ID)
		{
			switch (ID)
			{
				case 16431: case 16463: case 16471: case 16503: case 16535: case 16543: case 16575: case 16607: case 16615: case 16647: case 16352: case 16356: case 16360: case 16392: case 16424: case 16432: case 16464: case 16496: case 16504: case 16536: case 16568: case 16576: case 16608: case 16640: case 16648: case 16393: case 16425: case 16433: case 16465: case 16497: case 16505: case 16537: case 16569: case 16577: case 16609: case 16641: case 16649: case 16353: case 16357: case 16361: case 16394: case 16426: case 16434: case 16466: case 16498: case 16506: case 16538: case 16570: case 16578: case 16610: case 16642: case 16650: case 16395: case 16427: case 16435: case 16467: case 16499: case 16507: case 16539: case 16571: case 16579: case 16611: case 16643: case 16651: case 16354: case 16358: case 16362: case 16388: case 16396: case 16428: case 16460: case 16468: case 16500: case 16532: case 16540: case 16572: case 16604: case 16612: case 16644: case 16389: case 16397: case 16429: case 16461: case 16469: case 16501: case 16533: case 16541: case 16573: case 16605: case 16613: case 16645: case 16355: case 16359: case 16363: case 16390: case 16398: case 16430: case 16462: case 16470: case 16502: case 16534: case 16542: case 16574: case 16606: case 16614: case 16646: case 16391: case 16399: return South::Low;
				case 16415: case 16423: case 16455: case 16487: case 16495: case 16527: case 16559: case 16567: case 16599: case 16631: case 16639: case 16340: case 16344: case 16348: case 16376: case 16380: case 16384: case 16416: case 16448: case 16456: case 16488: case 16520: case 16528: case 16560: case 16592: case 16600: case 16632: case 16385: case 16417: case 16449: case 16457: case 16489: case 16521: case 16529: case 16561: case 16593: case 16601: case 16633: case 16341: case 16345: case 16349: case 16377: case 16381: case 16386: case 16418: case 16450: case 16458: case 16490: case 16522: case 16530: case 16562: case 16594: case 16602: case 16634: case 16387: case 16419: case 16451: case 16459: case 16491: case 16523: case 16531: case 16563: case 16595: case 16603: case 16635: case 16342: case 16346: case 16350: case 16378: case 16382: case 16412: case 16420: case 16452: case 16484: case 16492: case 16524: case 16556: case 16564: case 16596: case 16628: case 16636: case 16413: case 16421: case 16453: case 16485: case 16493: case 16525: case 16557: case 16565: case 16597: case 16629: case 16637: case 16343: case 16347: case 16351: case 16379: case 16383: case 16414: case 16422: case 16454: case 16486: case 16494: case 16526: case 16558: case 16566: case 16598: case 16630: case 16638: return South::None;
				default: return South::Tall;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 16423: case 16431: case 16447: case 16455: case 16471: case 16479: case 16495: case 16503: case 16519: case 16527: case 16543: case 16551: case 16567: case 16575: case 16591: case 16599: case 16615: case 16623: case 16639: case 16647: case 16663: case 16348: case 16360: case 16372: case 16384: case 16408: case 16432: case 16456: case 16480: case 16504: case 16528: case 16552: case 16576: case 16600: case 16624: case 16648: case 16385: case 16409: case 16433: case 16457: case 16481: case 16505: case 16529: case 16553: case 16577: case 16601: case 16625: case 16649: case 16349: case 16361: case 16373: case 16386: case 16394: case 16410: case 16418: case 16434: case 16442: case 16458: case 16466: case 16482: case 16490: case 16506: case 16514: case 16530: case 16538: case 16554: case 16562: case 16578: case 16586: case 16602: case 16610: case 16626: case 16634: case 16650: case 16658: case 16387: case 16395: case 16411: case 16419: case 16435: case 16443: case 16459: case 16467: case 16483: case 16491: case 16507: case 16515: case 16531: case 16539: case 16555: case 16563: case 16579: case 16587: case 16603: case 16611: case 16627: case 16635: case 16651: case 16659: case 16346: case 16350: case 16358: case 16362: case 16370: case 16374: case 16382: case 16396: case 16420: case 16444: case 16468: case 16492: case 16516: case 16540: case 16564: case 16588: case 16612: case 16636: case 16660: case 16397: case 16421: case 16445: case 16469: case 16493: case 16517: case 16541: case 16565: case 16589: case 16613: case 16637: case 16661: case 16347: case 16351: case 16359: case 16363: case 16371: case 16375: case 16383: case 16398: case 16406: case 16422: case 16430: case 16446: case 16454: case 16470: case 16478: case 16494: case 16502: case 16518: case 16526: case 16542: case 16550: case 16566: case 16574: case 16590: case 16598: case 16614: case 16622: case 16638: case 16646: case 16662: case 16399: case 16407: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 16415: case 16423: case 16439: case 16447: case 16463: case 16471: case 16487: case 16495: case 16511: case 16519: case 16535: case 16543: case 16559: case 16567: case 16583: case 16591: case 16607: case 16615: case 16631: case 16639: case 16655: case 16663: case 16344: case 16356: case 16368: case 16380: case 16392: case 16416: case 16440: case 16464: case 16488: case 16512: case 16536: case 16560: case 16584: case 16608: case 16632: case 16656: case 16385: case 16393: case 16409: case 16417: case 16433: case 16441: case 16457: case 16465: case 16481: case 16489: case 16505: case 16513: case 16529: case 16537: case 16553: case 16561: case 16577: case 16585: case 16601: case 16609: case 16625: case 16633: case 16649: case 16657: case 16345: case 16349: case 16357: case 16361: case 16369: case 16373: case 16381: case 16386: case 16410: case 16434: case 16458: case 16482: case 16506: case 16530: case 16554: case 16578: case 16602: case 16626: case 16650: case 16387: case 16403: case 16411: case 16427: case 16435: case 16451: case 16459: case 16475: case 16483: case 16499: case 16507: case 16523: case 16531: case 16547: case 16555: case 16571: case 16579: case 16595: case 16603: case 16619: case 16627: case 16643: case 16651: case 16350: case 16362: case 16374: case 16404: case 16428: case 16452: case 16476: case 16500: case 16524: case 16548: case 16572: case 16596: case 16620: case 16644: case 16397: case 16405: case 16421: case 16429: case 16445: case 16453: case 16469: case 16477: case 16493: case 16501: case 16517: case 16525: case 16541: case 16549: case 16565: case 16573: case 16589: case 16597: case 16613: case 16621: case 16637: case 16645: case 16661: case 16343: case 16351: case 16355: case 16363: case 16367: case 16375: case 16379: case 16398: case 16422: case 16446: case 16470: case 16494: case 16518: case 16542: case 16566: case 16590: case 16614: case 16638: case 16662: case 16391: case 16399: return false;
				default: return true;
			}
		}
		enum West West(short ID)
		{
			switch (ID)
			{
				case 16431: case 16455: case 16479: case 16503: case 16527: case 16551: case 16575: case 16599: case 16623: case 16647: case 16344: case 16356: case 16368: case 16380: case 16392: case 16416: case 16440: case 16464: case 16488: case 16512: case 16536: case 16560: case 16584: case 16608: case 16632: case 16656: case 16401: case 16425: case 16449: case 16473: case 16497: case 16521: case 16545: case 16569: case 16593: case 16617: case 16641: case 16341: case 16353: case 16365: case 16377: case 16386: case 16410: case 16434: case 16458: case 16482: case 16506: case 16530: case 16554: case 16578: case 16602: case 16626: case 16650: case 16395: case 16419: case 16443: case 16467: case 16491: case 16515: case 16539: case 16563: case 16587: case 16611: case 16635: case 16659: case 16350: case 16362: case 16374: case 16404: case 16428: case 16452: case 16476: case 16500: case 16524: case 16548: case 16572: case 16596: case 16620: case 16644: case 16389: case 16413: case 16437: case 16461: case 16485: case 16509: case 16533: case 16557: case 16581: case 16605: case 16629: case 16653: case 16347: case 16359: case 16371: case 16383: case 16398: case 16422: case 16446: case 16470: case 16494: case 16518: case 16542: case 16566: case 16590: case 16614: case 16638: case 16662: case 16407: return West::Low;
				case 16415: case 16439: case 16463: case 16487: case 16511: case 16535: case 16559: case 16583: case 16607: case 16631: case 16655: case 16340: case 16352: case 16364: case 16376: case 16400: case 16424: case 16448: case 16472: case 16496: case 16520: case 16544: case 16568: case 16592: case 16616: case 16640: case 16385: case 16409: case 16433: case 16457: case 16481: case 16505: case 16529: case 16553: case 16577: case 16601: case 16625: case 16649: case 16349: case 16361: case 16373: case 16394: case 16418: case 16442: case 16466: case 16490: case 16514: case 16538: case 16562: case 16586: case 16610: case 16634: case 16658: case 16403: case 16427: case 16451: case 16475: case 16499: case 16523: case 16547: case 16571: case 16595: case 16619: case 16643: case 16346: case 16358: case 16370: case 16382: case 16388: case 16412: case 16436: case 16460: case 16484: case 16508: case 16532: case 16556: case 16580: case 16604: case 16628: case 16652: case 16397: case 16421: case 16445: case 16469: case 16493: case 16517: case 16541: case 16565: case 16589: case 16613: case 16637: case 16661: case 16343: case 16355: case 16367: case 16379: case 16406: case 16430: case 16454: case 16478: case 16502: case 16526: case 16550: case 16574: case 16598: case 16622: case 16646: case 16391: return West::None;
				default: return West::Tall;
			}
		}
	}
	namespace PolishedBlackstoneBricks
	{
	}
	namespace PolishedBlackstoneButton
	{
		short PolishedBlackstoneButton()
		{
			return 16762;
		}
		enum Face Face(short ID)
		{
			switch (ID)
			{
				case 16769: case 16770: case 16771: case 16772: case 16773: case 16774: case 16775: case 16776: return Face::Ceiling;
				case 16753: case 16754: case 16755: case 16756: case 16757: case 16758: case 16759: case 16760: return Face::Floor;
				default: return Face::Wall;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 16765: case 16766: case 16757: case 16773: case 16758: case 16774: return eBlockFace::BLOCK_FACE_XM;
				case 16767: case 16768: case 16759: case 16775: case 16760: case 16776: return eBlockFace::BLOCK_FACE_XP;
				case 16753: case 16769: case 16754: case 16770: case 16761: case 16762: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 16766: case 16768: case 16754: case 16770: case 16756: case 16772: case 16758: case 16774: case 16760: case 16776: case 16762: case 16764: return false;
				default: return true;
			}
		}
	}
	namespace PolishedBlackstonePressurePlate
	{
		short PolishedBlackstonePressurePlate()
		{
			return 16752;
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 16752: return false;
				default: return true;
			}
		}
	}
	namespace PolishedBlackstoneSlab
	{
		short PolishedBlackstoneSlab()
		{
			return 16748;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 16747: case 16748: return Type::Bottom;
				case 16749: case 16750: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 16746: case 16748: case 16750: return false;
				default: return true;
			}
		}
	}
	namespace PolishedBlackstoneStairs
	{
		short PolishedBlackstoneStairs()
		{
			return 16676;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 16705: case 16707: case 16709: case 16711: case 16713: case 16715: case 16717: case 16719: case 16721: case 16723: case 16706: case 16708: case 16710: case 16712: case 16714: case 16716: case 16718: case 16720: case 16722: case 16724: return eBlockFace::BLOCK_FACE_XM;
				case 16744: case 16725: case 16727: case 16729: case 16731: case 16733: case 16735: case 16737: case 16739: case 16741: case 16743: case 16726: case 16728: case 16730: case 16732: case 16734: case 16736: case 16738: case 16740: case 16742: return eBlockFace::BLOCK_FACE_XP;
				case 16665: case 16667: case 16669: case 16671: case 16673: case 16675: case 16677: case 16679: case 16681: case 16683: case 16666: case 16668: case 16670: case 16672: case 16674: case 16676: case 16678: case 16680: case 16682: case 16684: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 16744: case 16675: case 16677: case 16679: case 16681: case 16683: case 16695: case 16697: case 16699: case 16701: case 16703: case 16715: case 16717: case 16719: case 16721: case 16723: case 16735: case 16737: case 16739: case 16741: case 16743: case 16676: case 16678: case 16680: case 16682: case 16684: case 16696: case 16698: case 16700: case 16702: case 16704: case 16716: case 16718: case 16720: case 16722: case 16724: case 16736: case 16738: case 16740: case 16742: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 16667: case 16677: case 16687: case 16697: case 16707: case 16717: case 16727: case 16737: case 16668: case 16678: case 16688: case 16698: case 16708: case 16718: case 16728: case 16738: return Shape::InnerLeft;
				case 16669: case 16679: case 16689: case 16699: case 16709: case 16719: case 16729: case 16739: case 16670: case 16680: case 16690: case 16700: case 16710: case 16720: case 16730: case 16740: return Shape::InnerRight;
				case 16671: case 16681: case 16691: case 16701: case 16711: case 16721: case 16731: case 16741: case 16672: case 16682: case 16692: case 16702: case 16712: case 16722: case 16732: case 16742: return Shape::OuterLeft;
				case 16744: case 16673: case 16683: case 16693: case 16703: case 16713: case 16723: case 16733: case 16743: case 16674: case 16684: case 16694: case 16704: case 16714: case 16724: case 16734: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 16744: case 16666: case 16668: case 16670: case 16672: case 16674: case 16676: case 16678: case 16680: case 16682: case 16684: case 16686: case 16688: case 16690: case 16692: case 16694: case 16696: case 16698: case 16700: case 16702: case 16704: case 16706: case 16708: case 16710: case 16712: case 16714: case 16716: case 16718: case 16720: case 16722: case 16724: case 16726: case 16728: case 16730: case 16732: case 16734: case 16736: case 16738: case 16740: case 16742: return false;
				default: return true;
			}
		}
	}
	namespace PolishedBlackstoneWall
	{
		short PolishedBlackstoneWall()
		{
			return 16780;
		}
		enum East East(short ID)
		{
			switch (ID)
			{
				case 16926: case 16934: case 16942: case 16950: case 16958: case 16966: case 16974: case 16982: case 16990: case 16887: case 16895: case 16903: case 16911: case 16919: case 16927: case 16935: case 16943: case 16951: case 16959: case 16967: case 16975: case 16983: case 16991: case 16888: case 16896: case 16904: case 16912: case 16920: case 16928: case 16936: case 16944: case 16952: case 16960: case 16968: case 16976: case 16984: case 16992: case 16889: case 16897: case 16905: case 16913: case 16921: case 16929: case 16937: case 16945: case 16953: case 16961: case 16969: case 16977: case 16985: case 16890: case 16898: case 16906: case 16914: case 16922: case 16930: case 16938: case 16946: case 16954: case 16962: case 16970: case 16978: case 16986: case 16891: case 16899: case 16907: case 16915: case 16923: case 16931: case 16939: case 16947: case 16955: case 16963: case 16971: case 16979: case 16987: case 16892: case 16900: case 16908: case 16916: case 16924: case 16932: case 16940: case 16948: case 16956: case 16964: case 16972: case 16980: case 16988: case 16885: case 16893: case 16901: case 16909: case 16917: case 16925: case 16933: case 16941: case 16949: case 16957: case 16965: case 16973: case 16981: case 16989: case 16886: case 16894: case 16902: case 16910: case 16918: return East::Low;
				case 16783: case 16791: case 16799: case 16807: case 16815: case 16823: case 16831: case 16839: case 16847: case 16855: case 16863: case 16871: case 16879: case 16784: case 16792: case 16800: case 16808: case 16816: case 16824: case 16832: case 16840: case 16848: case 16856: case 16864: case 16872: case 16880: case 16777: case 16785: case 16793: case 16801: case 16809: case 16817: case 16825: case 16833: case 16841: case 16849: case 16857: case 16865: case 16873: case 16881: case 16778: case 16786: case 16794: case 16802: case 16810: case 16818: case 16826: case 16834: case 16842: case 16850: case 16858: case 16866: case 16874: case 16882: case 16779: case 16787: case 16795: case 16803: case 16811: case 16819: case 16827: case 16835: case 16843: case 16851: case 16859: case 16867: case 16875: case 16883: case 16780: case 16788: case 16796: case 16804: case 16812: case 16820: case 16828: case 16836: case 16844: case 16852: case 16860: case 16868: case 16876: case 16884: case 16781: case 16789: case 16797: case 16805: case 16813: case 16821: case 16829: case 16837: case 16845: case 16853: case 16861: case 16869: case 16877: case 16782: case 16790: case 16798: case 16806: case 16814: case 16822: case 16830: case 16838: case 16846: case 16854: case 16862: case 16870: case 16878: return East::None;
				default: return East::Tall;
			}
		}
		enum North North(short ID)
		{
			switch (ID)
			{
				case 16926: case 16934: case 16942: case 16950: case 17030: case 17038: case 17046: case 17054: case 17062: case 16815: case 16823: case 16831: case 16839: case 16847: case 16927: case 16935: case 16943: case 16951: case 17031: case 17039: case 17047: case 17055: case 17063: case 16816: case 16824: case 16832: case 16840: case 16848: case 16928: case 16936: case 16944: case 16952: case 17032: case 17040: case 17048: case 17056: case 17064: case 16817: case 16825: case 16833: case 16841: case 16921: case 16929: case 16937: case 16945: case 16953: case 17033: case 17041: case 17049: case 17057: case 16818: case 16826: case 16834: case 16842: case 16922: case 16930: case 16938: case 16946: case 16954: case 17034: case 17042: case 17050: case 17058: case 16819: case 16827: case 16835: case 16843: case 16923: case 16931: case 16939: case 16947: case 16955: case 17035: case 17043: case 17051: case 17059: case 16820: case 16828: case 16836: case 16844: case 16924: case 16932: case 16940: case 16948: case 16956: case 17036: case 17044: case 17052: case 17060: case 16813: case 16821: case 16829: case 16837: case 16845: case 16925: case 16933: case 16941: case 16949: case 17029: case 17037: case 17045: case 17053: case 17061: case 16814: case 16822: case 16830: case 16838: case 16846: return North::Low;
				case 16998: case 17006: case 17014: case 17022: case 16783: case 16791: case 16799: case 16807: case 16887: case 16895: case 16903: case 16911: case 16919: case 16999: case 17007: case 17015: case 17023: case 16784: case 16792: case 16800: case 16808: case 16888: case 16896: case 16904: case 16912: case 16920: case 17000: case 17008: case 17016: case 17024: case 16777: case 16785: case 16793: case 16801: case 16809: case 16889: case 16897: case 16905: case 16913: case 16993: case 17001: case 17009: case 17017: case 17025: case 16778: case 16786: case 16794: case 16802: case 16810: case 16890: case 16898: case 16906: case 16914: case 16994: case 17002: case 17010: case 17018: case 17026: case 16779: case 16787: case 16795: case 16803: case 16811: case 16891: case 16899: case 16907: case 16915: case 16995: case 17003: case 17011: case 17019: case 17027: case 16780: case 16788: case 16796: case 16804: case 16812: case 16892: case 16900: case 16908: case 16916: case 16996: case 17004: case 17012: case 17020: case 17028: case 16781: case 16789: case 16797: case 16805: case 16885: case 16893: case 16901: case 16909: case 16917: case 16997: case 17005: case 17013: case 17021: case 16782: case 16790: case 16798: case 16806: case 16886: case 16894: case 16902: case 16910: case 16918: return North::None;
				default: return North::Tall;
			}
		}
		enum South South(short ID)
		{
			switch (ID)
			{
				case 16934: case 16942: case 16974: case 17006: case 17014: case 17046: case 17078: case 17086: case 16791: case 16799: case 16831: case 16863: case 16871: case 16903: case 16935: case 16943: case 16975: case 17007: case 17015: case 17047: case 17079: case 17087: case 16792: case 16800: case 16832: case 16864: case 16872: case 16904: case 16936: case 16944: case 16976: case 17008: case 17016: case 17048: case 17080: case 17088: case 16793: case 16825: case 16833: case 16865: case 16897: case 16905: case 16937: case 16969: case 16977: case 17009: case 17041: case 17049: case 17081: case 16794: case 16826: case 16834: case 16866: case 16898: case 16906: case 16938: case 16970: case 16978: case 17010: case 17042: case 17050: case 17082: case 16795: case 16827: case 16835: case 16867: case 16899: case 16907: case 16939: case 16971: case 16979: case 17011: case 17043: case 17051: case 17083: case 16796: case 16828: case 16836: case 16868: case 16900: case 16908: case 16940: case 16972: case 16980: case 17012: case 17044: case 17052: case 17084: case 16789: case 16797: case 16829: case 16861: case 16869: case 16901: case 16933: case 16941: case 16973: case 17005: case 17013: case 17045: case 17077: case 17085: case 16790: case 16798: case 16830: case 16862: case 16870: case 16902: return South::Low;
				case 16926: case 16958: case 16966: case 16998: case 17030: case 17038: case 17070: case 16783: case 16815: case 16823: case 16855: case 16887: case 16895: case 16927: case 16959: case 16967: case 16999: case 17031: case 17039: case 17071: case 16784: case 16816: case 16824: case 16856: case 16888: case 16896: case 16928: case 16960: case 16968: case 17000: case 17032: case 17040: case 17072: case 16777: case 16785: case 16817: case 16849: case 16857: case 16889: case 16921: case 16929: case 16961: case 16993: case 17001: case 17033: case 17065: case 17073: case 16778: case 16786: case 16818: case 16850: case 16858: case 16890: case 16922: case 16930: case 16962: case 16994: case 17002: case 17034: case 17066: case 17074: case 16779: case 16787: case 16819: case 16851: case 16859: case 16891: case 16923: case 16931: case 16963: case 16995: case 17003: case 17035: case 17067: case 17075: case 16780: case 16788: case 16820: case 16852: case 16860: case 16892: case 16924: case 16932: case 16964: case 16996: case 17004: case 17036: case 17068: case 17076: case 16781: case 16813: case 16821: case 16853: case 16885: case 16893: case 16925: case 16957: case 16965: case 16997: case 17029: case 17037: case 17069: case 16782: case 16814: case 16822: case 16854: case 16886: case 16894: return South::None;
				default: return South::Tall;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 16942: case 16966: case 16990: case 17014: case 17038: case 17062: case 17086: case 16783: case 16799: case 16807: case 16823: case 16831: case 16847: case 16855: case 16871: case 16879: case 16895: case 16903: case 16919: case 16927: case 16943: case 16951: case 16967: case 16975: case 16991: case 16999: case 17015: case 17023: case 17039: case 17047: case 17063: case 17071: case 17087: case 17095: case 16784: case 16800: case 16808: case 16824: case 16832: case 16848: case 16856: case 16872: case 16880: case 16896: case 16904: case 16920: case 16928: case 16944: case 16952: case 16968: case 16976: case 16992: case 17000: case 17016: case 17024: case 17040: case 17048: case 17064: case 17072: case 17088: case 17096: case 16785: case 16809: case 16833: case 16857: case 16881: case 16905: case 16929: case 16953: case 16977: case 17001: case 17025: case 17049: case 17073: case 17097: case 16786: case 16810: case 16834: case 16858: case 16882: case 16906: case 16930: case 16954: case 16978: case 17002: case 17026: case 17050: case 17074: case 17098: case 16787: case 16795: case 16811: case 16819: case 16835: case 16843: case 16859: case 16867: case 16883: case 16891: case 16907: case 16915: case 16931: case 16939: case 16955: case 16963: case 16979: case 16987: case 17003: case 17011: case 17027: case 17035: case 17051: case 17059: case 17075: case 17083: case 17099: case 16788: case 16796: case 16812: case 16820: case 16836: case 16844: case 16860: case 16868: case 16884: case 16892: case 16908: case 16916: case 16932: case 16940: case 16956: case 16964: case 16980: case 16988: case 17004: case 17012: case 17028: case 17036: case 17052: case 17060: case 17076: case 17084: case 17100: case 16797: case 16821: case 16845: case 16869: case 16893: case 16917: case 16941: case 16965: case 16989: case 17013: case 17037: case 17061: case 17085: case 16798: case 16822: case 16846: case 16870: case 16894: case 16918: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 16926: case 16942: case 16950: case 16966: case 16974: case 16990: case 16998: case 17014: case 17022: case 17038: case 17046: case 17062: case 17070: case 17086: case 17094: case 16799: case 16823: case 16847: case 16871: case 16895: case 16919: case 16943: case 16967: case 16991: case 17015: case 17039: case 17063: case 17087: case 16792: case 16800: case 16816: case 16824: case 16840: case 16848: case 16864: case 16872: case 16888: case 16896: case 16912: case 16920: case 16936: case 16944: case 16960: case 16968: case 16984: case 16992: case 17008: case 17016: case 17032: case 17040: case 17056: case 17064: case 17080: case 17088: case 16793: case 16817: case 16841: case 16865: case 16889: case 16913: case 16937: case 16961: case 16985: case 17009: case 17033: case 17057: case 17081: case 16786: case 16794: case 16810: case 16818: case 16834: case 16842: case 16858: case 16866: case 16882: case 16890: case 16906: case 16914: case 16930: case 16938: case 16954: case 16962: case 16978: case 16986: case 17002: case 17010: case 17026: case 17034: case 17050: case 17058: case 17074: case 17082: case 17098: case 16787: case 16811: case 16835: case 16859: case 16883: case 16907: case 16931: case 16955: case 16979: case 17003: case 17027: case 17051: case 17075: case 17099: case 16780: case 16788: case 16804: case 16812: case 16828: case 16836: case 16852: case 16860: case 16876: case 16884: case 16900: case 16908: case 16924: case 16932: case 16948: case 16956: case 16972: case 16980: case 16996: case 17004: case 17020: case 17028: case 17044: case 17052: case 17068: case 17076: case 17092: case 17100: case 16781: case 16805: case 16829: case 16853: case 16877: case 16901: case 16925: case 16949: case 16973: case 16997: case 17021: case 17045: case 17069: case 17093: case 16782: case 16798: case 16806: case 16822: case 16830: case 16846: case 16854: case 16870: case 16878: case 16894: case 16902: case 16918: return false;
				default: return true;
			}
		}
		enum West West(short ID)
		{
			switch (ID)
			{
				case 16934: case 16958: case 16982: case 17006: case 17030: case 17054: case 17078: case 16799: case 16823: case 16847: case 16871: case 16895: case 16919: case 16943: case 16967: case 16991: case 17015: case 17039: case 17063: case 17087: case 16784: case 16808: case 16832: case 16856: case 16880: case 16904: case 16928: case 16952: case 16976: case 17000: case 17024: case 17048: case 17072: case 17096: case 16793: case 16817: case 16841: case 16865: case 16889: case 16913: case 16937: case 16961: case 16985: case 17009: case 17033: case 17057: case 17081: case 16778: case 16802: case 16826: case 16850: case 16874: case 16898: case 16922: case 16946: case 16970: case 16994: case 17018: case 17042: case 17066: case 17090: case 16787: case 16811: case 16835: case 16859: case 16883: case 16907: case 16931: case 16955: case 16979: case 17003: case 17027: case 17051: case 17075: case 17099: case 16796: case 16820: case 16844: case 16868: case 16892: case 16916: case 16940: case 16964: case 16988: case 17012: case 17036: case 17060: case 17084: case 16781: case 16805: case 16829: case 16853: case 16877: case 16901: case 16925: case 16949: case 16973: case 16997: case 17021: case 17045: case 17069: case 17093: case 16790: case 16814: case 16838: case 16862: case 16886: case 16910: return West::Low;
				case 16942: case 16966: case 16990: case 17014: case 17038: case 17062: case 17086: case 16783: case 16807: case 16831: case 16855: case 16879: case 16903: case 16927: case 16951: case 16975: case 16999: case 17023: case 17047: case 17071: case 17095: case 16792: case 16816: case 16840: case 16864: case 16888: case 16912: case 16936: case 16960: case 16984: case 17008: case 17032: case 17056: case 17080: case 16777: case 16801: case 16825: case 16849: case 16873: case 16897: case 16921: case 16945: case 16969: case 16993: case 17017: case 17041: case 17065: case 17089: case 16786: case 16810: case 16834: case 16858: case 16882: case 16906: case 16930: case 16954: case 16978: case 17002: case 17026: case 17050: case 17074: case 17098: case 16795: case 16819: case 16843: case 16867: case 16891: case 16915: case 16939: case 16963: case 16987: case 17011: case 17035: case 17059: case 17083: case 16780: case 16804: case 16828: case 16852: case 16876: case 16900: case 16924: case 16948: case 16972: case 16996: case 17020: case 17044: case 17068: case 17092: case 16789: case 16813: case 16837: case 16861: case 16885: case 16909: case 16933: case 16957: case 16981: case 17005: case 17029: case 17053: case 17077: case 16798: case 16822: case 16846: case 16870: case 16894: case 16918: return West::None;
				default: return West::Tall;
			}
		}
	}
	namespace PolishedDiorite
	{
	}
	namespace PolishedDioriteSlab
	{
		short PolishedDioriteSlab()
		{
			return 10810;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 10810: case 10809: return Type::Bottom;
				case 10811: case 10812: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10810: case 10808: case 10812: return false;
				default: return true;
			}
		}
	}
	namespace PolishedDioriteStairs
	{
		short PolishedDioriteStairs()
		{
			return 9920;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9960: case 9961: case 9962: case 9963: case 9964: case 9965: case 9966: case 9967: case 9968: case 9949: case 9950: case 9951: case 9952: case 9953: case 9954: case 9955: case 9956: case 9957: case 9958: case 9959: return eBlockFace::BLOCK_FACE_XM;
				case 9969: case 9970: case 9971: case 9972: case 9973: case 9974: case 9975: case 9976: case 9977: case 9978: case 9979: case 9980: case 9981: case 9982: case 9983: case 9984: case 9985: case 9986: case 9987: case 9988: return eBlockFace::BLOCK_FACE_XP;
				case 9909: case 9910: case 9911: case 9912: case 9913: case 9914: case 9915: case 9916: case 9917: case 9918: case 9919: case 9920: case 9921: case 9922: case 9923: case 9924: case 9925: case 9926: case 9927: case 9928: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 9960: case 9961: case 9962: case 9963: case 9964: case 9965: case 9966: case 9967: case 9968: case 9979: case 9980: case 9981: case 9982: case 9983: case 9984: case 9985: case 9986: case 9987: case 9988: case 9919: case 9920: case 9921: case 9922: case 9923: case 9924: case 9925: case 9926: case 9927: case 9928: case 9939: case 9940: case 9941: case 9942: case 9943: case 9944: case 9945: case 9946: case 9947: case 9948: case 9959: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 9961: case 9962: case 9971: case 9972: case 9981: case 9982: case 9911: case 9912: case 9921: case 9922: case 9931: case 9932: case 9941: case 9942: case 9951: case 9952: return Shape::InnerLeft;
				case 9963: case 9964: case 9973: case 9974: case 9983: case 9984: case 9913: case 9914: case 9923: case 9924: case 9933: case 9934: case 9943: case 9944: case 9953: case 9954: return Shape::InnerRight;
				case 9965: case 9966: case 9975: case 9976: case 9985: case 9986: case 9915: case 9916: case 9925: case 9926: case 9935: case 9936: case 9945: case 9946: case 9955: case 9956: return Shape::OuterLeft;
				case 9967: case 9968: case 9977: case 9978: case 9987: case 9988: case 9917: case 9918: case 9927: case 9928: case 9937: case 9938: case 9947: case 9948: case 9957: case 9958: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9960: case 9962: case 9964: case 9966: case 9968: case 9970: case 9972: case 9974: case 9976: case 9978: case 9980: case 9982: case 9984: case 9986: case 9988: case 9910: case 9912: case 9914: case 9916: case 9918: case 9920: case 9922: case 9924: case 9926: case 9928: case 9930: case 9932: case 9934: case 9936: case 9938: case 9940: case 9942: case 9944: case 9946: case 9948: case 9950: case 9952: case 9954: case 9956: case 9958: return false;
				default: return true;
			}
		}
	}
	namespace PolishedGranite
	{
	}
	namespace PolishedGraniteSlab
	{
		short PolishedGraniteSlab()
		{
			return 10792;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 10791: case 10792: return Type::Bottom;
				case 10793: case 10794: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10790: case 10794: case 10792: return false;
				default: return true;
			}
		}
	}
	namespace PolishedGraniteStairs
	{
		short PolishedGraniteStairs()
		{
			return 9680;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9709: case 9710: case 9711: case 9712: case 9713: case 9714: case 9715: case 9716: case 9717: case 9718: case 9719: case 9720: case 9721: case 9722: case 9723: case 9724: case 9725: case 9726: case 9727: case 9728: return eBlockFace::BLOCK_FACE_XM;
				case 9729: case 9730: case 9731: case 9732: case 9733: case 9734: case 9735: case 9736: case 9737: case 9738: case 9739: case 9740: case 9741: case 9742: case 9743: case 9744: case 9745: case 9746: case 9747: case 9748: return eBlockFace::BLOCK_FACE_XP;
				case 9669: case 9670: case 9671: case 9672: case 9673: case 9674: case 9675: case 9676: case 9677: case 9678: case 9679: case 9680: case 9681: case 9682: case 9683: case 9684: case 9685: case 9686: case 9687: case 9688: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 9706: case 9707: case 9708: case 9719: case 9720: case 9721: case 9722: case 9723: case 9724: case 9725: case 9726: case 9727: case 9728: case 9739: case 9740: case 9741: case 9742: case 9743: case 9744: case 9745: case 9746: case 9747: case 9748: case 9679: case 9680: case 9681: case 9682: case 9683: case 9684: case 9685: case 9686: case 9687: case 9688: case 9699: case 9700: case 9701: case 9702: case 9703: case 9704: case 9705: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 9711: case 9712: case 9721: case 9722: case 9731: case 9732: case 9741: case 9742: case 9671: case 9672: case 9681: case 9682: case 9691: case 9692: case 9701: case 9702: return Shape::InnerLeft;
				case 9713: case 9714: case 9723: case 9724: case 9733: case 9734: case 9743: case 9744: case 9673: case 9674: case 9683: case 9684: case 9693: case 9694: case 9703: case 9704: return Shape::InnerRight;
				case 9706: case 9715: case 9716: case 9725: case 9726: case 9735: case 9736: case 9745: case 9746: case 9675: case 9676: case 9685: case 9686: case 9695: case 9696: case 9705: return Shape::OuterLeft;
				case 9707: case 9708: case 9717: case 9718: case 9727: case 9728: case 9737: case 9738: case 9747: case 9748: case 9677: case 9678: case 9687: case 9688: case 9697: case 9698: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9706: case 9708: case 9710: case 9712: case 9714: case 9716: case 9718: case 9720: case 9722: case 9724: case 9726: case 9728: case 9730: case 9732: case 9734: case 9736: case 9738: case 9740: case 9742: case 9744: case 9746: case 9748: case 9670: case 9672: case 9674: case 9676: case 9678: case 9680: case 9682: case 9684: case 9686: case 9688: case 9690: case 9692: case 9694: case 9696: case 9698: case 9700: case 9702: case 9704: return false;
				default: return true;
			}
		}
	}
	namespace Poppy
	{
	}
	namespace Potatoes
	{
		short Potatoes()
		{
			return 6338;
		}
		unsigned char Age(short ID)
		{
			switch (ID)
			{
				case 6338: return 0;
				case 6339: return 1;
				case 6340: return 2;
				case 6341: return 3;
				case 6342: return 4;
				case 6343: return 5;
				case 6344: return 6;
				default: return 7;
			}
		}
	}
	namespace PottedAcaciaSapling
	{
	}
	namespace PottedAllium
	{
	}
	namespace PottedAzureBluet
	{
	}
	namespace PottedBamboo
	{
	}
	namespace PottedBirchSapling
	{
	}
	namespace PottedBlueOrchid
	{
	}
	namespace PottedBrownMushroom
	{
	}
	namespace PottedCactus
	{
	}
	namespace PottedCornflower
	{
	}
	namespace PottedCrimsonFungus
	{
	}
	namespace PottedCrimsonRoots
	{
	}
	namespace PottedDandelion
	{
	}
	namespace PottedDarkOakSapling
	{
	}
	namespace PottedDeadBush
	{
	}
	namespace PottedFern
	{
	}
	namespace PottedJungleSapling
	{
	}
	namespace PottedLilyOfTheValley
	{
	}
	namespace PottedOakSapling
	{
	}
	namespace PottedOrangeTulip
	{
	}
	namespace PottedOxeyeDaisy
	{
	}
	namespace PottedPinkTulip
	{
	}
	namespace PottedPoppy
	{
	}
	namespace PottedRedMushroom
	{
	}
	namespace PottedRedTulip
	{
	}
	namespace PottedSpruceSapling
	{
	}
	namespace PottedWarpedFungus
	{
	}
	namespace PottedWarpedRoots
	{
	}
	namespace PottedWhiteTulip
	{
	}
	namespace PottedWitherRose
	{
	}
	namespace PoweredRail
	{
		short PoweredRail()
		{
			return 1311;
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 1314: case 1311: case 1315: case 1312: case 1316: case 1313: return false;
				default: return true;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 1307: case 1313: return Shape::AscendingEast;
				case 1315: case 1309: return Shape::AscendingNorth;
				case 1310: case 1316: return Shape::AscendingSouth;
				case 1314: case 1308: return Shape::AscendingWest;
				case 1306: case 1312: return Shape::EastWest;
				default: return Shape::NorthSouth;
			}
		}
	}
	namespace Prismarine
	{
	}
	namespace PrismarineBrickSlab
	{
		short PrismarineBrickSlab()
		{
			return 7853;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 7853: case 7852: return Type::Bottom;
				case 7855: case 7854: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7851: case 7853: case 7855: return false;
				default: return true;
			}
		}
	}
	namespace PrismarineBrickStairs
	{
		short PrismarineBrickStairs()
		{
			return 7695;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 7743: case 7724: case 7725: case 7726: case 7727: case 7728: case 7729: case 7730: case 7731: case 7732: case 7733: case 7734: case 7735: case 7736: case 7737: case 7738: case 7739: case 7740: case 7741: case 7742: return eBlockFace::BLOCK_FACE_XM;
				case 7744: case 7745: case 7746: case 7747: case 7748: case 7749: case 7750: case 7751: case 7752: case 7753: case 7754: case 7755: case 7756: case 7757: case 7758: case 7759: case 7760: case 7761: case 7762: case 7763: return eBlockFace::BLOCK_FACE_XP;
				case 7684: case 7685: case 7686: case 7687: case 7688: case 7689: case 7690: case 7691: case 7692: case 7693: case 7694: case 7695: case 7696: case 7697: case 7698: case 7699: case 7700: case 7701: case 7702: case 7703: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 7743: case 7754: case 7755: case 7756: case 7757: case 7694: case 7758: case 7695: case 7759: case 7696: case 7760: case 7697: case 7761: case 7698: case 7762: case 7699: case 7763: case 7700: case 7701: case 7702: case 7703: case 7714: case 7715: case 7716: case 7717: case 7718: case 7719: case 7720: case 7721: case 7722: case 7723: case 7734: case 7735: case 7736: case 7737: case 7738: case 7739: case 7740: case 7741: case 7742: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 7746: case 7747: case 7686: case 7687: case 7756: case 7757: case 7696: case 7697: case 7706: case 7707: case 7716: case 7717: case 7726: case 7727: case 7736: case 7737: return Shape::InnerLeft;
				case 7748: case 7749: case 7688: case 7689: case 7758: case 7759: case 7698: case 7699: case 7708: case 7709: case 7718: case 7719: case 7728: case 7729: case 7738: case 7739: return Shape::InnerRight;
				case 7750: case 7751: case 7690: case 7691: case 7760: case 7761: case 7700: case 7701: case 7710: case 7711: case 7720: case 7721: case 7730: case 7731: case 7740: case 7741: return Shape::OuterLeft;
				case 7743: case 7752: case 7753: case 7692: case 7693: case 7762: case 7763: case 7702: case 7703: case 7712: case 7713: case 7722: case 7723: case 7732: case 7733: case 7742: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7743: case 7745: case 7747: case 7685: case 7749: case 7687: case 7751: case 7689: case 7753: case 7691: case 7755: case 7693: case 7757: case 7695: case 7759: case 7697: case 7761: case 7699: case 7763: case 7701: case 7703: case 7705: case 7707: case 7709: case 7711: case 7713: case 7715: case 7717: case 7719: case 7721: case 7723: case 7725: case 7727: case 7729: case 7731: case 7733: case 7735: case 7737: case 7739: case 7741: return false;
				default: return true;
			}
		}
	}
	namespace PrismarineBricks
	{
	}
	namespace PrismarineSlab
	{
		short PrismarineSlab()
		{
			return 7847;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 7846: case 7847: return Type::Bottom;
				case 7849: case 7848: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7849: case 7845: case 7847: return false;
				default: return true;
			}
		}
	}
	namespace PrismarineStairs
	{
		short PrismarineStairs()
		{
			return 7615;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 7644: case 7645: case 7646: case 7647: case 7648: case 7649: case 7650: case 7651: case 7652: case 7653: case 7654: case 7655: case 7656: case 7657: case 7658: case 7659: case 7660: case 7661: case 7662: case 7663: return eBlockFace::BLOCK_FACE_XM;
				case 7679: case 7680: case 7681: case 7682: case 7683: case 7664: case 7665: case 7666: case 7667: case 7668: case 7669: case 7670: case 7671: case 7672: case 7673: case 7674: case 7675: case 7676: case 7677: case 7678: return eBlockFace::BLOCK_FACE_XP;
				case 7616: case 7617: case 7618: case 7619: case 7620: case 7621: case 7622: case 7623: case 7604: case 7605: case 7606: case 7607: case 7608: case 7609: case 7610: case 7611: case 7612: case 7613: case 7614: case 7615: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 7679: case 7616: case 7680: case 7617: case 7681: case 7618: case 7682: case 7619: case 7683: case 7620: case 7621: case 7622: case 7623: case 7634: case 7635: case 7636: case 7637: case 7638: case 7639: case 7640: case 7641: case 7642: case 7643: case 7654: case 7655: case 7656: case 7657: case 7658: case 7659: case 7660: case 7661: case 7662: case 7663: case 7674: case 7675: case 7676: case 7677: case 7614: case 7678: case 7615: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 7616: case 7617: case 7626: case 7627: case 7636: case 7637: case 7646: case 7647: case 7656: case 7657: case 7666: case 7667: case 7606: case 7607: case 7676: case 7677: return Shape::InnerLeft;
				case 7679: case 7618: case 7619: case 7628: case 7629: case 7638: case 7639: case 7648: case 7649: case 7658: case 7659: case 7668: case 7669: case 7608: case 7609: case 7678: return Shape::InnerRight;
				case 7680: case 7681: case 7620: case 7621: case 7630: case 7631: case 7640: case 7641: case 7650: case 7651: case 7660: case 7661: case 7670: case 7671: case 7610: case 7611: return Shape::OuterLeft;
				case 7682: case 7683: case 7622: case 7623: case 7632: case 7633: case 7642: case 7643: case 7652: case 7653: case 7662: case 7663: case 7672: case 7673: case 7612: case 7613: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7679: case 7617: case 7681: case 7619: case 7683: case 7621: case 7623: case 7625: case 7627: case 7629: case 7631: case 7633: case 7635: case 7637: case 7639: case 7641: case 7643: case 7645: case 7647: case 7649: case 7651: case 7653: case 7655: case 7657: case 7659: case 7661: case 7663: case 7665: case 7667: case 7605: case 7669: case 7607: case 7671: case 7609: case 7673: case 7611: case 7675: case 7613: case 7677: case 7615: return false;
				default: return true;
			}
		}
	}
	namespace PrismarineWall
	{
		short PrismarineWall()
		{
			return 11194;
		}
		enum East East(short ID)
		{
			switch (ID)
			{
				case 11302: case 11306: case 11310: case 11314: case 11318: case 11322: case 11326: case 11330: case 11334: case 11338: case 11342: case 11346: case 11350: case 11354: case 11358: case 11362: case 11366: case 11370: case 11374: case 11378: case 11382: case 11386: case 11390: case 11394: case 11398: case 11402: case 11406: case 11299: case 11303: case 11307: case 11311: case 11315: case 11319: case 11323: case 11327: case 11331: case 11335: case 11339: case 11343: case 11347: case 11351: case 11355: case 11359: case 11363: case 11367: case 11371: case 11375: case 11379: case 11383: case 11387: case 11391: case 11395: case 11399: case 11403: case 11300: case 11304: case 11308: case 11312: case 11316: case 11320: case 11324: case 11328: case 11332: case 11336: case 11340: case 11344: case 11348: case 11352: case 11356: case 11360: case 11364: case 11368: case 11372: case 11376: case 11380: case 11384: case 11388: case 11392: case 11396: case 11400: case 11404: case 11301: case 11305: case 11309: case 11313: case 11317: case 11321: case 11325: case 11329: case 11333: case 11337: case 11341: case 11345: case 11349: case 11353: case 11357: case 11361: case 11365: case 11369: case 11373: case 11377: case 11381: case 11385: case 11389: case 11393: case 11397: case 11401: case 11405: return East::Low;
				case 11194: case 11198: case 11202: case 11206: case 11210: case 11214: case 11218: case 11222: case 11226: case 11230: case 11234: case 11238: case 11242: case 11246: case 11250: case 11254: case 11258: case 11262: case 11266: case 11270: case 11274: case 11278: case 11282: case 11286: case 11290: case 11294: case 11298: case 11191: case 11195: case 11199: case 11203: case 11207: case 11211: case 11215: case 11219: case 11223: case 11227: case 11231: case 11235: case 11239: case 11243: case 11247: case 11251: case 11255: case 11259: case 11263: case 11267: case 11271: case 11275: case 11279: case 11283: case 11287: case 11291: case 11295: case 11192: case 11196: case 11200: case 11204: case 11208: case 11212: case 11216: case 11220: case 11224: case 11228: case 11232: case 11236: case 11240: case 11244: case 11248: case 11252: case 11256: case 11260: case 11264: case 11268: case 11272: case 11276: case 11280: case 11284: case 11288: case 11292: case 11296: case 11193: case 11197: case 11201: case 11205: case 11209: case 11213: case 11217: case 11221: case 11225: case 11229: case 11233: case 11237: case 11241: case 11245: case 11249: case 11253: case 11257: case 11261: case 11265: case 11269: case 11273: case 11277: case 11281: case 11285: case 11289: case 11293: case 11297: return East::None;
				default: return East::Tall;
			}
		}
		enum North North(short ID)
		{
			switch (ID)
			{
				case 11230: case 11234: case 11238: case 11242: case 11246: case 11250: case 11254: case 11258: case 11262: case 11338: case 11342: case 11346: case 11350: case 11354: case 11358: case 11362: case 11366: case 11370: case 11446: case 11450: case 11454: case 11458: case 11462: case 11466: case 11470: case 11474: case 11478: case 11227: case 11231: case 11235: case 11239: case 11243: case 11247: case 11251: case 11255: case 11259: case 11335: case 11339: case 11343: case 11347: case 11351: case 11355: case 11359: case 11363: case 11367: case 11443: case 11447: case 11451: case 11455: case 11459: case 11463: case 11467: case 11471: case 11475: case 11228: case 11232: case 11236: case 11240: case 11244: case 11248: case 11252: case 11256: case 11260: case 11336: case 11340: case 11344: case 11348: case 11352: case 11356: case 11360: case 11364: case 11368: case 11444: case 11448: case 11452: case 11456: case 11460: case 11464: case 11468: case 11472: case 11476: case 11229: case 11233: case 11237: case 11241: case 11245: case 11249: case 11253: case 11257: case 11261: case 11337: case 11341: case 11345: case 11349: case 11353: case 11357: case 11361: case 11365: case 11369: case 11445: case 11449: case 11453: case 11457: case 11461: case 11465: case 11469: case 11473: case 11477: return North::Low;
				case 11194: case 11198: case 11202: case 11206: case 11210: case 11214: case 11218: case 11222: case 11226: case 11302: case 11306: case 11310: case 11314: case 11318: case 11322: case 11326: case 11330: case 11334: case 11410: case 11414: case 11418: case 11422: case 11426: case 11430: case 11434: case 11438: case 11442: case 11191: case 11195: case 11199: case 11203: case 11207: case 11211: case 11215: case 11219: case 11223: case 11299: case 11303: case 11307: case 11311: case 11315: case 11319: case 11323: case 11327: case 11331: case 11407: case 11411: case 11415: case 11419: case 11423: case 11427: case 11431: case 11435: case 11439: case 11192: case 11196: case 11200: case 11204: case 11208: case 11212: case 11216: case 11220: case 11224: case 11300: case 11304: case 11308: case 11312: case 11316: case 11320: case 11324: case 11328: case 11332: case 11408: case 11412: case 11416: case 11420: case 11424: case 11428: case 11432: case 11436: case 11440: case 11193: case 11197: case 11201: case 11205: case 11209: case 11213: case 11217: case 11221: case 11225: case 11301: case 11305: case 11309: case 11313: case 11317: case 11321: case 11325: case 11329: case 11333: case 11409: case 11413: case 11417: case 11421: case 11425: case 11429: case 11433: case 11437: case 11441: return North::None;
				default: return North::Tall;
			}
		}
		enum South South(short ID)
		{
			switch (ID)
			{
				case 11206: case 11210: case 11214: case 11242: case 11246: case 11250: case 11278: case 11282: case 11286: case 11314: case 11318: case 11322: case 11350: case 11354: case 11358: case 11386: case 11390: case 11394: case 11422: case 11426: case 11430: case 11458: case 11462: case 11466: case 11494: case 11498: case 11502: case 11203: case 11207: case 11211: case 11239: case 11243: case 11247: case 11275: case 11279: case 11283: case 11311: case 11315: case 11319: case 11347: case 11351: case 11355: case 11383: case 11387: case 11391: case 11419: case 11423: case 11427: case 11455: case 11459: case 11463: case 11491: case 11495: case 11499: case 11204: case 11208: case 11212: case 11240: case 11244: case 11248: case 11276: case 11280: case 11284: case 11312: case 11316: case 11320: case 11348: case 11352: case 11356: case 11384: case 11388: case 11392: case 11420: case 11424: case 11428: case 11456: case 11460: case 11464: case 11492: case 11496: case 11500: case 11205: case 11209: case 11213: case 11241: case 11245: case 11249: case 11277: case 11281: case 11285: case 11313: case 11317: case 11321: case 11349: case 11353: case 11357: case 11385: case 11389: case 11393: case 11421: case 11425: case 11429: case 11457: case 11461: case 11465: case 11493: case 11497: case 11501: return South::Low;
				case 11194: case 11198: case 11202: case 11230: case 11234: case 11238: case 11266: case 11270: case 11274: case 11302: case 11306: case 11310: case 11338: case 11342: case 11346: case 11374: case 11378: case 11382: case 11410: case 11414: case 11418: case 11446: case 11450: case 11454: case 11482: case 11486: case 11490: case 11191: case 11195: case 11199: case 11227: case 11231: case 11235: case 11263: case 11267: case 11271: case 11299: case 11303: case 11307: case 11335: case 11339: case 11343: case 11371: case 11375: case 11379: case 11407: case 11411: case 11415: case 11443: case 11447: case 11451: case 11479: case 11483: case 11487: case 11192: case 11196: case 11200: case 11228: case 11232: case 11236: case 11264: case 11268: case 11272: case 11300: case 11304: case 11308: case 11336: case 11340: case 11344: case 11372: case 11376: case 11380: case 11408: case 11412: case 11416: case 11444: case 11448: case 11452: case 11480: case 11484: case 11488: case 11193: case 11197: case 11201: case 11229: case 11233: case 11237: case 11265: case 11269: case 11273: case 11301: case 11305: case 11309: case 11337: case 11341: case 11345: case 11373: case 11377: case 11381: case 11409: case 11413: case 11417: case 11445: case 11449: case 11453: case 11481: case 11485: case 11489: return South::None;
				default: return South::Tall;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 11198: case 11202: case 11210: case 11214: case 11222: case 11226: case 11234: case 11238: case 11246: case 11250: case 11258: case 11262: case 11270: case 11274: case 11282: case 11286: case 11294: case 11298: case 11306: case 11310: case 11318: case 11322: case 11330: case 11334: case 11342: case 11346: case 11354: case 11358: case 11366: case 11370: case 11378: case 11382: case 11390: case 11394: case 11402: case 11406: case 11414: case 11418: case 11426: case 11430: case 11438: case 11442: case 11450: case 11454: case 11462: case 11466: case 11474: case 11478: case 11486: case 11490: case 11498: case 11502: case 11510: case 11514: case 11199: case 11211: case 11223: case 11235: case 11247: case 11259: case 11271: case 11283: case 11295: case 11307: case 11319: case 11331: case 11343: case 11355: case 11367: case 11379: case 11391: case 11403: case 11415: case 11427: case 11439: case 11451: case 11463: case 11475: case 11487: case 11499: case 11511: case 11200: case 11212: case 11224: case 11236: case 11248: case 11260: case 11272: case 11284: case 11296: case 11308: case 11320: case 11332: case 11344: case 11356: case 11368: case 11380: case 11392: case 11404: case 11416: case 11428: case 11440: case 11452: case 11464: case 11476: case 11488: case 11500: case 11512: case 11197: case 11201: case 11209: case 11213: case 11221: case 11225: case 11233: case 11237: case 11245: case 11249: case 11257: case 11261: case 11269: case 11273: case 11281: case 11285: case 11293: case 11297: case 11305: case 11309: case 11317: case 11321: case 11329: case 11333: case 11341: case 11345: case 11353: case 11357: case 11365: case 11369: case 11377: case 11381: case 11389: case 11393: case 11401: case 11405: case 11413: case 11417: case 11425: case 11429: case 11437: case 11441: case 11449: case 11453: case 11461: case 11465: case 11473: case 11477: case 11485: case 11489: case 11497: case 11501: case 11509: case 11513: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 11194: case 11202: case 11206: case 11214: case 11218: case 11226: case 11230: case 11238: case 11242: case 11250: case 11254: case 11262: case 11266: case 11274: case 11278: case 11286: case 11290: case 11298: case 11302: case 11310: case 11314: case 11322: case 11326: case 11334: case 11338: case 11346: case 11350: case 11358: case 11362: case 11370: case 11374: case 11382: case 11386: case 11394: case 11398: case 11406: case 11410: case 11418: case 11422: case 11430: case 11434: case 11442: case 11446: case 11454: case 11458: case 11466: case 11470: case 11478: case 11482: case 11490: case 11494: case 11502: case 11506: case 11514: case 11195: case 11207: case 11219: case 11231: case 11243: case 11255: case 11267: case 11279: case 11291: case 11303: case 11315: case 11327: case 11339: case 11351: case 11363: case 11375: case 11387: case 11399: case 11411: case 11423: case 11435: case 11447: case 11459: case 11471: case 11483: case 11495: case 11507: case 11196: case 11200: case 11208: case 11212: case 11220: case 11224: case 11232: case 11236: case 11244: case 11248: case 11256: case 11260: case 11268: case 11272: case 11280: case 11284: case 11292: case 11296: case 11304: case 11308: case 11316: case 11320: case 11328: case 11332: case 11340: case 11344: case 11352: case 11356: case 11364: case 11368: case 11376: case 11380: case 11388: case 11392: case 11400: case 11404: case 11412: case 11416: case 11424: case 11428: case 11436: case 11440: case 11448: case 11452: case 11460: case 11464: case 11472: case 11476: case 11484: case 11488: case 11496: case 11500: case 11508: case 11512: case 11201: case 11213: case 11225: case 11237: case 11249: case 11261: case 11273: case 11285: case 11297: case 11309: case 11321: case 11333: case 11345: case 11357: case 11369: case 11381: case 11393: case 11405: case 11417: case 11429: case 11441: case 11453: case 11465: case 11477: case 11489: case 11501: case 11513: return false;
				default: return true;
			}
		}
		enum West West(short ID)
		{
			switch (ID)
			{
				case 11198: case 11210: case 11222: case 11234: case 11246: case 11258: case 11270: case 11282: case 11294: case 11306: case 11318: case 11330: case 11342: case 11354: case 11366: case 11378: case 11390: case 11402: case 11414: case 11426: case 11438: case 11450: case 11462: case 11474: case 11486: case 11498: case 11510: case 11195: case 11207: case 11219: case 11231: case 11243: case 11255: case 11267: case 11279: case 11291: case 11303: case 11315: case 11327: case 11339: case 11351: case 11363: case 11375: case 11387: case 11399: case 11411: case 11423: case 11435: case 11447: case 11459: case 11471: case 11483: case 11495: case 11507: case 11192: case 11204: case 11216: case 11228: case 11240: case 11252: case 11264: case 11276: case 11288: case 11300: case 11312: case 11324: case 11336: case 11348: case 11360: case 11372: case 11384: case 11396: case 11408: case 11420: case 11432: case 11444: case 11456: case 11468: case 11480: case 11492: case 11504: case 11201: case 11213: case 11225: case 11237: case 11249: case 11261: case 11273: case 11285: case 11297: case 11309: case 11321: case 11333: case 11345: case 11357: case 11369: case 11381: case 11393: case 11405: case 11417: case 11429: case 11441: case 11453: case 11465: case 11477: case 11489: case 11501: case 11513: return West::Low;
				case 11194: case 11206: case 11218: case 11230: case 11242: case 11254: case 11266: case 11278: case 11290: case 11302: case 11314: case 11326: case 11338: case 11350: case 11362: case 11374: case 11386: case 11398: case 11410: case 11422: case 11434: case 11446: case 11458: case 11470: case 11482: case 11494: case 11506: case 11191: case 11203: case 11215: case 11227: case 11239: case 11251: case 11263: case 11275: case 11287: case 11299: case 11311: case 11323: case 11335: case 11347: case 11359: case 11371: case 11383: case 11395: case 11407: case 11419: case 11431: case 11443: case 11455: case 11467: case 11479: case 11491: case 11503: case 11200: case 11212: case 11224: case 11236: case 11248: case 11260: case 11272: case 11284: case 11296: case 11308: case 11320: case 11332: case 11344: case 11356: case 11368: case 11380: case 11392: case 11404: case 11416: case 11428: case 11440: case 11452: case 11464: case 11476: case 11488: case 11500: case 11512: case 11197: case 11209: case 11221: case 11233: case 11245: case 11257: case 11269: case 11281: case 11293: case 11305: case 11317: case 11329: case 11341: case 11353: case 11365: case 11377: case 11389: case 11401: case 11413: case 11425: case 11437: case 11449: case 11461: case 11473: case 11485: case 11497: case 11509: return West::None;
				default: return West::Tall;
			}
		}
	}
	namespace Pumpkin
	{
	}
	namespace PumpkinStem
	{
		short PumpkinStem()
		{
			return 4772;
		}
		unsigned char Age(short ID)
		{
			switch (ID)
			{
				case 4772: return 0;
				case 4773: return 1;
				case 4774: return 2;
				case 4775: return 3;
				case 4776: return 4;
				case 4777: return 5;
				case 4778: return 6;
				default: return 7;
			}
		}
	}
	namespace PurpleBanner
	{
		short PurpleBanner()
		{
			return 8057;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 8057: return 0;
				case 8058: return 1;
				case 8067: return 10;
				case 8068: return 11;
				case 8069: return 12;
				case 8070: return 13;
				case 8071: return 14;
				case 8072: return 15;
				case 8059: return 2;
				case 8060: return 3;
				case 8061: return 4;
				case 8062: return 5;
				case 8063: return 6;
				case 8064: return 7;
				case 8065: return 8;
				default: return 9;
			}
		}
	}
	namespace PurpleBed
	{
		short PurpleBed()
		{
			return 1212;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1220: case 1217: case 1218: case 1219: return eBlockFace::BLOCK_FACE_XM;
				case 1221: case 1222: case 1223: case 1224: return eBlockFace::BLOCK_FACE_XP;
				case 1212: case 1209: case 1210: case 1211: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Occupied(short ID)
		{
			switch (ID)
			{
				case 1212: case 1216: case 1220: case 1211: case 1215: case 1219: case 1223: case 1224: return false;
				default: return true;
			}
		}
		enum Part Part(short ID)
		{
			switch (ID)
			{
				case 1212: case 1216: case 1220: case 1210: case 1214: case 1218: case 1222: case 1224: return Part::Foot;
				default: return Part::Head;
			}
		}
	}
	namespace PurpleCarpet
	{
	}
	namespace PurpleConcrete
	{
	}
	namespace PurpleConcretePowder
	{
	}
	namespace PurpleGlazedTerracotta
	{
		short PurpleGlazedTerracotta()
		{
			return 9414;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9416: return eBlockFace::BLOCK_FACE_XM;
				case 9417: return eBlockFace::BLOCK_FACE_XP;
				case 9414: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace PurpleShulkerBox
	{
		short PurpleShulkerBox()
		{
			return 9342;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9341: return eBlockFace::BLOCK_FACE_XM;
				case 9339: return eBlockFace::BLOCK_FACE_XP;
				case 9343: return eBlockFace::BLOCK_FACE_YM;
				case 9342: return eBlockFace::BLOCK_FACE_YP;
				case 9338: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace PurpleStainedGlass
	{
	}
	namespace PurpleStainedGlassPane
	{
		short PurpleStainedGlassPane()
		{
			return 7214;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 7210: case 7199: case 7203: case 7207: case 7211: case 7200: case 7204: case 7208: case 7212: case 7201: case 7205: case 7209: case 7213: case 7202: case 7206: case 7214: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 7210: case 7191: case 7195: case 7207: case 7211: case 7192: case 7196: case 7208: case 7212: case 7193: case 7197: case 7209: case 7213: case 7194: case 7198: case 7214: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 7187: case 7195: case 7203: case 7211: case 7188: case 7196: case 7204: case 7212: case 7189: case 7197: case 7205: case 7213: case 7190: case 7198: case 7206: case 7214: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7210: case 7185: case 7189: case 7193: case 7197: case 7201: case 7205: case 7209: case 7213: case 7186: case 7190: case 7194: case 7198: case 7202: case 7206: case 7214: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 7210: case 7184: case 7188: case 7192: case 7196: case 7200: case 7204: case 7208: case 7212: case 7186: case 7190: case 7194: case 7198: case 7202: case 7206: case 7214: return false;
				default: return true;
			}
		}
	}
	namespace PurpleTerracotta
	{
	}
	namespace PurpleWallBanner
	{
		short PurpleWallBanner()
		{
			return 8193;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8195: return eBlockFace::BLOCK_FACE_XM;
				case 8196: return eBlockFace::BLOCK_FACE_XP;
				case 8193: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace PurpleWool
	{
	}
	namespace PurpurBlock
	{
	}
	namespace PurpurPillar
	{
		short PurpurPillar()
		{
			return 9136;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 9135: return Axis::X;
				case 9136: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace PurpurSlab
	{
		short PurpurSlab()
		{
			return 8411;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8410: case 8411: return Type::Bottom;
				case 8413: case 8412: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8409: case 8413: case 8411: return false;
				default: return true;
			}
		}
	}
	namespace PurpurStairs
	{
		short PurpurStairs()
		{
			return 9149;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9178: case 9179: case 9180: case 9181: case 9182: case 9183: case 9184: case 9185: case 9186: case 9187: case 9188: case 9189: case 9190: case 9191: case 9192: case 9193: case 9194: case 9195: case 9196: case 9197: return eBlockFace::BLOCK_FACE_XM;
				case 9198: case 9199: case 9200: case 9201: case 9202: case 9203: case 9204: case 9205: case 9206: case 9207: case 9208: case 9209: case 9210: case 9211: case 9212: case 9213: case 9214: case 9215: case 9216: case 9217: return eBlockFace::BLOCK_FACE_XP;
				case 9138: case 9139: case 9140: case 9141: case 9142: case 9143: case 9144: case 9145: case 9146: case 9147: case 9148: case 9149: case 9150: case 9151: case 9152: case 9153: case 9154: case 9155: case 9156: case 9157: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 9208: case 9209: case 9210: case 9211: case 9212: case 9213: case 9214: case 9215: case 9216: case 9217: case 9148: case 9149: case 9150: case 9151: case 9152: case 9153: case 9154: case 9155: case 9156: case 9157: case 9168: case 9169: case 9170: case 9171: case 9172: case 9173: case 9174: case 9175: case 9176: case 9177: case 9188: case 9189: case 9190: case 9191: case 9192: case 9193: case 9194: case 9195: case 9196: case 9197: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 9200: case 9201: case 9210: case 9211: case 9140: case 9141: case 9150: case 9151: case 9160: case 9161: case 9170: case 9171: case 9180: case 9181: case 9190: case 9191: return Shape::InnerLeft;
				case 9202: case 9203: case 9212: case 9213: case 9142: case 9143: case 9152: case 9153: case 9162: case 9163: case 9172: case 9173: case 9182: case 9183: case 9192: case 9193: return Shape::InnerRight;
				case 9204: case 9205: case 9214: case 9215: case 9144: case 9145: case 9154: case 9155: case 9164: case 9165: case 9174: case 9175: case 9184: case 9185: case 9194: case 9195: return Shape::OuterLeft;
				case 9206: case 9207: case 9216: case 9217: case 9146: case 9147: case 9156: case 9157: case 9166: case 9167: case 9176: case 9177: case 9186: case 9187: case 9196: case 9197: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9199: case 9201: case 9203: case 9205: case 9207: case 9209: case 9211: case 9213: case 9215: case 9217: case 9139: case 9141: case 9143: case 9145: case 9147: case 9149: case 9151: case 9153: case 9155: case 9157: case 9159: case 9161: case 9163: case 9165: case 9167: case 9169: case 9171: case 9173: case 9175: case 9177: case 9179: case 9181: case 9183: case 9185: case 9187: case 9189: case 9191: case 9193: case 9195: case 9197: return false;
				default: return true;
			}
		}
	}
	namespace QuartzBlock
	{
	}
	namespace QuartzBricks
	{
	}
	namespace QuartzPillar
	{
		short QuartzPillar()
		{
			return 6741;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 6740: return Axis::X;
				case 6741: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace QuartzSlab
	{
		short QuartzSlab()
		{
			return 8393;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8392: case 8393: return Type::Bottom;
				case 8395: case 8394: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8395: case 8393: case 8391: return false;
				default: return true;
			}
		}
	}
	namespace QuartzStairs
	{
		short QuartzStairs()
		{
			return 6754;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6790: case 6791: case 6792: case 6793: case 6794: case 6795: case 6796: case 6797: case 6798: case 6799: case 6800: case 6801: case 6802: case 6783: case 6784: case 6785: case 6786: case 6787: case 6788: case 6789: return eBlockFace::BLOCK_FACE_XM;
				case 6803: case 6804: case 6805: case 6806: case 6807: case 6808: case 6809: case 6810: case 6811: case 6812: case 6813: case 6814: case 6815: case 6816: case 6817: case 6818: case 6819: case 6820: case 6821: case 6822: return eBlockFace::BLOCK_FACE_XP;
				case 6743: case 6744: case 6745: case 6746: case 6747: case 6748: case 6749: case 6750: case 6751: case 6752: case 6753: case 6754: case 6755: case 6756: case 6757: case 6758: case 6759: case 6760: case 6761: case 6762: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 6793: case 6794: case 6795: case 6796: case 6797: case 6798: case 6799: case 6800: case 6801: case 6802: case 6813: case 6814: case 6815: case 6816: case 6753: case 6817: case 6754: case 6818: case 6755: case 6819: case 6756: case 6820: case 6757: case 6821: case 6758: case 6822: case 6759: case 6760: case 6761: case 6762: case 6773: case 6774: case 6775: case 6776: case 6777: case 6778: case 6779: case 6780: case 6781: case 6782: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 6795: case 6796: case 6805: case 6806: case 6745: case 6746: case 6815: case 6816: case 6755: case 6756: case 6765: case 6766: case 6775: case 6776: case 6785: case 6786: return Shape::InnerLeft;
				case 6797: case 6798: case 6807: case 6808: case 6747: case 6748: case 6817: case 6818: case 6757: case 6758: case 6767: case 6768: case 6777: case 6778: case 6787: case 6788: return Shape::InnerRight;
				case 6790: case 6799: case 6800: case 6809: case 6810: case 6749: case 6750: case 6819: case 6820: case 6759: case 6760: case 6769: case 6770: case 6779: case 6780: case 6789: return Shape::OuterLeft;
				case 6791: case 6792: case 6801: case 6802: case 6811: case 6812: case 6751: case 6752: case 6821: case 6822: case 6761: case 6762: case 6771: case 6772: case 6781: case 6782: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 6790: case 6792: case 6794: case 6796: case 6798: case 6800: case 6802: case 6804: case 6806: case 6744: case 6808: case 6746: case 6810: case 6748: case 6812: case 6750: case 6814: case 6752: case 6816: case 6754: case 6818: case 6756: case 6820: case 6758: case 6822: case 6760: case 6762: case 6764: case 6766: case 6768: case 6770: case 6772: case 6774: case 6776: case 6778: case 6780: case 6782: case 6784: case 6786: case 6788: return false;
				default: return true;
			}
		}
	}
	namespace Rail
	{
		short Rail()
		{
			return 3645;
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 3647: return Shape::AscendingEast;
				case 3649: return Shape::AscendingNorth;
				case 3650: return Shape::AscendingSouth;
				case 3648: return Shape::AscendingWest;
				case 3646: return Shape::EastWest;
				case 3654: return Shape::NorthEast;
				case 3645: return Shape::NorthSouth;
				case 3653: return Shape::NorthWest;
				case 3651: return Shape::SouthEast;
				default: return Shape::SouthWest;
			}
		}
	}
	namespace RedBanner
	{
		short RedBanner()
		{
			return 8121;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 8121: return 0;
				case 8122: return 1;
				case 8131: return 10;
				case 8132: return 11;
				case 8133: return 12;
				case 8134: return 13;
				case 8135: return 14;
				case 8136: return 15;
				case 8123: return 2;
				case 8124: return 3;
				case 8125: return 4;
				case 8126: return 5;
				case 8127: return 6;
				case 8128: return 7;
				case 8129: return 8;
				default: return 9;
			}
		}
	}
	namespace RedBed
	{
		short RedBed()
		{
			return 1276;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1284: case 1281: case 1282: case 1283: return eBlockFace::BLOCK_FACE_XM;
				case 1287: case 1285: case 1286: case 1288: return eBlockFace::BLOCK_FACE_XP;
				case 1276: case 1273: case 1274: case 1275: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Occupied(short ID)
		{
			switch (ID)
			{
				case 1287: case 1276: case 1280: case 1284: case 1275: case 1279: case 1283: case 1288: return false;
				default: return true;
			}
		}
		enum Part Part(short ID)
		{
			switch (ID)
			{
				case 1276: case 1280: case 1284: case 1274: case 1278: case 1282: case 1286: case 1288: return Part::Foot;
				default: return Part::Head;
			}
		}
	}
	namespace RedCarpet
	{
	}
	namespace RedConcrete
	{
	}
	namespace RedConcretePowder
	{
	}
	namespace RedGlazedTerracotta
	{
		short RedGlazedTerracotta()
		{
			return 9430;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9432: return eBlockFace::BLOCK_FACE_XM;
				case 9433: return eBlockFace::BLOCK_FACE_XP;
				case 9430: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace RedMushroom
	{
	}
	namespace RedMushroomBlock
	{
		short RedMushroomBlock()
		{
			return 4569;
		}
		bool Down(short ID)
		{
			switch (ID)
			{
				case 4605: case 4621: case 4606: case 4622: case 4607: case 4623: case 4608: case 4624: case 4609: case 4625: case 4610: case 4626: case 4611: case 4627: case 4612: case 4628: case 4613: case 4629: case 4614: case 4630: case 4615: case 4631: case 4616: case 4601: case 4617: case 4602: case 4618: case 4603: case 4619: case 4604: case 4620: case 4632: return false;
				default: return true;
			}
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 4589: case 4621: case 4590: case 4622: case 4591: case 4623: case 4592: case 4624: case 4593: case 4625: case 4594: case 4626: case 4595: case 4627: case 4596: case 4628: case 4597: case 4629: case 4598: case 4630: case 4599: case 4631: case 4600: case 4585: case 4617: case 4586: case 4618: case 4587: case 4619: case 4588: case 4620: case 4632: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 4577: case 4593: case 4609: case 4625: case 4578: case 4594: case 4610: case 4626: case 4579: case 4595: case 4611: case 4627: case 4580: case 4596: case 4612: case 4628: case 4581: case 4597: case 4613: case 4629: case 4582: case 4598: case 4614: case 4630: case 4583: case 4599: case 4615: case 4631: case 4584: case 4600: case 4616: case 4632: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 4573: case 4589: case 4605: case 4621: case 4574: case 4590: case 4606: case 4622: case 4575: case 4591: case 4607: case 4623: case 4576: case 4592: case 4608: case 4624: case 4581: case 4597: case 4613: case 4629: case 4582: case 4598: case 4614: case 4630: case 4583: case 4599: case 4615: case 4631: case 4584: case 4600: case 4616: case 4632: return false;
				default: return true;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 4575: case 4591: case 4607: case 4623: case 4576: case 4592: case 4608: case 4624: case 4579: case 4595: case 4611: case 4627: case 4580: case 4596: case 4612: case 4628: case 4583: case 4599: case 4615: case 4631: case 4584: case 4600: case 4616: case 4571: case 4587: case 4603: case 4619: case 4572: case 4588: case 4604: case 4620: case 4632: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 4574: case 4590: case 4606: case 4622: case 4576: case 4592: case 4608: case 4624: case 4578: case 4594: case 4610: case 4626: case 4580: case 4596: case 4612: case 4628: case 4582: case 4598: case 4614: case 4630: case 4584: case 4600: case 4616: case 4570: case 4586: case 4602: case 4618: case 4572: case 4588: case 4604: case 4620: case 4632: return false;
				default: return true;
			}
		}
	}
	namespace RedNetherBrickSlab
	{
		short RedNetherBrickSlab()
		{
			return 10852;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 10852: case 10851: return Type::Bottom;
				case 10853: case 10854: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10852: case 10850: case 10854: return false;
				default: return true;
			}
		}
	}
	namespace RedNetherBrickStairs
	{
		short RedNetherBrickStairs()
		{
			return 10560;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 10595: case 10596: case 10597: case 10598: case 10599: case 10600: case 10601: case 10602: case 10603: case 10604: case 10605: case 10606: case 10607: case 10608: case 10589: case 10590: case 10591: case 10592: case 10593: case 10594: return eBlockFace::BLOCK_FACE_XM;
				case 10609: case 10610: case 10611: case 10612: case 10613: case 10614: case 10615: case 10616: case 10617: case 10618: case 10619: case 10620: case 10621: case 10622: case 10623: case 10624: case 10625: case 10626: case 10627: case 10628: return eBlockFace::BLOCK_FACE_XP;
				case 10549: case 10550: case 10551: case 10552: case 10553: case 10554: case 10555: case 10556: case 10557: case 10558: case 10559: case 10560: case 10561: case 10562: case 10563: case 10564: case 10565: case 10566: case 10567: case 10568: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 10599: case 10600: case 10601: case 10602: case 10603: case 10604: case 10605: case 10606: case 10607: case 10608: case 10619: case 10620: case 10621: case 10622: case 10623: case 10624: case 10625: case 10626: case 10627: case 10628: case 10559: case 10560: case 10561: case 10562: case 10563: case 10564: case 10565: case 10566: case 10567: case 10568: case 10579: case 10580: case 10581: case 10582: case 10583: case 10584: case 10585: case 10586: case 10587: case 10588: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 10601: case 10602: case 10611: case 10612: case 10621: case 10622: case 10551: case 10552: case 10561: case 10562: case 10571: case 10572: case 10581: case 10582: case 10591: case 10592: return Shape::InnerLeft;
				case 10603: case 10604: case 10613: case 10614: case 10623: case 10624: case 10553: case 10554: case 10563: case 10564: case 10573: case 10574: case 10583: case 10584: case 10593: case 10594: return Shape::InnerRight;
				case 10595: case 10596: case 10605: case 10606: case 10615: case 10616: case 10625: case 10626: case 10555: case 10556: case 10565: case 10566: case 10575: case 10576: case 10585: case 10586: return Shape::OuterLeft;
				case 10597: case 10598: case 10607: case 10608: case 10617: case 10618: case 10627: case 10628: case 10557: case 10558: case 10567: case 10568: case 10577: case 10578: case 10587: case 10588: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10596: case 10598: case 10600: case 10602: case 10604: case 10606: case 10608: case 10610: case 10612: case 10614: case 10616: case 10618: case 10620: case 10622: case 10624: case 10626: case 10628: case 10550: case 10552: case 10554: case 10556: case 10558: case 10560: case 10562: case 10564: case 10566: case 10568: case 10570: case 10572: case 10574: case 10576: case 10578: case 10580: case 10582: case 10584: case 10586: case 10588: case 10590: case 10592: case 10594: return false;
				default: return true;
			}
		}
	}
	namespace RedNetherBrickWall
	{
		short RedNetherBrickWall()
		{
			return 13462;
		}
		enum East East(short ID)
		{
			switch (ID)
			{
				case 13589: case 13593: case 13597: case 13601: case 13605: case 13609: case 13613: case 13617: case 13621: case 13625: case 13629: case 13633: case 13637: case 13641: case 13645: case 13649: case 13653: case 13657: case 13661: case 13665: case 13669: case 13673: case 13570: case 13574: case 13578: case 13582: case 13586: case 13590: case 13594: case 13598: case 13602: case 13606: case 13610: case 13614: case 13618: case 13622: case 13626: case 13630: case 13634: case 13638: case 13642: case 13646: case 13650: case 13654: case 13658: case 13662: case 13666: case 13670: case 13674: case 13567: case 13571: case 13575: case 13579: case 13583: case 13587: case 13591: case 13595: case 13599: case 13603: case 13607: case 13611: case 13615: case 13619: case 13623: case 13627: case 13631: case 13635: case 13639: case 13643: case 13647: case 13651: case 13655: case 13659: case 13663: case 13667: case 13671: case 13568: case 13572: case 13576: case 13580: case 13584: case 13588: case 13592: case 13596: case 13600: case 13604: case 13608: case 13612: case 13616: case 13620: case 13624: case 13628: case 13632: case 13636: case 13640: case 13644: case 13648: case 13652: case 13656: case 13660: case 13664: case 13668: case 13672: case 13569: case 13573: case 13577: case 13581: case 13585: return East::Low;
				case 13462: case 13466: case 13470: case 13474: case 13478: case 13482: case 13486: case 13490: case 13494: case 13498: case 13502: case 13506: case 13510: case 13514: case 13518: case 13522: case 13526: case 13530: case 13534: case 13538: case 13542: case 13546: case 13550: case 13554: case 13558: case 13562: case 13566: case 13459: case 13463: case 13467: case 13471: case 13475: case 13479: case 13483: case 13487: case 13491: case 13495: case 13499: case 13503: case 13507: case 13511: case 13515: case 13519: case 13523: case 13527: case 13531: case 13535: case 13539: case 13543: case 13547: case 13551: case 13555: case 13559: case 13563: case 13460: case 13464: case 13468: case 13472: case 13476: case 13480: case 13484: case 13488: case 13492: case 13496: case 13500: case 13504: case 13508: case 13512: case 13516: case 13520: case 13524: case 13528: case 13532: case 13536: case 13540: case 13544: case 13548: case 13552: case 13556: case 13560: case 13564: case 13461: case 13465: case 13469: case 13473: case 13477: case 13481: case 13485: case 13489: case 13493: case 13497: case 13501: case 13505: case 13509: case 13513: case 13517: case 13521: case 13525: case 13529: case 13533: case 13537: case 13541: case 13545: case 13549: case 13553: case 13557: case 13561: case 13565: return East::None;
				default: return East::Tall;
			}
		}
		enum North North(short ID)
		{
			switch (ID)
			{
				case 13605: case 13609: case 13613: case 13617: case 13621: case 13625: case 13629: case 13633: case 13637: case 13713: case 13717: case 13721: case 13725: case 13729: case 13733: case 13737: case 13741: case 13745: case 13498: case 13502: case 13506: case 13510: case 13514: case 13518: case 13522: case 13526: case 13530: case 13606: case 13610: case 13614: case 13618: case 13622: case 13626: case 13630: case 13634: case 13638: case 13714: case 13718: case 13722: case 13726: case 13730: case 13734: case 13738: case 13742: case 13746: case 13495: case 13499: case 13503: case 13507: case 13511: case 13515: case 13519: case 13523: case 13527: case 13603: case 13607: case 13611: case 13615: case 13619: case 13623: case 13627: case 13631: case 13635: case 13711: case 13715: case 13719: case 13723: case 13727: case 13731: case 13735: case 13739: case 13743: case 13496: case 13500: case 13504: case 13508: case 13512: case 13516: case 13520: case 13524: case 13528: case 13604: case 13608: case 13612: case 13616: case 13620: case 13624: case 13628: case 13632: case 13636: case 13712: case 13716: case 13720: case 13724: case 13728: case 13732: case 13736: case 13740: case 13744: case 13497: case 13501: case 13505: case 13509: case 13513: case 13517: case 13521: case 13525: case 13529: return North::Low;
				case 13589: case 13593: case 13597: case 13601: case 13677: case 13681: case 13685: case 13689: case 13693: case 13697: case 13701: case 13705: case 13709: case 13462: case 13466: case 13470: case 13474: case 13478: case 13482: case 13486: case 13490: case 13494: case 13570: case 13574: case 13578: case 13582: case 13586: case 13590: case 13594: case 13598: case 13602: case 13678: case 13682: case 13686: case 13690: case 13694: case 13698: case 13702: case 13706: case 13710: case 13459: case 13463: case 13467: case 13471: case 13475: case 13479: case 13483: case 13487: case 13491: case 13567: case 13571: case 13575: case 13579: case 13583: case 13587: case 13591: case 13595: case 13599: case 13675: case 13679: case 13683: case 13687: case 13691: case 13695: case 13699: case 13703: case 13707: case 13460: case 13464: case 13468: case 13472: case 13476: case 13480: case 13484: case 13488: case 13492: case 13568: case 13572: case 13576: case 13580: case 13584: case 13588: case 13592: case 13596: case 13600: case 13676: case 13680: case 13684: case 13688: case 13692: case 13696: case 13700: case 13704: case 13708: case 13461: case 13465: case 13469: case 13473: case 13477: case 13481: case 13485: case 13489: case 13493: case 13569: case 13573: case 13577: case 13581: case 13585: return North::None;
				default: return North::Tall;
			}
		}
		enum South South(short ID)
		{
			switch (ID)
			{
				case 13589: case 13617: case 13621: case 13625: case 13653: case 13657: case 13661: case 13689: case 13693: case 13697: case 13725: case 13729: case 13733: case 13761: case 13765: case 13769: case 13474: case 13478: case 13482: case 13510: case 13514: case 13518: case 13546: case 13550: case 13554: case 13582: case 13586: case 13590: case 13618: case 13622: case 13626: case 13654: case 13658: case 13662: case 13690: case 13694: case 13698: case 13726: case 13730: case 13734: case 13762: case 13766: case 13770: case 13471: case 13475: case 13479: case 13507: case 13511: case 13515: case 13543: case 13547: case 13551: case 13579: case 13583: case 13587: case 13615: case 13619: case 13623: case 13651: case 13655: case 13659: case 13687: case 13691: case 13695: case 13723: case 13727: case 13731: case 13759: case 13763: case 13767: case 13472: case 13476: case 13480: case 13508: case 13512: case 13516: case 13544: case 13548: case 13552: case 13580: case 13584: case 13588: case 13616: case 13620: case 13624: case 13652: case 13656: case 13660: case 13688: case 13692: case 13696: case 13724: case 13728: case 13732: case 13760: case 13764: case 13768: case 13473: case 13477: case 13481: case 13509: case 13513: case 13517: case 13545: case 13549: case 13553: case 13581: case 13585: return South::Low;
				case 13605: case 13609: case 13613: case 13641: case 13645: case 13649: case 13677: case 13681: case 13685: case 13713: case 13717: case 13721: case 13749: case 13753: case 13757: case 13462: case 13466: case 13470: case 13498: case 13502: case 13506: case 13534: case 13538: case 13542: case 13570: case 13574: case 13578: case 13606: case 13610: case 13614: case 13642: case 13646: case 13650: case 13678: case 13682: case 13686: case 13714: case 13718: case 13722: case 13750: case 13754: case 13758: case 13459: case 13463: case 13467: case 13495: case 13499: case 13503: case 13531: case 13535: case 13539: case 13567: case 13571: case 13575: case 13603: case 13607: case 13611: case 13639: case 13643: case 13647: case 13675: case 13679: case 13683: case 13711: case 13715: case 13719: case 13747: case 13751: case 13755: case 13460: case 13464: case 13468: case 13496: case 13500: case 13504: case 13532: case 13536: case 13540: case 13568: case 13572: case 13576: case 13604: case 13608: case 13612: case 13640: case 13644: case 13648: case 13676: case 13680: case 13684: case 13712: case 13716: case 13720: case 13748: case 13752: case 13756: case 13461: case 13465: case 13469: case 13497: case 13501: case 13505: case 13533: case 13537: case 13541: case 13569: case 13573: case 13577: return South::None;
				default: return South::Tall;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 13589: case 13597: case 13601: case 13609: case 13613: case 13621: case 13625: case 13633: case 13637: case 13645: case 13649: case 13657: case 13661: case 13669: case 13673: case 13681: case 13685: case 13693: case 13697: case 13705: case 13709: case 13717: case 13721: case 13729: case 13733: case 13741: case 13745: case 13753: case 13757: case 13765: case 13769: case 13777: case 13781: case 13466: case 13470: case 13478: case 13482: case 13490: case 13494: case 13502: case 13506: case 13514: case 13518: case 13526: case 13530: case 13538: case 13542: case 13550: case 13554: case 13562: case 13566: case 13574: case 13578: case 13586: case 13590: case 13598: case 13602: case 13610: case 13614: case 13622: case 13626: case 13634: case 13638: case 13646: case 13650: case 13658: case 13662: case 13670: case 13674: case 13682: case 13686: case 13694: case 13698: case 13706: case 13710: case 13718: case 13722: case 13730: case 13734: case 13742: case 13746: case 13754: case 13758: case 13766: case 13770: case 13778: case 13782: case 13467: case 13479: case 13491: case 13503: case 13515: case 13527: case 13539: case 13551: case 13563: case 13575: case 13587: case 13599: case 13611: case 13623: case 13635: case 13647: case 13659: case 13671: case 13683: case 13695: case 13707: case 13719: case 13731: case 13743: case 13755: case 13767: case 13779: case 13468: case 13480: case 13492: case 13504: case 13516: case 13528: case 13540: case 13552: case 13564: case 13576: case 13588: case 13600: case 13612: case 13624: case 13636: case 13648: case 13660: case 13672: case 13684: case 13696: case 13708: case 13720: case 13732: case 13744: case 13756: case 13768: case 13780: case 13465: case 13469: case 13477: case 13481: case 13489: case 13493: case 13501: case 13505: case 13513: case 13517: case 13525: case 13529: case 13537: case 13541: case 13549: case 13553: case 13561: case 13565: case 13573: case 13577: case 13585: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 13589: case 13601: case 13613: case 13625: case 13637: case 13649: case 13661: case 13673: case 13685: case 13697: case 13709: case 13721: case 13733: case 13745: case 13757: case 13769: case 13781: case 13462: case 13470: case 13474: case 13482: case 13486: case 13494: case 13498: case 13506: case 13510: case 13518: case 13522: case 13530: case 13534: case 13542: case 13546: case 13554: case 13558: case 13566: case 13570: case 13578: case 13582: case 13590: case 13594: case 13602: case 13606: case 13614: case 13618: case 13626: case 13630: case 13638: case 13642: case 13650: case 13654: case 13662: case 13666: case 13674: case 13678: case 13686: case 13690: case 13698: case 13702: case 13710: case 13714: case 13722: case 13726: case 13734: case 13738: case 13746: case 13750: case 13758: case 13762: case 13770: case 13774: case 13782: case 13463: case 13475: case 13487: case 13499: case 13511: case 13523: case 13535: case 13547: case 13559: case 13571: case 13583: case 13595: case 13607: case 13619: case 13631: case 13643: case 13655: case 13667: case 13679: case 13691: case 13703: case 13715: case 13727: case 13739: case 13751: case 13763: case 13775: case 13464: case 13468: case 13476: case 13480: case 13488: case 13492: case 13500: case 13504: case 13512: case 13516: case 13524: case 13528: case 13536: case 13540: case 13548: case 13552: case 13560: case 13564: case 13572: case 13576: case 13584: case 13588: case 13596: case 13600: case 13608: case 13612: case 13620: case 13624: case 13632: case 13636: case 13644: case 13648: case 13656: case 13660: case 13668: case 13672: case 13680: case 13684: case 13692: case 13696: case 13704: case 13708: case 13716: case 13720: case 13728: case 13732: case 13740: case 13744: case 13752: case 13756: case 13764: case 13768: case 13776: case 13780: case 13469: case 13481: case 13493: case 13505: case 13517: case 13529: case 13541: case 13553: case 13565: case 13577: return false;
				default: return true;
			}
		}
		enum West West(short ID)
		{
			switch (ID)
			{
				case 13589: case 13601: case 13613: case 13625: case 13637: case 13649: case 13661: case 13673: case 13685: case 13697: case 13709: case 13721: case 13733: case 13745: case 13757: case 13769: case 13781: case 13466: case 13478: case 13490: case 13502: case 13514: case 13526: case 13538: case 13550: case 13562: case 13574: case 13586: case 13598: case 13610: case 13622: case 13634: case 13646: case 13658: case 13670: case 13682: case 13694: case 13706: case 13718: case 13730: case 13742: case 13754: case 13766: case 13778: case 13463: case 13475: case 13487: case 13499: case 13511: case 13523: case 13535: case 13547: case 13559: case 13571: case 13583: case 13595: case 13607: case 13619: case 13631: case 13643: case 13655: case 13667: case 13679: case 13691: case 13703: case 13715: case 13727: case 13739: case 13751: case 13763: case 13775: case 13460: case 13472: case 13484: case 13496: case 13508: case 13520: case 13532: case 13544: case 13556: case 13568: case 13580: case 13592: case 13604: case 13616: case 13628: case 13640: case 13652: case 13664: case 13676: case 13688: case 13700: case 13712: case 13724: case 13736: case 13748: case 13760: case 13772: case 13469: case 13481: case 13493: case 13505: case 13517: case 13529: case 13541: case 13553: case 13565: case 13577: return West::Low;
				case 13597: case 13609: case 13621: case 13633: case 13645: case 13657: case 13669: case 13681: case 13693: case 13705: case 13717: case 13729: case 13741: case 13753: case 13765: case 13777: case 13462: case 13474: case 13486: case 13498: case 13510: case 13522: case 13534: case 13546: case 13558: case 13570: case 13582: case 13594: case 13606: case 13618: case 13630: case 13642: case 13654: case 13666: case 13678: case 13690: case 13702: case 13714: case 13726: case 13738: case 13750: case 13762: case 13774: case 13459: case 13471: case 13483: case 13495: case 13507: case 13519: case 13531: case 13543: case 13555: case 13567: case 13579: case 13591: case 13603: case 13615: case 13627: case 13639: case 13651: case 13663: case 13675: case 13687: case 13699: case 13711: case 13723: case 13735: case 13747: case 13759: case 13771: case 13468: case 13480: case 13492: case 13504: case 13516: case 13528: case 13540: case 13552: case 13564: case 13576: case 13588: case 13600: case 13612: case 13624: case 13636: case 13648: case 13660: case 13672: case 13684: case 13696: case 13708: case 13720: case 13732: case 13744: case 13756: case 13768: case 13780: case 13465: case 13477: case 13489: case 13501: case 13513: case 13525: case 13537: case 13549: case 13561: case 13573: case 13585: return West::None;
				default: return West::Tall;
			}
		}
	}
	namespace RedNetherBricks
	{
	}
	namespace RedSand
	{
	}
	namespace RedSandstone
	{
	}
	namespace RedSandstoneSlab
	{
		short RedSandstoneSlab()
		{
			return 8399;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8399: case 8398: return Type::Bottom;
				case 8400: case 8401: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8399: case 8397: case 8401: return false;
				default: return true;
			}
		}
	}
	namespace RedSandstoneStairs
	{
		short RedSandstoneStairs()
		{
			return 8231;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8260: case 8261: case 8262: case 8263: case 8264: case 8265: case 8266: case 8267: case 8268: case 8269: case 8270: case 8271: case 8272: case 8273: case 8274: case 8275: case 8276: case 8277: case 8278: case 8279: return eBlockFace::BLOCK_FACE_XM;
				case 8280: case 8281: case 8282: case 8283: case 8284: case 8285: case 8286: case 8287: case 8288: case 8289: case 8290: case 8291: case 8292: case 8293: case 8294: case 8295: case 8296: case 8297: case 8298: case 8299: return eBlockFace::BLOCK_FACE_XP;
				case 8220: case 8221: case 8222: case 8223: case 8224: case 8225: case 8226: case 8227: case 8228: case 8229: case 8230: case 8231: case 8232: case 8233: case 8234: case 8235: case 8236: case 8237: case 8238: case 8239: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 8230: case 8231: case 8232: case 8233: case 8234: case 8235: case 8236: case 8237: case 8238: case 8239: case 8250: case 8251: case 8252: case 8253: case 8254: case 8255: case 8256: case 8257: case 8258: case 8259: case 8270: case 8271: case 8272: case 8273: case 8274: case 8275: case 8276: case 8277: case 8278: case 8279: case 8290: case 8291: case 8292: case 8293: case 8294: case 8295: case 8296: case 8297: case 8298: case 8299: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 8222: case 8223: case 8232: case 8233: case 8242: case 8243: case 8252: case 8253: case 8262: case 8263: case 8272: case 8273: case 8282: case 8283: case 8292: case 8293: return Shape::InnerLeft;
				case 8224: case 8225: case 8234: case 8235: case 8244: case 8245: case 8254: case 8255: case 8264: case 8265: case 8274: case 8275: case 8284: case 8285: case 8294: case 8295: return Shape::InnerRight;
				case 8226: case 8227: case 8236: case 8237: case 8246: case 8247: case 8256: case 8257: case 8266: case 8267: case 8276: case 8277: case 8286: case 8287: case 8296: case 8297: return Shape::OuterLeft;
				case 8228: case 8229: case 8238: case 8239: case 8248: case 8249: case 8258: case 8259: case 8268: case 8269: case 8278: case 8279: case 8288: case 8289: case 8298: case 8299: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8221: case 8223: case 8225: case 8227: case 8229: case 8231: case 8233: case 8235: case 8237: case 8239: case 8241: case 8243: case 8245: case 8247: case 8249: case 8251: case 8253: case 8255: case 8257: case 8259: case 8261: case 8263: case 8265: case 8267: case 8269: case 8271: case 8273: case 8275: case 8277: case 8279: case 8281: case 8283: case 8285: case 8287: case 8289: case 8291: case 8293: case 8295: case 8297: case 8299: return false;
				default: return true;
			}
		}
	}
	namespace RedSandstoneWall
	{
		short RedSandstoneWall()
		{
			return 11518;
		}
		enum East East(short ID)
		{
			switch (ID)
			{
				case 11625: case 11629: case 11633: case 11637: case 11641: case 11645: case 11649: case 11653: case 11657: case 11661: case 11665: case 11669: case 11673: case 11677: case 11681: case 11685: case 11689: case 11693: case 11697: case 11701: case 11705: case 11709: case 11713: case 11717: case 11721: case 11725: case 11729: case 11626: case 11630: case 11634: case 11638: case 11642: case 11646: case 11650: case 11654: case 11658: case 11662: case 11666: case 11670: case 11674: case 11678: case 11682: case 11686: case 11690: case 11694: case 11698: case 11702: case 11706: case 11710: case 11714: case 11718: case 11722: case 11726: case 11730: case 11623: case 11627: case 11631: case 11635: case 11639: case 11643: case 11647: case 11651: case 11655: case 11659: case 11663: case 11667: case 11671: case 11675: case 11679: case 11683: case 11687: case 11691: case 11695: case 11699: case 11703: case 11707: case 11711: case 11715: case 11719: case 11723: case 11727: case 11624: case 11628: case 11632: case 11636: case 11640: case 11644: case 11648: case 11652: case 11656: case 11660: case 11664: case 11668: case 11672: case 11676: case 11680: case 11684: case 11688: case 11692: case 11696: case 11700: case 11704: case 11708: case 11712: case 11716: case 11720: case 11724: case 11728: return East::Low;
				case 11545: case 11549: case 11553: case 11557: case 11561: case 11565: case 11569: case 11573: case 11577: case 11581: case 11585: case 11589: case 11593: case 11597: case 11601: case 11605: case 11609: case 11613: case 11617: case 11621: case 11518: case 11522: case 11526: case 11530: case 11534: case 11538: case 11542: case 11546: case 11550: case 11554: case 11558: case 11562: case 11566: case 11570: case 11574: case 11578: case 11582: case 11586: case 11590: case 11594: case 11598: case 11602: case 11606: case 11610: case 11614: case 11618: case 11622: case 11515: case 11519: case 11523: case 11527: case 11531: case 11535: case 11539: case 11543: case 11547: case 11551: case 11555: case 11559: case 11563: case 11567: case 11571: case 11575: case 11579: case 11583: case 11587: case 11591: case 11595: case 11599: case 11603: case 11607: case 11611: case 11615: case 11619: case 11516: case 11520: case 11524: case 11528: case 11532: case 11536: case 11540: case 11544: case 11548: case 11552: case 11556: case 11560: case 11564: case 11568: case 11572: case 11576: case 11580: case 11584: case 11588: case 11592: case 11596: case 11600: case 11604: case 11608: case 11612: case 11616: case 11620: case 11517: case 11521: case 11525: case 11529: case 11533: case 11537: case 11541: return East::None;
				default: return East::Tall;
			}
		}
		enum North North(short ID)
		{
			switch (ID)
			{
				case 11553: case 11557: case 11561: case 11565: case 11569: case 11573: case 11577: case 11581: case 11585: case 11661: case 11665: case 11669: case 11673: case 11677: case 11681: case 11685: case 11689: case 11693: case 11769: case 11773: case 11777: case 11781: case 11785: case 11789: case 11793: case 11797: case 11801: case 11554: case 11558: case 11562: case 11566: case 11570: case 11574: case 11578: case 11582: case 11586: case 11662: case 11666: case 11670: case 11674: case 11678: case 11682: case 11686: case 11690: case 11694: case 11770: case 11774: case 11778: case 11782: case 11786: case 11790: case 11794: case 11798: case 11802: case 11551: case 11555: case 11559: case 11563: case 11567: case 11571: case 11575: case 11579: case 11583: case 11659: case 11663: case 11667: case 11671: case 11675: case 11679: case 11683: case 11687: case 11691: case 11767: case 11771: case 11775: case 11779: case 11783: case 11787: case 11791: case 11795: case 11799: case 11552: case 11556: case 11560: case 11564: case 11568: case 11572: case 11576: case 11580: case 11584: case 11660: case 11664: case 11668: case 11672: case 11676: case 11680: case 11684: case 11688: case 11692: case 11768: case 11772: case 11776: case 11780: case 11784: case 11788: case 11792: case 11796: case 11800: return North::Low;
				case 11545: case 11549: case 11625: case 11629: case 11633: case 11637: case 11641: case 11645: case 11649: case 11653: case 11657: case 11733: case 11737: case 11741: case 11745: case 11749: case 11753: case 11757: case 11761: case 11765: case 11518: case 11522: case 11526: case 11530: case 11534: case 11538: case 11542: case 11546: case 11550: case 11626: case 11630: case 11634: case 11638: case 11642: case 11646: case 11650: case 11654: case 11658: case 11734: case 11738: case 11742: case 11746: case 11750: case 11754: case 11758: case 11762: case 11766: case 11515: case 11519: case 11523: case 11527: case 11531: case 11535: case 11539: case 11543: case 11547: case 11623: case 11627: case 11631: case 11635: case 11639: case 11643: case 11647: case 11651: case 11655: case 11731: case 11735: case 11739: case 11743: case 11747: case 11751: case 11755: case 11759: case 11763: case 11516: case 11520: case 11524: case 11528: case 11532: case 11536: case 11540: case 11544: case 11548: case 11624: case 11628: case 11632: case 11636: case 11640: case 11644: case 11648: case 11652: case 11656: case 11732: case 11736: case 11740: case 11744: case 11748: case 11752: case 11756: case 11760: case 11764: case 11517: case 11521: case 11525: case 11529: case 11533: case 11537: case 11541: return North::None;
				default: return North::Tall;
			}
		}
		enum South South(short ID)
		{
			switch (ID)
			{
				case 11565: case 11569: case 11573: case 11601: case 11605: case 11609: case 11637: case 11641: case 11645: case 11673: case 11677: case 11681: case 11709: case 11713: case 11717: case 11745: case 11749: case 11753: case 11781: case 11785: case 11789: case 11817: case 11821: case 11825: case 11530: case 11534: case 11538: case 11566: case 11570: case 11574: case 11602: case 11606: case 11610: case 11638: case 11642: case 11646: case 11674: case 11678: case 11682: case 11710: case 11714: case 11718: case 11746: case 11750: case 11754: case 11782: case 11786: case 11790: case 11818: case 11822: case 11826: case 11527: case 11531: case 11535: case 11563: case 11567: case 11571: case 11599: case 11603: case 11607: case 11635: case 11639: case 11643: case 11671: case 11675: case 11679: case 11707: case 11711: case 11715: case 11743: case 11747: case 11751: case 11779: case 11783: case 11787: case 11815: case 11819: case 11823: case 11528: case 11532: case 11536: case 11564: case 11568: case 11572: case 11600: case 11604: case 11608: case 11636: case 11640: case 11644: case 11672: case 11676: case 11680: case 11708: case 11712: case 11716: case 11744: case 11748: case 11752: case 11780: case 11784: case 11788: case 11816: case 11820: case 11824: case 11529: case 11533: case 11537: return South::Low;
				case 11553: case 11557: case 11561: case 11589: case 11593: case 11597: case 11625: case 11629: case 11633: case 11661: case 11665: case 11669: case 11697: case 11701: case 11705: case 11733: case 11737: case 11741: case 11769: case 11773: case 11777: case 11805: case 11809: case 11813: case 11518: case 11522: case 11526: case 11554: case 11558: case 11562: case 11590: case 11594: case 11598: case 11626: case 11630: case 11634: case 11662: case 11666: case 11670: case 11698: case 11702: case 11706: case 11734: case 11738: case 11742: case 11770: case 11774: case 11778: case 11806: case 11810: case 11814: case 11515: case 11519: case 11523: case 11551: case 11555: case 11559: case 11587: case 11591: case 11595: case 11623: case 11627: case 11631: case 11659: case 11663: case 11667: case 11695: case 11699: case 11703: case 11731: case 11735: case 11739: case 11767: case 11771: case 11775: case 11803: case 11807: case 11811: case 11516: case 11520: case 11524: case 11552: case 11556: case 11560: case 11588: case 11592: case 11596: case 11624: case 11628: case 11632: case 11660: case 11664: case 11668: case 11696: case 11700: case 11704: case 11732: case 11736: case 11740: case 11768: case 11772: case 11776: case 11804: case 11808: case 11812: case 11517: case 11521: case 11525: return South::None;
				default: return South::Tall;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 11545: case 11549: case 11557: case 11561: case 11569: case 11573: case 11581: case 11585: case 11593: case 11597: case 11605: case 11609: case 11617: case 11621: case 11629: case 11633: case 11641: case 11645: case 11653: case 11657: case 11665: case 11669: case 11677: case 11681: case 11689: case 11693: case 11701: case 11705: case 11713: case 11717: case 11725: case 11729: case 11737: case 11741: case 11749: case 11753: case 11761: case 11765: case 11773: case 11777: case 11785: case 11789: case 11797: case 11801: case 11809: case 11813: case 11821: case 11825: case 11833: case 11837: case 11522: case 11526: case 11534: case 11538: case 11546: case 11550: case 11558: case 11562: case 11570: case 11574: case 11582: case 11586: case 11594: case 11598: case 11606: case 11610: case 11618: case 11622: case 11630: case 11634: case 11642: case 11646: case 11654: case 11658: case 11666: case 11670: case 11678: case 11682: case 11690: case 11694: case 11702: case 11706: case 11714: case 11718: case 11726: case 11730: case 11738: case 11742: case 11750: case 11754: case 11762: case 11766: case 11774: case 11778: case 11786: case 11790: case 11798: case 11802: case 11810: case 11814: case 11822: case 11826: case 11834: case 11838: case 11523: case 11535: case 11547: case 11559: case 11571: case 11583: case 11595: case 11607: case 11619: case 11631: case 11643: case 11655: case 11667: case 11679: case 11691: case 11703: case 11715: case 11727: case 11739: case 11751: case 11763: case 11775: case 11787: case 11799: case 11811: case 11823: case 11835: case 11524: case 11536: case 11548: case 11560: case 11572: case 11584: case 11596: case 11608: case 11620: case 11632: case 11644: case 11656: case 11668: case 11680: case 11692: case 11704: case 11716: case 11728: case 11740: case 11752: case 11764: case 11776: case 11788: case 11800: case 11812: case 11824: case 11836: case 11521: case 11525: case 11533: case 11537: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 11549: case 11561: case 11573: case 11585: case 11597: case 11609: case 11621: case 11633: case 11645: case 11657: case 11669: case 11681: case 11693: case 11705: case 11717: case 11729: case 11741: case 11753: case 11765: case 11777: case 11789: case 11801: case 11813: case 11825: case 11837: case 11518: case 11526: case 11530: case 11538: case 11542: case 11550: case 11554: case 11562: case 11566: case 11574: case 11578: case 11586: case 11590: case 11598: case 11602: case 11610: case 11614: case 11622: case 11626: case 11634: case 11638: case 11646: case 11650: case 11658: case 11662: case 11670: case 11674: case 11682: case 11686: case 11694: case 11698: case 11706: case 11710: case 11718: case 11722: case 11730: case 11734: case 11742: case 11746: case 11754: case 11758: case 11766: case 11770: case 11778: case 11782: case 11790: case 11794: case 11802: case 11806: case 11814: case 11818: case 11826: case 11830: case 11838: case 11519: case 11531: case 11543: case 11555: case 11567: case 11579: case 11591: case 11603: case 11615: case 11627: case 11639: case 11651: case 11663: case 11675: case 11687: case 11699: case 11711: case 11723: case 11735: case 11747: case 11759: case 11771: case 11783: case 11795: case 11807: case 11819: case 11831: case 11520: case 11524: case 11532: case 11536: case 11544: case 11548: case 11556: case 11560: case 11568: case 11572: case 11580: case 11584: case 11592: case 11596: case 11604: case 11608: case 11616: case 11620: case 11628: case 11632: case 11640: case 11644: case 11652: case 11656: case 11664: case 11668: case 11676: case 11680: case 11688: case 11692: case 11700: case 11704: case 11712: case 11716: case 11724: case 11728: case 11736: case 11740: case 11748: case 11752: case 11760: case 11764: case 11772: case 11776: case 11784: case 11788: case 11796: case 11800: case 11808: case 11812: case 11820: case 11824: case 11832: case 11836: case 11525: case 11537: return false;
				default: return true;
			}
		}
		enum West West(short ID)
		{
			switch (ID)
			{
				case 11549: case 11561: case 11573: case 11585: case 11597: case 11609: case 11621: case 11633: case 11645: case 11657: case 11669: case 11681: case 11693: case 11705: case 11717: case 11729: case 11741: case 11753: case 11765: case 11777: case 11789: case 11801: case 11813: case 11825: case 11837: case 11522: case 11534: case 11546: case 11558: case 11570: case 11582: case 11594: case 11606: case 11618: case 11630: case 11642: case 11654: case 11666: case 11678: case 11690: case 11702: case 11714: case 11726: case 11738: case 11750: case 11762: case 11774: case 11786: case 11798: case 11810: case 11822: case 11834: case 11519: case 11531: case 11543: case 11555: case 11567: case 11579: case 11591: case 11603: case 11615: case 11627: case 11639: case 11651: case 11663: case 11675: case 11687: case 11699: case 11711: case 11723: case 11735: case 11747: case 11759: case 11771: case 11783: case 11795: case 11807: case 11819: case 11831: case 11516: case 11528: case 11540: case 11552: case 11564: case 11576: case 11588: case 11600: case 11612: case 11624: case 11636: case 11648: case 11660: case 11672: case 11684: case 11696: case 11708: case 11720: case 11732: case 11744: case 11756: case 11768: case 11780: case 11792: case 11804: case 11816: case 11828: case 11525: case 11537: return West::Low;
				case 11545: case 11557: case 11569: case 11581: case 11593: case 11605: case 11617: case 11629: case 11641: case 11653: case 11665: case 11677: case 11689: case 11701: case 11713: case 11725: case 11737: case 11749: case 11761: case 11773: case 11785: case 11797: case 11809: case 11821: case 11833: case 11518: case 11530: case 11542: case 11554: case 11566: case 11578: case 11590: case 11602: case 11614: case 11626: case 11638: case 11650: case 11662: case 11674: case 11686: case 11698: case 11710: case 11722: case 11734: case 11746: case 11758: case 11770: case 11782: case 11794: case 11806: case 11818: case 11830: case 11515: case 11527: case 11539: case 11551: case 11563: case 11575: case 11587: case 11599: case 11611: case 11623: case 11635: case 11647: case 11659: case 11671: case 11683: case 11695: case 11707: case 11719: case 11731: case 11743: case 11755: case 11767: case 11779: case 11791: case 11803: case 11815: case 11827: case 11524: case 11536: case 11548: case 11560: case 11572: case 11584: case 11596: case 11608: case 11620: case 11632: case 11644: case 11656: case 11668: case 11680: case 11692: case 11704: case 11716: case 11728: case 11740: case 11752: case 11764: case 11776: case 11788: case 11800: case 11812: case 11824: case 11836: case 11521: case 11533: return West::None;
				default: return West::Tall;
			}
		}
	}
	namespace RedShulkerBox
	{
		short RedShulkerBox()
		{
			return 9366;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9365: return eBlockFace::BLOCK_FACE_XM;
				case 9363: return eBlockFace::BLOCK_FACE_XP;
				case 9367: return eBlockFace::BLOCK_FACE_YM;
				case 9366: return eBlockFace::BLOCK_FACE_YP;
				case 9362: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace RedStainedGlass
	{
	}
	namespace RedStainedGlassPane
	{
		short RedStainedGlassPane()
		{
			return 7342;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 7334: case 7338: case 7327: case 7331: case 7335: case 7339: case 7328: case 7332: case 7336: case 7340: case 7329: case 7333: case 7337: case 7341: case 7330: case 7342: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 7338: case 7319: case 7323: case 7335: case 7339: case 7320: case 7324: case 7336: case 7340: case 7321: case 7325: case 7337: case 7341: case 7322: case 7326: case 7342: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 7334: case 7315: case 7323: case 7331: case 7339: case 7316: case 7324: case 7332: case 7340: case 7317: case 7325: case 7333: case 7341: case 7318: case 7326: case 7342: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 7334: case 7338: case 7313: case 7317: case 7321: case 7325: case 7329: case 7333: case 7337: case 7341: case 7314: case 7318: case 7322: case 7326: case 7330: case 7342: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 7334: case 7338: case 7312: case 7316: case 7320: case 7324: case 7328: case 7332: case 7336: case 7340: case 7314: case 7318: case 7322: case 7326: case 7330: case 7342: return false;
				default: return true;
			}
		}
	}
	namespace RedTerracotta
	{
	}
	namespace RedTulip
	{
	}
	namespace RedWallBanner
	{
		short RedWallBanner()
		{
			return 8209;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8211: return eBlockFace::BLOCK_FACE_XM;
				case 8212: return eBlockFace::BLOCK_FACE_XP;
				case 8209: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace RedWool
	{
	}
	namespace RedstoneBlock
	{
	}
	namespace RedstoneLamp
	{
		short RedstoneLamp()
		{
			return 5157;
		}
		bool Lit(short ID)
		{
			switch (ID)
			{
				case 5157: return false;
				default: return true;
			}
		}
	}
	namespace RedstoneOre
	{
		short RedstoneOre()
		{
			return 3886;
		}
		bool Lit(short ID)
		{
			switch (ID)
			{
				case 3886: return false;
				default: return true;
			}
		}
	}
	namespace RedstoneTorch
	{
		short RedstoneTorch()
		{
			return 3887;
		}
		bool Lit(short ID)
		{
			switch (ID)
			{
				case 3888: return false;
				default: return true;
			}
		}
	}
	namespace RedstoneWallTorch
	{
		short RedstoneWallTorch()
		{
			return 3889;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 3893: case 3894: return eBlockFace::BLOCK_FACE_XM;
				case 3895: case 3896: return eBlockFace::BLOCK_FACE_XP;
				case 3890: case 3889: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Lit(short ID)
		{
			switch (ID)
			{
				case 3890: case 3892: case 3894: case 3896: return false;
				default: return true;
			}
		}
	}
	namespace RedstoneWire
	{
		short RedstoneWire()
		{
			return 3218;
		}
		enum East East(short ID)
		{
			switch (ID)
			{
				case 3061: case 3065: case 3069: case 3073: case 3077: case 3081: case 3085: case 3089: case 3093: case 3097: case 3101: case 3105: case 3109: case 3113: case 3117: case 3121: case 3125: case 3129: case 3133: case 3137: case 3141: case 3145: case 3149: case 3153: case 3157: case 3161: case 3165: case 3169: case 3173: case 3177: case 3181: case 3185: case 3189: case 3193: case 3197: case 3201: case 3205: case 3209: case 3213: case 3217: case 3221: case 3225: case 3229: case 3233: case 3237: case 3241: case 3245: case 3249: case 3253: case 3257: case 3261: case 3265: case 3269: case 3273: case 3277: case 3281: case 3285: case 3289: case 3293: case 3297: case 3301: case 3305: case 3309: case 3313: case 3317: case 3321: case 3325: case 3329: case 3333: case 3337: case 3341: case 3345: case 3349: case 3353: case 2922: case 2926: case 2930: case 2934: case 2938: case 2942: case 2946: case 2950: case 2954: case 2958: case 2962: case 2966: case 2970: case 2974: case 2978: case 2982: case 2986: case 2990: case 2994: case 2998: case 3002: case 3006: case 3010: case 3014: case 3018: case 3022: case 3026: case 3030: case 3034: case 3038: case 3042: case 3046: case 3050: case 3054: case 3058: case 3062: case 3066: case 3070: case 3074: case 3078: case 3082: case 3086: case 3090: case 3094: case 3098: case 3102: case 3106: case 3110: case 3114: case 3118: case 3122: case 3126: case 3130: case 3134: case 3138: case 3142: case 3146: case 3150: case 3154: case 3158: case 3162: case 3166: case 3170: case 3174: case 3178: case 3182: case 3186: case 3190: case 3194: case 3198: case 3202: case 3206: case 3210: case 3214: case 3218: case 3222: case 3226: case 3230: case 3234: case 3238: case 3242: case 3246: case 3250: case 3254: case 3258: case 3262: case 3266: case 3270: case 3274: case 3278: case 3282: case 3286: case 3290: case 3294: case 3298: case 3302: case 3306: case 3310: case 3314: case 3318: case 3322: case 3326: case 3330: case 3334: case 3338: case 3342: case 3346: case 3350: case 2923: case 2927: case 2931: case 2935: case 2939: case 2943: case 2947: case 2951: case 2955: case 2959: case 2963: case 2967: case 2971: case 2975: case 2979: case 2983: case 2987: case 2991: case 2995: case 2999: case 3003: case 3007: case 3011: case 3015: case 3019: case 3023: case 3027: case 3031: case 3035: case 3039: case 3043: case 3047: case 3051: case 3055: case 3059: case 3063: case 3067: case 3071: case 3075: case 3079: case 3083: case 3087: case 3091: case 3095: case 3099: case 3103: case 3107: case 3111: case 3115: case 3119: case 3123: case 3127: case 3131: case 3135: case 3139: case 3143: case 3147: case 3151: case 3155: case 3159: case 3163: case 3167: case 3171: case 3175: case 3179: case 3183: case 3187: case 3191: case 3195: case 3199: case 3203: case 3207: case 3211: case 3215: case 3219: case 3223: case 3227: case 3231: case 3235: case 3239: case 3243: case 3247: case 3251: case 3255: case 3259: case 3263: case 3267: case 3271: case 3275: case 3279: case 3283: case 3287: case 3291: case 3295: case 3299: case 3303: case 3307: case 3311: case 3315: case 3319: case 3323: case 3327: case 3331: case 3335: case 3339: case 3343: case 3347: case 3351: case 2924: case 2928: case 2932: case 2936: case 2940: case 2944: case 2948: case 2952: case 2956: case 2960: case 2964: case 2968: case 2972: case 2976: case 2980: case 2984: case 2988: case 2992: case 2996: case 3000: case 3004: case 3008: case 3012: case 3016: case 3020: case 3024: case 3028: case 3032: case 3036: case 3040: case 3044: case 3048: case 3052: case 3056: case 3060: case 3064: case 3068: case 3072: case 3076: case 3080: case 3084: case 3088: case 3092: case 3096: case 3100: case 3104: case 3108: case 3112: case 3116: case 3120: case 3124: case 3128: case 3132: case 3136: case 3140: case 3144: case 3148: case 3152: case 3156: case 3160: case 3164: case 3168: case 3172: case 3176: case 3180: case 3184: case 3188: case 3192: case 3196: case 3200: case 3204: case 3208: case 3212: case 3216: case 3220: case 3224: case 3228: case 3232: case 3236: case 3240: case 3244: case 3248: case 3252: case 3256: case 3260: case 3264: case 3268: case 3272: case 3276: case 3280: case 3284: case 3288: case 3292: case 3296: case 3300: case 3304: case 3308: case 3312: case 3316: case 3320: case 3324: case 3328: case 3332: case 3336: case 3340: case 3344: case 3348: case 3352: case 2925: case 2929: case 2933: case 2937: case 2941: case 2945: case 2949: case 2953: case 2957: case 2961: case 2965: case 2969: case 2973: case 2977: case 2981: case 2985: case 2989: case 2993: case 2997: case 3001: case 3005: case 3009: case 3013: case 3017: case 3021: case 3025: case 3029: case 3033: case 3037: case 3041: case 3045: case 3049: case 3053: case 3057: return East::None;
				case 2490: case 2494: case 2498: case 2502: case 2506: case 2510: case 2514: case 2518: case 2522: case 2526: case 2530: case 2534: case 2538: case 2542: case 2546: case 2550: case 2554: case 2558: case 2562: case 2566: case 2570: case 2574: case 2578: case 2582: case 2586: case 2590: case 2594: case 2598: case 2602: case 2606: case 2610: case 2614: case 2618: case 2622: case 2626: case 2630: case 2634: case 2638: case 2642: case 2646: case 2650: case 2654: case 2658: case 2662: case 2666: case 2670: case 2674: case 2678: case 2682: case 2686: case 2690: case 2694: case 2698: case 2702: case 2706: case 2710: case 2714: case 2718: case 2722: case 2726: case 2730: case 2734: case 2738: case 2742: case 2746: case 2750: case 2754: case 2758: case 2762: case 2766: case 2770: case 2774: case 2778: case 2782: case 2786: case 2790: case 2794: case 2798: case 2802: case 2806: case 2810: case 2814: case 2818: case 2822: case 2826: case 2830: case 2834: case 2838: case 2842: case 2846: case 2850: case 2854: case 2858: case 2862: case 2866: case 2870: case 2874: case 2878: case 2882: case 2886: case 2890: case 2894: case 2898: case 2902: case 2906: case 2910: case 2914: case 2918: case 2491: case 2495: case 2499: case 2503: case 2507: case 2511: case 2515: case 2519: case 2523: case 2527: case 2531: case 2535: case 2539: case 2543: case 2547: case 2551: case 2555: case 2559: case 2563: case 2567: case 2571: case 2575: case 2579: case 2583: case 2587: case 2591: case 2595: case 2599: case 2603: case 2607: case 2611: case 2615: case 2619: case 2623: case 2627: case 2631: case 2635: case 2639: case 2643: case 2647: case 2651: case 2655: case 2659: case 2663: case 2667: case 2671: case 2675: case 2679: case 2683: case 2687: case 2691: case 2695: case 2699: case 2703: case 2707: case 2711: case 2715: case 2719: case 2723: case 2727: case 2731: case 2735: case 2739: case 2743: case 2747: case 2751: case 2755: case 2759: case 2763: case 2767: case 2771: case 2775: case 2779: case 2783: case 2787: case 2791: case 2795: case 2799: case 2803: case 2807: case 2811: case 2815: case 2819: case 2823: case 2827: case 2831: case 2835: case 2839: case 2843: case 2847: case 2851: case 2855: case 2859: case 2863: case 2867: case 2871: case 2875: case 2879: case 2883: case 2887: case 2891: case 2895: case 2899: case 2903: case 2907: case 2911: case 2915: case 2919: case 2492: case 2496: case 2500: case 2504: case 2508: case 2512: case 2516: case 2520: case 2524: case 2528: case 2532: case 2536: case 2540: case 2544: case 2548: case 2552: case 2556: case 2560: case 2564: case 2568: case 2572: case 2576: case 2580: case 2584: case 2588: case 2592: case 2596: case 2600: case 2604: case 2608: case 2612: case 2616: case 2620: case 2624: case 2628: case 2632: case 2636: case 2640: case 2644: case 2648: case 2652: case 2656: case 2660: case 2664: case 2668: case 2672: case 2676: case 2680: case 2684: case 2688: case 2692: case 2696: case 2700: case 2704: case 2708: case 2712: case 2716: case 2720: case 2724: case 2728: case 2732: case 2736: case 2740: case 2744: case 2748: case 2752: case 2756: case 2760: case 2764: case 2768: case 2772: case 2776: case 2780: case 2784: case 2788: case 2792: case 2796: case 2800: case 2804: case 2808: case 2812: case 2816: case 2820: case 2824: case 2828: case 2832: case 2836: case 2840: case 2844: case 2848: case 2852: case 2856: case 2860: case 2864: case 2868: case 2872: case 2876: case 2880: case 2884: case 2888: case 2892: case 2896: case 2900: case 2904: case 2908: case 2912: case 2916: case 2920: case 2493: case 2497: case 2501: case 2505: case 2509: case 2513: case 2517: case 2521: case 2525: case 2529: case 2533: case 2537: case 2541: case 2545: case 2549: case 2553: case 2557: case 2561: case 2565: case 2569: case 2573: case 2577: case 2581: case 2585: case 2589: case 2593: case 2597: case 2601: case 2605: case 2609: case 2613: case 2617: case 2621: case 2625: case 2629: case 2633: case 2637: case 2641: case 2645: case 2649: case 2653: case 2657: case 2661: case 2665: case 2669: case 2673: case 2677: case 2681: case 2685: case 2689: case 2693: case 2697: case 2701: case 2705: case 2709: case 2713: case 2717: case 2721: case 2725: case 2729: case 2733: case 2737: case 2741: case 2745: case 2749: case 2753: case 2757: case 2761: case 2765: case 2769: case 2773: case 2777: case 2781: case 2785: case 2789: case 2793: case 2797: case 2801: case 2805: case 2809: case 2813: case 2817: case 2821: case 2825: case 2829: case 2833: case 2837: case 2841: case 2845: case 2849: case 2853: case 2857: case 2861: case 2865: case 2869: case 2873: case 2877: case 2881: case 2885: case 2889: case 2893: case 2897: case 2901: case 2905: case 2909: case 2913: case 2917: case 2921: return East::Side;
				default: return East::Up;
			}
		}
		enum North North(short ID)
		{
			switch (ID)
			{
				case 3213: case 3217: case 3221: case 3225: case 3229: case 3233: case 3237: case 3241: case 3245: case 3249: case 3253: case 3257: case 3261: case 3265: case 3269: case 3273: case 3277: case 3281: case 3285: case 3289: case 3293: case 3297: case 3301: case 3305: case 3309: case 3313: case 3317: case 3321: case 3325: case 3329: case 3333: case 3337: case 3341: case 3345: case 3349: case 3353: case 2346: case 2350: case 2354: case 2358: case 2362: case 2366: case 2370: case 2374: case 2378: case 2382: case 2386: case 2390: case 2394: case 2398: case 2402: case 2406: case 2410: case 2414: case 2418: case 2422: case 2426: case 2430: case 2434: case 2438: case 2442: case 2446: case 2450: case 2454: case 2458: case 2462: case 2466: case 2470: case 2474: case 2478: case 2482: case 2486: case 2778: case 2782: case 2786: case 2790: case 2794: case 2798: case 2802: case 2806: case 2810: case 2814: case 2818: case 2822: case 2826: case 2830: case 2834: case 2838: case 2842: case 2846: case 2850: case 2854: case 2858: case 2862: case 2866: case 2870: case 2874: case 2878: case 2882: case 2886: case 2890: case 2894: case 2898: case 2902: case 2906: case 2910: case 2914: case 2918: case 3210: case 3214: case 3218: case 3222: case 3226: case 3230: case 3234: case 3238: case 3242: case 3246: case 3250: case 3254: case 3258: case 3262: case 3266: case 3270: case 3274: case 3278: case 3282: case 3286: case 3290: case 3294: case 3298: case 3302: case 3306: case 3310: case 3314: case 3318: case 3322: case 3326: case 3330: case 3334: case 3338: case 3342: case 3346: case 3350: case 2347: case 2351: case 2355: case 2359: case 2363: case 2367: case 2371: case 2375: case 2379: case 2383: case 2387: case 2391: case 2395: case 2399: case 2403: case 2407: case 2411: case 2415: case 2419: case 2423: case 2427: case 2431: case 2435: case 2439: case 2443: case 2447: case 2451: case 2455: case 2459: case 2463: case 2467: case 2471: case 2475: case 2479: case 2483: case 2487: case 2779: case 2783: case 2787: case 2791: case 2795: case 2799: case 2803: case 2807: case 2811: case 2815: case 2819: case 2823: case 2827: case 2831: case 2835: case 2839: case 2843: case 2847: case 2851: case 2855: case 2859: case 2863: case 2867: case 2871: case 2875: case 2879: case 2883: case 2887: case 2891: case 2895: case 2899: case 2903: case 2907: case 2911: case 2915: case 2919: case 3211: case 3215: case 3219: case 3223: case 3227: case 3231: case 3235: case 3239: case 3243: case 3247: case 3251: case 3255: case 3259: case 3263: case 3267: case 3271: case 3275: case 3279: case 3283: case 3287: case 3291: case 3295: case 3299: case 3303: case 3307: case 3311: case 3315: case 3319: case 3323: case 3327: case 3331: case 3335: case 3339: case 3343: case 3347: case 3351: case 2348: case 2352: case 2356: case 2360: case 2364: case 2368: case 2372: case 2376: case 2380: case 2384: case 2388: case 2392: case 2396: case 2400: case 2404: case 2408: case 2412: case 2416: case 2420: case 2424: case 2428: case 2432: case 2436: case 2440: case 2444: case 2448: case 2452: case 2456: case 2460: case 2464: case 2468: case 2472: case 2476: case 2480: case 2484: case 2488: case 2780: case 2784: case 2788: case 2792: case 2796: case 2800: case 2804: case 2808: case 2812: case 2816: case 2820: case 2824: case 2828: case 2832: case 2836: case 2840: case 2844: case 2848: case 2852: case 2856: case 2860: case 2864: case 2868: case 2872: case 2876: case 2880: case 2884: case 2888: case 2892: case 2896: case 2900: case 2904: case 2908: case 2912: case 2916: case 2920: case 3212: case 3216: case 3220: case 3224: case 3228: case 3232: case 3236: case 3240: case 3244: case 3248: case 3252: case 3256: case 3260: case 3264: case 3268: case 3272: case 3276: case 3280: case 3284: case 3288: case 3292: case 3296: case 3300: case 3304: case 3308: case 3312: case 3316: case 3320: case 3324: case 3328: case 3332: case 3336: case 3340: case 3344: case 3348: case 3352: case 2349: case 2353: case 2357: case 2361: case 2365: case 2369: case 2373: case 2377: case 2381: case 2385: case 2389: case 2393: case 2397: case 2401: case 2405: case 2409: case 2413: case 2417: case 2421: case 2425: case 2429: case 2433: case 2437: case 2441: case 2445: case 2449: case 2453: case 2457: case 2461: case 2465: case 2469: case 2473: case 2477: case 2481: case 2485: case 2489: case 2781: case 2785: case 2789: case 2793: case 2797: case 2801: case 2805: case 2809: case 2813: case 2817: case 2821: case 2825: case 2829: case 2833: case 2837: case 2841: case 2845: case 2849: case 2853: case 2857: case 2861: case 2865: case 2869: case 2873: case 2877: case 2881: case 2885: case 2889: case 2893: case 2897: case 2901: case 2905: case 2909: case 2913: case 2917: case 2921: return North::None;
				case 3069: case 3073: case 3077: case 3081: case 3085: case 3089: case 3093: case 3097: case 3101: case 3105: case 3109: case 3113: case 3117: case 3121: case 3125: case 3129: case 3133: case 3137: case 3141: case 3145: case 3149: case 3153: case 3157: case 3161: case 3165: case 3169: case 3173: case 3177: case 3181: case 3185: case 3189: case 3193: case 3197: case 3201: case 3205: case 3209: case 2202: case 2206: case 2210: case 2214: case 2218: case 2222: case 2226: case 2230: case 2234: case 2238: case 2242: case 2246: case 2250: case 2254: case 2258: case 2262: case 2266: case 2270: case 2274: case 2278: case 2282: case 2286: case 2290: case 2294: case 2298: case 2302: case 2306: case 2310: case 2314: case 2318: case 2322: case 2326: case 2330: case 2334: case 2338: case 2342: case 2634: case 2638: case 2642: case 2646: case 2650: case 2654: case 2658: case 2662: case 2666: case 2670: case 2674: case 2678: case 2682: case 2686: case 2690: case 2694: case 2698: case 2702: case 2706: case 2710: case 2714: case 2718: case 2722: case 2726: case 2730: case 2734: case 2738: case 2742: case 2746: case 2750: case 2754: case 2758: case 2762: case 2766: case 2770: case 2774: case 3066: case 3070: case 3074: case 3078: case 3082: case 3086: case 3090: case 3094: case 3098: case 3102: case 3106: case 3110: case 3114: case 3118: case 3122: case 3126: case 3130: case 3134: case 3138: case 3142: case 3146: case 3150: case 3154: case 3158: case 3162: case 3166: case 3170: case 3174: case 3178: case 3182: case 3186: case 3190: case 3194: case 3198: case 3202: case 3206: case 2203: case 2207: case 2211: case 2215: case 2219: case 2223: case 2227: case 2231: case 2235: case 2239: case 2243: case 2247: case 2251: case 2255: case 2259: case 2263: case 2267: case 2271: case 2275: case 2279: case 2283: case 2287: case 2291: case 2295: case 2299: case 2303: case 2307: case 2311: case 2315: case 2319: case 2323: case 2327: case 2331: case 2335: case 2339: case 2343: case 2635: case 2639: case 2643: case 2647: case 2651: case 2655: case 2659: case 2663: case 2667: case 2671: case 2675: case 2679: case 2683: case 2687: case 2691: case 2695: case 2699: case 2703: case 2707: case 2711: case 2715: case 2719: case 2723: case 2727: case 2731: case 2735: case 2739: case 2743: case 2747: case 2751: case 2755: case 2759: case 2763: case 2767: case 2771: case 2775: case 3067: case 3071: case 3075: case 3079: case 3083: case 3087: case 3091: case 3095: case 3099: case 3103: case 3107: case 3111: case 3115: case 3119: case 3123: case 3127: case 3131: case 3135: case 3139: case 3143: case 3147: case 3151: case 3155: case 3159: case 3163: case 3167: case 3171: case 3175: case 3179: case 3183: case 3187: case 3191: case 3195: case 3199: case 3203: case 3207: case 2204: case 2208: case 2212: case 2216: case 2220: case 2224: case 2228: case 2232: case 2236: case 2240: case 2244: case 2248: case 2252: case 2256: case 2260: case 2264: case 2268: case 2272: case 2276: case 2280: case 2284: case 2288: case 2292: case 2296: case 2300: case 2304: case 2308: case 2312: case 2316: case 2320: case 2324: case 2328: case 2332: case 2336: case 2340: case 2344: case 2636: case 2640: case 2644: case 2648: case 2652: case 2656: case 2660: case 2664: case 2668: case 2672: case 2676: case 2680: case 2684: case 2688: case 2692: case 2696: case 2700: case 2704: case 2708: case 2712: case 2716: case 2720: case 2724: case 2728: case 2732: case 2736: case 2740: case 2744: case 2748: case 2752: case 2756: case 2760: case 2764: case 2768: case 2772: case 2776: case 3068: case 3072: case 3076: case 3080: case 3084: case 3088: case 3092: case 3096: case 3100: case 3104: case 3108: case 3112: case 3116: case 3120: case 3124: case 3128: case 3132: case 3136: case 3140: case 3144: case 3148: case 3152: case 3156: case 3160: case 3164: case 3168: case 3172: case 3176: case 3180: case 3184: case 3188: case 3192: case 3196: case 3200: case 3204: case 3208: case 2205: case 2209: case 2213: case 2217: case 2221: case 2225: case 2229: case 2233: case 2237: case 2241: case 2245: case 2249: case 2253: case 2257: case 2261: case 2265: case 2269: case 2273: case 2277: case 2281: case 2285: case 2289: case 2293: case 2297: case 2301: case 2305: case 2309: case 2313: case 2317: case 2321: case 2325: case 2329: case 2333: case 2337: case 2341: case 2345: case 2637: case 2641: case 2645: case 2649: case 2653: case 2657: case 2661: case 2665: case 2669: case 2673: case 2677: case 2681: case 2685: case 2689: case 2693: case 2697: case 2701: case 2705: case 2709: case 2713: case 2717: case 2721: case 2725: case 2729: case 2733: case 2737: case 2741: case 2745: case 2749: case 2753: case 2757: case 2761: case 2765: case 2769: case 2773: case 2777: return North::Side;
				default: return North::Up;
			}
		}
		unsigned char Power(short ID)
		{
			switch (ID)
			{
				case 3069: case 3073: case 3213: case 3217: case 2058: case 2062: case 2066: case 2202: case 2206: case 2210: case 2346: case 2350: case 2354: case 2490: case 2494: case 2498: case 2634: case 2638: case 2642: case 2778: case 2782: case 2786: case 2922: case 2926: case 2930: case 3066: case 3070: case 3074: case 3210: case 3214: case 3218: case 2059: case 2063: case 2203: case 2207: case 2347: case 2351: case 2491: case 2495: case 2635: case 2639: case 2779: case 2783: case 2923: case 2927: case 3067: case 3071: case 3211: case 3215: case 2060: case 2064: case 2204: case 2208: case 2348: case 2352: case 2492: case 2496: case 2636: case 2640: case 2780: case 2784: case 2924: case 2928: case 3068: case 3072: case 3212: case 3216: case 2061: case 2065: case 2205: case 2209: case 2349: case 2353: case 2493: case 2497: case 2637: case 2641: case 2781: case 2785: case 2925: case 2929: return 0;
				case 3077: case 3081: case 3221: case 3225: case 2070: case 2074: case 2214: case 2218: case 2358: case 2362: case 2502: case 2506: case 2646: case 2650: case 2790: case 2794: case 2934: case 2938: case 3078: case 3082: case 3222: case 3226: case 2067: case 2071: case 2075: case 2211: case 2215: case 2219: case 2355: case 2359: case 2363: case 2499: case 2503: case 2507: case 2643: case 2647: case 2651: case 2787: case 2791: case 2795: case 2931: case 2935: case 2939: case 3075: case 3079: case 3083: case 3219: case 3223: case 3227: case 2068: case 2072: case 2212: case 2216: case 2356: case 2360: case 2500: case 2504: case 2644: case 2648: case 2788: case 2792: case 2932: case 2936: case 3076: case 3080: case 3220: case 3224: case 2069: case 2073: case 2213: case 2217: case 2357: case 2361: case 2501: case 2505: case 2645: case 2649: case 2789: case 2793: case 2933: case 2937: return 1;
				case 3157: case 3161: case 3301: case 3305: case 2150: case 2154: case 2294: case 2298: case 2438: case 2442: case 2582: case 2586: case 2726: case 2730: case 2870: case 2874: case 3014: case 3018: case 3158: case 3162: case 3302: case 3306: case 2151: case 2155: case 2295: case 2299: case 2439: case 2443: case 2583: case 2587: case 2727: case 2731: case 2871: case 2875: case 3015: case 3019: case 3159: case 3163: case 3303: case 3307: case 2148: case 2152: case 2156: case 2292: case 2296: case 2300: case 2436: case 2440: case 2444: case 2580: case 2584: case 2588: case 2724: case 2728: case 2732: case 2868: case 2872: case 2876: case 3012: case 3016: case 3020: case 3156: case 3160: case 3164: case 3300: case 3304: case 3308: case 2149: case 2153: case 2293: case 2297: case 2437: case 2441: case 2581: case 2585: case 2725: case 2729: case 2869: case 2873: case 3013: case 3017: return 10;
				case 3165: case 3169: case 3173: case 3309: case 3313: case 3317: case 2158: case 2162: case 2302: case 2306: case 2446: case 2450: case 2590: case 2594: case 2734: case 2738: case 2878: case 2882: case 3022: case 3026: case 3166: case 3170: case 3310: case 3314: case 2159: case 2163: case 2303: case 2307: case 2447: case 2451: case 2591: case 2595: case 2735: case 2739: case 2879: case 2883: case 3023: case 3027: case 3167: case 3171: case 3311: case 3315: case 2160: case 2164: case 2304: case 2308: case 2448: case 2452: case 2592: case 2596: case 2736: case 2740: case 2880: case 2884: case 3024: case 3028: case 3168: case 3172: case 3312: case 3316: case 2157: case 2161: case 2165: case 2301: case 2305: case 2309: case 2445: case 2449: case 2453: case 2589: case 2593: case 2597: case 2733: case 2737: case 2741: case 2877: case 2881: case 2885: case 3021: case 3025: case 3029: return 11;
				case 3177: case 3181: case 3321: case 3325: case 2166: case 2170: case 2174: case 2310: case 2314: case 2318: case 2454: case 2458: case 2462: case 2598: case 2602: case 2606: case 2742: case 2746: case 2750: case 2886: case 2890: case 2894: case 3030: case 3034: case 3038: case 3174: case 3178: case 3182: case 3318: case 3322: case 3326: case 2167: case 2171: case 2311: case 2315: case 2455: case 2459: case 2599: case 2603: case 2743: case 2747: case 2887: case 2891: case 3031: case 3035: case 3175: case 3179: case 3319: case 3323: case 2168: case 2172: case 2312: case 2316: case 2456: case 2460: case 2600: case 2604: case 2744: case 2748: case 2888: case 2892: case 3032: case 3036: case 3176: case 3180: case 3320: case 3324: case 2169: case 2173: case 2313: case 2317: case 2457: case 2461: case 2601: case 2605: case 2745: case 2749: case 2889: case 2893: case 3033: case 3037: return 12;
				case 3185: case 3189: case 3329: case 3333: case 2178: case 2182: case 2322: case 2326: case 2466: case 2470: case 2610: case 2614: case 2754: case 2758: case 2898: case 2902: case 3042: case 3046: case 3186: case 3190: case 3330: case 3334: case 2175: case 2179: case 2183: case 2319: case 2323: case 2327: case 2463: case 2467: case 2471: case 2607: case 2611: case 2615: case 2751: case 2755: case 2759: case 2895: case 2899: case 2903: case 3039: case 3043: case 3047: case 3183: case 3187: case 3191: case 3327: case 3331: case 3335: case 2176: case 2180: case 2320: case 2324: case 2464: case 2468: case 2608: case 2612: case 2752: case 2756: case 2896: case 2900: case 3040: case 3044: case 3184: case 3188: case 3328: case 3332: case 2177: case 2181: case 2321: case 2325: case 2465: case 2469: case 2609: case 2613: case 2753: case 2757: case 2897: case 2901: case 3041: case 3045: return 13;
				case 3193: case 3197: case 3337: case 3341: case 2186: case 2190: case 2330: case 2334: case 2474: case 2478: case 2618: case 2622: case 2762: case 2766: case 2906: case 2910: case 3050: case 3054: case 3194: case 3198: case 3338: case 3342: case 2187: case 2191: case 2331: case 2335: case 2475: case 2479: case 2619: case 2623: case 2763: case 2767: case 2907: case 2911: case 3051: case 3055: case 3195: case 3199: case 3339: case 3343: case 2184: case 2188: case 2192: case 2328: case 2332: case 2336: case 2472: case 2476: case 2480: case 2616: case 2620: case 2624: case 2760: case 2764: case 2768: case 2904: case 2908: case 2912: case 3048: case 3052: case 3056: case 3192: case 3196: case 3200: case 3336: case 3340: case 3344: case 2185: case 2189: case 2329: case 2333: case 2473: case 2477: case 2617: case 2621: case 2761: case 2765: case 2905: case 2909: case 3049: case 3053: return 14;
				case 3061: case 3065: case 3201: case 3205: case 3209: case 3345: case 3349: case 3353: case 2194: case 2198: case 2338: case 2342: case 2482: case 2486: case 2626: case 2630: case 2770: case 2774: case 2914: case 2918: case 3058: case 3062: case 3202: case 3206: case 3346: case 3350: case 2195: case 2199: case 2339: case 2343: case 2483: case 2487: case 2627: case 2631: case 2771: case 2775: case 2915: case 2919: case 3059: case 3063: case 3203: case 3207: case 3347: case 3351: case 2196: case 2200: case 2340: case 2344: case 2484: case 2488: case 2628: case 2632: case 2772: case 2776: case 2916: case 2920: case 3060: case 3064: case 3204: case 3208: case 3348: case 3352: case 2193: case 2197: case 2201: case 2337: case 2341: case 2345: case 2481: case 2485: case 2489: case 2625: case 2629: case 2633: case 2769: case 2773: case 2777: case 2913: case 2917: case 2921: case 3057: return 15;
				case 3085: case 3089: case 3229: case 3233: case 2078: case 2082: case 2222: case 2226: case 2366: case 2370: case 2510: case 2514: case 2654: case 2658: case 2798: case 2802: case 2942: case 2946: case 3086: case 3090: case 3230: case 3234: case 2079: case 2083: case 2223: case 2227: case 2367: case 2371: case 2511: case 2515: case 2655: case 2659: case 2799: case 2803: case 2943: case 2947: case 3087: case 3091: case 3231: case 3235: case 2076: case 2080: case 2084: case 2220: case 2224: case 2228: case 2364: case 2368: case 2372: case 2508: case 2512: case 2516: case 2652: case 2656: case 2660: case 2796: case 2800: case 2804: case 2940: case 2944: case 2948: case 3084: case 3088: case 3092: case 3228: case 3232: case 3236: case 2077: case 2081: case 2221: case 2225: case 2365: case 2369: case 2509: case 2513: case 2653: case 2657: case 2797: case 2801: case 2941: case 2945: return 2;
				case 3093: case 3097: case 3101: case 3237: case 3241: case 3245: case 2086: case 2090: case 2230: case 2234: case 2374: case 2378: case 2518: case 2522: case 2662: case 2666: case 2806: case 2810: case 2950: case 2954: case 3094: case 3098: case 3238: case 3242: case 2087: case 2091: case 2231: case 2235: case 2375: case 2379: case 2519: case 2523: case 2663: case 2667: case 2807: case 2811: case 2951: case 2955: case 3095: case 3099: case 3239: case 3243: case 2088: case 2092: case 2232: case 2236: case 2376: case 2380: case 2520: case 2524: case 2664: case 2668: case 2808: case 2812: case 2952: case 2956: case 3096: case 3100: case 3240: case 3244: case 2085: case 2089: case 2093: case 2229: case 2233: case 2237: case 2373: case 2377: case 2381: case 2517: case 2521: case 2525: case 2661: case 2665: case 2669: case 2805: case 2809: case 2813: case 2949: case 2953: case 2957: return 3;
				case 3105: case 3109: case 3249: case 3253: case 2094: case 2098: case 2102: case 2238: case 2242: case 2246: case 2382: case 2386: case 2390: case 2526: case 2530: case 2534: case 2670: case 2674: case 2678: case 2814: case 2818: case 2822: case 2958: case 2962: case 2966: case 3102: case 3106: case 3110: case 3246: case 3250: case 3254: case 2095: case 2099: case 2239: case 2243: case 2383: case 2387: case 2527: case 2531: case 2671: case 2675: case 2815: case 2819: case 2959: case 2963: case 3103: case 3107: case 3247: case 3251: case 2096: case 2100: case 2240: case 2244: case 2384: case 2388: case 2528: case 2532: case 2672: case 2676: case 2816: case 2820: case 2960: case 2964: case 3104: case 3108: case 3248: case 3252: case 2097: case 2101: case 2241: case 2245: case 2385: case 2389: case 2529: case 2533: case 2673: case 2677: case 2817: case 2821: case 2961: case 2965: return 4;
				case 3113: case 3117: case 3257: case 3261: case 2106: case 2110: case 2250: case 2254: case 2394: case 2398: case 2538: case 2542: case 2682: case 2686: case 2826: case 2830: case 2970: case 2974: case 3114: case 3118: case 3258: case 3262: case 2103: case 2107: case 2111: case 2247: case 2251: case 2255: case 2391: case 2395: case 2399: case 2535: case 2539: case 2543: case 2679: case 2683: case 2687: case 2823: case 2827: case 2831: case 2967: case 2971: case 2975: case 3111: case 3115: case 3119: case 3255: case 3259: case 3263: case 2104: case 2108: case 2248: case 2252: case 2392: case 2396: case 2536: case 2540: case 2680: case 2684: case 2824: case 2828: case 2968: case 2972: case 3112: case 3116: case 3256: case 3260: case 2105: case 2109: case 2249: case 2253: case 2393: case 2397: case 2537: case 2541: case 2681: case 2685: case 2825: case 2829: case 2969: case 2973: return 5;
				case 3121: case 3125: case 3265: case 3269: case 2114: case 2118: case 2258: case 2262: case 2402: case 2406: case 2546: case 2550: case 2690: case 2694: case 2834: case 2838: case 2978: case 2982: case 3122: case 3126: case 3266: case 3270: case 2115: case 2119: case 2259: case 2263: case 2403: case 2407: case 2547: case 2551: case 2691: case 2695: case 2835: case 2839: case 2979: case 2983: case 3123: case 3127: case 3267: case 3271: case 2112: case 2116: case 2120: case 2256: case 2260: case 2264: case 2400: case 2404: case 2408: case 2544: case 2548: case 2552: case 2688: case 2692: case 2696: case 2832: case 2836: case 2840: case 2976: case 2980: case 2984: case 3120: case 3124: case 3128: case 3264: case 3268: case 3272: case 2113: case 2117: case 2257: case 2261: case 2401: case 2405: case 2545: case 2549: case 2689: case 2693: case 2833: case 2837: case 2977: case 2981: return 6;
				case 3129: case 3133: case 3137: case 3273: case 3277: case 3281: case 2122: case 2126: case 2266: case 2270: case 2410: case 2414: case 2554: case 2558: case 2698: case 2702: case 2842: case 2846: case 2986: case 2990: case 3130: case 3134: case 3274: case 3278: case 2123: case 2127: case 2267: case 2271: case 2411: case 2415: case 2555: case 2559: case 2699: case 2703: case 2843: case 2847: case 2987: case 2991: case 3131: case 3135: case 3275: case 3279: case 2124: case 2128: case 2268: case 2272: case 2412: case 2416: case 2556: case 2560: case 2700: case 2704: case 2844: case 2848: case 2988: case 2992: case 3132: case 3136: case 3276: case 3280: case 2121: case 2125: case 2129: case 2265: case 2269: case 2273: case 2409: case 2413: case 2417: case 2553: case 2557: case 2561: case 2697: case 2701: case 2705: case 2841: case 2845: case 2849: case 2985: case 2989: case 2993: return 7;
				case 3141: case 3145: case 3285: case 3289: case 2130: case 2134: case 2138: case 2274: case 2278: case 2282: case 2418: case 2422: case 2426: case 2562: case 2566: case 2570: case 2706: case 2710: case 2714: case 2850: case 2854: case 2858: case 2994: case 2998: case 3002: case 3138: case 3142: case 3146: case 3282: case 3286: case 3290: case 2131: case 2135: case 2275: case 2279: case 2419: case 2423: case 2563: case 2567: case 2707: case 2711: case 2851: case 2855: case 2995: case 2999: case 3139: case 3143: case 3283: case 3287: case 2132: case 2136: case 2276: case 2280: case 2420: case 2424: case 2564: case 2568: case 2708: case 2712: case 2852: case 2856: case 2996: case 3000: case 3140: case 3144: case 3284: case 3288: case 2133: case 2137: case 2277: case 2281: case 2421: case 2425: case 2565: case 2569: case 2709: case 2713: case 2853: case 2857: case 2997: case 3001: return 8;
				default: return 9;
			}
		}
		enum South South(short ID)
		{
			switch (ID)
			{
				case 3065: case 3073: case 3081: case 3101: case 3109: case 3117: case 3137: case 3145: case 3153: case 3173: case 3181: case 3189: case 3209: case 3217: case 3225: case 3245: case 3253: case 3261: case 3281: case 3289: case 3297: case 3317: case 3325: case 3333: case 3353: case 2066: case 2074: case 2082: case 2102: case 2110: case 2118: case 2138: case 2146: case 2154: case 2174: case 2182: case 2190: case 2210: case 2218: case 2226: case 2246: case 2254: case 2262: case 2282: case 2290: case 2298: case 2318: case 2326: case 2334: case 2354: case 2362: case 2370: case 2390: case 2398: case 2406: case 2426: case 2434: case 2442: case 2462: case 2470: case 2478: case 2498: case 2506: case 2514: case 2534: case 2542: case 2550: case 2570: case 2578: case 2586: case 2606: case 2614: case 2622: case 2642: case 2650: case 2658: case 2678: case 2686: case 2694: case 2714: case 2722: case 2730: case 2750: case 2758: case 2766: case 2786: case 2794: case 2802: case 2822: case 2830: case 2838: case 2858: case 2866: case 2874: case 2894: case 2902: case 2910: case 2930: case 2938: case 2946: case 2966: case 2974: case 2982: case 3002: case 3010: case 3018: case 3038: case 3046: case 3054: case 3074: case 3082: case 3090: case 3110: case 3118: case 3126: case 3146: case 3154: case 3162: case 3182: case 3190: case 3198: case 3218: case 3226: case 3234: case 3254: case 3262: case 3270: case 3290: case 3298: case 3306: case 3326: case 3334: case 3342: case 2075: case 2083: case 2091: case 2111: case 2119: case 2127: case 2147: case 2155: case 2163: case 2183: case 2191: case 2199: case 2219: case 2227: case 2235: case 2255: case 2263: case 2271: case 2291: case 2299: case 2307: case 2327: case 2335: case 2343: case 2363: case 2371: case 2379: case 2399: case 2407: case 2415: case 2435: case 2443: case 2451: case 2471: case 2479: case 2487: case 2507: case 2515: case 2523: case 2543: case 2551: case 2559: case 2579: case 2587: case 2595: case 2615: case 2623: case 2631: case 2651: case 2659: case 2667: case 2687: case 2695: case 2703: case 2723: case 2731: case 2739: case 2759: case 2767: case 2775: case 2795: case 2803: case 2811: case 2831: case 2839: case 2847: case 2867: case 2875: case 2883: case 2903: case 2911: case 2919: case 2939: case 2947: case 2955: case 2975: case 2983: case 2991: case 3011: case 3019: case 3027: case 3047: case 3055: case 3063: case 3083: case 3091: case 3099: case 3119: case 3127: case 3135: case 3155: case 3163: case 3171: case 3191: case 3199: case 3207: case 3227: case 3235: case 3243: case 3263: case 3271: case 3279: case 3299: case 3307: case 3315: case 3335: case 3343: case 3351: case 2064: case 2084: case 2092: case 2100: case 2120: case 2128: case 2136: case 2156: case 2164: case 2172: case 2192: case 2200: case 2208: case 2228: case 2236: case 2244: case 2264: case 2272: case 2280: case 2300: case 2308: case 2316: case 2336: case 2344: case 2352: case 2372: case 2380: case 2388: case 2408: case 2416: case 2424: case 2444: case 2452: case 2460: case 2480: case 2488: case 2496: case 2516: case 2524: case 2532: case 2552: case 2560: case 2568: case 2588: case 2596: case 2604: case 2624: case 2632: case 2640: case 2660: case 2668: case 2676: case 2696: case 2704: case 2712: case 2732: case 2740: case 2748: case 2768: case 2776: case 2784: case 2804: case 2812: case 2820: case 2840: case 2848: case 2856: case 2876: case 2884: case 2892: case 2912: case 2920: case 2928: case 2948: case 2956: case 2964: case 2984: case 2992: case 3000: case 3020: case 3028: case 3036: case 3056: case 3064: case 3072: case 3092: case 3100: case 3108: case 3128: case 3136: case 3144: case 3164: case 3172: case 3180: case 3200: case 3208: case 3216: case 3236: case 3244: case 3252: case 3272: case 3280: case 3288: case 3308: case 3316: case 3324: case 3344: case 3352: case 2065: case 2073: case 2093: case 2101: case 2109: case 2129: case 2137: case 2145: case 2165: case 2173: case 2181: case 2201: case 2209: case 2217: case 2237: case 2245: case 2253: case 2273: case 2281: case 2289: case 2309: case 2317: case 2325: case 2345: case 2353: case 2361: case 2381: case 2389: case 2397: case 2417: case 2425: case 2433: case 2453: case 2461: case 2469: case 2489: case 2497: case 2505: case 2525: case 2533: case 2541: case 2561: case 2569: case 2577: case 2597: case 2605: case 2613: case 2633: case 2641: case 2649: case 2669: case 2677: case 2685: case 2705: case 2713: case 2721: case 2741: case 2749: case 2757: case 2777: case 2785: case 2793: case 2813: case 2821: case 2829: case 2849: case 2857: case 2865: case 2885: case 2893: case 2901: case 2921: case 2929: case 2937: case 2957: case 2965: case 2973: case 2993: case 3001: case 3009: case 3029: case 3037: case 3045: return South::None;
				case 3061: case 3069: case 3089: case 3097: case 3105: case 3125: case 3133: case 3141: case 3161: case 3169: case 3177: case 3197: case 3205: case 3213: case 3233: case 3241: case 3249: case 3269: case 3277: case 3285: case 3305: case 3313: case 3321: case 3341: case 3349: case 2062: case 2070: case 2090: case 2098: case 2106: case 2126: case 2134: case 2142: case 2162: case 2170: case 2178: case 2198: case 2206: case 2214: case 2234: case 2242: case 2250: case 2270: case 2278: case 2286: case 2306: case 2314: case 2322: case 2342: case 2350: case 2358: case 2378: case 2386: case 2394: case 2414: case 2422: case 2430: case 2450: case 2458: case 2466: case 2486: case 2494: case 2502: case 2522: case 2530: case 2538: case 2558: case 2566: case 2574: case 2594: case 2602: case 2610: case 2630: case 2638: case 2646: case 2666: case 2674: case 2682: case 2702: case 2710: case 2718: case 2738: case 2746: case 2754: case 2774: case 2782: case 2790: case 2810: case 2818: case 2826: case 2846: case 2854: case 2862: case 2882: case 2890: case 2898: case 2918: case 2926: case 2934: case 2954: case 2962: case 2970: case 2990: case 2998: case 3006: case 3026: case 3034: case 3042: case 3062: case 3070: case 3078: case 3098: case 3106: case 3114: case 3134: case 3142: case 3150: case 3170: case 3178: case 3186: case 3206: case 3214: case 3222: case 3242: case 3250: case 3258: case 3278: case 3286: case 3294: case 3314: case 3322: case 3330: case 3350: case 2063: case 2071: case 2079: case 2099: case 2107: case 2115: case 2135: case 2143: case 2151: case 2171: case 2179: case 2187: case 2207: case 2215: case 2223: case 2243: case 2251: case 2259: case 2279: case 2287: case 2295: case 2315: case 2323: case 2331: case 2351: case 2359: case 2367: case 2387: case 2395: case 2403: case 2423: case 2431: case 2439: case 2459: case 2467: case 2475: case 2495: case 2503: case 2511: case 2531: case 2539: case 2547: case 2567: case 2575: case 2583: case 2603: case 2611: case 2619: case 2639: case 2647: case 2655: case 2675: case 2683: case 2691: case 2711: case 2719: case 2727: case 2747: case 2755: case 2763: case 2783: case 2791: case 2799: case 2819: case 2827: case 2835: case 2855: case 2863: case 2871: case 2891: case 2899: case 2907: case 2927: case 2935: case 2943: case 2963: case 2971: case 2979: case 2999: case 3007: case 3015: case 3035: case 3043: case 3051: case 3071: case 3079: case 3087: case 3107: case 3115: case 3123: case 3143: case 3151: case 3159: case 3179: case 3187: case 3195: case 3215: case 3223: case 3231: case 3251: case 3259: case 3267: case 3287: case 3295: case 3303: case 3323: case 3331: case 3339: case 2072: case 2080: case 2088: case 2108: case 2116: case 2124: case 2144: case 2152: case 2160: case 2180: case 2188: case 2196: case 2216: case 2224: case 2232: case 2252: case 2260: case 2268: case 2288: case 2296: case 2304: case 2324: case 2332: case 2340: case 2360: case 2368: case 2376: case 2396: case 2404: case 2412: case 2432: case 2440: case 2448: case 2468: case 2476: case 2484: case 2504: case 2512: case 2520: case 2540: case 2548: case 2556: case 2576: case 2584: case 2592: case 2612: case 2620: case 2628: case 2648: case 2656: case 2664: case 2684: case 2692: case 2700: case 2720: case 2728: case 2736: case 2756: case 2764: case 2772: case 2792: case 2800: case 2808: case 2828: case 2836: case 2844: case 2864: case 2872: case 2880: case 2900: case 2908: case 2916: case 2936: case 2944: case 2952: case 2972: case 2980: case 2988: case 3008: case 3016: case 3024: case 3044: case 3052: case 3060: case 3080: case 3088: case 3096: case 3116: case 3124: case 3132: case 3152: case 3160: case 3168: case 3188: case 3196: case 3204: case 3224: case 3232: case 3240: case 3260: case 3268: case 3276: case 3296: case 3304: case 3312: case 3332: case 3340: case 3348: case 2061: case 2081: case 2089: case 2097: case 2117: case 2125: case 2133: case 2153: case 2161: case 2169: case 2189: case 2197: case 2205: case 2225: case 2233: case 2241: case 2261: case 2269: case 2277: case 2297: case 2305: case 2313: case 2333: case 2341: case 2349: case 2369: case 2377: case 2385: case 2405: case 2413: case 2421: case 2441: case 2449: case 2457: case 2477: case 2485: case 2493: case 2513: case 2521: case 2529: case 2549: case 2557: case 2565: case 2585: case 2593: case 2601: case 2621: case 2629: case 2637: case 2657: case 2665: case 2673: case 2693: case 2701: case 2709: case 2729: case 2737: case 2745: case 2765: case 2773: case 2781: case 2801: case 2809: case 2817: case 2837: case 2845: case 2853: case 2873: case 2881: case 2889: case 2909: case 2917: case 2925: case 2945: case 2953: case 2961: case 2981: case 2989: case 2997: case 3017: case 3025: case 3033: case 3053: return South::Side;
				default: return South::Up;
			}
		}
		enum West West(short ID)
		{
			switch (ID)
			{
				case 3065: case 3077: case 3089: case 3101: case 3113: case 3125: case 3137: case 3149: case 3161: case 3173: case 3185: case 3197: case 3209: case 3221: case 3233: case 3245: case 3257: case 3269: case 3281: case 3293: case 3305: case 3317: case 3329: case 3341: case 3353: case 2066: case 2078: case 2090: case 2102: case 2114: case 2126: case 2138: case 2150: case 2162: case 2174: case 2186: case 2198: case 2210: case 2222: case 2234: case 2246: case 2258: case 2270: case 2282: case 2294: case 2306: case 2318: case 2330: case 2342: case 2354: case 2366: case 2378: case 2390: case 2402: case 2414: case 2426: case 2438: case 2450: case 2462: case 2474: case 2486: case 2498: case 2510: case 2522: case 2534: case 2546: case 2558: case 2570: case 2582: case 2594: case 2606: case 2618: case 2630: case 2642: case 2654: case 2666: case 2678: case 2690: case 2702: case 2714: case 2726: case 2738: case 2750: case 2762: case 2774: case 2786: case 2798: case 2810: case 2822: case 2834: case 2846: case 2858: case 2870: case 2882: case 2894: case 2906: case 2918: case 2930: case 2942: case 2954: case 2966: case 2978: case 2990: case 3002: case 3014: case 3026: case 3038: case 3050: case 3062: case 3074: case 3086: case 3098: case 3110: case 3122: case 3134: case 3146: case 3158: case 3170: case 3182: case 3194: case 3206: case 3218: case 3230: case 3242: case 3254: case 3266: case 3278: case 3290: case 3302: case 3314: case 3326: case 3338: case 3350: case 2063: case 2075: case 2087: case 2099: case 2111: case 2123: case 2135: case 2147: case 2159: case 2171: case 2183: case 2195: case 2207: case 2219: case 2231: case 2243: case 2255: case 2267: case 2279: case 2291: case 2303: case 2315: case 2327: case 2339: case 2351: case 2363: case 2375: case 2387: case 2399: case 2411: case 2423: case 2435: case 2447: case 2459: case 2471: case 2483: case 2495: case 2507: case 2519: case 2531: case 2543: case 2555: case 2567: case 2579: case 2591: case 2603: case 2615: case 2627: case 2639: case 2651: case 2663: case 2675: case 2687: case 2699: case 2711: case 2723: case 2735: case 2747: case 2759: case 2771: case 2783: case 2795: case 2807: case 2819: case 2831: case 2843: case 2855: case 2867: case 2879: case 2891: case 2903: case 2915: case 2927: case 2939: case 2951: case 2963: case 2975: case 2987: case 2999: case 3011: case 3023: case 3035: case 3047: case 3059: case 3071: case 3083: case 3095: case 3107: case 3119: case 3131: case 3143: case 3155: case 3167: case 3179: case 3191: case 3203: case 3215: case 3227: case 3239: case 3251: case 3263: case 3275: case 3287: case 3299: case 3311: case 3323: case 3335: case 3347: case 2060: case 2072: case 2084: case 2096: case 2108: case 2120: case 2132: case 2144: case 2156: case 2168: case 2180: case 2192: case 2204: case 2216: case 2228: case 2240: case 2252: case 2264: case 2276: case 2288: case 2300: case 2312: case 2324: case 2336: case 2348: case 2360: case 2372: case 2384: case 2396: case 2408: case 2420: case 2432: case 2444: case 2456: case 2468: case 2480: case 2492: case 2504: case 2516: case 2528: case 2540: case 2552: case 2564: case 2576: case 2588: case 2600: case 2612: case 2624: case 2636: case 2648: case 2660: case 2672: case 2684: case 2696: case 2708: case 2720: case 2732: case 2744: case 2756: case 2768: case 2780: case 2792: case 2804: case 2816: case 2828: case 2840: case 2852: case 2864: case 2876: case 2888: case 2900: case 2912: case 2924: case 2936: case 2948: case 2960: case 2972: case 2984: case 2996: case 3008: case 3020: case 3032: case 3044: case 3056: case 3068: case 3080: case 3092: case 3104: case 3116: case 3128: case 3140: case 3152: case 3164: case 3176: case 3188: case 3200: case 3212: case 3224: case 3236: case 3248: case 3260: case 3272: case 3284: case 3296: case 3308: case 3320: case 3332: case 3344: case 2069: case 2081: case 2093: case 2105: case 2117: case 2129: case 2141: case 2153: case 2165: case 2177: case 2189: case 2201: case 2213: case 2225: case 2237: case 2249: case 2261: case 2273: case 2285: case 2297: case 2309: case 2321: case 2333: case 2345: case 2357: case 2369: case 2381: case 2393: case 2405: case 2417: case 2429: case 2441: case 2453: case 2465: case 2477: case 2489: case 2501: case 2513: case 2525: case 2537: case 2549: case 2561: case 2573: case 2585: case 2597: case 2609: case 2621: case 2633: case 2645: case 2657: case 2669: case 2681: case 2693: case 2705: case 2717: case 2729: case 2741: case 2753: case 2765: case 2777: case 2789: case 2801: case 2813: case 2825: case 2837: case 2849: case 2861: case 2873: case 2885: case 2897: case 2909: case 2921: case 2933: case 2945: case 2957: case 2969: case 2981: case 2993: case 3005: case 3017: case 3029: case 3041: case 3053: return West::None;
				case 3061: case 3073: case 3085: case 3097: case 3109: case 3121: case 3133: case 3145: case 3157: case 3169: case 3181: case 3193: case 3205: case 3217: case 3229: case 3241: case 3253: case 3265: case 3277: case 3289: case 3301: case 3313: case 3325: case 3337: case 3349: case 2062: case 2074: case 2086: case 2098: case 2110: case 2122: case 2134: case 2146: case 2158: case 2170: case 2182: case 2194: case 2206: case 2218: case 2230: case 2242: case 2254: case 2266: case 2278: case 2290: case 2302: case 2314: case 2326: case 2338: case 2350: case 2362: case 2374: case 2386: case 2398: case 2410: case 2422: case 2434: case 2446: case 2458: case 2470: case 2482: case 2494: case 2506: case 2518: case 2530: case 2542: case 2554: case 2566: case 2578: case 2590: case 2602: case 2614: case 2626: case 2638: case 2650: case 2662: case 2674: case 2686: case 2698: case 2710: case 2722: case 2734: case 2746: case 2758: case 2770: case 2782: case 2794: case 2806: case 2818: case 2830: case 2842: case 2854: case 2866: case 2878: case 2890: case 2902: case 2914: case 2926: case 2938: case 2950: case 2962: case 2974: case 2986: case 2998: case 3010: case 3022: case 3034: case 3046: case 3058: case 3070: case 3082: case 3094: case 3106: case 3118: case 3130: case 3142: case 3154: case 3166: case 3178: case 3190: case 3202: case 3214: case 3226: case 3238: case 3250: case 3262: case 3274: case 3286: case 3298: case 3310: case 3322: case 3334: case 3346: case 2059: case 2071: case 2083: case 2095: case 2107: case 2119: case 2131: case 2143: case 2155: case 2167: case 2179: case 2191: case 2203: case 2215: case 2227: case 2239: case 2251: case 2263: case 2275: case 2287: case 2299: case 2311: case 2323: case 2335: case 2347: case 2359: case 2371: case 2383: case 2395: case 2407: case 2419: case 2431: case 2443: case 2455: case 2467: case 2479: case 2491: case 2503: case 2515: case 2527: case 2539: case 2551: case 2563: case 2575: case 2587: case 2599: case 2611: case 2623: case 2635: case 2647: case 2659: case 2671: case 2683: case 2695: case 2707: case 2719: case 2731: case 2743: case 2755: case 2767: case 2779: case 2791: case 2803: case 2815: case 2827: case 2839: case 2851: case 2863: case 2875: case 2887: case 2899: case 2911: case 2923: case 2935: case 2947: case 2959: case 2971: case 2983: case 2995: case 3007: case 3019: case 3031: case 3043: case 3055: case 3067: case 3079: case 3091: case 3103: case 3115: case 3127: case 3139: case 3151: case 3163: case 3175: case 3187: case 3199: case 3211: case 3223: case 3235: case 3247: case 3259: case 3271: case 3283: case 3295: case 3307: case 3319: case 3331: case 3343: case 2068: case 2080: case 2092: case 2104: case 2116: case 2128: case 2140: case 2152: case 2164: case 2176: case 2188: case 2200: case 2212: case 2224: case 2236: case 2248: case 2260: case 2272: case 2284: case 2296: case 2308: case 2320: case 2332: case 2344: case 2356: case 2368: case 2380: case 2392: case 2404: case 2416: case 2428: case 2440: case 2452: case 2464: case 2476: case 2488: case 2500: case 2512: case 2524: case 2536: case 2548: case 2560: case 2572: case 2584: case 2596: case 2608: case 2620: case 2632: case 2644: case 2656: case 2668: case 2680: case 2692: case 2704: case 2716: case 2728: case 2740: case 2752: case 2764: case 2776: case 2788: case 2800: case 2812: case 2824: case 2836: case 2848: case 2860: case 2872: case 2884: case 2896: case 2908: case 2920: case 2932: case 2944: case 2956: case 2968: case 2980: case 2992: case 3004: case 3016: case 3028: case 3040: case 3052: case 3064: case 3076: case 3088: case 3100: case 3112: case 3124: case 3136: case 3148: case 3160: case 3172: case 3184: case 3196: case 3208: case 3220: case 3232: case 3244: case 3256: case 3268: case 3280: case 3292: case 3304: case 3316: case 3328: case 3340: case 3352: case 2065: case 2077: case 2089: case 2101: case 2113: case 2125: case 2137: case 2149: case 2161: case 2173: case 2185: case 2197: case 2209: case 2221: case 2233: case 2245: case 2257: case 2269: case 2281: case 2293: case 2305: case 2317: case 2329: case 2341: case 2353: case 2365: case 2377: case 2389: case 2401: case 2413: case 2425: case 2437: case 2449: case 2461: case 2473: case 2485: case 2497: case 2509: case 2521: case 2533: case 2545: case 2557: case 2569: case 2581: case 2593: case 2605: case 2617: case 2629: case 2641: case 2653: case 2665: case 2677: case 2689: case 2701: case 2713: case 2725: case 2737: case 2749: case 2761: case 2773: case 2785: case 2797: case 2809: case 2821: case 2833: case 2845: case 2857: case 2869: case 2881: case 2893: case 2905: case 2917: case 2929: case 2941: case 2953: case 2965: case 2977: case 2989: case 3001: case 3013: case 3025: case 3037: case 3049: return West::Side;
				default: return West::Up;
			}
		}
	}
	namespace Repeater
	{
		short Repeater()
		{
			return 4034;
		}
		unsigned char Delay(short ID)
		{
			switch (ID)
			{
				case 4036: case 4044: case 4037: case 4045: case 4038: case 4046: case 4031: case 4039: case 4032: case 4040: case 4033: case 4041: case 4034: case 4042: case 4035: case 4043: return 1;
				case 4051: case 4059: case 4052: case 4060: case 4053: case 4061: case 4054: case 4062: case 4047: case 4055: case 4048: case 4056: case 4049: case 4057: case 4050: case 4058: return 2;
				case 4067: case 4075: case 4068: case 4076: case 4069: case 4077: case 4070: case 4078: case 4063: case 4071: case 4064: case 4072: case 4065: case 4073: case 4066: case 4074: return 3;
				default: return 4;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 4039: case 4055: case 4071: case 4087: case 4040: case 4056: case 4072: case 4088: case 4041: case 4057: case 4073: case 4089: case 4042: case 4058: case 4074: case 4090: return eBlockFace::BLOCK_FACE_XM;
				case 4059: case 4075: case 4091: case 4044: case 4060: case 4076: case 4092: case 4045: case 4061: case 4077: case 4093: case 4046: case 4062: case 4078: case 4043: case 4094: return eBlockFace::BLOCK_FACE_XP;
				case 4031: case 4047: case 4063: case 4079: case 4032: case 4048: case 4064: case 4080: case 4033: case 4049: case 4065: case 4081: case 4034: case 4050: case 4066: case 4082: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Locked(short ID)
		{
			switch (ID)
			{
				case 4037: case 4045: case 4053: case 4061: case 4069: case 4077: case 4085: case 4093: case 4038: case 4046: case 4054: case 4062: case 4070: case 4078: case 4086: case 4033: case 4041: case 4049: case 4057: case 4065: case 4073: case 4081: case 4089: case 4034: case 4042: case 4050: case 4058: case 4066: case 4074: case 4082: case 4090: case 4094: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 4036: case 4044: case 4052: case 4060: case 4068: case 4076: case 4084: case 4092: case 4038: case 4046: case 4054: case 4062: case 4070: case 4078: case 4086: case 4032: case 4040: case 4048: case 4056: case 4064: case 4072: case 4080: case 4088: case 4034: case 4042: case 4050: case 4058: case 4066: case 4074: case 4082: case 4090: case 4094: return false;
				default: return true;
			}
		}
	}
	namespace RepeatingCommandBlock
	{
		short RepeatingCommandBlock()
		{
			return 9231;
		}
		bool Conditional(short ID)
		{
			switch (ID)
			{
				case 9231: case 9233: case 9235: case 9232: case 9234: case 9236: return false;
				default: return true;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9228: case 9234: return eBlockFace::BLOCK_FACE_XM;
				case 9226: case 9232: return eBlockFace::BLOCK_FACE_XP;
				case 9230: case 9236: return eBlockFace::BLOCK_FACE_YM;
				case 9229: case 9235: return eBlockFace::BLOCK_FACE_YP;
				case 9225: case 9231: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace RespawnAnchor
	{
		short RespawnAnchor()
		{
			return 15829;
		}
		unsigned char Charges(short ID)
		{
			switch (ID)
			{
				case 15829: return 0;
				case 15830: return 1;
				case 15831: return 2;
				case 15832: return 3;
				default: return 4;
			}
		}
	}
	namespace RoseBush
	{
		short RoseBush()
		{
			return 7890;
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 7890: return Half::Lower;
				default: return Half::Upper;
			}
		}
	}
	namespace Sand
	{
	}
	namespace Sandstone
	{
	}
	namespace SandstoneSlab
	{
		short SandstoneSlab()
		{
			return 8351;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8350: case 8351: return Type::Bottom;
				case 8353: case 8352: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8353: case 8351: case 8349: return false;
				default: return true;
			}
		}
	}
	namespace SandstoneStairs
	{
		short SandstoneStairs()
		{
			return 5181;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 5210: case 5211: case 5212: case 5213: case 5214: case 5215: case 5216: case 5217: case 5218: case 5219: case 5220: case 5221: case 5222: case 5223: case 5224: case 5225: case 5226: case 5227: case 5228: case 5229: return eBlockFace::BLOCK_FACE_XM;
				case 5230: case 5231: case 5232: case 5233: case 5234: case 5235: case 5236: case 5237: case 5238: case 5239: case 5240: case 5241: case 5242: case 5243: case 5244: case 5245: case 5246: case 5247: case 5248: case 5249: return eBlockFace::BLOCK_FACE_XP;
				case 5170: case 5171: case 5172: case 5173: case 5174: case 5175: case 5176: case 5177: case 5178: case 5179: case 5180: case 5181: case 5182: case 5183: case 5184: case 5185: case 5186: case 5187: case 5188: case 5189: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 5203: case 5204: case 5205: case 5206: case 5207: case 5208: case 5209: case 5220: case 5221: case 5222: case 5223: case 5224: case 5225: case 5226: case 5227: case 5228: case 5229: case 5240: case 5241: case 5242: case 5243: case 5180: case 5244: case 5181: case 5245: case 5182: case 5246: case 5183: case 5247: case 5184: case 5248: case 5185: case 5249: case 5186: case 5187: case 5188: case 5189: case 5200: case 5201: case 5202: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 5203: case 5212: case 5213: case 5222: case 5223: case 5232: case 5233: case 5172: case 5173: case 5242: case 5243: case 5182: case 5183: case 5192: case 5193: case 5202: return Shape::InnerLeft;
				case 5204: case 5205: case 5214: case 5215: case 5224: case 5225: case 5234: case 5235: case 5174: case 5175: case 5244: case 5245: case 5184: case 5185: case 5194: case 5195: return Shape::InnerRight;
				case 5206: case 5207: case 5216: case 5217: case 5226: case 5227: case 5236: case 5237: case 5176: case 5177: case 5246: case 5247: case 5186: case 5187: case 5196: case 5197: return Shape::OuterLeft;
				case 5208: case 5209: case 5218: case 5219: case 5228: case 5229: case 5238: case 5239: case 5178: case 5179: case 5248: case 5249: case 5188: case 5189: case 5198: case 5199: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 5203: case 5205: case 5207: case 5209: case 5211: case 5213: case 5215: case 5217: case 5219: case 5221: case 5223: case 5225: case 5227: case 5229: case 5231: case 5233: case 5171: case 5235: case 5173: case 5237: case 5175: case 5239: case 5177: case 5241: case 5179: case 5243: case 5181: case 5245: case 5183: case 5247: case 5185: case 5249: case 5187: case 5189: case 5191: case 5193: case 5195: case 5197: case 5199: case 5201: return false;
				default: return true;
			}
		}
	}
	namespace SandstoneWall
	{
		short SandstoneWall()
		{
			return 13786;
		}
		enum East East(short ID)
		{
			switch (ID)
			{
				case 13893: case 13897: case 13901: case 13905: case 13909: case 13913: case 13917: case 13921: case 13925: case 13929: case 13933: case 13937: case 13941: case 13945: case 13949: case 13953: case 13957: case 13961: case 13965: case 13969: case 13973: case 13977: case 13981: case 13985: case 13989: case 13993: case 13997: case 13894: case 13898: case 13902: case 13906: case 13910: case 13914: case 13918: case 13922: case 13926: case 13930: case 13934: case 13938: case 13942: case 13946: case 13950: case 13954: case 13958: case 13962: case 13966: case 13970: case 13974: case 13978: case 13982: case 13986: case 13990: case 13994: case 13998: case 13891: case 13895: case 13899: case 13903: case 13907: case 13911: case 13915: case 13919: case 13923: case 13927: case 13931: case 13935: case 13939: case 13943: case 13947: case 13951: case 13955: case 13959: case 13963: case 13967: case 13971: case 13975: case 13979: case 13983: case 13987: case 13991: case 13995: case 13892: case 13896: case 13900: case 13904: case 13908: case 13912: case 13916: case 13920: case 13924: case 13928: case 13932: case 13936: case 13940: case 13944: case 13948: case 13952: case 13956: case 13960: case 13964: case 13968: case 13972: case 13976: case 13980: case 13984: case 13988: case 13992: case 13996: return East::Low;
				case 13785: case 13789: case 13793: case 13797: case 13801: case 13805: case 13809: case 13813: case 13817: case 13821: case 13825: case 13829: case 13833: case 13837: case 13841: case 13845: case 13849: case 13853: case 13857: case 13861: case 13865: case 13869: case 13873: case 13877: case 13881: case 13885: case 13889: case 13786: case 13790: case 13794: case 13798: case 13802: case 13806: case 13810: case 13814: case 13818: case 13822: case 13826: case 13830: case 13834: case 13838: case 13842: case 13846: case 13850: case 13854: case 13858: case 13862: case 13866: case 13870: case 13874: case 13878: case 13882: case 13886: case 13890: case 13783: case 13787: case 13791: case 13795: case 13799: case 13803: case 13807: case 13811: case 13815: case 13819: case 13823: case 13827: case 13831: case 13835: case 13839: case 13843: case 13847: case 13851: case 13855: case 13859: case 13863: case 13867: case 13871: case 13875: case 13879: case 13883: case 13887: case 13784: case 13788: case 13792: case 13796: case 13800: case 13804: case 13808: case 13812: case 13816: case 13820: case 13824: case 13828: case 13832: case 13836: case 13840: case 13844: case 13848: case 13852: case 13856: case 13860: case 13864: case 13868: case 13872: case 13876: case 13880: case 13884: case 13888: return East::None;
				default: return East::Tall;
			}
		}
		enum North North(short ID)
		{
			switch (ID)
			{
				case 13821: case 13825: case 13829: case 13833: case 13837: case 13841: case 13845: case 13849: case 13853: case 13929: case 13933: case 13937: case 13941: case 13945: case 13949: case 13953: case 13957: case 13961: case 14037: case 14041: case 14045: case 14049: case 14053: case 14057: case 14061: case 14065: case 14069: case 13822: case 13826: case 13830: case 13834: case 13838: case 13842: case 13846: case 13850: case 13854: case 13930: case 13934: case 13938: case 13942: case 13946: case 13950: case 13954: case 13958: case 13962: case 14038: case 14042: case 14046: case 14050: case 14054: case 14058: case 14062: case 14066: case 14070: case 13819: case 13823: case 13827: case 13831: case 13835: case 13839: case 13843: case 13847: case 13851: case 13927: case 13931: case 13935: case 13939: case 13943: case 13947: case 13951: case 13955: case 13959: case 14035: case 14039: case 14043: case 14047: case 14051: case 14055: case 14059: case 14063: case 14067: case 13820: case 13824: case 13828: case 13832: case 13836: case 13840: case 13844: case 13848: case 13852: case 13928: case 13932: case 13936: case 13940: case 13944: case 13948: case 13952: case 13956: case 13960: case 14036: case 14040: case 14044: case 14048: case 14052: case 14056: case 14060: case 14064: case 14068: return North::Low;
				case 13785: case 13789: case 13793: case 13797: case 13801: case 13805: case 13809: case 13813: case 13817: case 13893: case 13897: case 13901: case 13905: case 13909: case 13913: case 13917: case 13921: case 13925: case 14001: case 14005: case 14009: case 14013: case 14017: case 14021: case 14025: case 14029: case 14033: case 13786: case 13790: case 13794: case 13798: case 13802: case 13806: case 13810: case 13814: case 13818: case 13894: case 13898: case 13902: case 13906: case 13910: case 13914: case 13918: case 13922: case 13926: case 14002: case 14006: case 14010: case 14014: case 14018: case 14022: case 14026: case 14030: case 14034: case 13783: case 13787: case 13791: case 13795: case 13799: case 13803: case 13807: case 13811: case 13815: case 13891: case 13895: case 13899: case 13903: case 13907: case 13911: case 13915: case 13919: case 13923: case 13999: case 14003: case 14007: case 14011: case 14015: case 14019: case 14023: case 14027: case 14031: case 13784: case 13788: case 13792: case 13796: case 13800: case 13804: case 13808: case 13812: case 13816: case 13892: case 13896: case 13900: case 13904: case 13908: case 13912: case 13916: case 13920: case 13924: case 14000: case 14004: case 14008: case 14012: case 14016: case 14020: case 14024: case 14028: case 14032: return North::None;
				default: return North::Tall;
			}
		}
		enum South South(short ID)
		{
			switch (ID)
			{
				case 13797: case 13801: case 13805: case 13833: case 13837: case 13841: case 13869: case 13873: case 13877: case 13905: case 13909: case 13913: case 13941: case 13945: case 13949: case 13977: case 13981: case 13985: case 14013: case 14017: case 14021: case 14049: case 14053: case 14057: case 14085: case 14089: case 14093: case 13798: case 13802: case 13806: case 13834: case 13838: case 13842: case 13870: case 13874: case 13878: case 13906: case 13910: case 13914: case 13942: case 13946: case 13950: case 13978: case 13982: case 13986: case 14014: case 14018: case 14022: case 14050: case 14054: case 14058: case 14086: case 14090: case 14094: case 13795: case 13799: case 13803: case 13831: case 13835: case 13839: case 13867: case 13871: case 13875: case 13903: case 13907: case 13911: case 13939: case 13943: case 13947: case 13975: case 13979: case 13983: case 14011: case 14015: case 14019: case 14047: case 14051: case 14055: case 14083: case 14087: case 14091: case 13796: case 13800: case 13804: case 13832: case 13836: case 13840: case 13868: case 13872: case 13876: case 13904: case 13908: case 13912: case 13940: case 13944: case 13948: case 13976: case 13980: case 13984: case 14012: case 14016: case 14020: case 14048: case 14052: case 14056: case 14084: case 14088: case 14092: return South::Low;
				case 13785: case 13789: case 13793: case 13821: case 13825: case 13829: case 13857: case 13861: case 13865: case 13893: case 13897: case 13901: case 13929: case 13933: case 13937: case 13965: case 13969: case 13973: case 14001: case 14005: case 14009: case 14037: case 14041: case 14045: case 14073: case 14077: case 14081: case 13786: case 13790: case 13794: case 13822: case 13826: case 13830: case 13858: case 13862: case 13866: case 13894: case 13898: case 13902: case 13930: case 13934: case 13938: case 13966: case 13970: case 13974: case 14002: case 14006: case 14010: case 14038: case 14042: case 14046: case 14074: case 14078: case 14082: case 13783: case 13787: case 13791: case 13819: case 13823: case 13827: case 13855: case 13859: case 13863: case 13891: case 13895: case 13899: case 13927: case 13931: case 13935: case 13963: case 13967: case 13971: case 13999: case 14003: case 14007: case 14035: case 14039: case 14043: case 14071: case 14075: case 14079: case 13784: case 13788: case 13792: case 13820: case 13824: case 13828: case 13856: case 13860: case 13864: case 13892: case 13896: case 13900: case 13928: case 13932: case 13936: case 13964: case 13968: case 13972: case 14000: case 14004: case 14008: case 14036: case 14040: case 14044: case 14072: case 14076: case 14080: return South::None;
				default: return South::Tall;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 14104: case 13789: case 13793: case 13801: case 13805: case 13813: case 13817: case 13825: case 13829: case 13837: case 13841: case 13849: case 13853: case 13861: case 13865: case 13873: case 13877: case 13885: case 13889: case 13897: case 13901: case 13909: case 13913: case 13921: case 13925: case 13933: case 13937: case 13945: case 13949: case 13957: case 13961: case 13969: case 13973: case 13981: case 13985: case 13993: case 13997: case 14005: case 14009: case 14017: case 14021: case 14029: case 14033: case 14041: case 14045: case 14053: case 14057: case 14065: case 14069: case 14077: case 14081: case 14089: case 14093: case 14101: case 14105: case 13790: case 13794: case 13802: case 13806: case 13814: case 13818: case 13826: case 13830: case 13838: case 13842: case 13850: case 13854: case 13862: case 13866: case 13874: case 13878: case 13886: case 13890: case 13898: case 13902: case 13910: case 13914: case 13922: case 13926: case 13934: case 13938: case 13946: case 13950: case 13958: case 13962: case 13970: case 13974: case 13982: case 13986: case 13994: case 13998: case 14006: case 14010: case 14018: case 14022: case 14030: case 14034: case 14042: case 14046: case 14054: case 14058: case 14066: case 14070: case 14078: case 14082: case 14090: case 14094: case 14102: case 14106: case 13791: case 13803: case 13815: case 13827: case 13839: case 13851: case 13863: case 13875: case 13887: case 13899: case 13911: case 13923: case 13935: case 13947: case 13959: case 13971: case 13983: case 13995: case 14007: case 14019: case 14031: case 14043: case 14055: case 14067: case 14079: case 14091: case 14103: case 13792: case 13804: case 13816: case 13828: case 13840: case 13852: case 13864: case 13876: case 13888: case 13900: case 13912: case 13924: case 13936: case 13948: case 13960: case 13972: case 13984: case 13996: case 14008: case 14020: case 14032: case 14044: case 14056: case 14068: case 14080: case 14092: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 14100: case 14104: case 13793: case 13805: case 13817: case 13829: case 13841: case 13853: case 13865: case 13877: case 13889: case 13901: case 13913: case 13925: case 13937: case 13949: case 13961: case 13973: case 13985: case 13997: case 14009: case 14021: case 14033: case 14045: case 14057: case 14069: case 14081: case 14093: case 14105: case 13786: case 13794: case 13798: case 13806: case 13810: case 13818: case 13822: case 13830: case 13834: case 13842: case 13846: case 13854: case 13858: case 13866: case 13870: case 13878: case 13882: case 13890: case 13894: case 13902: case 13906: case 13914: case 13918: case 13926: case 13930: case 13938: case 13942: case 13950: case 13954: case 13962: case 13966: case 13974: case 13978: case 13986: case 13990: case 13998: case 14002: case 14010: case 14014: case 14022: case 14026: case 14034: case 14038: case 14046: case 14050: case 14058: case 14062: case 14070: case 14074: case 14082: case 14086: case 14094: case 14098: case 14106: case 13787: case 13799: case 13811: case 13823: case 13835: case 13847: case 13859: case 13871: case 13883: case 13895: case 13907: case 13919: case 13931: case 13943: case 13955: case 13967: case 13979: case 13991: case 14003: case 14015: case 14027: case 14039: case 14051: case 14063: case 14075: case 14087: case 14099: case 13788: case 13792: case 13800: case 13804: case 13812: case 13816: case 13824: case 13828: case 13836: case 13840: case 13848: case 13852: case 13860: case 13864: case 13872: case 13876: case 13884: case 13888: case 13896: case 13900: case 13908: case 13912: case 13920: case 13924: case 13932: case 13936: case 13944: case 13948: case 13956: case 13960: case 13968: case 13972: case 13980: case 13984: case 13992: case 13996: case 14004: case 14008: case 14016: case 14020: case 14028: case 14032: case 14040: case 14044: case 14052: case 14056: case 14064: case 14068: case 14076: case 14080: case 14088: case 14092: return false;
				default: return true;
			}
		}
		enum West West(short ID)
		{
			switch (ID)
			{
				case 13793: case 13805: case 13817: case 13829: case 13841: case 13853: case 13865: case 13877: case 13889: case 13901: case 13913: case 13925: case 13937: case 13949: case 13961: case 13973: case 13985: case 13997: case 14009: case 14021: case 14033: case 14045: case 14057: case 14069: case 14081: case 14093: case 14105: case 13790: case 13802: case 13814: case 13826: case 13838: case 13850: case 13862: case 13874: case 13886: case 13898: case 13910: case 13922: case 13934: case 13946: case 13958: case 13970: case 13982: case 13994: case 14006: case 14018: case 14030: case 14042: case 14054: case 14066: case 14078: case 14090: case 14102: case 13787: case 13799: case 13811: case 13823: case 13835: case 13847: case 13859: case 13871: case 13883: case 13895: case 13907: case 13919: case 13931: case 13943: case 13955: case 13967: case 13979: case 13991: case 14003: case 14015: case 14027: case 14039: case 14051: case 14063: case 14075: case 14087: case 14099: case 13784: case 13796: case 13808: case 13820: case 13832: case 13844: case 13856: case 13868: case 13880: case 13892: case 13904: case 13916: case 13928: case 13940: case 13952: case 13964: case 13976: case 13988: case 14000: case 14012: case 14024: case 14036: case 14048: case 14060: case 14072: case 14084: case 14096: return West::Low;
				case 14104: case 13789: case 13801: case 13813: case 13825: case 13837: case 13849: case 13861: case 13873: case 13885: case 13897: case 13909: case 13921: case 13933: case 13945: case 13957: case 13969: case 13981: case 13993: case 14005: case 14017: case 14029: case 14041: case 14053: case 14065: case 14077: case 14089: case 14101: case 13786: case 13798: case 13810: case 13822: case 13834: case 13846: case 13858: case 13870: case 13882: case 13894: case 13906: case 13918: case 13930: case 13942: case 13954: case 13966: case 13978: case 13990: case 14002: case 14014: case 14026: case 14038: case 14050: case 14062: case 14074: case 14086: case 14098: case 13783: case 13795: case 13807: case 13819: case 13831: case 13843: case 13855: case 13867: case 13879: case 13891: case 13903: case 13915: case 13927: case 13939: case 13951: case 13963: case 13975: case 13987: case 13999: case 14011: case 14023: case 14035: case 14047: case 14059: case 14071: case 14083: case 14095: case 13792: case 13804: case 13816: case 13828: case 13840: case 13852: case 13864: case 13876: case 13888: case 13900: case 13912: case 13924: case 13936: case 13948: case 13960: case 13972: case 13984: case 13996: case 14008: case 14020: case 14032: case 14044: case 14056: case 14068: case 14080: case 14092: return West::None;
				default: return West::Tall;
			}
		}
	}
	namespace Scaffolding
	{
		short Scaffolding()
		{
			return 14786;
		}
		bool Bottom(short ID)
		{
			switch (ID)
			{
				case 14784: case 14777: case 14785: case 14778: case 14771: case 14779: case 14772: case 14780: case 14773: case 14781: case 14774: case 14782: case 14775: case 14783: case 14776: case 14786: return false;
				default: return true;
			}
		}
		unsigned char Distance(short ID)
		{
			switch (ID)
			{
				case 14755: case 14771: case 14756: case 14772: return 0;
				case 14757: case 14773: case 14758: case 14774: return 1;
				case 14759: case 14775: case 14760: case 14776: return 2;
				case 14761: case 14777: case 14762: case 14778: return 3;
				case 14763: case 14779: case 14764: case 14780: return 4;
				case 14765: case 14781: case 14766: case 14782: return 5;
				case 14784: case 14767: case 14783: case 14768: return 6;
				default: return 7;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 14784: case 14762: case 14770: case 14778: case 14756: case 14764: case 14772: case 14780: case 14758: case 14766: case 14774: case 14782: case 14760: case 14768: case 14776: case 14786: return false;
				default: return true;
			}
		}
	}
	namespace SeaLantern
	{
	}
	namespace SeaPickle
	{
		short SeaPickle()
		{
			return 9640;
		}
		unsigned char Pickles(short ID)
		{
			switch (ID)
			{
				case 9641: case 9640: return 1;
				case 9642: case 9643: return 2;
				case 9645: case 9644: return 3;
				default: return 4;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9641: case 9645: case 9643: case 9647: return false;
				default: return true;
			}
		}
	}
	namespace Seagrass
	{
	}
	namespace Shroomlight
	{
	}
	namespace ShulkerBox
	{
		short ShulkerBox()
		{
			return 9276;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9275: return eBlockFace::BLOCK_FACE_XM;
				case 9273: return eBlockFace::BLOCK_FACE_XP;
				case 9277: return eBlockFace::BLOCK_FACE_YM;
				case 9276: return eBlockFace::BLOCK_FACE_YP;
				case 9272: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace SkeletonSkull
	{
		short SkeletonSkull()
		{
			return 6490;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 6490: return 0;
				case 6491: return 1;
				case 6500: return 10;
				case 6501: return 11;
				case 6502: return 12;
				case 6503: return 13;
				case 6504: return 14;
				case 6505: return 15;
				case 6492: return 2;
				case 6493: return 3;
				case 6494: return 4;
				case 6495: return 5;
				case 6496: return 6;
				case 6497: return 7;
				case 6498: return 8;
				default: return 9;
			}
		}
	}
	namespace SkeletonWallSkull
	{
		short SkeletonWallSkull()
		{
			return 6506;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6508: return eBlockFace::BLOCK_FACE_XM;
				case 6509: return eBlockFace::BLOCK_FACE_XP;
				case 6506: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace SlimeBlock
	{
	}
	namespace SmithingTable
	{
	}
	namespace Smoker
	{
		short Smoker()
		{
			return 14804;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 14807: case 14808: return eBlockFace::BLOCK_FACE_XM;
				case 14809: case 14810: return eBlockFace::BLOCK_FACE_XP;
				case 14804: case 14803: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Lit(short ID)
		{
			switch (ID)
			{
				case 14804: case 14808: case 14806: case 14810: return false;
				default: return true;
			}
		}
	}
	namespace SmoothQuartz
	{
	}
	namespace SmoothQuartzSlab
	{
		short SmoothQuartzSlab()
		{
			return 10834;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 10833: case 10834: return Type::Bottom;
				case 10835: case 10836: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10832: case 10836: case 10834: return false;
				default: return true;
			}
		}
	}
	namespace SmoothQuartzStairs
	{
		short SmoothQuartzStairs()
		{
			return 10320;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 10349: case 10350: case 10351: case 10352: case 10353: case 10354: case 10355: case 10356: case 10357: case 10358: case 10359: case 10360: case 10361: case 10362: case 10363: case 10364: case 10365: case 10366: case 10367: case 10368: return eBlockFace::BLOCK_FACE_XM;
				case 10369: case 10370: case 10371: case 10372: case 10373: case 10374: case 10375: case 10376: case 10377: case 10378: case 10379: case 10380: case 10381: case 10382: case 10383: case 10384: case 10385: case 10386: case 10387: case 10388: return eBlockFace::BLOCK_FACE_XP;
				case 10309: case 10310: case 10311: case 10312: case 10313: case 10314: case 10315: case 10316: case 10317: case 10318: case 10319: case 10320: case 10321: case 10322: case 10323: case 10324: case 10325: case 10326: case 10327: case 10328: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 10341: case 10342: case 10343: case 10344: case 10345: case 10346: case 10347: case 10348: case 10359: case 10360: case 10361: case 10362: case 10363: case 10364: case 10365: case 10366: case 10367: case 10368: case 10379: case 10380: case 10381: case 10382: case 10383: case 10384: case 10385: case 10386: case 10387: case 10388: case 10319: case 10320: case 10321: case 10322: case 10323: case 10324: case 10325: case 10326: case 10327: case 10328: case 10339: case 10340: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 10341: case 10342: case 10351: case 10352: case 10361: case 10362: case 10371: case 10372: case 10381: case 10382: case 10311: case 10312: case 10321: case 10322: case 10331: case 10332: return Shape::InnerLeft;
				case 10343: case 10344: case 10353: case 10354: case 10363: case 10364: case 10373: case 10374: case 10383: case 10384: case 10313: case 10314: case 10323: case 10324: case 10333: case 10334: return Shape::InnerRight;
				case 10345: case 10346: case 10355: case 10356: case 10365: case 10366: case 10375: case 10376: case 10385: case 10386: case 10315: case 10316: case 10325: case 10326: case 10335: case 10336: return Shape::OuterLeft;
				case 10347: case 10348: case 10357: case 10358: case 10367: case 10368: case 10377: case 10378: case 10387: case 10388: case 10317: case 10318: case 10327: case 10328: case 10337: case 10338: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10342: case 10344: case 10346: case 10348: case 10350: case 10352: case 10354: case 10356: case 10358: case 10360: case 10362: case 10364: case 10366: case 10368: case 10370: case 10372: case 10374: case 10376: case 10378: case 10380: case 10382: case 10384: case 10386: case 10388: case 10310: case 10312: case 10314: case 10316: case 10318: case 10320: case 10322: case 10324: case 10326: case 10328: case 10330: case 10332: case 10334: case 10336: case 10338: case 10340: return false;
				default: return true;
			}
		}
	}
	namespace SmoothRedSandstone
	{
	}
	namespace SmoothRedSandstoneSlab
	{
		short SmoothRedSandstoneSlab()
		{
			return 10798;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 10797: case 10798: return Type::Bottom;
				case 10800: case 10799: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10796: case 10800: case 10798: return false;
				default: return true;
			}
		}
	}
	namespace SmoothRedSandstoneStairs
	{
		short SmoothRedSandstoneStairs()
		{
			return 9760;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9789: case 9790: case 9791: case 9792: case 9793: case 9794: case 9795: case 9796: case 9797: case 9798: case 9799: case 9800: case 9801: case 9802: case 9803: case 9804: case 9805: case 9806: case 9807: case 9808: return eBlockFace::BLOCK_FACE_XM;
				case 9809: case 9810: case 9811: case 9812: case 9813: case 9814: case 9815: case 9816: case 9817: case 9818: case 9819: case 9820: case 9821: case 9822: case 9823: case 9824: case 9825: case 9826: case 9827: case 9828: return eBlockFace::BLOCK_FACE_XP;
				case 9749: case 9750: case 9751: case 9752: case 9753: case 9754: case 9755: case 9756: case 9757: case 9758: case 9759: case 9760: case 9761: case 9762: case 9763: case 9764: case 9765: case 9766: case 9767: case 9768: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 9759: case 9760: case 9761: case 9762: case 9763: case 9764: case 9765: case 9766: case 9767: case 9768: case 9779: case 9780: case 9781: case 9782: case 9783: case 9784: case 9785: case 9786: case 9787: case 9788: case 9799: case 9800: case 9801: case 9802: case 9803: case 9804: case 9805: case 9806: case 9807: case 9808: case 9819: case 9820: case 9821: case 9822: case 9823: case 9824: case 9825: case 9826: case 9827: case 9828: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 9751: case 9752: case 9761: case 9762: case 9771: case 9772: case 9781: case 9782: case 9791: case 9792: case 9801: case 9802: case 9811: case 9812: case 9821: case 9822: return Shape::InnerLeft;
				case 9753: case 9754: case 9763: case 9764: case 9773: case 9774: case 9783: case 9784: case 9793: case 9794: case 9803: case 9804: case 9813: case 9814: case 9823: case 9824: return Shape::InnerRight;
				case 9755: case 9756: case 9765: case 9766: case 9775: case 9776: case 9785: case 9786: case 9795: case 9796: case 9805: case 9806: case 9815: case 9816: case 9825: case 9826: return Shape::OuterLeft;
				case 9757: case 9758: case 9767: case 9768: case 9777: case 9778: case 9787: case 9788: case 9797: case 9798: case 9807: case 9808: case 9817: case 9818: case 9827: case 9828: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9750: case 9752: case 9754: case 9756: case 9758: case 9760: case 9762: case 9764: case 9766: case 9768: case 9770: case 9772: case 9774: case 9776: case 9778: case 9780: case 9782: case 9784: case 9786: case 9788: case 9790: case 9792: case 9794: case 9796: case 9798: case 9800: case 9802: case 9804: case 9806: case 9808: case 9810: case 9812: case 9814: case 9816: case 9818: case 9820: case 9822: case 9824: case 9826: case 9828: return false;
				default: return true;
			}
		}
	}
	namespace SmoothSandstone
	{
	}
	namespace SmoothSandstoneSlab
	{
		short SmoothSandstoneSlab()
		{
			return 10828;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 10828: case 10827: return Type::Bottom;
				case 10829: case 10830: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10828: case 10826: case 10830: return false;
				default: return true;
			}
		}
	}
	namespace SmoothSandstoneStairs
	{
		short SmoothSandstoneStairs()
		{
			return 10240;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 10269: case 10270: case 10271: case 10272: case 10273: case 10274: case 10275: case 10276: case 10277: case 10278: case 10279: case 10280: case 10281: case 10282: case 10283: case 10284: case 10285: case 10286: case 10287: case 10288: return eBlockFace::BLOCK_FACE_XM;
				case 10289: case 10290: case 10291: case 10292: case 10293: case 10294: case 10295: case 10296: case 10297: case 10298: case 10299: case 10300: case 10301: case 10302: case 10303: case 10304: case 10305: case 10306: case 10307: case 10308: return eBlockFace::BLOCK_FACE_XP;
				case 10229: case 10230: case 10231: case 10232: case 10233: case 10234: case 10235: case 10236: case 10237: case 10238: case 10239: case 10240: case 10241: case 10242: case 10243: case 10244: case 10245: case 10246: case 10247: case 10248: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 10239: case 10240: case 10241: case 10242: case 10243: case 10244: case 10245: case 10246: case 10247: case 10248: case 10259: case 10260: case 10261: case 10262: case 10263: case 10264: case 10265: case 10266: case 10267: case 10268: case 10279: case 10280: case 10281: case 10282: case 10283: case 10284: case 10285: case 10286: case 10287: case 10288: case 10299: case 10300: case 10301: case 10302: case 10303: case 10304: case 10305: case 10306: case 10307: case 10308: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 10231: case 10232: case 10241: case 10242: case 10251: case 10252: case 10261: case 10262: case 10271: case 10272: case 10281: case 10282: case 10291: case 10292: case 10301: case 10302: return Shape::InnerLeft;
				case 10233: case 10234: case 10243: case 10244: case 10253: case 10254: case 10263: case 10264: case 10273: case 10274: case 10283: case 10284: case 10293: case 10294: case 10303: case 10304: return Shape::InnerRight;
				case 10235: case 10236: case 10245: case 10246: case 10255: case 10256: case 10265: case 10266: case 10275: case 10276: case 10285: case 10286: case 10295: case 10296: case 10305: case 10306: return Shape::OuterLeft;
				case 10237: case 10238: case 10247: case 10248: case 10257: case 10258: case 10267: case 10268: case 10277: case 10278: case 10287: case 10288: case 10297: case 10298: case 10307: case 10308: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10230: case 10232: case 10234: case 10236: case 10238: case 10240: case 10242: case 10244: case 10246: case 10248: case 10250: case 10252: case 10254: case 10256: case 10258: case 10260: case 10262: case 10264: case 10266: case 10268: case 10270: case 10272: case 10274: case 10276: case 10278: case 10280: case 10282: case 10284: case 10286: case 10288: case 10290: case 10292: case 10294: case 10296: case 10298: case 10300: case 10302: case 10304: case 10306: case 10308: return false;
				default: return true;
			}
		}
	}
	namespace SmoothStone
	{
	}
	namespace SmoothStoneSlab
	{
		short SmoothStoneSlab()
		{
			return 8345;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8344: case 8345: return Type::Bottom;
				case 8346: case 8347: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8343: case 8347: case 8345: return false;
				default: return true;
			}
		}
	}
	namespace Snow
	{
		short Snow()
		{
			return 3921;
		}
		unsigned char Layers(short ID)
		{
			switch (ID)
			{
				case 3921: return 1;
				case 3922: return 2;
				case 3923: return 3;
				case 3924: return 4;
				case 3925: return 5;
				case 3926: return 6;
				case 3927: return 7;
				default: return 8;
			}
		}
	}
	namespace SnowBlock
	{
	}
	namespace SoulCampfire
	{
		short SoulCampfire()
		{
			return 14925;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 14939: case 14940: case 14941: case 14942: case 14943: case 14944: case 14945: case 14938: return eBlockFace::BLOCK_FACE_XM;
				case 14947: case 14948: case 14949: case 14950: case 14951: case 14952: case 14946: case 14953: return eBlockFace::BLOCK_FACE_XP;
				case 14924: case 14925: case 14926: case 14927: case 14928: case 14929: case 14922: case 14923: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Lit(short ID)
		{
			switch (ID)
			{
				case 14926: case 14934: case 14942: case 14950: case 14927: case 14935: case 14943: case 14951: case 14928: case 14936: case 14944: case 14952: case 14929: case 14937: case 14945: case 14953: return false;
				default: return true;
			}
		}
		bool SignalFire(short ID)
		{
			switch (ID)
			{
				case 14924: case 14932: case 14940: case 14948: case 14925: case 14933: case 14941: case 14949: case 14928: case 14936: case 14944: case 14952: case 14929: case 14937: case 14945: case 14953: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 14939: case 14947: case 14925: case 14933: case 14941: case 14949: case 14927: case 14935: case 14943: case 14951: case 14929: case 14937: case 14945: case 14923: case 14931: case 14953: return false;
				default: return true;
			}
		}
	}
	namespace SoulFire
	{
	}
	namespace SoulLantern
	{
		short SoulLantern()
		{
			return 14889;
		}
		bool Hanging(short ID)
		{
			switch (ID)
			{
				case 14889: return false;
				default: return true;
			}
		}
	}
	namespace SoulSand
	{
	}
	namespace SoulSoil
	{
	}
	namespace SoulTorch
	{
	}
	namespace SoulWallTorch
	{
		short SoulWallTorch()
		{
			return 4009;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 4011: return eBlockFace::BLOCK_FACE_XM;
				case 4012: return eBlockFace::BLOCK_FACE_XP;
				case 4009: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace Spawner
	{
	}
	namespace Sponge
	{
	}
	namespace SpruceButton
	{
		short SpruceButton()
		{
			return 6379;
		}
		enum Face Face(short ID)
		{
			switch (ID)
			{
				case 6389: case 6393: case 6386: case 6390: case 6387: case 6391: case 6388: case 6392: return Face::Ceiling;
				case 6373: case 6377: case 6370: case 6374: case 6371: case 6375: case 6372: case 6376: return Face::Floor;
				default: return Face::Wall;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6374: case 6382: case 6390: case 6375: case 6383: case 6391: return eBlockFace::BLOCK_FACE_XM;
				case 6377: case 6385: case 6393: case 6376: case 6384: case 6392: return eBlockFace::BLOCK_FACE_XP;
				case 6370: case 6378: case 6386: case 6371: case 6379: case 6387: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 6373: case 6377: case 6381: case 6385: case 6389: case 6393: case 6371: case 6375: case 6379: case 6383: case 6387: case 6391: return false;
				default: return true;
			}
		}
	}
	namespace SpruceDoor
	{
		short SpruceDoor()
		{
			return 8749;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8770: case 8771: case 8772: case 8773: case 8774: case 8775: case 8776: case 8777: case 8778: case 8779: case 8780: case 8781: case 8782: case 8783: case 8784: case 8785: return eBlockFace::BLOCK_FACE_XM;
				case 8798: case 8799: case 8800: case 8786: case 8787: case 8788: case 8789: case 8790: case 8791: case 8792: case 8793: case 8794: case 8795: case 8796: case 8797: case 8801: return eBlockFace::BLOCK_FACE_XP;
				case 8738: case 8739: case 8740: case 8741: case 8742: case 8743: case 8744: case 8745: case 8746: case 8747: case 8748: case 8749: case 8750: case 8751: case 8752: case 8753: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 8766: case 8798: case 8767: case 8799: case 8768: case 8800: case 8769: case 8746: case 8778: case 8747: case 8779: case 8748: case 8780: case 8749: case 8781: case 8750: case 8782: case 8751: case 8783: case 8752: case 8784: case 8753: case 8785: case 8762: case 8794: case 8763: case 8795: case 8764: case 8796: case 8765: case 8797: case 8801: return Half::Lower;
				default: return Half::Upper;
			}
		}
		enum Hinge Hinge(short ID)
		{
			switch (ID)
			{
				case 8738: case 8770: case 8739: case 8771: case 8740: case 8772: case 8741: case 8773: case 8746: case 8778: case 8747: case 8779: case 8748: case 8780: case 8749: case 8781: case 8754: case 8786: case 8755: case 8787: case 8756: case 8788: case 8757: case 8789: case 8762: case 8794: case 8763: case 8795: case 8764: case 8796: case 8765: case 8797: return Hinge::Left;
				default: return Hinge::Right;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 8768: case 8800: case 8769: case 8740: case 8772: case 8741: case 8773: case 8744: case 8776: case 8745: case 8777: case 8748: case 8780: case 8749: case 8781: case 8752: case 8784: case 8753: case 8785: case 8756: case 8788: case 8757: case 8789: case 8760: case 8792: case 8761: case 8793: case 8764: case 8796: case 8765: case 8797: case 8801: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 8767: case 8799: case 8769: case 8739: case 8771: case 8741: case 8773: case 8743: case 8775: case 8745: case 8777: case 8747: case 8779: case 8749: case 8781: case 8751: case 8783: case 8753: case 8785: case 8755: case 8787: case 8757: case 8789: case 8759: case 8791: case 8761: case 8793: case 8763: case 8795: case 8765: case 8797: case 8801: return false;
				default: return true;
			}
		}
	}
	namespace SpruceFence
	{
		short SpruceFence()
		{
			return 8609;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 8600: case 8608: case 8601: case 8594: case 8602: case 8595: case 8603: case 8596: case 8604: case 8597: case 8605: case 8598: case 8606: case 8599: case 8607: case 8609: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 8592: case 8608: case 8593: case 8586: case 8602: case 8587: case 8603: case 8588: case 8604: case 8589: case 8605: case 8590: case 8606: case 8591: case 8607: case 8609: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 8584: case 8592: case 8600: case 8608: case 8585: case 8593: case 8601: case 8582: case 8590: case 8598: case 8606: case 8583: case 8591: case 8599: case 8607: case 8609: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8584: case 8592: case 8600: case 8608: case 8585: case 8593: case 8601: case 8580: case 8588: case 8596: case 8604: case 8581: case 8589: case 8597: case 8605: case 8609: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 8585: case 8593: case 8601: case 8579: case 8587: case 8595: case 8603: case 8581: case 8589: case 8597: case 8605: case 8583: case 8591: case 8599: case 8607: case 8609: return false;
				default: return true;
			}
		}
	}
	namespace SpruceFenceGate
	{
		short SpruceFenceGate()
		{
			return 8425;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8437: case 8438: case 8439: case 8440: case 8441: case 8434: case 8435: case 8436: return eBlockFace::BLOCK_FACE_XM;
				case 8445: case 8446: case 8447: case 8448: case 8442: case 8443: case 8444: case 8449: return eBlockFace::BLOCK_FACE_XP;
				case 8422: case 8423: case 8424: case 8425: case 8418: case 8419: case 8420: case 8421: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool InWall(short ID)
		{
			switch (ID)
			{
				case 8422: case 8430: case 8438: case 8446: case 8423: case 8431: case 8439: case 8447: case 8424: case 8432: case 8440: case 8448: case 8425: case 8433: case 8441: case 8449: return false;
				default: return true;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 8429: case 8437: case 8445: case 8424: case 8432: case 8440: case 8448: case 8425: case 8433: case 8441: case 8420: case 8428: case 8436: case 8444: case 8421: case 8449: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 8429: case 8437: case 8445: case 8423: case 8431: case 8439: case 8447: case 8425: case 8433: case 8441: case 8419: case 8427: case 8435: case 8443: case 8421: case 8449: return false;
				default: return true;
			}
		}
	}
	namespace SpruceLeaves
	{
		short SpruceLeaves()
		{
			return 172;
		}
		unsigned char Distance(short ID)
		{
			switch (ID)
			{
				case 159: case 160: return 1;
				case 161: case 162: return 2;
				case 163: case 164: return 3;
				case 165: case 166: return 4;
				case 168: case 167: return 5;
				case 169: case 170: return 6;
				default: return 7;
			}
		}
		bool Persistent(short ID)
		{
			switch (ID)
			{
				case 168: case 162: case 170: case 164: case 172: case 166: case 160: return false;
				default: return true;
			}
		}
	}
	namespace SpruceLog
	{
		short SpruceLog()
		{
			return 77;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 76: return Axis::X;
				case 77: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace SprucePlanks
	{
	}
	namespace SprucePressurePlate
	{
		short SprucePressurePlate()
		{
			return 3876;
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 3876: return false;
				default: return true;
			}
		}
	}
	namespace SpruceSapling
	{
		short SpruceSapling()
		{
			return 23;
		}
		unsigned char Stage(short ID)
		{
			switch (ID)
			{
				case 23: return 0;
				default: return 1;
			}
		}
	}
	namespace SpruceSign
	{
		short SpruceSign()
		{
			return 3414;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 3414: case 3413: return 0;
				case 3416: case 3415: return 1;
				case 3433: case 3434: return 10;
				case 3435: case 3436: return 11;
				case 3437: case 3438: return 12;
				case 3439: case 3440: return 13;
				case 3441: case 3442: return 14;
				case 3443: case 3444: return 15;
				case 3418: case 3417: return 2;
				case 3420: case 3419: return 3;
				case 3421: case 3422: return 4;
				case 3423: case 3424: return 5;
				case 3425: case 3426: return 6;
				case 3427: case 3428: return 7;
				case 3429: case 3430: return 8;
				default: return 9;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 3414: case 3416: case 3418: case 3420: case 3422: case 3424: case 3426: case 3428: case 3430: case 3432: case 3434: case 3436: case 3438: case 3440: case 3442: case 3444: return false;
				default: return true;
			}
		}
	}
	namespace SpruceSlab
	{
		short SpruceSlab()
		{
			return 8309;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8308: case 8309: return Type::Bottom;
				case 8311: case 8310: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8311: case 8309: case 8307: return false;
				default: return true;
			}
		}
	}
	namespace SpruceStairs
	{
		short SpruceStairs()
		{
			return 5415;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 5457: case 5458: case 5459: case 5460: case 5461: case 5462: case 5463: case 5444: case 5445: case 5446: case 5447: case 5448: case 5449: case 5450: case 5451: case 5452: case 5453: case 5454: case 5455: case 5456: return eBlockFace::BLOCK_FACE_XM;
				case 5464: case 5465: case 5466: case 5467: case 5468: case 5469: case 5470: case 5471: case 5472: case 5473: case 5474: case 5475: case 5476: case 5477: case 5478: case 5479: case 5480: case 5481: case 5482: case 5483: return eBlockFace::BLOCK_FACE_XP;
				case 5404: case 5405: case 5406: case 5407: case 5408: case 5409: case 5410: case 5411: case 5412: case 5413: case 5414: case 5415: case 5416: case 5417: case 5418: case 5419: case 5420: case 5421: case 5422: case 5423: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 5457: case 5458: case 5459: case 5460: case 5461: case 5462: case 5463: case 5474: case 5475: case 5476: case 5477: case 5414: case 5478: case 5415: case 5479: case 5416: case 5480: case 5417: case 5481: case 5418: case 5482: case 5419: case 5483: case 5420: case 5421: case 5422: case 5423: case 5434: case 5435: case 5436: case 5437: case 5438: case 5439: case 5440: case 5441: case 5442: case 5443: case 5454: case 5455: case 5456: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 5457: case 5466: case 5467: case 5406: case 5407: case 5476: case 5477: case 5416: case 5417: case 5426: case 5427: case 5436: case 5437: case 5446: case 5447: case 5456: return Shape::InnerLeft;
				case 5458: case 5459: case 5468: case 5469: case 5408: case 5409: case 5478: case 5479: case 5418: case 5419: case 5428: case 5429: case 5438: case 5439: case 5448: case 5449: return Shape::InnerRight;
				case 5460: case 5461: case 5470: case 5471: case 5410: case 5411: case 5480: case 5481: case 5420: case 5421: case 5430: case 5431: case 5440: case 5441: case 5450: case 5451: return Shape::OuterLeft;
				case 5462: case 5463: case 5472: case 5473: case 5412: case 5413: case 5482: case 5483: case 5422: case 5423: case 5432: case 5433: case 5442: case 5443: case 5452: case 5453: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 5457: case 5459: case 5461: case 5463: case 5465: case 5467: case 5405: case 5469: case 5407: case 5471: case 5409: case 5473: case 5411: case 5475: case 5413: case 5477: case 5415: case 5479: case 5417: case 5481: case 5419: case 5483: case 5421: case 5423: case 5425: case 5427: case 5429: case 5431: case 5433: case 5435: case 5437: case 5439: case 5441: case 5443: case 5445: case 5447: case 5449: case 5451: case 5453: case 5455: return false;
				default: return true;
			}
		}
	}
	namespace SpruceTrapdoor
	{
		short SpruceTrapdoor()
		{
			return 4190;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 4211: case 4212: case 4213: case 4214: case 4215: case 4216: case 4217: case 4218: case 4219: case 4220: case 4221: case 4222: case 4207: case 4208: case 4209: case 4210: return eBlockFace::BLOCK_FACE_XM;
				case 4227: case 4228: case 4229: case 4230: case 4231: case 4232: case 4233: case 4234: case 4235: case 4236: case 4237: case 4223: case 4224: case 4225: case 4226: case 4238: return eBlockFace::BLOCK_FACE_XP;
				case 4180: case 4181: case 4182: case 4183: case 4184: case 4185: case 4186: case 4187: case 4188: case 4189: case 4190: case 4175: case 4176: case 4177: case 4178: case 4179: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 4183: case 4199: case 4215: case 4231: case 4184: case 4200: case 4216: case 4232: case 4185: case 4201: case 4217: case 4233: case 4186: case 4202: case 4218: case 4234: case 4187: case 4203: case 4219: case 4235: case 4188: case 4204: case 4220: case 4236: case 4189: case 4205: case 4221: case 4237: case 4190: case 4206: case 4222: case 4238: return Half::Bottom;
				default: return Half::Top;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 4195: case 4211: case 4227: case 4180: case 4196: case 4212: case 4228: case 4181: case 4197: case 4213: case 4229: case 4182: case 4198: case 4214: case 4230: case 4187: case 4203: case 4219: case 4235: case 4188: case 4204: case 4220: case 4236: case 4189: case 4205: case 4221: case 4237: case 4190: case 4206: case 4222: case 4179: case 4238: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 4181: case 4197: case 4213: case 4229: case 4182: case 4198: case 4214: case 4230: case 4185: case 4201: case 4217: case 4233: case 4186: case 4202: case 4218: case 4234: case 4189: case 4205: case 4221: case 4237: case 4190: case 4206: case 4222: case 4177: case 4193: case 4209: case 4225: case 4178: case 4194: case 4210: case 4226: case 4238: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 4180: case 4196: case 4212: case 4228: case 4182: case 4198: case 4214: case 4230: case 4184: case 4200: case 4216: case 4232: case 4186: case 4202: case 4218: case 4234: case 4188: case 4204: case 4220: case 4236: case 4190: case 4206: case 4222: case 4176: case 4192: case 4208: case 4224: case 4178: case 4194: case 4210: case 4226: case 4238: return false;
				default: return true;
			}
		}
	}
	namespace SpruceWallSign
	{
		short SpruceWallSign()
		{
			return 3744;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 3747: case 3748: return eBlockFace::BLOCK_FACE_XM;
				case 3749: case 3750: return eBlockFace::BLOCK_FACE_XP;
				case 3743: case 3744: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 3744: case 3746: case 3748: case 3750: return false;
				default: return true;
			}
		}
	}
	namespace SpruceWood
	{
		short SpruceWood()
		{
			return 113;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 112: return Axis::X;
				case 113: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace StickyPiston
	{
		short StickyPiston()
		{
			return 1335;
		}
		bool Extended(short ID)
		{
			switch (ID)
			{
				case 1336: case 1340: case 1337: case 1338: case 1335: case 1339: return false;
				default: return true;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1332: case 1338: return eBlockFace::BLOCK_FACE_XM;
				case 1336: case 1330: return eBlockFace::BLOCK_FACE_XP;
				case 1340: case 1334: return eBlockFace::BLOCK_FACE_YM;
				case 1333: case 1339: return eBlockFace::BLOCK_FACE_YP;
				case 1329: case 1335: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace Stone
	{
	}
	namespace StoneBrickSlab
	{
		short StoneBrickSlab()
		{
			return 8381;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8381: case 8380: return Type::Bottom;
				case 8382: case 8383: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8381: case 8379: case 8383: return false;
				default: return true;
			}
		}
	}
	namespace StoneBrickStairs
	{
		short StoneBrickStairs()
		{
			return 4943;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 4972: case 4973: case 4974: case 4975: case 4976: case 4977: case 4978: case 4979: case 4980: case 4981: case 4982: case 4983: case 4984: case 4985: case 4986: case 4987: case 4988: case 4989: case 4990: case 4991: return eBlockFace::BLOCK_FACE_XM;
				case 4992: case 4993: case 4994: case 4995: case 4996: case 4997: case 4998: case 4999: case 5000: case 5001: case 5002: case 5003: case 5004: case 5005: case 5006: case 5007: case 5008: case 5009: case 5010: case 5011: return eBlockFace::BLOCK_FACE_XP;
				case 4949: case 4950: case 4951: case 4932: case 4933: case 4934: case 4935: case 4936: case 4937: case 4938: case 4939: case 4940: case 4941: case 4942: case 4943: case 4944: case 4945: case 4946: case 4947: case 4948: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 4949: case 4950: case 4951: case 4962: case 4963: case 4964: case 4965: case 4966: case 4967: case 4968: case 4969: case 4970: case 4971: case 4982: case 4983: case 4984: case 4985: case 4986: case 4987: case 4988: case 4989: case 4990: case 4991: case 5002: case 5003: case 5004: case 5005: case 4942: case 5006: case 4943: case 5007: case 4944: case 5008: case 4945: case 5009: case 4946: case 5010: case 4947: case 5011: case 4948: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 4954: case 4955: case 4964: case 4965: case 4974: case 4975: case 4984: case 4985: case 4994: case 4995: case 4934: case 4935: case 5004: case 5005: case 4944: case 4945: return Shape::InnerLeft;
				case 4956: case 4957: case 4966: case 4967: case 4976: case 4977: case 4986: case 4987: case 4996: case 4997: case 4936: case 4937: case 5006: case 5007: case 4946: case 4947: return Shape::InnerRight;
				case 4949: case 4958: case 4959: case 4968: case 4969: case 4978: case 4979: case 4988: case 4989: case 4998: case 4999: case 4938: case 4939: case 5008: case 5009: case 4948: return Shape::OuterLeft;
				case 4950: case 4951: case 4960: case 4961: case 4970: case 4971: case 4980: case 4981: case 4990: case 4991: case 5000: case 5001: case 4940: case 4941: case 5010: case 5011: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 4949: case 4951: case 4953: case 4955: case 4957: case 4959: case 4961: case 4963: case 4965: case 4967: case 4969: case 4971: case 4973: case 4975: case 4977: case 4979: case 4981: case 4983: case 4985: case 4987: case 4989: case 4991: case 4993: case 4995: case 4933: case 4997: case 4935: case 4999: case 4937: case 5001: case 4939: case 5003: case 4941: case 5005: case 4943: case 5007: case 4945: case 5009: case 4947: case 5011: return false;
				default: return true;
			}
		}
	}
	namespace StoneBrickWall
	{
		short StoneBrickWall()
		{
			return 12490;
		}
		enum East East(short ID)
		{
			switch (ID)
			{
				case 12595: case 12599: case 12603: case 12607: case 12611: case 12615: case 12619: case 12623: case 12627: case 12631: case 12635: case 12639: case 12643: case 12647: case 12651: case 12655: case 12659: case 12663: case 12667: case 12671: case 12675: case 12679: case 12683: case 12687: case 12691: case 12695: case 12699: case 12596: case 12600: case 12604: case 12608: case 12612: case 12616: case 12620: case 12624: case 12628: case 12632: case 12636: case 12640: case 12644: case 12648: case 12652: case 12656: case 12660: case 12664: case 12668: case 12672: case 12676: case 12680: case 12684: case 12688: case 12692: case 12696: case 12700: case 12597: case 12601: case 12605: case 12609: case 12613: case 12617: case 12621: case 12625: case 12629: case 12633: case 12637: case 12641: case 12645: case 12649: case 12653: case 12657: case 12661: case 12665: case 12669: case 12673: case 12677: case 12681: case 12685: case 12689: case 12693: case 12697: case 12701: case 12598: case 12602: case 12606: case 12610: case 12614: case 12618: case 12622: case 12626: case 12630: case 12634: case 12638: case 12642: case 12646: case 12650: case 12654: case 12658: case 12662: case 12666: case 12670: case 12674: case 12678: case 12682: case 12686: case 12690: case 12694: case 12698: case 12702: return East::Low;
				case 12567: case 12571: case 12575: case 12579: case 12583: case 12587: case 12591: case 12488: case 12492: case 12496: case 12500: case 12504: case 12508: case 12512: case 12516: case 12520: case 12524: case 12528: case 12532: case 12536: case 12540: case 12544: case 12548: case 12552: case 12556: case 12560: case 12564: case 12568: case 12572: case 12576: case 12580: case 12584: case 12588: case 12592: case 12489: case 12493: case 12497: case 12501: case 12505: case 12509: case 12513: case 12517: case 12521: case 12525: case 12529: case 12533: case 12537: case 12541: case 12545: case 12549: case 12553: case 12557: case 12561: case 12565: case 12569: case 12573: case 12577: case 12581: case 12585: case 12589: case 12593: case 12490: case 12494: case 12498: case 12502: case 12506: case 12510: case 12514: case 12518: case 12522: case 12526: case 12530: case 12534: case 12538: case 12542: case 12546: case 12550: case 12554: case 12558: case 12562: case 12566: case 12570: case 12574: case 12578: case 12582: case 12586: case 12590: case 12594: case 12487: case 12491: case 12495: case 12499: case 12503: case 12507: case 12511: case 12515: case 12519: case 12523: case 12527: case 12531: case 12535: case 12539: case 12543: case 12547: case 12551: case 12555: case 12559: case 12563: return East::None;
				default: return East::Tall;
			}
		}
		enum North North(short ID)
		{
			switch (ID)
			{
				case 12631: case 12635: case 12639: case 12643: case 12647: case 12651: case 12655: case 12659: case 12663: case 12739: case 12743: case 12747: case 12751: case 12755: case 12759: case 12763: case 12767: case 12771: case 12524: case 12528: case 12532: case 12536: case 12540: case 12544: case 12548: case 12552: case 12556: case 12632: case 12636: case 12640: case 12644: case 12648: case 12652: case 12656: case 12660: case 12664: case 12740: case 12744: case 12748: case 12752: case 12756: case 12760: case 12764: case 12768: case 12772: case 12525: case 12529: case 12533: case 12537: case 12541: case 12545: case 12549: case 12553: case 12557: case 12633: case 12637: case 12641: case 12645: case 12649: case 12653: case 12657: case 12661: case 12665: case 12741: case 12745: case 12749: case 12753: case 12757: case 12761: case 12765: case 12769: case 12773: case 12526: case 12530: case 12534: case 12538: case 12542: case 12546: case 12550: case 12554: case 12558: case 12634: case 12638: case 12642: case 12646: case 12650: case 12654: case 12658: case 12662: case 12666: case 12742: case 12746: case 12750: case 12754: case 12758: case 12762: case 12766: case 12770: case 12774: case 12523: case 12527: case 12531: case 12535: case 12539: case 12543: case 12547: case 12551: case 12555: return North::Low;
				case 12595: case 12599: case 12603: case 12607: case 12611: case 12615: case 12619: case 12623: case 12627: case 12703: case 12707: case 12711: case 12715: case 12719: case 12723: case 12727: case 12731: case 12735: case 12488: case 12492: case 12496: case 12500: case 12504: case 12508: case 12512: case 12516: case 12520: case 12596: case 12600: case 12604: case 12608: case 12612: case 12616: case 12620: case 12624: case 12628: case 12704: case 12708: case 12712: case 12716: case 12720: case 12724: case 12728: case 12732: case 12736: case 12489: case 12493: case 12497: case 12501: case 12505: case 12509: case 12513: case 12517: case 12521: case 12597: case 12601: case 12605: case 12609: case 12613: case 12617: case 12621: case 12625: case 12629: case 12705: case 12709: case 12713: case 12717: case 12721: case 12725: case 12729: case 12733: case 12737: case 12490: case 12494: case 12498: case 12502: case 12506: case 12510: case 12514: case 12518: case 12522: case 12598: case 12602: case 12606: case 12610: case 12614: case 12618: case 12622: case 12626: case 12630: case 12706: case 12710: case 12714: case 12718: case 12722: case 12726: case 12730: case 12734: case 12738: case 12487: case 12491: case 12495: case 12499: case 12503: case 12507: case 12511: case 12515: case 12519: return North::None;
				default: return North::Tall;
			}
		}
		enum South South(short ID)
		{
			switch (ID)
			{
				case 12571: case 12575: case 12579: case 12607: case 12611: case 12615: case 12643: case 12647: case 12651: case 12679: case 12683: case 12687: case 12715: case 12719: case 12723: case 12751: case 12755: case 12759: case 12787: case 12791: case 12795: case 12500: case 12504: case 12508: case 12536: case 12540: case 12544: case 12572: case 12576: case 12580: case 12608: case 12612: case 12616: case 12644: case 12648: case 12652: case 12680: case 12684: case 12688: case 12716: case 12720: case 12724: case 12752: case 12756: case 12760: case 12788: case 12792: case 12796: case 12501: case 12505: case 12509: case 12537: case 12541: case 12545: case 12573: case 12577: case 12581: case 12609: case 12613: case 12617: case 12645: case 12649: case 12653: case 12681: case 12685: case 12689: case 12717: case 12721: case 12725: case 12753: case 12757: case 12761: case 12789: case 12793: case 12797: case 12502: case 12506: case 12510: case 12538: case 12542: case 12546: case 12574: case 12578: case 12582: case 12610: case 12614: case 12618: case 12646: case 12650: case 12654: case 12682: case 12686: case 12690: case 12718: case 12722: case 12726: case 12754: case 12758: case 12762: case 12790: case 12794: case 12798: case 12499: case 12503: case 12507: case 12535: case 12539: case 12543: return South::Low;
				case 12567: case 12595: case 12599: case 12603: case 12631: case 12635: case 12639: case 12667: case 12671: case 12675: case 12703: case 12707: case 12711: case 12739: case 12743: case 12747: case 12775: case 12779: case 12783: case 12488: case 12492: case 12496: case 12524: case 12528: case 12532: case 12560: case 12564: case 12568: case 12596: case 12600: case 12604: case 12632: case 12636: case 12640: case 12668: case 12672: case 12676: case 12704: case 12708: case 12712: case 12740: case 12744: case 12748: case 12776: case 12780: case 12784: case 12489: case 12493: case 12497: case 12525: case 12529: case 12533: case 12561: case 12565: case 12569: case 12597: case 12601: case 12605: case 12633: case 12637: case 12641: case 12669: case 12673: case 12677: case 12705: case 12709: case 12713: case 12741: case 12745: case 12749: case 12777: case 12781: case 12785: case 12490: case 12494: case 12498: case 12526: case 12530: case 12534: case 12562: case 12566: case 12570: case 12598: case 12602: case 12606: case 12634: case 12638: case 12642: case 12670: case 12674: case 12678: case 12706: case 12710: case 12714: case 12742: case 12746: case 12750: case 12778: case 12782: case 12786: case 12487: case 12491: case 12495: case 12523: case 12527: case 12531: case 12559: case 12563: return South::None;
				default: return South::Tall;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 12567: case 12579: case 12591: case 12603: case 12615: case 12627: case 12639: case 12651: case 12663: case 12675: case 12687: case 12699: case 12711: case 12723: case 12735: case 12747: case 12759: case 12771: case 12783: case 12795: case 12807: case 12496: case 12508: case 12520: case 12532: case 12544: case 12556: case 12568: case 12580: case 12592: case 12604: case 12616: case 12628: case 12640: case 12652: case 12664: case 12676: case 12688: case 12700: case 12712: case 12724: case 12736: case 12748: case 12760: case 12772: case 12784: case 12796: case 12808: case 12493: case 12497: case 12505: case 12509: case 12517: case 12521: case 12529: case 12533: case 12541: case 12545: case 12553: case 12557: case 12565: case 12569: case 12577: case 12581: case 12589: case 12593: case 12601: case 12605: case 12613: case 12617: case 12625: case 12629: case 12637: case 12641: case 12649: case 12653: case 12661: case 12665: case 12673: case 12677: case 12685: case 12689: case 12697: case 12701: case 12709: case 12713: case 12721: case 12725: case 12733: case 12737: case 12745: case 12749: case 12757: case 12761: case 12769: case 12773: case 12781: case 12785: case 12793: case 12797: case 12805: case 12809: case 12494: case 12498: case 12506: case 12510: case 12518: case 12522: case 12530: case 12534: case 12542: case 12546: case 12554: case 12558: case 12566: case 12570: case 12578: case 12582: case 12590: case 12594: case 12602: case 12606: case 12614: case 12618: case 12626: case 12630: case 12638: case 12642: case 12650: case 12654: case 12662: case 12666: case 12674: case 12678: case 12686: case 12690: case 12698: case 12702: case 12710: case 12714: case 12722: case 12726: case 12734: case 12738: case 12746: case 12750: case 12758: case 12762: case 12770: case 12774: case 12782: case 12786: case 12794: case 12798: case 12806: case 12810: case 12495: case 12507: case 12519: case 12531: case 12543: case 12555: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 12575: case 12587: case 12599: case 12611: case 12623: case 12635: case 12647: case 12659: case 12671: case 12683: case 12695: case 12707: case 12719: case 12731: case 12743: case 12755: case 12767: case 12779: case 12791: case 12803: case 12492: case 12496: case 12504: case 12508: case 12516: case 12520: case 12528: case 12532: case 12540: case 12544: case 12552: case 12556: case 12564: case 12568: case 12576: case 12580: case 12588: case 12592: case 12600: case 12604: case 12612: case 12616: case 12624: case 12628: case 12636: case 12640: case 12648: case 12652: case 12660: case 12664: case 12672: case 12676: case 12684: case 12688: case 12696: case 12700: case 12708: case 12712: case 12720: case 12724: case 12732: case 12736: case 12744: case 12748: case 12756: case 12760: case 12768: case 12772: case 12780: case 12784: case 12792: case 12796: case 12804: case 12808: case 12497: case 12509: case 12521: case 12533: case 12545: case 12557: case 12569: case 12581: case 12593: case 12605: case 12617: case 12629: case 12641: case 12653: case 12665: case 12677: case 12689: case 12701: case 12713: case 12725: case 12737: case 12749: case 12761: case 12773: case 12785: case 12797: case 12809: case 12490: case 12498: case 12502: case 12510: case 12514: case 12522: case 12526: case 12534: case 12538: case 12546: case 12550: case 12558: case 12562: case 12570: case 12574: case 12582: case 12586: case 12594: case 12598: case 12606: case 12610: case 12618: case 12622: case 12630: case 12634: case 12642: case 12646: case 12654: case 12658: case 12666: case 12670: case 12678: case 12682: case 12690: case 12694: case 12702: case 12706: case 12714: case 12718: case 12726: case 12730: case 12738: case 12742: case 12750: case 12754: case 12762: case 12766: case 12774: case 12778: case 12786: case 12790: case 12798: case 12802: case 12810: case 12491: case 12503: case 12515: case 12527: case 12539: case 12551: case 12563: return false;
				default: return true;
			}
		}
		enum West West(short ID)
		{
			switch (ID)
			{
				case 12575: case 12587: case 12599: case 12611: case 12623: case 12635: case 12647: case 12659: case 12671: case 12683: case 12695: case 12707: case 12719: case 12731: case 12743: case 12755: case 12767: case 12779: case 12791: case 12803: case 12488: case 12500: case 12512: case 12524: case 12536: case 12548: case 12560: case 12572: case 12584: case 12596: case 12608: case 12620: case 12632: case 12644: case 12656: case 12668: case 12680: case 12692: case 12704: case 12716: case 12728: case 12740: case 12752: case 12764: case 12776: case 12788: case 12800: case 12497: case 12509: case 12521: case 12533: case 12545: case 12557: case 12569: case 12581: case 12593: case 12605: case 12617: case 12629: case 12641: case 12653: case 12665: case 12677: case 12689: case 12701: case 12713: case 12725: case 12737: case 12749: case 12761: case 12773: case 12785: case 12797: case 12809: case 12494: case 12506: case 12518: case 12530: case 12542: case 12554: case 12566: case 12578: case 12590: case 12602: case 12614: case 12626: case 12638: case 12650: case 12662: case 12674: case 12686: case 12698: case 12710: case 12722: case 12734: case 12746: case 12758: case 12770: case 12782: case 12794: case 12806: case 12491: case 12503: case 12515: case 12527: case 12539: case 12551: case 12563: return West::Low;
				case 12571: case 12583: case 12595: case 12607: case 12619: case 12631: case 12643: case 12655: case 12667: case 12679: case 12691: case 12703: case 12715: case 12727: case 12739: case 12751: case 12763: case 12775: case 12787: case 12799: case 12496: case 12508: case 12520: case 12532: case 12544: case 12556: case 12568: case 12580: case 12592: case 12604: case 12616: case 12628: case 12640: case 12652: case 12664: case 12676: case 12688: case 12700: case 12712: case 12724: case 12736: case 12748: case 12760: case 12772: case 12784: case 12796: case 12808: case 12493: case 12505: case 12517: case 12529: case 12541: case 12553: case 12565: case 12577: case 12589: case 12601: case 12613: case 12625: case 12637: case 12649: case 12661: case 12673: case 12685: case 12697: case 12709: case 12721: case 12733: case 12745: case 12757: case 12769: case 12781: case 12793: case 12805: case 12490: case 12502: case 12514: case 12526: case 12538: case 12550: case 12562: case 12574: case 12586: case 12598: case 12610: case 12622: case 12634: case 12646: case 12658: case 12670: case 12682: case 12694: case 12706: case 12718: case 12730: case 12742: case 12754: case 12766: case 12778: case 12790: case 12802: case 12487: case 12499: case 12511: case 12523: case 12535: case 12547: case 12559: return West::None;
				default: return West::Tall;
			}
		}
	}
	namespace StoneBricks
	{
	}
	namespace StoneButton
	{
		short StoneButton()
		{
			return 3906;
		}
		enum Face Face(short ID)
		{
			switch (ID)
			{
				case 3917: case 3919: case 3914: case 3916: case 3918: case 3920: case 3913: case 3915: return Face::Ceiling;
				case 3898: case 3900: case 3902: case 3904: case 3897: case 3899: case 3901: case 3903: return Face::Floor;
				default: return Face::Wall;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 3917: case 3902: case 3910: case 3918: case 3901: case 3909: return eBlockFace::BLOCK_FACE_XM;
				case 3919: case 3904: case 3912: case 3920: case 3903: case 3911: return eBlockFace::BLOCK_FACE_XP;
				case 3898: case 3906: case 3914: case 3897: case 3905: case 3913: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 3898: case 3900: case 3902: case 3904: case 3906: case 3908: case 3910: case 3912: case 3914: case 3916: case 3918: case 3920: return false;
				default: return true;
			}
		}
	}
	namespace StonePressurePlate
	{
		short StonePressurePlate()
		{
			return 3808;
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 3808: return false;
				default: return true;
			}
		}
	}
	namespace StoneSlab
	{
		short StoneSlab()
		{
			return 8339;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 8339: case 8338: return Type::Bottom;
				case 8340: case 8341: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 8339: case 8337: case 8341: return false;
				default: return true;
			}
		}
	}
	namespace StoneStairs
	{
		short StoneStairs()
		{
			return 10160;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 10189: case 10190: case 10191: case 10192: case 10193: case 10194: case 10195: case 10196: case 10197: case 10198: case 10199: case 10200: case 10201: case 10202: case 10203: case 10204: case 10205: case 10206: case 10207: case 10208: return eBlockFace::BLOCK_FACE_XM;
				case 10214: case 10215: case 10216: case 10217: case 10218: case 10219: case 10220: case 10221: case 10222: case 10223: case 10224: case 10225: case 10226: case 10227: case 10228: case 10209: case 10210: case 10211: case 10212: case 10213: return eBlockFace::BLOCK_FACE_XP;
				case 10149: case 10150: case 10151: case 10152: case 10153: case 10154: case 10155: case 10156: case 10157: case 10158: case 10159: case 10160: case 10161: case 10162: case 10163: case 10164: case 10165: case 10166: case 10167: case 10168: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 10219: case 10220: case 10221: case 10222: case 10223: case 10224: case 10225: case 10226: case 10227: case 10228: case 10159: case 10160: case 10161: case 10162: case 10163: case 10164: case 10165: case 10166: case 10167: case 10168: case 10179: case 10180: case 10181: case 10182: case 10183: case 10184: case 10185: case 10186: case 10187: case 10188: case 10199: case 10200: case 10201: case 10202: case 10203: case 10204: case 10205: case 10206: case 10207: case 10208: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 10221: case 10222: case 10151: case 10152: case 10161: case 10162: case 10171: case 10172: case 10181: case 10182: case 10191: case 10192: case 10201: case 10202: case 10211: case 10212: return Shape::InnerLeft;
				case 10214: case 10223: case 10224: case 10153: case 10154: case 10163: case 10164: case 10173: case 10174: case 10183: case 10184: case 10193: case 10194: case 10203: case 10204: case 10213: return Shape::InnerRight;
				case 10215: case 10216: case 10225: case 10226: case 10155: case 10156: case 10165: case 10166: case 10175: case 10176: case 10185: case 10186: case 10195: case 10196: case 10205: case 10206: return Shape::OuterLeft;
				case 10217: case 10218: case 10227: case 10228: case 10157: case 10158: case 10167: case 10168: case 10177: case 10178: case 10187: case 10188: case 10197: case 10198: case 10207: case 10208: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 10214: case 10216: case 10218: case 10220: case 10222: case 10224: case 10226: case 10228: case 10150: case 10152: case 10154: case 10156: case 10158: case 10160: case 10162: case 10164: case 10166: case 10168: case 10170: case 10172: case 10174: case 10176: case 10178: case 10180: case 10182: case 10184: case 10186: case 10188: case 10190: case 10192: case 10194: case 10196: case 10198: case 10200: case 10202: case 10204: case 10206: case 10208: case 10210: case 10212: return false;
				default: return true;
			}
		}
	}
	namespace Stonecutter
	{
		short Stonecutter()
		{
			return 14850;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 14852: return eBlockFace::BLOCK_FACE_XM;
				case 14853: return eBlockFace::BLOCK_FACE_XP;
				case 14850: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace StrippedAcaciaLog
	{
		short StrippedAcaciaLog()
		{
			return 101;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 100: return Axis::X;
				case 101: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace StrippedAcaciaWood
	{
		short StrippedAcaciaWood()
		{
			return 140;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 139: return Axis::X;
				case 140: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace StrippedBirchLog
	{
		short StrippedBirchLog()
		{
			return 95;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 94: return Axis::X;
				case 95: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace StrippedBirchWood
	{
		short StrippedBirchWood()
		{
			return 134;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 133: return Axis::X;
				case 134: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace StrippedCrimsonHyphae
	{
		short StrippedCrimsonHyphae()
		{
			return 14985;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 14984: return Axis::X;
				case 14985: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace StrippedCrimsonStem
	{
		short StrippedCrimsonStem()
		{
			return 14979;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 14978: return Axis::X;
				case 14979: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace StrippedDarkOakLog
	{
		short StrippedDarkOakLog()
		{
			return 104;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 103: return Axis::X;
				case 104: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace StrippedDarkOakWood
	{
		short StrippedDarkOakWood()
		{
			return 143;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 142: return Axis::X;
				case 143: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace StrippedJungleLog
	{
		short StrippedJungleLog()
		{
			return 98;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 97: return Axis::X;
				case 98: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace StrippedJungleWood
	{
		short StrippedJungleWood()
		{
			return 137;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 136: return Axis::X;
				case 137: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace StrippedOakLog
	{
		short StrippedOakLog()
		{
			return 107;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 106: return Axis::X;
				case 107: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace StrippedOakWood
	{
		short StrippedOakWood()
		{
			return 128;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 127: return Axis::X;
				case 128: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace StrippedSpruceLog
	{
		short StrippedSpruceLog()
		{
			return 92;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 91: return Axis::X;
				case 92: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace StrippedSpruceWood
	{
		short StrippedSpruceWood()
		{
			return 131;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 130: return Axis::X;
				case 131: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace StrippedWarpedHyphae
	{
		short StrippedWarpedHyphae()
		{
			return 14968;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 14967: return Axis::X;
				case 14968: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace StrippedWarpedStem
	{
		short StrippedWarpedStem()
		{
			return 14962;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 14961: return Axis::X;
				case 14962: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace StructureBlock
	{
		short StructureBlock()
		{
			return 15735;
		}
		enum Mode Mode(short ID)
		{
			switch (ID)
			{
				case 15737: return Mode::Corner;
				case 15738: return Mode::Data;
				case 15736: return Mode::Load;
				default: return Mode::Save;
			}
		}
	}
	namespace StructureVoid
	{
	}
	namespace SugarCane
	{
		short SugarCane()
		{
			return 3948;
		}
		unsigned char Age(short ID)
		{
			switch (ID)
			{
				case 3948: return 0;
				case 3949: return 1;
				case 3958: return 10;
				case 3959: return 11;
				case 3960: return 12;
				case 3961: return 13;
				case 3962: return 14;
				case 3963: return 15;
				case 3950: return 2;
				case 3951: return 3;
				case 3952: return 4;
				case 3953: return 5;
				case 3954: return 6;
				case 3955: return 7;
				case 3956: return 8;
				default: return 9;
			}
		}
	}
	namespace Sunflower
	{
		short Sunflower()
		{
			return 7886;
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 7886: return Half::Lower;
				default: return Half::Upper;
			}
		}
	}
	namespace SweetBerryBush
	{
		short SweetBerryBush()
		{
			return 14954;
		}
		unsigned char Age(short ID)
		{
			switch (ID)
			{
				case 14954: return 0;
				case 14955: return 1;
				case 14956: return 2;
				default: return 3;
			}
		}
	}
	namespace TallGrass
	{
		short TallGrass()
		{
			return 7894;
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 7894: return Half::Lower;
				default: return Half::Upper;
			}
		}
	}
	namespace TallSeagrass
	{
		short TallSeagrass()
		{
			return 1347;
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 1347: return Half::Lower;
				default: return Half::Upper;
			}
		}
	}
	namespace Target
	{
		short Target()
		{
			return 15760;
		}
		unsigned char Power(short ID)
		{
			switch (ID)
			{
				case 15760: return 0;
				case 15761: return 1;
				case 15770: return 10;
				case 15771: return 11;
				case 15772: return 12;
				case 15773: return 13;
				case 15774: return 14;
				case 15775: return 15;
				case 15762: return 2;
				case 15763: return 3;
				case 15764: return 4;
				case 15765: return 5;
				case 15766: return 6;
				case 15767: return 7;
				case 15768: return 8;
				default: return 9;
			}
		}
	}
	namespace Terracotta
	{
	}
	namespace TNT
	{
		short TNT()
		{
			return 1431;
		}
		bool Unstable(short ID)
		{
			switch (ID)
			{
				case 1431: return false;
				default: return true;
			}
		}
	}
	namespace Torch
	{
	}
	namespace TrappedChest
	{
		short TrappedChest()
		{
			return 6623;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6637: case 6634: case 6638: case 6635: case 6639: case 6636: return eBlockFace::BLOCK_FACE_XM;
				case 6641: case 6645: case 6642: case 6643: case 6640: case 6644: return eBlockFace::BLOCK_FACE_XP;
				case 6625: case 6622: case 6626: case 6623: case 6627: case 6624: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 6625: case 6637: case 6630: case 6642: case 6631: case 6643: case 6624: case 6636: return Type::Left;
				case 6633: case 6645: case 6626: case 6638: case 6627: case 6639: case 6632: case 6644: return Type::Right;
				default: return Type::Single;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 6625: case 6629: case 6633: case 6637: case 6641: case 6645: case 6623: case 6627: case 6631: case 6635: case 6639: case 6643: return false;
				default: return true;
			}
		}
	}
	namespace Tripwire
	{
		short Tripwire()
		{
			return 5402;
		}
		bool Attached(short ID)
		{
			switch (ID)
			{
				case 5393: case 5394: case 5395: case 5396: case 5397: case 5398: case 5399: case 5400: case 5401: case 5339: case 5340: case 5341: case 5342: case 5343: case 5344: case 5345: case 5346: case 5347: case 5348: case 5349: case 5350: case 5351: case 5352: case 5353: case 5354: case 5355: case 5356: case 5357: case 5358: case 5359: case 5360: case 5361: case 5362: case 5363: case 5364: case 5365: case 5366: case 5367: case 5368: case 5369: case 5370: case 5371: case 5372: case 5373: case 5374: case 5375: case 5376: case 5377: case 5378: case 5379: case 5380: case 5381: case 5382: case 5383: case 5384: case 5385: case 5386: case 5387: case 5388: case 5389: case 5390: case 5391: case 5392: case 5402: return false;
				default: return true;
			}
		}
		bool Disarmed(short ID)
		{
			switch (ID)
			{
				case 5393: case 5330: case 5394: case 5331: case 5395: case 5332: case 5396: case 5333: case 5397: case 5334: case 5398: case 5335: case 5399: case 5336: case 5400: case 5337: case 5401: case 5338: case 5307: case 5371: case 5308: case 5372: case 5309: case 5373: case 5310: case 5374: case 5311: case 5375: case 5312: case 5376: case 5313: case 5377: case 5314: case 5378: case 5315: case 5379: case 5316: case 5380: case 5317: case 5381: case 5318: case 5382: case 5319: case 5383: case 5320: case 5384: case 5321: case 5385: case 5322: case 5386: case 5323: case 5387: case 5324: case 5388: case 5325: case 5389: case 5326: case 5390: case 5327: case 5391: case 5328: case 5392: case 5329: case 5402: return false;
				default: return true;
			}
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 5393: case 5330: case 5394: case 5331: case 5395: case 5332: case 5396: case 5333: case 5397: case 5334: case 5398: case 5335: case 5399: case 5336: case 5400: case 5337: case 5401: case 5338: case 5291: case 5355: case 5292: case 5356: case 5293: case 5357: case 5294: case 5358: case 5295: case 5359: case 5296: case 5360: case 5297: case 5361: case 5298: case 5362: case 5299: case 5363: case 5300: case 5364: case 5301: case 5365: case 5302: case 5366: case 5303: case 5367: case 5304: case 5368: case 5305: case 5369: case 5306: case 5370: case 5323: case 5387: case 5324: case 5388: case 5325: case 5389: case 5326: case 5390: case 5327: case 5391: case 5328: case 5392: case 5329: case 5402: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 5331: case 5395: case 5332: case 5396: case 5333: case 5397: case 5334: case 5398: case 5335: case 5399: case 5336: case 5400: case 5337: case 5401: case 5338: case 5283: case 5347: case 5284: case 5348: case 5285: case 5349: case 5286: case 5350: case 5287: case 5351: case 5288: case 5352: case 5289: case 5353: case 5290: case 5354: case 5299: case 5363: case 5300: case 5364: case 5301: case 5365: case 5302: case 5366: case 5303: case 5367: case 5304: case 5368: case 5305: case 5369: case 5306: case 5370: case 5315: case 5379: case 5316: case 5380: case 5317: case 5381: case 5318: case 5382: case 5319: case 5383: case 5320: case 5384: case 5321: case 5385: case 5322: case 5386: case 5402: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 5393: case 5330: case 5394: case 5335: case 5399: case 5336: case 5400: case 5337: case 5401: case 5338: case 5279: case 5343: case 5280: case 5344: case 5281: case 5345: case 5282: case 5346: case 5287: case 5351: case 5288: case 5352: case 5289: case 5353: case 5290: case 5354: case 5295: case 5359: case 5296: case 5360: case 5297: case 5361: case 5298: case 5362: case 5303: case 5367: case 5304: case 5368: case 5305: case 5369: case 5306: case 5370: case 5311: case 5375: case 5312: case 5376: case 5313: case 5377: case 5314: case 5378: case 5319: case 5383: case 5320: case 5384: case 5321: case 5385: case 5322: case 5386: case 5327: case 5391: case 5328: case 5392: case 5329: case 5402: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 5393: case 5330: case 5394: case 5333: case 5397: case 5334: case 5398: case 5337: case 5401: case 5338: case 5277: case 5341: case 5278: case 5342: case 5281: case 5345: case 5282: case 5346: case 5285: case 5349: case 5286: case 5350: case 5289: case 5353: case 5290: case 5354: case 5293: case 5357: case 5294: case 5358: case 5297: case 5361: case 5298: case 5362: case 5301: case 5365: case 5302: case 5366: case 5305: case 5369: case 5306: case 5370: case 5309: case 5373: case 5310: case 5374: case 5313: case 5377: case 5314: case 5378: case 5317: case 5381: case 5318: case 5382: case 5321: case 5385: case 5322: case 5386: case 5325: case 5389: case 5326: case 5390: case 5329: case 5402: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 5330: case 5394: case 5332: case 5396: case 5334: case 5398: case 5336: case 5400: case 5338: case 5276: case 5340: case 5278: case 5342: case 5280: case 5344: case 5282: case 5346: case 5284: case 5348: case 5286: case 5350: case 5288: case 5352: case 5290: case 5354: case 5292: case 5356: case 5294: case 5358: case 5296: case 5360: case 5298: case 5362: case 5300: case 5364: case 5302: case 5366: case 5304: case 5368: case 5306: case 5370: case 5308: case 5372: case 5310: case 5374: case 5312: case 5376: case 5314: case 5378: case 5316: case 5380: case 5318: case 5382: case 5320: case 5384: case 5322: case 5386: case 5324: case 5388: case 5326: case 5390: case 5328: case 5392: case 5402: return false;
				default: return true;
			}
		}
	}
	namespace TripwireHook
	{
		short TripwireHook()
		{
			return 5268;
		}
		bool Attached(short ID)
		{
			switch (ID)
			{
				case 5267: case 5268: case 5269: case 5270: case 5271: case 5272: case 5273: case 5274: return false;
				default: return true;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 5271: case 5272: case 5263: case 5264: return eBlockFace::BLOCK_FACE_XM;
				case 5266: case 5273: case 5265: case 5274: return eBlockFace::BLOCK_FACE_XP;
				case 5267: case 5268: case 5259: case 5260: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 5266: case 5268: case 5270: case 5272: case 5260: case 5262: case 5264: case 5274: return false;
				default: return true;
			}
		}
	}
	namespace TubeCoral
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9531: return false;
				default: return true;
			}
		}
	}
	namespace TubeCoralBlock
	{
	}
	namespace TubeCoralFan
	{
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9551: return false;
				default: return true;
			}
		}
	}
	namespace TubeCoralWallFan
	{
		short TubeCoralWallFan()
		{
			return 9600;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9604: case 9605: return eBlockFace::BLOCK_FACE_XM;
				case 9606: case 9607: return eBlockFace::BLOCK_FACE_XP;
				case 9600: case 9601: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 9603: case 9601: case 9605: case 9607: return false;
				default: return true;
			}
		}
	}
	namespace TurtleEgg
	{
		short TurtleEgg()
		{
			return 9498;
		}
		unsigned char Eggs(short ID)
		{
			switch (ID)
			{
				case 9499: case 9498: case 9500: return 1;
				case 9501: case 9503: case 9502: return 2;
				case 9505: case 9504: case 9506: return 3;
				default: return 4;
			}
		}
		unsigned char Hatch(short ID)
		{
			switch (ID)
			{
				case 9501: case 9507: case 9498: case 9504: return 0;
				case 9499: case 9505: case 9502: case 9508: return 1;
				default: return 2;
			}
		}
	}
	namespace TwistingVines
	{
		short TwistingVines()
		{
			return 15017;
		}
		unsigned char Age(short ID)
		{
			switch (ID)
			{
				case 15017: return 0;
				case 15018: return 1;
				case 15027: return 10;
				case 15028: return 11;
				case 15029: return 12;
				case 15030: return 13;
				case 15031: return 14;
				case 15032: return 15;
				case 15033: return 16;
				case 15034: return 17;
				case 15035: return 18;
				case 15036: return 19;
				case 15019: return 2;
				case 15037: return 20;
				case 15038: return 21;
				case 15039: return 22;
				case 15040: return 23;
				case 15041: return 24;
				case 15042: return 25;
				case 15020: return 3;
				case 15021: return 4;
				case 15022: return 5;
				case 15023: return 6;
				case 15024: return 7;
				case 15025: return 8;
				default: return 9;
			}
		}
	}
	namespace TwistingVinesPlant
	{
	}
	namespace Vine
	{
		short Vine()
		{
			return 4819;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 4804: case 4808: case 4812: case 4816: case 4805: case 4809: case 4813: case 4817: case 4806: case 4810: case 4814: case 4818: case 4807: case 4811: case 4815: case 4819: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 4796: case 4800: case 4812: case 4816: case 4797: case 4801: case 4813: case 4817: case 4798: case 4802: case 4814: case 4818: case 4799: case 4803: case 4815: case 4819: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 4792: case 4800: case 4808: case 4816: case 4793: case 4801: case 4809: case 4817: case 4794: case 4802: case 4810: case 4818: case 4795: case 4803: case 4811: case 4819: return false;
				default: return true;
			}
		}
		bool Up(short ID)
		{
			switch (ID)
			{
				case 4790: case 4794: case 4798: case 4802: case 4806: case 4810: case 4814: case 4818: case 4791: case 4795: case 4799: case 4803: case 4807: case 4811: case 4815: case 4819: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 4789: case 4793: case 4797: case 4801: case 4805: case 4809: case 4813: case 4817: case 4791: case 4795: case 4799: case 4803: case 4807: case 4811: case 4815: case 4819: return false;
				default: return true;
			}
		}
	}
	namespace VoidAir
	{
	}
	namespace WallTorch
	{
		short WallTorch()
		{
			return 1436;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1438: return eBlockFace::BLOCK_FACE_XM;
				case 1439: return eBlockFace::BLOCK_FACE_XP;
				case 1436: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace WarpedButton
	{
		short WarpedButton()
		{
			return 15512;
		}
		enum Face Face(short ID)
		{
			switch (ID)
			{
				case 15521: case 15522: case 15523: case 15524: case 15525: case 15526: case 15519: case 15520: return Face::Ceiling;
				case 15505: case 15506: case 15507: case 15508: case 15509: case 15510: case 15503: case 15504: return Face::Floor;
				default: return Face::Wall;
			}
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 15507: case 15515: case 15523: case 15508: case 15516: case 15524: return eBlockFace::BLOCK_FACE_XM;
				case 15509: case 15517: case 15525: case 15510: case 15518: case 15526: return eBlockFace::BLOCK_FACE_XP;
				case 15503: case 15511: case 15519: case 15504: case 15512: case 15520: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 15506: case 15514: case 15522: case 15508: case 15516: case 15524: case 15510: case 15518: case 15526: case 15504: case 15512: case 15520: return false;
				default: return true;
			}
		}
	}
	namespace WarpedDoor
	{
		short WarpedDoor()
		{
			return 15602;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 15633: case 15634: case 15635: case 15636: case 15637: case 15638: case 15623: case 15624: case 15625: case 15626: case 15627: case 15628: case 15629: case 15630: case 15631: case 15632: return eBlockFace::BLOCK_FACE_XM;
				case 15639: case 15640: case 15641: case 15642: case 15643: case 15644: case 15645: case 15646: case 15647: case 15648: case 15649: case 15650: case 15651: case 15652: case 15653: case 15654: return eBlockFace::BLOCK_FACE_XP;
				case 15602: case 15603: case 15604: case 15605: case 15606: case 15591: case 15592: case 15593: case 15594: case 15595: case 15596: case 15597: case 15598: case 15599: case 15600: case 15601: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 15633: case 15602: case 15634: case 15603: case 15635: case 15604: case 15636: case 15605: case 15637: case 15606: case 15638: case 15615: case 15647: case 15616: case 15648: case 15617: case 15649: case 15618: case 15650: case 15619: case 15651: case 15620: case 15652: case 15621: case 15653: case 15622: case 15599: case 15631: case 15600: case 15632: case 15601: case 15654: return Half::Lower;
				default: return Half::Upper;
			}
		}
		enum Hinge Hinge(short ID)
		{
			switch (ID)
			{
				case 15633: case 15602: case 15634: case 15607: case 15639: case 15608: case 15640: case 15609: case 15641: case 15610: case 15642: case 15615: case 15647: case 15616: case 15648: case 15617: case 15649: case 15618: case 15650: case 15591: case 15623: case 15592: case 15624: case 15593: case 15625: case 15594: case 15626: case 15599: case 15631: case 15600: case 15632: case 15601: return Hinge::Left;
				default: return Hinge::Right;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 15633: case 15602: case 15634: case 15605: case 15637: case 15606: case 15638: case 15609: case 15641: case 15610: case 15642: case 15613: case 15645: case 15614: case 15646: case 15617: case 15649: case 15618: case 15650: case 15621: case 15653: case 15622: case 15593: case 15625: case 15594: case 15626: case 15597: case 15629: case 15598: case 15630: case 15601: case 15654: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 15602: case 15634: case 15604: case 15636: case 15606: case 15638: case 15608: case 15640: case 15610: case 15642: case 15612: case 15644: case 15614: case 15646: case 15616: case 15648: case 15618: case 15650: case 15620: case 15652: case 15622: case 15592: case 15624: case 15594: case 15626: case 15596: case 15628: case 15598: case 15630: case 15600: case 15632: case 15654: return false;
				default: return true;
			}
		}
	}
	namespace WarpedFence
	{
		short WarpedFence()
		{
			return 15126;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 15125: case 15118: case 15111: case 15119: case 15112: case 15120: case 15113: case 15121: case 15114: case 15122: case 15115: case 15123: case 15116: case 15124: case 15117: case 15126: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 15125: case 15110: case 15103: case 15119: case 15104: case 15120: case 15105: case 15121: case 15106: case 15122: case 15107: case 15123: case 15108: case 15124: case 15109: case 15126: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 15125: case 15102: case 15110: case 15118: case 15099: case 15107: case 15115: case 15123: case 15100: case 15108: case 15116: case 15124: case 15101: case 15109: case 15117: case 15126: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 15125: case 15102: case 15110: case 15118: case 15097: case 15105: case 15113: case 15121: case 15098: case 15106: case 15114: case 15122: case 15101: case 15109: case 15117: case 15126: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 15102: case 15110: case 15118: case 15096: case 15104: case 15112: case 15120: case 15098: case 15106: case 15114: case 15122: case 15100: case 15108: case 15116: case 15124: case 15126: return false;
				default: return true;
			}
		}
	}
	namespace WarpedFenceGate
	{
		short WarpedFenceGate()
		{
			return 15294;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 15304: case 15305: case 15306: case 15307: case 15308: case 15309: case 15310: case 15303: return eBlockFace::BLOCK_FACE_XM;
				case 15311: case 15312: case 15313: case 15314: case 15315: case 15316: case 15317: case 15318: return eBlockFace::BLOCK_FACE_XP;
				case 15288: case 15289: case 15290: case 15291: case 15292: case 15293: case 15294: case 15287: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool InWall(short ID)
		{
			switch (ID)
			{
				case 15291: case 15299: case 15307: case 15315: case 15292: case 15300: case 15308: case 15316: case 15293: case 15301: case 15309: case 15317: case 15294: case 15302: case 15310: case 15318: return false;
				default: return true;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 15289: case 15297: case 15305: case 15313: case 15290: case 15298: case 15306: case 15314: case 15293: case 15301: case 15309: case 15317: case 15294: case 15302: case 15310: case 15318: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 15288: case 15296: case 15304: case 15312: case 15290: case 15298: case 15306: case 15314: case 15292: case 15300: case 15308: case 15316: case 15294: case 15302: case 15310: case 15318: return false;
				default: return true;
			}
		}
	}
	namespace WarpedFungus
	{
	}
	namespace WarpedHyphae
	{
		short WarpedHyphae()
		{
			return 14965;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 14964: return Axis::X;
				case 14965: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace WarpedNylium
	{
	}
	namespace WarpedPlanks
	{
	}
	namespace WarpedPressurePlate
	{
		short WarpedPressurePlate()
		{
			return 15062;
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 15062: return false;
				default: return true;
			}
		}
	}
	namespace WarpedRoots
	{
	}
	namespace WarpedSign
	{
		short WarpedSign()
		{
			return 15688;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 15687: case 15688: return 0;
				case 15689: case 15690: return 1;
				case 15707: case 15708: return 10;
				case 15709: case 15710: return 11;
				case 15711: case 15712: return 12;
				case 15714: case 15713: return 13;
				case 15715: case 15716: return 14;
				case 15717: case 15718: return 15;
				case 15691: case 15692: return 2;
				case 15693: case 15694: return 3;
				case 15695: case 15696: return 4;
				case 15697: case 15698: return 5;
				case 15699: case 15700: return 6;
				case 15701: case 15702: return 7;
				case 15703: case 15704: return 8;
				default: return 9;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 15714: case 15692: case 15700: case 15708: case 15716: case 15694: case 15702: case 15710: case 15688: case 15696: case 15704: case 15712: case 15690: case 15698: case 15706: case 15718: return false;
				default: return true;
			}
		}
	}
	namespace WarpedSlab
	{
		short WarpedSlab()
		{
			return 15056;
		}
		enum Type Type(short ID)
		{
			switch (ID)
			{
				case 15056: case 15055: return Type::Bottom;
				case 15057: case 15058: return Type::Double;
				default: return Type::Top;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 15056: case 15054: case 15058: return false;
				default: return true;
			}
		}
	}
	namespace WarpedStairs
	{
		short WarpedStairs()
		{
			return 15410;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 15439: case 15440: case 15441: case 15442: case 15443: case 15444: case 15445: case 15446: case 15447: case 15448: case 15449: case 15450: case 15451: case 15452: case 15453: case 15454: case 15455: case 15456: case 15457: case 15458: return eBlockFace::BLOCK_FACE_XM;
				case 15459: case 15460: case 15461: case 15462: case 15463: case 15464: case 15465: case 15466: case 15467: case 15468: case 15469: case 15470: case 15471: case 15472: case 15473: case 15474: case 15475: case 15476: case 15477: case 15478: return eBlockFace::BLOCK_FACE_XP;
				case 15399: case 15400: case 15401: case 15402: case 15403: case 15404: case 15405: case 15406: case 15407: case 15408: case 15409: case 15410: case 15411: case 15412: case 15413: case 15414: case 15415: case 15416: case 15417: case 15418: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 15429: case 15430: case 15431: case 15432: case 15433: case 15434: case 15435: case 15436: case 15437: case 15438: case 15449: case 15450: case 15451: case 15452: case 15453: case 15454: case 15455: case 15456: case 15457: case 15458: case 15469: case 15470: case 15471: case 15472: case 15473: case 15474: case 15475: case 15476: case 15477: case 15478: case 15409: case 15410: case 15411: case 15412: case 15413: case 15414: case 15415: case 15416: case 15417: case 15418: return Half::Bottom;
				default: return Half::Top;
			}
		}
		enum Shape Shape(short ID)
		{
			switch (ID)
			{
				case 15421: case 15422: case 15431: case 15432: case 15441: case 15442: case 15451: case 15452: case 15461: case 15462: case 15471: case 15472: case 15401: case 15402: case 15411: case 15412: return Shape::InnerLeft;
				case 15423: case 15424: case 15433: case 15434: case 15443: case 15444: case 15453: case 15454: case 15463: case 15464: case 15473: case 15474: case 15403: case 15404: case 15413: case 15414: return Shape::InnerRight;
				case 15425: case 15426: case 15435: case 15436: case 15445: case 15446: case 15455: case 15456: case 15465: case 15466: case 15475: case 15476: case 15405: case 15406: case 15415: case 15416: return Shape::OuterLeft;
				case 15427: case 15428: case 15437: case 15438: case 15447: case 15448: case 15457: case 15458: case 15467: case 15468: case 15477: case 15478: case 15407: case 15408: case 15417: case 15418: return Shape::OuterRight;
				default: return Shape::Straight;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 15422: case 15424: case 15426: case 15428: case 15430: case 15432: case 15434: case 15436: case 15438: case 15440: case 15442: case 15444: case 15446: case 15448: case 15450: case 15452: case 15454: case 15456: case 15458: case 15460: case 15462: case 15464: case 15466: case 15468: case 15470: case 15472: case 15474: case 15476: case 15478: case 15400: case 15402: case 15404: case 15406: case 15408: case 15410: case 15412: case 15414: case 15416: case 15418: case 15420: return false;
				default: return true;
			}
		}
	}
	namespace WarpedStem
	{
		short WarpedStem()
		{
			return 14959;
		}
		enum Axis Axis(short ID)
		{
			switch (ID)
			{
				case 14958: return Axis::X;
				case 14959: return Axis::Y;
				default: return Axis::Z;
			}
		}
	}
	namespace WarpedTrapdoor
	{
		short WarpedTrapdoor()
		{
			return 15206;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 15224: case 15225: case 15226: case 15227: case 15228: case 15229: case 15230: case 15231: case 15232: case 15233: case 15234: case 15235: case 15236: case 15237: case 15238: case 15223: return eBlockFace::BLOCK_FACE_XM;
				case 15239: case 15240: case 15241: case 15242: case 15243: case 15244: case 15245: case 15246: case 15247: case 15248: case 15249: case 15250: case 15251: case 15252: case 15253: case 15254: return eBlockFace::BLOCK_FACE_XP;
				case 15192: case 15193: case 15194: case 15195: case 15196: case 15197: case 15198: case 15199: case 15200: case 15201: case 15202: case 15203: case 15204: case 15205: case 15206: case 15191: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		enum Half Half(short ID)
		{
			switch (ID)
			{
				case 15199: case 15231: case 15200: case 15232: case 15201: case 15233: case 15202: case 15234: case 15203: case 15235: case 15204: case 15236: case 15205: case 15237: case 15206: case 15238: case 15215: case 15247: case 15216: case 15248: case 15217: case 15249: case 15218: case 15250: case 15219: case 15251: case 15220: case 15252: case 15221: case 15253: case 15222: case 15254: return Half::Bottom;
				default: return Half::Top;
			}
		}
		bool Open(short ID)
		{
			switch (ID)
			{
				case 15195: case 15227: case 15196: case 15228: case 15197: case 15229: case 15198: case 15230: case 15203: case 15235: case 15204: case 15236: case 15205: case 15237: case 15206: case 15238: case 15211: case 15243: case 15212: case 15244: case 15213: case 15245: case 15214: case 15246: case 15219: case 15251: case 15220: case 15252: case 15221: case 15253: case 15222: case 15254: return false;
				default: return true;
			}
		}
		bool Powered(short ID)
		{
			switch (ID)
			{
				case 15193: case 15225: case 15194: case 15226: case 15197: case 15229: case 15198: case 15230: case 15201: case 15233: case 15202: case 15234: case 15205: case 15237: case 15206: case 15238: case 15209: case 15241: case 15210: case 15242: case 15213: case 15245: case 15214: case 15246: case 15217: case 15249: case 15218: case 15250: case 15221: case 15253: case 15222: case 15254: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 15192: case 15224: case 15194: case 15226: case 15196: case 15228: case 15198: case 15230: case 15200: case 15232: case 15202: case 15234: case 15204: case 15236: case 15206: case 15238: case 15208: case 15240: case 15210: case 15242: case 15212: case 15244: case 15214: case 15246: case 15216: case 15248: case 15218: case 15250: case 15220: case 15252: case 15222: case 15254: return false;
				default: return true;
			}
		}
	}
	namespace WarpedWallSign
	{
		short WarpedWallSign()
		{
			return 15728;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 15731: case 15732: return eBlockFace::BLOCK_FACE_XM;
				case 15733: case 15734: return eBlockFace::BLOCK_FACE_XP;
				case 15728: case 15727: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 15728: case 15732: case 15730: case 15734: return false;
				default: return true;
			}
		}
	}
	namespace WarpedWartBlock
	{
	}
	namespace Water
	{
		short Water()
		{
			return 34;
		}
		unsigned char Level(short ID)
		{
			switch (ID)
			{
				case 34: return 0;
				case 35: return 1;
				case 44: return 10;
				case 45: return 11;
				case 46: return 12;
				case 47: return 13;
				case 48: return 14;
				case 49: return 15;
				case 36: return 2;
				case 37: return 3;
				case 38: return 4;
				case 39: return 5;
				case 40: return 6;
				case 41: return 7;
				case 42: return 8;
				default: return 9;
			}
		}
	}
	namespace WeepingVines
	{
		short WeepingVines()
		{
			return 14990;
		}
		unsigned char Age(short ID)
		{
			switch (ID)
			{
				case 14990: return 0;
				case 14991: return 1;
				case 15000: return 10;
				case 15001: return 11;
				case 15002: return 12;
				case 15003: return 13;
				case 15004: return 14;
				case 15005: return 15;
				case 15006: return 16;
				case 15007: return 17;
				case 15008: return 18;
				case 15009: return 19;
				case 14992: return 2;
				case 15010: return 20;
				case 15011: return 21;
				case 15012: return 22;
				case 15013: return 23;
				case 15014: return 24;
				case 15015: return 25;
				case 14993: return 3;
				case 14994: return 4;
				case 14995: return 5;
				case 14996: return 6;
				case 14997: return 7;
				case 14998: return 8;
				default: return 9;
			}
		}
	}
	namespace WeepingVinesPlant
	{
	}
	namespace WetSponge
	{
	}
	namespace Wheat
	{
		short Wheat()
		{
			return 3357;
		}
		unsigned char Age(short ID)
		{
			switch (ID)
			{
				case 3357: return 0;
				case 3358: return 1;
				case 3359: return 2;
				case 3360: return 3;
				case 3361: return 4;
				case 3362: return 5;
				case 3363: return 6;
				default: return 7;
			}
		}
	}
	namespace WhiteBanner
	{
		short WhiteBanner()
		{
			return 7897;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 7897: return 0;
				case 7898: return 1;
				case 7907: return 10;
				case 7908: return 11;
				case 7909: return 12;
				case 7910: return 13;
				case 7911: return 14;
				case 7912: return 15;
				case 7899: return 2;
				case 7900: return 3;
				case 7901: return 4;
				case 7902: return 5;
				case 7903: return 6;
				case 7904: return 7;
				case 7905: return 8;
				default: return 9;
			}
		}
	}
	namespace WhiteBed
	{
		short WhiteBed()
		{
			return 1052;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1059: case 1060: case 1057: case 1058: return eBlockFace::BLOCK_FACE_XM;
				case 1062: case 1063: case 1061: case 1064: return eBlockFace::BLOCK_FACE_XP;
				case 1051: case 1052: case 1049: case 1050: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Occupied(short ID)
		{
			switch (ID)
			{
				case 1051: case 1055: case 1059: case 1063: case 1052: case 1056: case 1060: case 1064: return false;
				default: return true;
			}
		}
		enum Part Part(short ID)
		{
			switch (ID)
			{
				case 1062: case 1052: case 1056: case 1060: case 1050: case 1054: case 1058: case 1064: return Part::Foot;
				default: return Part::Head;
			}
		}
	}
	namespace WhiteCarpet
	{
	}
	namespace WhiteConcrete
	{
	}
	namespace WhiteConcretePowder
	{
	}
	namespace WhiteGlazedTerracotta
	{
		short WhiteGlazedTerracotta()
		{
			return 9374;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9376: return eBlockFace::BLOCK_FACE_XM;
				case 9377: return eBlockFace::BLOCK_FACE_XP;
				case 9374: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace WhiteShulkerBox
	{
		short WhiteShulkerBox()
		{
			return 9282;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9281: return eBlockFace::BLOCK_FACE_XM;
				case 9279: return eBlockFace::BLOCK_FACE_XP;
				case 9283: return eBlockFace::BLOCK_FACE_YM;
				case 9282: return eBlockFace::BLOCK_FACE_YP;
				case 9278: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace WhiteStainedGlass
	{
	}
	namespace WhiteStainedGlassPane
	{
		short WhiteStainedGlassPane()
		{
			return 6894;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 6881: case 6885: case 6889: case 6893: case 6882: case 6886: case 6890: case 6879: case 6883: case 6887: case 6891: case 6880: case 6884: case 6888: case 6892: case 6894: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 6873: case 6877: case 6889: case 6893: case 6874: case 6878: case 6890: case 6871: case 6875: case 6887: case 6891: case 6872: case 6876: case 6888: case 6892: case 6894: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 6869: case 6877: case 6885: case 6893: case 6870: case 6878: case 6886: case 6867: case 6875: case 6883: case 6891: case 6868: case 6876: case 6884: case 6892: case 6894: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 6869: case 6873: case 6877: case 6881: case 6885: case 6889: case 6893: case 6866: case 6870: case 6874: case 6878: case 6882: case 6886: case 6890: case 6865: case 6894: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 6866: case 6870: case 6874: case 6878: case 6882: case 6886: case 6890: case 6864: case 6868: case 6872: case 6876: case 6880: case 6884: case 6888: case 6892: case 6894: return false;
				default: return true;
			}
		}
	}
	namespace WhiteTerracotta
	{
	}
	namespace WhiteTulip
	{
	}
	namespace WhiteWallBanner
	{
		short WhiteWallBanner()
		{
			return 8153;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8155: return eBlockFace::BLOCK_FACE_XM;
				case 8156: return eBlockFace::BLOCK_FACE_XP;
				case 8153: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace WhiteWool
	{
	}
	namespace WitherRose
	{
	}
	namespace WitherSkeletonSkull
	{
		short WitherSkeletonSkull()
		{
			return 6510;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 6510: return 0;
				case 6511: return 1;
				case 6520: return 10;
				case 6521: return 11;
				case 6522: return 12;
				case 6523: return 13;
				case 6524: return 14;
				case 6525: return 15;
				case 6512: return 2;
				case 6513: return 3;
				case 6514: return 4;
				case 6515: return 5;
				case 6516: return 6;
				case 6517: return 7;
				case 6518: return 8;
				default: return 9;
			}
		}
	}
	namespace WitherSkeletonWallSkull
	{
		short WitherSkeletonWallSkull()
		{
			return 6526;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6528: return eBlockFace::BLOCK_FACE_XM;
				case 6529: return eBlockFace::BLOCK_FACE_XP;
				case 6526: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace YellowBanner
	{
		short YellowBanner()
		{
			return 7961;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 7961: return 0;
				case 7962: return 1;
				case 7971: return 10;
				case 7972: return 11;
				case 7973: return 12;
				case 7974: return 13;
				case 7975: return 14;
				case 7976: return 15;
				case 7963: return 2;
				case 7964: return 3;
				case 7965: return 4;
				case 7966: return 5;
				case 7967: return 6;
				case 7968: return 7;
				case 7969: return 8;
				default: return 9;
			}
		}
	}
	namespace YellowBed
	{
		short YellowBed()
		{
			return 1116;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 1122: case 1123: case 1124: case 1121: return eBlockFace::BLOCK_FACE_XM;
				case 1126: case 1127: case 1125: case 1128: return eBlockFace::BLOCK_FACE_XP;
				case 1115: case 1116: case 1113: case 1114: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
		bool Occupied(short ID)
		{
			switch (ID)
			{
				case 1115: case 1119: case 1123: case 1127: case 1116: case 1120: case 1124: case 1128: return false;
				default: return true;
			}
		}
		enum Part Part(short ID)
		{
			switch (ID)
			{
				case 1122: case 1126: case 1116: case 1120: case 1124: case 1114: case 1118: case 1128: return Part::Foot;
				default: return Part::Head;
			}
		}
	}
	namespace YellowCarpet
	{
	}
	namespace YellowConcrete
	{
	}
	namespace YellowConcretePowder
	{
	}
	namespace YellowGlazedTerracotta
	{
		short YellowGlazedTerracotta()
		{
			return 9390;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9392: return eBlockFace::BLOCK_FACE_XM;
				case 9393: return eBlockFace::BLOCK_FACE_XP;
				case 9390: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace YellowShulkerBox
	{
		short YellowShulkerBox()
		{
			return 9306;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 9305: return eBlockFace::BLOCK_FACE_XM;
				case 9303: return eBlockFace::BLOCK_FACE_XP;
				case 9307: return eBlockFace::BLOCK_FACE_YM;
				case 9306: return eBlockFace::BLOCK_FACE_YP;
				case 9302: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace YellowStainedGlass
	{
	}
	namespace YellowStainedGlassPane
	{
		short YellowStainedGlassPane()
		{
			return 7022;
		}
		bool East(short ID)
		{
			switch (ID)
			{
				case 7009: case 7013: case 7017: case 7021: case 7010: case 7014: case 7018: case 7007: case 7011: case 7015: case 7019: case 7008: case 7012: case 7016: case 7020: case 7022: return false;
				default: return true;
			}
		}
		bool North(short ID)
		{
			switch (ID)
			{
				case 7001: case 7005: case 7017: case 7021: case 7002: case 7006: case 7018: case 6999: case 7003: case 7015: case 7019: case 7000: case 7004: case 7016: case 7020: case 7022: return false;
				default: return true;
			}
		}
		bool South(short ID)
		{
			switch (ID)
			{
				case 6997: case 7005: case 7013: case 7021: case 6998: case 7006: case 7014: case 6995: case 7003: case 7011: case 7019: case 6996: case 7004: case 7012: case 7020: case 7022: return false;
				default: return true;
			}
		}
		bool Waterlogged(short ID)
		{
			switch (ID)
			{
				case 6993: case 6997: case 7001: case 7005: case 7009: case 7013: case 7017: case 7021: case 6994: case 6998: case 7002: case 7006: case 7010: case 7014: case 7018: case 7022: return false;
				default: return true;
			}
		}
		bool West(short ID)
		{
			switch (ID)
			{
				case 6994: case 6998: case 7002: case 7006: case 7010: case 7014: case 7018: case 6992: case 6996: case 7000: case 7004: case 7008: case 7012: case 7016: case 7020: case 7022: return false;
				default: return true;
			}
		}
	}
	namespace YellowTerracotta
	{
	}
	namespace YellowWallBanner
	{
		short YellowWallBanner()
		{
			return 8169;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 8171: return eBlockFace::BLOCK_FACE_XM;
				case 8172: return eBlockFace::BLOCK_FACE_XP;
				case 8169: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
	namespace YellowWool
	{
	}
	namespace ZombieHead
	{
		short ZombieHead()
		{
			return 6530;
		}
		unsigned char Rotation(short ID)
		{
			switch (ID)
			{
				case 6530: return 0;
				case 6531: return 1;
				case 6540: return 10;
				case 6541: return 11;
				case 6542: return 12;
				case 6543: return 13;
				case 6544: return 14;
				case 6545: return 15;
				case 6532: return 2;
				case 6533: return 3;
				case 6534: return 4;
				case 6535: return 5;
				case 6536: return 6;
				case 6537: return 7;
				case 6538: return 8;
				default: return 9;
			}
		}
	}
	namespace ZombieWallHead
	{
		short ZombieWallHead()
		{
			return 6546;
		}
		eBlockFace Facing(short ID)
		{
			switch (ID)
			{
				case 6548: return eBlockFace::BLOCK_FACE_XM;
				case 6549: return eBlockFace::BLOCK_FACE_XP;
				case 6546: return eBlockFace::BLOCK_FACE_ZM;
				default: return eBlockFace::BLOCK_FACE_ZP;
			}
		}
	}
}
