/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject {

	NSMutableArray* _splitterDeviceList;
	BOOL _splitterEnabled;

}

@property (assign,nonatomic) BOOL splitterEnabled;                                               //@synthesize splitterEnabled=_splitterEnabled - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableSpeakerVerificationInSplitterMode; 
-(BOOL)shouldDisableSpeakerVerificationInSplitterMode;
-(void)setSplitterEnabled:(BOOL)arg1 ;
-(id)splitterDeviceList;
-(BOOL)splitterEnabled;
-(unsigned long long)splitterState;
-(id)init;
-(BOOL)_hasDeviceTemporaryPairedNotInContacts;
-(id)description;
-(void)addDeviceIntoSplitterDeviceList:(id)arg1 ;
@end

