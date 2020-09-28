/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVTCoreModelPairing : NSObject {

	long long _pairedCategory;
	NSString* _localizedPairedTitle;
	NSString* _localizedPairTitle;
	NSString* _localizedUnpairTitle;
	NSString* _localizedPairedDescription;
	NSString* _localizedUnpairedDescription;

}

@property (nonatomic,readonly) long long pairedCategory;                                  //@synthesize pairedCategory=_pairedCategory - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedPairedTitle;                      //@synthesize localizedPairedTitle=_localizedPairedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedPairTitle;                        //@synthesize localizedPairTitle=_localizedPairTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedUnpairTitle;                      //@synthesize localizedUnpairTitle=_localizedUnpairTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedPairedDescription;                //@synthesize localizedPairedDescription=_localizedPairedDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedUnpairedDescription;              //@synthesize localizedUnpairedDescription=_localizedUnpairedDescription - In the implementation block
-(id)initWithPairedCategory:(long long)arg1 pairedTitle:(id)arg2 pairTitle:(id)arg3 unpairTitle:(id)arg4 pairedDescription:(id)arg5 unpairedDescription:(id)arg6 ;
-(NSString *)localizedPairTitle;
-(NSString *)localizedPairedDescription;
-(long long)pairedCategory;
-(NSString *)localizedUnpairTitle;
-(NSString *)localizedUnpairedDescription;
-(NSString *)localizedPairedTitle;
-(id)description;
@end
