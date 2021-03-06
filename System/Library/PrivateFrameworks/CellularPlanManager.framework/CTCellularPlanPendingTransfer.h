/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CTUserLabel;

@interface CTCellularPlanPendingTransfer : NSObject <NSSecureCoding> {

	NSString* _sourceIccid;
	NSString* _carrierName;
	NSString* _deviceName;
	CTUserLabel* _planLabel;
	NSString* _phoneNumber;
	NSString* _countryCode;
	long long _status;

}

@property (nonatomic,retain) NSString * sourceIccid;               //@synthesize sourceIccid=_sourceIccid - In the implementation block
@property (nonatomic,retain) NSString * carrierName;               //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) CTUserLabel * planLabel;              //@synthesize planLabel=_planLabel - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * countryCode;               //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) long long status;                     //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)deviceName;
-(CTUserLabel *)planLabel;
-(NSString *)sourceIccid;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setPlanLabel:(CTUserLabel *)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)countryCode;
-(void)setStatus:(long long)arg1 ;
-(long long)status;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)init;
-(void)setCarrierName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)carrierName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setSourceIccid:(NSString *)arg1 ;
@end

