/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface PPMockRTLocationOfInterestVisit : NSObject {

	NSDate* _entryDate;
	NSDate* _exitDate;

}

@property (nonatomic,retain) NSDate * entryDate;              //@synthesize entryDate=_entryDate - In the implementation block
@property (nonatomic,retain) NSDate * exitDate;               //@synthesize exitDate=_exitDate - In the implementation block
+(id)mockLocationOfInterestVisitWithEntryDate:(id)arg1 exitDate:(id)arg2 ;
-(void)setExitDate:(NSDate *)arg1 ;
-(void)setEntryDate:(NSDate *)arg1 ;
-(NSDate *)exitDate;
-(NSDate *)entryDate;
@end

