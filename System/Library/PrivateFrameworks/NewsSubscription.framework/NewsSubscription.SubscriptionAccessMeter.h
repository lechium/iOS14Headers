/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NPSubscriptionAccessMeterType.h>

@interface NewsSubscription.SubscriptionAccessMeter : _UKNOWN_SUPERCLASS_ <NPSubscriptionAccessMeterType> {

	 userInfo;
	 readingHistory;
	 purchaseProvider;
	 bundleSubscriptionManager;
	 offeredBundlePurchaseIDs;
	 aLaCarteSubscriptionMeteredCountMaxLimit;
	 bundleSubscriptionMeteredCountMaxLimit;

}
-(BOOL)canAccessArticleWithHeadline:(id)arg1 articleAccess:(long long)arg2 ;
-(void)incrementCountForHeadline:(id)arg1 ;
@end

