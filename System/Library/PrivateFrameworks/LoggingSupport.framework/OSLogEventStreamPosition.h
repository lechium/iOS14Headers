/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OSLogEventStreamPosition : NSObject <NSSecureCoding> {

	unsigned char _source[16];
	unsigned char _uuid[16];
	unsigned long long _ct;

}

@property (readonly) const char* sourceUUID; 
@property (readonly) const char* UUID; 
@property (readonly) unsigned long long continuousTime; 
+(BOOL)supportsSecureCoding;
-(id)initWithSource:(const char*)arg1 bootUUID:(const char*)arg2 time:(unsigned long long)arg3 ;
-(const char*)UUID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(const char*)sourceUUID;
-(unsigned long long)continuousTime;
@end

