/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:27 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SUDescriptor;


@protocol SUDownloadPolicy <NSObject>
@property (nonatomic,retain) SUDescriptor * descriptor; 
@property (assign,nonatomic) int cellularFeeAgreementStatus; 
@required
-(void)setDescriptor:(id)arg1;
-(id)initWithDescriptor:(id)arg1;
-(SUDescriptor *)descriptor;
-(BOOL)isDownloadable;
-(void)setCellularFeeAgreementStatus:(int)arg1;
-(int)cellularFeeAgreementStatus;
-(BOOL)isDownloadAllowableForCellular;
-(BOOL)isDownloadFreeForCellular;
-(BOOL)allowExpensiveNetwork;
-(BOOL)isDownloadAllowableForCellularRoaming;
-(BOOL)isDownloadAllowableForWiFi;
-(BOOL)isPowerRequired;
-(BOOL)hasEnoughDiskSpace;
-(BOOL)isDownloadAllowableForCellular2G;
-(BOOL)isSamePolicy:(id)arg1;
-(BOOL)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(BOOL*)arg2 powerRequired:(BOOL*)arg3;
-(unsigned long long)wifiOnlyPeriodInDays;
-(BOOL)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(BOOL*)arg2;

@end

