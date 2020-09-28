/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemStatusServer/SystemStatusServer-Structs.h>
#import <SystemStatusServer/STTelephonyCarrierBundleInfo.h>

@class NSString, NSArray;

@interface STMutableTelephonyCarrierBundleInfo : STTelephonyCarrierBundleInfo

@property (assign,nonatomic) BOOL LTEConnectionShows4G; 
@property (assign,getter=isReinitiatingActivationDisabled,nonatomic) BOOL reinitiatingActivationDisabled; 
@property (nonatomic,copy) NSString * customerServicePhoneNumber; 
@property (nonatomic,copy) NSArray * disabledApplicationIDs; 
@property (nonatomic,copy) NSString * carrierName; 
@property (nonatomic,copy) NSString * homeCountryCode; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDisabledApplicationIDs:(NSArray *)arg1 ;
-(void)setCustomerServicePhoneNumber:(NSString *)arg1 ;
-(void)setCarrierName:(NSString *)arg1 ;
-(void)setReinitiatingActivationDisabled:(BOOL)arg1 ;
-(void)setLTEConnectionShows4G:(BOOL)arg1 ;
-(void)setHomeCountryCode:(NSString *)arg1 ;
@end
