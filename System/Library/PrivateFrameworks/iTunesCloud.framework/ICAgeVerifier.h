/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface ICAgeVerifier : NSObject <NSCopying> {

	long long _status;
	NSDate* _verificationExpirationDate;

}

@property (assign,nonatomic) long long status;                                                           //@synthesize status=_status - In the implementation block
@property (getter=isExplicitContentAllowed,nonatomic,readonly) BOOL explicitContentAllowed; 
@property (nonatomic,readonly) NSDate * verificationExpirationDate;                                      //@synthesize verificationExpirationDate=_verificationExpirationDate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(BOOL)isExplicitContentAllowed;
-(long long)status;
-(id)initWithExpirationDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)verificationExpirationDate;
-(void)runAgeVerification;
-(id)description;
@end

