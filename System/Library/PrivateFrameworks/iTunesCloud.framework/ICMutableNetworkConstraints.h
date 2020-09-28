/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/ICNetworkConstraints.h>

@interface ICMutableNetworkConstraints : ICNetworkConstraints
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSizeLimit:(id)arg1 forNetworkType:(long long)arg2 ;
-(void)setShouldAllowDataForAllNetworkTypes:(BOOL)arg1 ;
-(void)setShouldAllowDataForCellularNetworkTypes:(BOOL)arg1 ;
-(void)setShouldAllowDataForWiFiNetworkTypes:(BOOL)arg1 ;
-(void)setShouldAllowData:(BOOL)arg1 forNetworkType:(long long)arg2 ;
@end
