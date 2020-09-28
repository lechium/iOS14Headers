/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSString, NSNumber, NSDictionary;

@interface IDSSessionInvitationSentMetric : NSObject <CUTCoreAnalyticsMetric> {

	NSString* _guid;
	NSNumber* _numberOfRecipients;

}

@property (nonatomic,readonly) NSString * guid;                            //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSNumber * numberOfRecipients;              //@synthesize numberOfRecipients=_numberOfRecipients - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)guid;
-(NSNumber *)numberOfRecipients;
-(id)initWithGuid:(id)arg1 numberOfRecipients:(id)arg2 ;
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
@end
