/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NPPurchaseContext : NSObject {

	 conversionLocation;
	 sourceChannelID;
	 productID;
	 purchaseID;
	 purchaseType;
	 articleID;
	 issueID;
	 feedID;
	 sectionID;
	 parentFeedType;
	 groupID;
	 groupType;
	 qToken;
	 purchaseSessionID;
	 arrivedFromAd;
	 webAccessOptIn;
	 creativeID;
	 campaignID;
	 campaignType;

}

@property (copy,nonatomic) NSString * conversionLocation; 
@property (copy,nonatomic) NSString * sourceChannelID; 
@property (copy,nonatomic) NSString * productID; 
@property (copy,nonatomic) NSString * purchaseID; 
@property (assign,nonatomic) long long purchaseType; 
@property (copy,nonatomic) NSString * articleID; 
@property (copy,nonatomic) NSString * issueID; 
@property (copy,nonatomic) NSString * feedID; 
@property (copy,nonatomic) NSString * sectionID; 
@property (assign,nonatomic) long long parentFeedType; 
@property (copy,nonatomic) NSString * groupID; 
@property (assign,nonatomic) long long groupType; 
@property (copy,nonatomic) NSString * qToken; 
@property (copy,nonatomic) NSString * purchaseSessionID; 
@property (assign,nonatomic) BOOL arrivedFromAd; 
@property (assign,nonatomic) BOOL webAccessOptIn; 
@property (copy,nonatomic) NSString * creativeID; 
@property (copy,nonatomic) NSString * campaignID; 
@property (copy,nonatomic) NSString * campaignType; 
-(void)setCampaignType:(NSString *)arg1 ;
-(NSString *)productID;
-(void)setGroupID:(NSString *)arg1 ;
-(void)setFeedID:(NSString *)arg1 ;
-(void)setProductID:(NSString *)arg1 ;
-(NSString *)sourceChannelID;
-(void)setParentFeedType:(long long)arg1 ;
-(NSString *)campaignType;
-(void)setGroupType:(long long)arg1 ;
-(void)setSourceChannelID:(NSString *)arg1 ;
-(void)setArrivedFromAd:(BOOL)arg1 ;
-(NSString *)articleID;
-(BOOL)arrivedFromAd;
-(NSString *)groupID;
-(BOOL)webAccessOptIn;
-(NSString *)issueID;
-(NSString *)qToken;
-(void)setWebAccessOptIn:(BOOL)arg1 ;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(id)init;
-(long long)purchaseType;
-(void)setPurchaseID:(NSString *)arg1 ;
-(NSString *)purchaseID;
-(void)setIssueID:(NSString *)arg1 ;
-(void)setPurchaseType:(long long)arg1 ;
-(long long)parentFeedType;
-(NSString *)campaignID;
-(void)setArticleID:(NSString *)arg1 ;
-(NSString *)feedID;
-(long long)groupType;
-(NSString *)conversionLocation;
-(void)setConversionLocation:(NSString *)arg1 ;
-(void)setQToken:(NSString *)arg1 ;
-(NSString *)purchaseSessionID;
-(void)setPurchaseSessionID:(NSString *)arg1 ;
-(NSString *)creativeID;
-(void)setCreativeID:(NSString *)arg1 ;
-(void)setCampaignID:(NSString *)arg1 ;
-(id)initWithProductID:(id)arg1 purchaseID:(id)arg2 purchaseType:(long long)arg3 sourceChannelID:(id)arg4 purchaseSessionID:(id)arg5 conversionLocation:(id)arg6 articleID:(id)arg7 issueID:(id)arg8 feedID:(id)arg9 parentFeedType:(long long)arg10 sectionID:(id)arg11 groupID:(id)arg12 groupType:(long long)arg13 webAccessOptIn:(BOOL)arg14 arrivedFromAd:(BOOL)arg15 qToken:(id)arg16 creativeID:(id)arg17 campaignID:(id)arg18 campaignType:(id)arg19 ;
@end

