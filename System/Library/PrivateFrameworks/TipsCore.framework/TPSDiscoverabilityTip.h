/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSTip.h>

@class NSAttributedString, NSString, NSDictionary;

@interface TPSDiscoverabilityTip : TPSTip {

	NSAttributedString* _attributedString;
	NSString* _userLanguageCode;
	NSDictionary* _preconditions;

}

@property (nonatomic,copy) NSString * userLanguageCode;                          //@synthesize userLanguageCode=_userLanguageCode - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,copy) NSDictionary * preconditions;                         //@synthesize preconditions=_preconditions - In the implementation block
+(id)classSet;
+(BOOL)supportsSecureCoding;
-(NSAttributedString *)attributedString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 metadata:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUserLanguageCode:(NSString *)arg1 ;
-(void)setPreconditions:(NSDictionary *)arg1 ;
-(NSString *)userLanguageCode;
-(NSDictionary *)preconditions;
@end

