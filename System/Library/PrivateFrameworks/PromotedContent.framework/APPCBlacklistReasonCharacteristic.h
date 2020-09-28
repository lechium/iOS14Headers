/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APPCPromotableBlacklistReasonCharacteristic.h>

@class NSArray;

@interface APPCBlacklistReasonCharacteristic : NSObject <APPCPromotableBlacklistReasonCharacteristic> {

	 globalCategories;
	 globalKeywords;
	 campaignCategories;
	 campaignKeywords;

}

@property (copy,nonatomic) NSArray * globalCategories; 
@property (copy,nonatomic) NSArray * globalKeywords; 
@property (copy,nonatomic) NSArray * campaignCategories; 
@property (copy,nonatomic) NSArray * campaignKeywords; 
-(id)init;
-(NSArray *)globalCategories;
-(void)setGlobalCategories:(NSArray *)arg1 ;
-(NSArray *)globalKeywords;
-(void)setGlobalKeywords:(NSArray *)arg1 ;
-(NSArray *)campaignCategories;
-(void)setCampaignCategories:(NSArray *)arg1 ;
-(NSArray *)campaignKeywords;
-(void)setCampaignKeywords:(NSArray *)arg1 ;
-(id)initWithGlobalCategories:(id)arg1 globalKeywords:(id)arg2 campaignCategories:(id)arg3 campaignKeywords:(id)arg4 ;
@end
