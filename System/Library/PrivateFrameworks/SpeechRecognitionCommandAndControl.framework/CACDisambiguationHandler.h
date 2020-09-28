/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CACDisambiguationHandler : NSObject {

	NSArray* _labeledElements;
	/*^block*/id _chosenLabeledElementHandler;

}

@property (retain) NSArray * labeledElements;                           //@synthesize labeledElements=_labeledElements - In the implementation block
@property (nonatomic,copy) id chosenLabeledElementHandler;              //@synthesize chosenLabeledElementHandler=_chosenLabeledElementHandler - In the implementation block
-(NSArray *)labeledElements;
-(void)setLabeledElements:(NSArray *)arg1 ;
-(id)initWithLabeledElements:(id)arg1 ;
-(void)setChosenLabeledElementHandler:(id)arg1 ;
-(void)handleChosenLabeledElement:(id)arg1 ;
-(id)chosenLabeledElementHandler;
@end
