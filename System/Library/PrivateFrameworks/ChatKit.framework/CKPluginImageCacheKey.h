/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKPluginImageCacheKey : NSObject {

	NSString* _stringIdentifier;
	long long _integerIdentifier;

}

@property (nonatomic,retain) NSString * stringIdentifier;              //@synthesize stringIdentifier=_stringIdentifier - In the implementation block
@property (assign,nonatomic) long long integerIdentifier;              //@synthesize integerIdentifier=_integerIdentifier - In the implementation block
+(id)keyWithStringIdentifier:(id)arg1 integerIdentifier:(long long)arg2 ;
-(long long)integerIdentifier;
-(NSString *)stringIdentifier;
-(void)setIntegerIdentifier:(long long)arg1 ;
-(id)initWithStringIdentifier:(id)arg1 integerIdentifier:(long long)arg2 ;
-(void)setStringIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

