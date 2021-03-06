/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSString;

@interface AFSiriDebugUIRequest : AFSiriRequest {

	NSString* _message;
	BOOL _frontmost;

}
+(BOOL)supportsSecureCoding;
-(id)createResponse;
-(id)initWithMessage:(id)arg1 makeAppFrontmost:(BOOL)arg2 ;
-(BOOL)_makeAppFrontmost;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)message;
@end

