/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentComponentContentRuleProvider.h>

@protocol FCNewsAppConfigurationManager, FCHeadlineProviding;
@class NSString;

@interface NUWebContentContentRuleProvider : NSObject <SXWebContentComponentContentRuleProvider> {

	id<FCNewsAppConfigurationManager> _appConfigurationManager;
	id<FCHeadlineProviding> _headline;

}

@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
@property (nonatomic,readonly) id<FCHeadlineProviding> headline;                                       //@synthesize headline=_headline - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(id<FCHeadlineProviding>)headline;
-(id)contentRules;
-(id)initWithAppConfigurationManager:(id)arg1 headline:(id)arg2 ;
@end

