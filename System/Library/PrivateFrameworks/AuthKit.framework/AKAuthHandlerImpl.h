/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AKAuthHandler.h>

@class NSString;

@interface AKAuthHandlerImpl : NSObject <AKAuthHandler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reauthenticateWithContext:(id)arg1 completionWithResults:(/*^block*/id)arg2 ;
-(id)buildReauthenticationContextFromContext:(id)arg1 error:(id*)arg2 ;
-(void)reauthenticateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
