/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface _BSServiceOutgoingEndpoint : NSObject <NSCopying> {

	NSObject*<OS_xpc_object> _endpoint;
	NSString* _eDesc;
	unsigned _invalidationGeneration;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
