/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AKCarrierBundlePhoneCertificate : NSObject {

	NSString* _phoneCertificate;
	long long _slotID;

}

@property (nonatomic,retain) NSString * phoneCertificate;              //@synthesize phoneCertificate=_phoneCertificate - In the implementation block
@property (assign,nonatomic) long long slotID;                         //@synthesize slotID=_slotID - In the implementation block
-(long long)slotID;
-(void)setSlotID:(long long)arg1 ;
-(NSString *)phoneCertificate;
-(void)setPhoneCertificate:(NSString *)arg1 ;
@end
