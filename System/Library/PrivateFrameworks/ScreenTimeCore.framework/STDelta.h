/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface STDelta : NSObject {

	NSString* _uniqueIdentifier;
	long long _changeType;
	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;                       //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) long long changeType;                          //@synthesize changeType=_changeType - In the implementation block
-(void)deleted;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(long long)changeType;
-(NSString *)uniqueIdentifier;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(NSDictionary *)dictionary;
-(void)changedWithDictionary:(id)arg1 ;
@end

