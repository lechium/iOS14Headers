/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDDiagnosticReportLogging.h>

@class NSString;

@interface HMDAssertionLogEvent : HMDLogEvent <HMDDiagnosticReportLogging> {

	NSString* _description;
	NSString* _reason;

}

@property (copy,readonly) NSString * diagnosticReportEventType; 
@property (copy,readonly) NSString * diagnosticReportEventSubType; 
@property (copy,readonly) NSString * reason;                                    //@synthesize reason=_reason - In the implementation block
+(id)identifier;
-(id)initWithReason:(id)arg1 ;
-(NSString *)reason;
-(id)description;
-(void)updateDiagnosticReportSignature:(id)arg1 ;
@end

