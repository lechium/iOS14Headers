/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface STKSessionBehavior : NSObject <BSXPCCoding> {

	double _timeout;
	BOOL _shouldSendResponseUponDisplay;
	BOOL _dismissesAfterUserEvent;

}

@property (nonatomic,readonly) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) BOOL shouldSendResponseUponDisplay;              //@synthesize shouldSendResponseUponDisplay=_shouldSendResponseUponDisplay - In the implementation block
@property (nonatomic,readonly) BOOL dismissesAfterUserEvent;                    //@synthesize dismissesAfterUserEvent=_dismissesAfterUserEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timeout;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BOOL)dismissesAfterUserEvent;
-(BOOL)shouldSendResponseUponDisplay;
@end
