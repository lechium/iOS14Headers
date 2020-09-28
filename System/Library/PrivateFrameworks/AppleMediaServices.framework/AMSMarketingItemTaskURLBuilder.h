/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface AMSMarketingItemTaskURLBuilder : NSObject <AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfileVersion;
+(id)bagSubProfile;
+(id)bagKeySet;
-(id)urlWithServiceType:(id)arg1 placement:(id)arg2 bag:(id)arg3 hydrateRelatedContents:(BOOL)arg4 additionalParameters:(id)arg5 ;
-(id)_realmOverridesFromBag:(id)arg1 ;
-(id)_realmFromBag:(id)arg1 ;
-(id)_formattedURLPathWithBag:(id)arg1 ;
-(id)_additionalQueryItems;
-(id)_stringForKey:(id)arg1 fromBag:(id)arg2 ;
-(id)_urlPathFromBag:(id)arg1 ;
-(id)_countryCodeFromBag:(id)arg1 ;
@end
