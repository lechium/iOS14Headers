/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataNetworkEntry.h>

@class NSString;

@interface _UIStatusBarDataCellularEntry : _UIStatusBarDataNetworkEntry {

	BOOL _wifiCallingEnabled;
	BOOL _callForwardingEnabled;
	BOOL _showsSOSWhenDisabled;
	long long _type;
	NSString* _string;
	NSString* _crossfadeString;
	NSString* _badgeString;

}

@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * string;                         //@synthesize string=_string - In the implementation block
@property (nonatomic,copy) NSString * crossfadeString;                //@synthesize crossfadeString=_crossfadeString - In the implementation block
@property (nonatomic,copy) NSString * badgeString;                    //@synthesize badgeString=_badgeString - In the implementation block
@property (assign,nonatomic) BOOL wifiCallingEnabled;                 //@synthesize wifiCallingEnabled=_wifiCallingEnabled - In the implementation block
@property (assign,nonatomic) BOOL callForwardingEnabled;              //@synthesize callForwardingEnabled=_callForwardingEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsSOSWhenDisabled;               //@synthesize showsSOSWhenDisabled=_showsSOSWhenDisabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCallForwardingEnabled:(BOOL)arg1 ;
-(NSString *)string;
-(void)setBadgeString:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(void)setCrossfadeString:(NSString *)arg1 ;
-(id)_ui_descriptionBuilder;
-(NSString *)badgeString;
-(long long)type;
-(BOOL)wifiCallingEnabled;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setWifiCallingEnabled:(BOOL)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setShowsSOSWhenDisabled:(BOOL)arg1 ;
-(NSString *)crossfadeString;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)callForwardingEnabled;
-(unsigned long long)hash;
-(BOOL)showsSOSWhenDisabled;
@end
