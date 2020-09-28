/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UABestAppSuggestionManagerResponseProtocol.h>

@class UABestAppSuggestionManager, NSString;

@interface UABestAppSuggestionManagerProxy : NSObject <UABestAppSuggestionManagerResponseProtocol> {

	UABestAppSuggestionManager* _weakManager;

}

@property (__weak) UABestAppSuggestionManager * weakManager;              //@synthesize weakManager=_weakManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)notifyBestAppsChanged:(id)arg1 when:(id)arg2 confidence:(double)arg3 ;
-(UABestAppSuggestionManager *)weakManager;
-(void)setWeakManager:(UABestAppSuggestionManager *)arg1 ;
@end
