/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface WBSAllowedLegacyTLSHostManager : NSObject {

	NSUserDefaults* _browserDefaults;

}
-(id)initWithBrowserDefaults:(id)arg1 ;
-(BOOL)isLegacyTLSAllowedForHost:(id)arg1 ;
-(void)allowLegacyTLSForHost:(id)arg1 ;
-(void)clearAllLegacyTLSHosts;
-(void)clearLegacyTLSForHostIfPresent:(id)arg1 ;
-(void)clearLegacyTLSForHosts:(id)arg1 ;
@end

