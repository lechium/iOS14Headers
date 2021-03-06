/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSMutableSet;

@interface _MFCountableMatchesContext : NSObject {

	CFDictionaryRef _peopleCount;
	NSMutableSet* _popularPeople;
	long long _maxCount;

}

@property (assign,nonatomic) long long maxCount;              //@synthesize maxCount=_maxCount - In the implementation block
-(void)dealloc;
-(void)countInstances:(id)arg1 usingPredicate:(/*^block*/id)arg2 ;
-(id)highestMatches;
-(id)init;
-(void)setMaxCount:(long long)arg1 ;
-(long long)maxCount;
@end

