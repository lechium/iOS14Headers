/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AMSEngagementDestination : NSObject <NSSecureCoding> {

	BOOL _allowsResponse;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL allowsResponse;                //@synthesize allowsResponse=_allowsResponse - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)allowsResponse;
-(void)setAllowsResponse:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
