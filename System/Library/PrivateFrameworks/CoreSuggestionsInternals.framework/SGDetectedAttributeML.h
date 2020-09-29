/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PMLTrainingProtocol;
@interface SGDetectedAttributeML : NSObject {

	id<PMLTrainingProtocol> _localTraining;

}
-(id)detectionFromMatch:(id)arg1 plainTextContent:(id)arg2 extractionInfo:(id)arg3 isUnlikelyPhone:(BOOL)arg4 ;
-(void)handleTextMessageContactSharingWithNegativeSample:(id)arg1 andLanguage:(id)arg2 ;
-(id)birthdayCongratsTextMessage:(id)arg1 andLanguage:(id)arg2 andHealthStore:(id)arg3 ;
-(id)detectionFromMessage:(id)arg1 ddMatch:(id)arg2 matchedContext:(id)arg3 withSupervision:(id)arg4 inConversation:(id)arg5 entityLanguage:(id)arg6 ;
-(id)init;
-(void)addSessionForTrainingWithSource:(id)arg1 label:(long long)arg2 language:(id)arg3 objective:(unsigned long long)arg4 spotlightRef:(id)arg5 embeddedFeaturizer:(/*^block*/id)arg6 ;
-(void)handleTextMessageContactSharing:(id)arg1 andMatch:(id)arg2 andContext:(id)arg3 andLanguage:(id)arg4 withSupervision:(id)arg5 ;
-(id)selfIdDetectionWithTextMessage:(id)arg1 inConversation:(id)arg2 withSupervision:(id)arg3 ;
-(id)initWithTraining:(id)arg1 ;
@end
