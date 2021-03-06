/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKSpendingSummary, NSString;

@interface PKDashboardSpendingSummaryItem : NSObject <PKDashboardItem> {

	PKSpendingSummary* _spendingSummary;

}

@property (nonatomic,retain) PKSpendingSummary * spendingSummary;              //@synthesize spendingSummary=_spendingSummary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(PKSpendingSummary *)spendingSummary;
-(void)setSpendingSummary:(PKSpendingSummary *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

