/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TipsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface TPSCollectionStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _canNotified;
	BOOL _skipFeature;
	NSString* _identifier;
	NSDate* _activatedDate;
	NSDate* _firstViewedDate;
	NSDate* _featuredDate;

}

@property (assign,nonatomic) BOOL canNotified;                    //@synthesize canNotified=_canNotified - In the implementation block
@property (assign,nonatomic) BOOL skipFeature;                    //@synthesize skipFeature=_skipFeature - In the implementation block
@property (nonatomic,copy) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDate * activatedDate;                //@synthesize activatedDate=_activatedDate - In the implementation block
@property (nonatomic,copy) NSDate * firstViewedDate;              //@synthesize firstViewedDate=_firstViewedDate - In the implementation block
@property (nonatomic,copy) NSDate * featuredDate;                 //@synthesize featuredDate=_featuredDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)featuredDate;
-(void)setCanNotified:(BOOL)arg1 ;
-(BOOL)skipFeature;
-(void)setSkipFeature:(BOOL)arg1 ;
-(void)setActivatedDate:(NSDate *)arg1 ;
-(void)setFeaturedDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)canNotified;
-(NSDate *)activatedDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)firstViewedDate;
-(void)setFirstViewedDate:(NSDate *)arg1 ;
@end
