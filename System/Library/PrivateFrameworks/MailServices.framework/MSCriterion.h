/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObject;
@class NSString;

@interface MSCriterion : NSObject <NSSecureCoding> {

	NSString* _type;
	NSString* _qualifier;
	id<NSObject> _criteria;

}
+(BOOL)supportsSecureCoding;
-(id)criteria;
-(id)qualifier;
-(id)init;
-(id)type;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithType:(id)arg1 qualifier:(id)arg2 expression:(id)arg3 ;
-(id)initWithCriteria:(id)arg1 allRequired:(BOOL)arg2 ;
-(id)description;
-(id)_initWithType:(id)arg1 qualifier:(id)arg2 criteria:(id)arg3 ;
@end
