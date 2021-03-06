/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WK_RTCH264ProfileLevelId : NSObject {

	unsigned long long _profile;
	unsigned long long _level;
	NSString* _hexString;

}

@property (assign,nonatomic) unsigned long long profile;              //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic) unsigned long long level;                //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSString * hexString;                    //@synthesize hexString=_hexString - In the implementation block
-(void)setProfile:(unsigned long long)arg1 ;
-(unsigned long long)level;
-(unsigned long long)profile;
-(void)setLevel:(unsigned long long)arg1 ;
-(id)initWithHexString:(id)arg1 ;
-(NSString *)hexString;
-(void)setHexString:(NSString *)arg1 ;
-(id)initWithProfile:(unsigned long long)arg1 level:(unsigned long long)arg2 ;
@end

