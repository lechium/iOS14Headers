/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FMFNoNetworkAlert : NSObject {

	BOOL _globalCellularEnabled;

}

@property (assign,getter=isGlobalCellularEnabled,nonatomic) BOOL globalCellularEnabled;              //@synthesize globalCellularEnabled=_globalCellularEnabled - In the implementation block
+(BOOL)isAirplaneModeEnabled;
+(unsigned long long)reasonForNoInternet;
+(id)alertInfoForInternetUnavailableReason:(unsigned long long)arg1 ;
+(BOOL)isGlobalCellularEnabled;
+(id)newAlertController;
-(BOOL)isGlobalCellularEnabled;
-(void)setGlobalCellularEnabled:(BOOL)arg1 ;
@end

