/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CALNNotificationContent;

@interface CALNNotificationRequest : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	CALNNotificationContent* _content;

}

@property (nonatomic,copy,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) CALNNotificationContent * content;              //@synthesize content=_content - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestWithIdentifier:(id)arg1 content:(id)arg2 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CALNNotificationContent *)content;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_initWithIdentifier:(id)arg1 content:(id)arg2 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
@end
